# Exercicio2
#include <stdio.h>
#include <stdlib.h>
  int main() {    
  char nome[50];
  char sexo;   
  int idade;   
  printf("Informe o nome: ");   
  scanf("%s", &nome);    
  printf("Escreva seu sexo F ou M");    
  scanf("%c", &sexo);  
  printf("Informe a idade: ");    
  scanf("%d", &idade);    
  if(sexo == 'F'){        
    printf("É mulher!");    } 
  else {        
printf("É homem");   }    
system ("pause");    
return 0;
}
