# include <stdio.h>
# include <stdlib.h>
# include <string.h>


main(){
	
	char palavra [20] = {};
	char substring [20] = {};
	char substring2 [20] = {};
	char substring3 [20] = {};
	int i=0, j=0, k=0, l=0, m=0, max=0, tamPalavra=0,tamString=0;
	
	
	printf("digite uma palavra: ");
	gets(palavra);
	tamPalavra = strlen(palavra);
	strcpy(substring,palavra);
	
	//Teste se a palavra digitada foi copiada para a variavel substring
	//printf("\nPalavra digitada: %s", palavra);
	//printf("\nPalavra copiada: %s", substring);
	
	for (i=0; i<=tamPalavra; i++){
		for (j=i+1; j<=tamPalavra; j++){
			if (substring[i]==palavra[j]){
				printf("\nAnagrama [%c , %c]",substring[i],palavra[j]);
				printf("\nPosicao [%d , %d]",i,j);	
			}
		}
	}
	for (i=1; i<=tamPalavra; i++){
		for (j=0; j<=i; j++){
			substring2[j] = palavra[j];
		}
		//printf("\nSubstring 2: %s",substring2);
		//	printf("\npalavra: %s",palavra);
		
		max = tamPalavra/i;
		for (m=1; m<max-1; m++){
			for (k=0; k<=i; k++){
			substring3[k] = palavra[m+k];
			}
			if (!strcmp(substring2,substring3)){
			printf("\nAnagrama: [%s,%s]",substring2, substring3);
			}
		}
	}

}

