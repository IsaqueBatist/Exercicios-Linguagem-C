### Grupo VIII - Passagem de parâmetros e estruturas
  1. Fazer uma função que retorna a soma, a diferença e o produto entre dois
  números.

  2. Fazer uma função em "C" que retorna a razão entre dois números. A função
  deve retornar pelo comando return o valor 1 se a operação foi possível e o
  valor 0 se a operação não foi possível (divisão por zero, por exemplo). O
  resultado da divisão deve retonar por um parâmetro por referência.

  3. Fazer uma rotina em "C" que recebe um vetor de números inteiros como
  parâmetro onde todos os valores exceto o último são positivos e devolve:

      + a média dos valores do vetor;
      + o menor valor do vetor (sem considerar o último)
      + o maior valor do vetor

  4. Fazer uma função para ler e retornar o valor das 3 notas de um aluno.
 
  5. Construir um programa em "C" que implementa uma agenda eletrônica. O   programa deve ter um menu com as seguintes opções:

      + Entrar um novo nome na agenda.
      + Imprimir na tela os dados de uma das pessoas cadastradas (conforme solicitação).
      + Imprimir a lista de nomes cadastrados que comecem pela letra indicada.
      + Fim

      Cada entrada da agenda deve ter os seguintes campos:
    
      + char nome[30];
      + char endereco[100];
      + char fone[10];
      + long int CEP;

      Obs: a agenda deve ter capacidade para 100 entradas.

  6. Fazer um programa em "C" que lê uma lista de 20 produtos e e precós e
  armazêna-os em um array do tipo da estrutura abaixo. O programa deve, em
  seguida, ordenar o vetor em ordem alfabética de nome de produto e inflacionar os produtos cujo valor for menor que 100 em 5%. Por fim a lista de produtos/preços deve ser impressa.

      OBS: usar uma rotina que recebe uma estrutura do tipo PROD com parâmetro
  e atualiza o preço, uma que lê os dados para a estrutura do tipo PROD e outra  capaz de imprimir a estrutura.
    
    typedef struct
      {
      char nome[80];
      float preco;
      } PROD;
      
  7. Construir um programa em "C" que implementa uma agenda eletrônica. O
  programa deve ter um menu com as seguintes opções:
    
      + 1- Entrar um nome na agenda
      + 2- Imprimir na tela os dados de uma das pessoas cadastradas (consulta por nome)
      + 3- Imprimir na impressora a lista dos nomes que começam pela letra indicada