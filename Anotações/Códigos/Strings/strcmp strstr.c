#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
//e
#define MAXIMO 1000

struct Email{
	char endereco[70];
};

int validade(char endereco[], struct Email emails[], int nemails){
	if(strlen(endereco) < 70){
		for(int i = 0; i < nemails; i++){
			if (strcmp(endereco, emails[i].endereco) == 0){
				return 0 ;
			}
		}
		if (strstr(endereco, "@") != NULL && (strstr(endereco, "hotmail") || strstr(endereco, "gmail")) && strstr(endereco, ".com")) {
            return 1; // E-mail v�lido
        }
	}
	else {
		return 0;
	}
}
int main()
{
  setlocale(LC_ALL, "Portuguese");
  
  char login[50], senha[50], usuario[50], pass[50];
   
 printf("-------------------------------------------------------------\n");
    printf("----------------  CADASTRAMENTO  -----------------\n");
    printf("-------------------------------------------------\n");
    printf("-------INFORME SEUS DADOS PARA PROSSEGUIR -------\n"); 
    printf("Cadastre um nome para o usu�rio: ", login);
    scanf("%s", login);
    printf("Cadastre uma senha para o usuario %s: ", login);
    scanf("%s", senha);
    printf("\n%s, Voc� foi cadastrado no sistema!\n\n", login);
 printf("--------------------------------------------------------------\n");
 printf("------------------------- FA�A SEU LOGIN ----------------------\n");
 printf("Informe seu usu�rio: ");
 scanf("%s", usuario);
 printf("informe sua senha: ");
 scanf("%s", pass);
 printf("-----------------------------------------------------------------\n");
 printf("Verificando usu�rio e senha....\n");
 while (strcmp(usuario, login) != 0 || strcmp(pass, senha) != 0){
 printf("Usuario ou senha incorretos, informe as informa��es novamente\n\n");
 printf("Informe o usu�rio: ");
 scanf("%s", usuario);
 printf("Informe a senha: ");
 scanf("%s", pass);
 }
 printf("LOGIN FOI CONCLUIDO\n");
 printf("--------------------PARA FINALIZAR O CADASTRO-----------------------\n");
 printf("----------INFORME UM ENDERE�O DE E-MAIL V�LIDO----------------------\n");

struct Email emails[MAXIMO];
int nemails = 0;
char endereco[70];
    char resp;
printf("--------------------- CADASTRO DE E-MAILS ---------------------------\n");
do {
        printf("informe o seu email ou cadastre um novo EMAIL para %s: ", login );
        scanf("%s", endereco);

        while (!validade(endereco, emails, nemails)) {
            printf("E-mail inv�lido ou j� cadastrado. Por favor, insira um e-mail v�lido: ");
            scanf("%s", endereco);
        }
        
        strcpy(emails[nemails].endereco, endereco);
        nemails++;
        printf("===== E-MAIL CADASTRADO COM SUCESSO !!!! ====\n");
         printf("Deseja adicionar outro e-mail? SIM(S)OU N�O(N): ");
        scanf(" %c", &resp);
}while ((resp == 'S' || resp == 's' ) && nemails < MAXIMO);
if (nemails == MAXIMO) {
        printf("Limite m�ximo de e-mails cadastrados atingido.\n");
    } else {
        printf("Cadastro de e-mails encerrado.\n");
    }
    
    
    
    
    printf("================================== LOGIN FOI CONCLU�DO ====================================\n");
    printf("-------------------------------------------------------------------------------------------\n");
    printf("-----------------  BEM-VINDO %s AO MULTI-SUPERMERCADO VIRTUAL  ---------------------\n", login);
    printf("------- NOSSO SUPERMERCADO � UM PROJETO PARA AJUDAR A HUMANIDADE E PRINCIPALMENTE ---------\n");
    printf("---PARA AQUELAS PESSOAS QUE N�O PODEM SE LOCOMOVER, POR MOTIVOS PESSOAIS OU LOCACIONAIS.---\n");
    printf("----- VOC� VAI ENCONTRAR MUITOS PRODUTOS NESSE SITE, POIS NOSSA EMPRESA TEM PARCERIAS------\n");
    printf("----- COM OUTRAS INSTITUI��ES RELACIONADAS AO TRANSPORTE DE TODOS OS NOSSOS PRODUTOS ------\n");
    printf("---- CONFIABILIDADE, PROTE��O E SEGURAN�A, S�O AS PRINCIPAIS PALAVRAS CHAVE QUE DEFINEM----\n");
    printf("NOSSO SUPERMERCADO VIRTUAL, ESTAMOS FELIZES EM RECEB�-LO(A) AQUI, EXPLORE NOSSOS CORREDORES\n");
    printf("--------------- REPLETOS DE PRODUTOS DE ALTA QUALIDADE, TENHA UM BOM DIA.------------------\n");


    return 0;
    
 }