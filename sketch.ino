#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define rele 4
#define ldrpin A0
#define slideSwitch 6
int ldrValor = 0;
int switchValor = 0;

void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(ldrpin, INPUT);
  pinMode(rele, OUTPUT);
  pinMode(slideSwitch, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  ldrValor = analogRead(ldrpin);
  switchValor = digitalRead(slideSwitch);

  if (switchValor == 1) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("----SISTEMA----");
    lcd.setCursor(0, 1);
    lcd.print("-----LIGADO----");

    float voltage = ldrValor / 1024.0 * 5;
    float resistance = 2000 * voltage / (1 - voltage / 5);
    float lux = pow(50 * 1e3 * pow(10, 0.7) / resistance, (1 / 0.7));

    Serial.println(lux);

    if (lux >= 50) {
      digitalWrite(rele, LOW);
    } else {
      digitalWrite(rele, HIGH);
    }
  } else {
    digitalWrite(rele, LOW);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("----SISTEMA----");
    lcd.setCursor(0, 1);
    lcd.print("---DESLIGADO---");
  }

  delay(3000);
}
