# include <stdio.h>
# include <stdlib.h>

main(){
	
	int i=0, j=0, n=0;        // Variáveis necessárias para salvar o número digitado, e fazer as duas estruturas for
	
	printf("n: ");            // printa na tela a letra n, para que o usuário digite o número desejado ao lado
	scanf("%i",&n);           // salva o valor que o usu´rio digitou na variavel n
	
	for (i=1; i<=n; i++){     // Laço de repetição for começando por 1 até que o i seja inferior ou igual ao valor de n
		for (j=n; j>=1; j--){ // Laço de repetição descrescente onde j inicia com o valor total de n e vai decrementando até 1 onde acaba o laço.
			if (j>i){         // Toda vez que passar pelo lação de repetição, este comano irá verificar se o valor de j é maior que i
				printf(" ");  // Enquanto o valor de j for maior que i então irá printar na tela um espaço
			}else{
				printf("*");  // Quando o valor de não for mais meior que i então irá printar na tela o *
			}
		}
		printf("\n");         // A cada vez que sai do segundo for ocorre uma quebra de linha para que a saída de tela fique como uma escada de espações e asteriscos.
	}
	system("pause");
}
