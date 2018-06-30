#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
//Aluno: Willian Molina Ibanez;
//RA: 120175;

int main()
{
    char palavra[MAX],i,x = 0,iS,iSu = 0,j=0,jS=0,contEnt = 0,contChPref = 0,contChSuf = 0,contChSub = 0, contP = 0, contS = 0,contSub = 0, chavePref[MAX], chaveSuf[MAX],chaveSub[MAX];
    char palavrarevEnt[MAX];
    char palavrarevSuf[MAX];


//------------------------------------------------------------------------------------------------
//Parte destinada para a inserção da Entrada, Prefixo, Sufixo e Subpalavra desejada pelo usuario.
    printf("Entrada: ");
    scanf("%s",palavra);
    fflush(stdin);

    printf("Prefixo: ");
    scanf("%s",chavePref);
    fflush(stdin);

    printf("Sufixo: ");
    scanf("%s",chaveSuf);
    fflush(stdin);

    printf("Subpalavra: ");
    scanf("%s",chaveSub);
    fflush(stdin);
//------------------------------------------------------------------------------------------------
//Parte destinada para identificar o tamanho de cada String(Entrada, Prefixo, Sufixo e Subpalavra)
//antes Digitada;
    for(i = 0; palavra[i] != '\0'; i++){
        contEnt++;
    }

    for(i = 0; chavePref[i] != '\0'; i++){
        contChPref++;
    }

    for(i = 0; chaveSuf[i] != '\0';i++){
        contChSuf++;
    }

    for(i = 0; chaveSub[i] != '\0'; i++){
        contChSub++;
    }
//------------------------------------------------------------------------------------------------
/*
Parte destinada em fazer a comparacao dos caracteres de cada palavra pela chave
proposta pelo usuario. Onde a cada caractere igual, será feita uma incrementação no
contador.
*/
//Em expecífico, para identificação do Prefixo;
    for(i = 0; i <= contChPref; i++){
        if(chavePref[i] == palavra[i]){
                contP++;
        }
}
//Parte, em expecifica, que inverterá as Strings para a analise do Sufixo digitado;
for(i = contEnt-1; i>=0; i--){
   palavrarevEnt[j] = palavra[i];
   j++;
}
palavrarevEnt[j] = '\0';


for(iS = contChSuf-1; iS>=0; iS--){
   palavrarevSuf[jS] = chaveSuf[iS];
   jS++;
}
palavrarevSuf[jS] = '\0';


for(i = 0; i <= contChSuf; i++){
        if(palavrarevSuf[i] == palavrarevEnt[i]){
                contS++;
        }
}
//---------------------------------------------------------------------------------------------------
//Parte em expecifico, que identificara a Subpalavra;
for(i = 0; i < contEnt; i++){
        if(palavra[i] == chaveSub[0]){
            iSu = i;
            x = 0;
            for(j = 0; j < contChSub; j++){
                if(chaveSub[j] == palavra[iSu]){
                    x++;
                }
                iSu++;
            }
            if (x>=contChSub){
				contSub++;
        }
    }
}

//--------------------------------------------------------------------------------------------------
//Momento em que sera feita a comparação entre o contador (utilizado para a identificar
// caracteres iguais entre as Strings) e o tamanho da palavra ja antes visto;
    if(contP == contChPref){
        printf("A entrada possui o prefixo Digitado.\n\n");
    }
    else{
        printf("A entrada nao possui o prefixo Digitado.\n\n");
    }


    if(contS == contChSuf){
        printf("A entrada possui o sufixo Digitado.\n\n");
    }
    else{
        printf("A entrada nao possui o sufixo Digitado.\n\n");
    }


    if(contSub >= 1){
        printf("A Entrada possui a Subpalavra Digitada.\n\n");
    }
    else{
        printf("A Entrada nao possui a Subpalavra Digitada.\n\n");
    }

}
