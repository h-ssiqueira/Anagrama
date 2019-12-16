#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Alcides Gomes Beato Neto - RA 19060987
// Henrique Sartori Siqueira - RA 19240472
// Palavras: criatividade e pensamento.
int main()
{
    char respostas[32][15]={"CRIATIVIDADE","AR","ATIVIDADE","VIDA","VAIDADE","CATIVIDADE","CAIR",
                            "VER","VIR","DIVIDIR", "ACREDITA", "ACEITAR", "CIDADE", "DIVIDA", "AVEIA",
                            "DATA","RETA", "VACA", "DIARIA","DEDICAR","DICA","DIETA","TIA","VICIAR",
                            "DAR","CRIA","DIA","IDEIA","DEITAR","DECIDIR","DIREITA","IDADE"},
    acertos[32][15]={0},
    tentativa[15]={0},
    caracteres[]={'A','I','R','E','D','A','D','C','I','T','V','I'}; // CRIATIVIDADE
    int i, j, x=0, t=0, y;
    while(x!=32){
        printf("\n\t________________________________________________");
        printf("\n\t|\t\t\t\t\t       |");
        printf("\n \t| LETRAS:  ");
        for(i=0;i<12;i++)
            printf("%c  ", caracteres[i]);
        printf("|\n\t|______________________________________________|");
        printf("\n\t ________________\t\t _________________");
        printf("\n\t |\t\t|\t\t |\t\t |");
        printf("\n\t |%2d/32 Acertos |\t\t |%3d Tentativas |", x, t);
        printf("\n\t |______________|\t\t |_______________|\n");
        for(i=0;i<x;i++)
            printf("\n\t\t\t\t%s", acertos[i]);
        printf("\n \n Insira seu palpite = ");
        scanf("%s", tentativa);
        t++;
        strupr(tentativa);
for(i=0;i<32;i++){
	if(strcmp(tentativa,respostas[i])==0){
		for(j=0, y=0;j<32;j++){
			if(strcmp(tentativa,acertos[j])==0){
				y++;
				break;
			}//if
		}//for
		if(y==0){
			strcpy(acertos[x],tentativa);
			x++;
		}//if
	}//if
}//for
    system("cls");
}//while
    // Segundo anagrama:
    i=0;
    printf("\n Anagrama completo com %3d tentativas. Parab%cns! \n Insira 0 para sair. \n"
            " Insira 1 para jogar outro anagrama. \n -> ", t, 130);
    scanf("%d", &i);
    system("cls");
    switch(i){
    case 0: break;
    case 1:t=0;x=0;
    char caracteres[]={'E','S','M','N','P','O','N','A','E','T'}, //PENSAMENTO
    acertos[32][15]={0},
    respostas[32][15]={"PENSAMENTO","TEMPO","APOSENTE","SOMENTE","APOSTE","ESPANTO","ANOTE","EMENTA","PESO","PENTE",
                        "POTE","PATO","MANO","EMPATE","PONTE","MONTE","POSTE","ONTEM","PENA","NOME","NETA","POETA",
                        "MATO","AMO","SOM","MAS","ANO","PANO","MENTE","PONTA","NEM","NETO"};
        do{
        printf("\n\t____________________________________________");
        printf("\n\t|\t\t\t\t\t   |");
        printf("\n \t| LETRAS:  ");
        for(i=0;i<10;i++)
            printf("%c  ", caracteres[i]);
        printf("  |\n\t|__________________________________________|");
        printf("\n\t ________________\t\t _________________");
        printf("\n\t |\t\t|\t\t |\t\t |");
        printf("\n\t |%2d/32 Acertos |\t\t |%3d Tentativas |", x, t);
        printf("\n\t |______________|\t\t |_______________|\n");
        for(i=0;i<x;i++)
            printf("\n\t\t\t\t%s", acertos[i]);
        printf("\n \n Insira seu palpite = ");
        scanf("%s", tentativa);
        t++;
        strupr(tentativa);
for(i=0;i<32;i++){
	if(strcmp(tentativa,respostas[i])==0){
		for(j=0, y=0;j<32;j++){
			if(strcmp(tentativa,acertos[j])==0){
				y++;
				break;
			}//if
		}//for
		if(y==0){
			strcpy(acertos[x],tentativa);
			x++;
		}//if
	}//if
}//for
    system("cls");
    }while(x!=32);
    printf("\n Anagrama completo com %3d tentativas. Parab%cns! \n", t, 130);
        break;
    }//switch
system("pause");
    return 0;
}//main
// Alcides Gomes Beato Neto - RA 19060987
// Henrique Sartori Siqueira - RA 19240472
