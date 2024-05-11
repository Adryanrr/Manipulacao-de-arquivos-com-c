#include <stdio.h>
#include <stdlib.h>
  FILE *arquivo; 
char nome[40], DataNac[10], str[80], nomearquivo[50], linha[250];
int i;
void LerArquivo(){
    sprintf(str, "C;//temp//s", nomearquivo);
    arquivo = fopen(str, "r");
  while (fgets(linha, sizeof(linha), arquivo) != NULL){
        printf("%s", linha);
  }
  fclose(arquivo);
}

int main(){
  printf("Informe o nome do arquivo: EX. Aluno.txt \n");
  scanf("%s", nomearquivo);
  sprintf(str, "C://temp//%s", nomearquivo);
  arquivo = fopen(str, "w+");
  if (arquivo=0)
    printf("Erro na leitura do arquivo \n");
  else
    printf("Arquivo criado com sucesso \n");
for(i=0;i<5;i++){
  printf("Aluno NUM:%d \n");
  printf("Informe seu nome \n");
  scanf("%s", &nome);
  printf("Informe sua data de nascimento Ex. 16/06/2000 \n");
  scanf("%s", &DataNac);
    fprintf(arquivo, "Aluno NUM:%d", i);
    fprintf(arquivo, "+===================================+ \n");
    fprintf(arquivo, "| RELAÇÃO DE ALUNO POR DATA DE NASC | \n");
    fprintf(arquivo, "+===================================+ \n");
    fprintf(arquivo, "|Nome    :%s\n", nome);
    fprintf(arquivo, "|DataNasc:%s\n", DataNac);
    fprintf(arquivo, "+===================================+ \n");
}   
  fclose(arquivo);
    LerArquivo();
    system("pause");
}