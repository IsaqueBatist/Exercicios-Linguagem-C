## Projeto Estacionamento
Um estacionamento possui 100 vagas que são organizadas na forma de 10 linhas e 10 colunas.
Faça uma aplicação que faça o controle do estacionamento.

O estacionamento possui preço fixo, independente do tempo que o carro ficar estacionado, no valor de R$ 15,00.

No início do dia todas as vagas estão livres.

Os requisitos do sistema são:

### Requisito 1: Entrada do carro.
Um carro ao entrar no estacionamento deve ser estacionado em uma vaga livre.
O sistema deve indicar a vaga para o motorista, que informa a vaga no formato Letra e Número. 
O motorista deverá estacionar o carro, obrigatoriamente na vaga indicada pelo sistema.

Por exemplo.
+ Vaga: A1 (primeira linha e primeira coluna da matriz).
+ Vaga: B5 (segunda linha e quinta coluna da matriz).
+ Vaga: J10 (décima linha e décima coluna da matriz).

Caso não tenha vagas livres, o sistema deve apresentar essa informação para o motorista.

### Requisito 2: Saída do carro.
Ao sair com o carro, o motorista deverá informar a vaga no formato Letra e Número para liberar a --vaga para o próximo carro.
Deve ser também adicionado R$ 15,00 ao total arredado no dia.

### Requisito 3: Mostrar o total de vagas disponíveis e quais são as vagas disponíveis.
O sistema deverá mostrar o total de vagas disponíveis, bem como listar as vagas disponíveis no formato Letra e Número.

### Requisito 4: Mostrar o total arrecadado até o momento.
O sistema deverá mostrar o total arrecadado até o momento.

### Requisito 5:  Começar um novo dia.
O sistema deverá liberar todas as vagas, bem como reiniciar o total arrecadado.

### Requisito 6:  Finalizar o sistema
O sistema deverá ser finalizado, mostrando:
Total arrecadado.
Quantidade de carros estacionados durante o período.
Quantidade máxima de carros estacionados ao mesmo tempo.
