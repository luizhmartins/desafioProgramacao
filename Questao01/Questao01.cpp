# include <stdio.h>
# include <stdlib.h>

main(){
	
	int i=0, j=0, n=0;        // Vari�veis necess�rias para salvar o n�mero digitado, e fazer as duas estruturas for
	
	printf("n: ");            // printa na tela a letra n, para que o usu�rio digite o n�mero desejado ao lado
	scanf("%i",&n);           // salva o valor que o usu�rio digitou na variavel n
	
	for (i=1; i<=n; i++){     // La�o de repeti��o for come�ando por 1 at� que o i seja inferior ou igual ao valor de n
		for (j=n; j>=1; j--){ // La�o de repeti��o descrescente onde j inicia com o valor total de n e vai decrementando at� 1 onde acaba o la�o.
			if (j>i){         // Toda vez que passar pelo la��o de repeti��o, este comano ir� verificar se o valor de j � maior que i
				printf(" ");  // Enquanto o valor de j for maior que i ent�o ir� printar na tela um espa�o
			}else{
				printf("*");  // Quando o valor de n�o for mais meior que i ent�o ir� printar na tela o *
			}
		}
		printf("\n");         // A cada vez que sai do segundo for ocorre uma quebra de linha para que a sa�da de tela fique como uma escada de espa��es e asteriscos.
	}
	system("pause");
}
