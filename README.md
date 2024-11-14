# Sistema de Iluminação Automática

## Detalhes

Este projeto implementa um sistema de iluminação automática usando uma placa Arduino. A iluminação é ativada automaticamente quando a luz ambiente cai abaixo de um nível pré-determinado e desativada automaticamente quando há luz ambiente suficiente. O sistema permite ainda que o modo automático seja ligado ou desligado manualmente por meio de um botão.

## Url do Projeto
- [Wokwi](https://wokwi.com/projects/414398223169026049)
- [Vídeo Explicativo]()

## Componentes Utilizados

- Arduino Uno – Microcontrolador para controle do sistema.
- Fotoresistor (LDR) – Sensor para medir a intensidade da luz ambiente.
- Relé – Componente para ativar e desativar o circuito de iluminação.
- Botão – Permite ao usuário ativar/desativar o modo automático de iluminação.
- LCD 16x2 – Exibe o status do sistema (ligado/desligado).
- LED (ou lâmpada) – Representa a iluminação que será controlada.
- Resistor – Para o funcionamento adequado do LED.

## Funcionamento

- Detecção de Luminosidade: O sensor de luz (fotoresistor) detecta a intensidade da luz ambiente.
- Ativação do Relé: Quando o nível de luz fica abaixo do valor definido, o Arduino ativa o relé para acender a luz.
- Desativação do Relé: Quando o nível de luz ambiente atinge o valor necessário, o relé é desativado automaticamente para economizar energia.
- Exibição no LCD: O LCD exibe mensagens indicando o status do sistema, como "Sistema Ligado" ou "Sistema Desligado", dependendo do modo em que o sistema está operando.
- Modo Manual: Um botão permite ao usuário desativar a função automática, desligando o sensor até que o botão seja acionado novamente.

## Instruções de Uso

- Configuração Inicial: Certifique-se de que todos os componentes estão conectados conforme o diagrama.
- Alimentação: Conecte o Arduino a uma fonte de energia ou à porta USB do computador.
- Funcionamento Automático: O sistema acionará a luz automaticamente quando a luminosidade estiver abaixo do nível definido e desativará a luz se a iluminação ambiente for suficiente.
- Modo Manual: Pressione o botão para alternar entre o modo automático e manual. O LCD indicará se o sistema está "Ligado" ou "Desligado".

## Requisitos e Dependências

- Arduino IDE – Necessária para programação e upload do código.
- Biblioteca LiquidCrystal – Necessária para controlar o display LCD.

## Testes e Ajustes

- Teste de Luminosidade: Modifique o valor lux para ajustar a sensibilidade do sensor (fotoresistor).
- Teste do Botão: Pressione o botão para verificar se o modo automático é ativado e desativado corretamente e se o LCD exibe o status.
- Verificação do LCD: Certifique-se de que o LCD exibe "SISTEMA LIGADO" ou "SISTEMA DESLIGADO" conforme o estado atual.
- Verificação do LED: Verifique se o LED está acendendo e apagando corretamente.
