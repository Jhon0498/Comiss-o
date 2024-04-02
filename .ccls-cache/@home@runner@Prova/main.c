

#include <stdio.h>

#include <stdio.h>

int main (void){
  int anoNascimento, anoIngresso, idade, tempoTrabalho;

  printf("Ano de nascimento: ");
  scanf("%d", &anoNascimento); 

  printf("Ano de ingresso: ");
  scanf("%d", &anoIngresso);

  printf("Idade = \n");
  scanf("%d", &idade);

  printf("Tempo de trabalho = ");
  scanf("%d", &tempoTrabalho);

    idade = 2021 - anoNascimento;
  tempoTrabalho = 2021 - anoIngresso;
  if (idade >= 65 || tempoTrabalho >= 30 || (idade >= 60 && tempoTrabalho >= 25)){
  printf("Requerer aposentadoria");
}
  else {
  printf("Nao requerer");
}
}