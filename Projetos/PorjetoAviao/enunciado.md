### Projeto Aião

#### Instruções
Você foi designado para desenvolver um sistema de controle de decolagem para um aeroporto. O sistema precisa determinar se um avião pode decolar com segurança, considerando várias condições para quatro fatores principais: peso do avião, comprimento da pista, velocidade do vento e altitude do aeroporto.

Considere os seguintes valores fixos para os fatores envolvidos:

  + Peso do Avião: Peso máximo permitido para decolagem: 150.000 kg
  + Comprimento da Pista: Comprimento mínimo necessário para decolagem: 1500 m
  + Velocidade do Vento: Velocidade máxima permitida para decolagem: 30 km/h<br>

O avião só pode decolar se atender a todas as seguintes condições:

#### Peso do Avião:
Se o peso do avião for menor ou igual a 100.000 kg:

+ Se o comprimento da pista for maior ou igual a 1500 m, o avião pode decolar.<br>
Caso contrário, o avião não pode decolar devido ao comprimento insuficiente da pista.<br>

+ Se o peso do avião for maior que 100.000 kg:<br>
Se o comprimento da pista for maior ou igual a 2000 m, o avião pode decolar.<br>
Caso contrário, o avião não pode decolar devido ao comprimento insuficiente da pista.

#### Velocidade do Vento:
+ Se a velocidade do vento for menor ou igual a 30 km/h, o avião pode decolar.<br>
Caso contrário, o avião não pode decolar devido à alta velocidade do vento.

#### Altitude do Aeroporto:
+ Se a altitude do aeroporto for menor ou igual a 1000 m, o avião pode decolar para um tamanho de pista mínimo de 1500m. <br>
Caso contrário, é necessário acrescentar a cada metro de altitude excedente, um metro de pista ao tamanho mínimo da pista.

Desenvolva um programa em C que:

+ Receba como entrada:
  + O peso do avião;
  + O comprimento da pista;
  + O velocidade do vento;
  + A altitude do aeroporto.

+ Verifique todas as condições acima usando múltiplos blocos if e else aninhados para determinar se o avião pode decolar com segurança.

+ Exiba uma mensagem indicando se o avião pode ou não decolar, juntamente com uma explicação das condições que foram atendidas ou não atendidas.


>Considere que todas as entradas fornecidas serão válidas (ou seja, números reais dentro dos limites especificados).

# [Voltar](../../README.md)