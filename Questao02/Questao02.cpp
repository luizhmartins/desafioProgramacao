#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#define TAM_MAX 20

main (){ // Inicio do programa
	
	int result=0, result2=0, cont1=0, cont2=0, cont3=0, cont4=0, i=0, j=0, tamSenha=0, tamEspecialChars=0; // Vari�veis de controle
	char senha[TAM_MAX]; // Vari�vel senha do tipo vetor de char com tamanho m�ximo de 20 caracteres.
	char especialChars[] = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '+'}; // Vari�vel especialChars recebendo 12 atribui��es de carcteres especiais
	
	
	printf("Senha: ");                        // Uma tela mostrando a mensagem senha para o usu�rio digitar
	gets(senha);                              // Guardando a senha que o usu�rio digitou dentro da vari�vel senha
	tamSenha = strlen(senha);                 // A vari�vel tamSenha recebe o tamanho total da string senha
	tamEspecialChars = strlen(especialChars); // V�riavel tamEspecialChars recebe o tamanho total da String especialChars

	for(i=0; i<tamSenha; i++){                // Uma estrutura for de repeti��o que vai de i=0 at� o tamanho total de caracteres de tamSenha
		for(j=0; j<tamEspecialChars; j++){    // Uma estrutura for de repeti��o que vai de j=0 at� o tamanho total de caracteres de tamEspecialChars
			if(senha[i] == especialChars[j]){ // Compara��o se o caracter de senha[i] � igual ao caracter de especialChars[i]
				cont1++;                      // Se a compara��o for verdadeira, cont1 recebe 1
			}
			if (isdigit(senha[i])){           // Se o caracter de senha[i] for um digito, cont2 incrementa 1
				cont2++;
			}
			if (islower(senha[i])){           // Se o caracter de senha[i] for minusculo, cont3 incrementa 1
				cont3++;
			}
			if (isupper(senha[i])){           // Se o caracter de senha[i] for um maiusculo, cont4 incrementa 1
				cont4++;
			}
		}
	}
	if (cont1 > 0) result++;                  // Se a vari�vel cont1 for maior que 0, result incrementa 1.
	if (cont2 > 0) result++;                  // Se a vari�vel cont2 for maior que 0, result incrementa 1.
	if (cont3 > 0) result++;                  // Se a vari�vel cont3 for maior que 0, result incrementa 1.
	if (cont4 > 0) result++;                  // Se a vari�vel cont4 for maior que 0, result incrementa 1.
	
	//TESTE DE SA�DAS E VALIDA��ES (Para realizar o teste, remova os comentarios das linhas a seguir)
	//if (cont1<1)printf("\nFalta 1 caracter especial");
	//if (cont2<1)printf("\nFalta 1 digito");
	//if (cont3<1)printf("\nFalta 1 letra minuscula");
	//if (cont4<1)printf("\nFalta 1 letra maiuscula");
	//if (tamSenha<6) printf("\nFaltam %d caracteres no total para ter no minimo 6 caracteres", 6-tamSenha);
	//printf("\n");
	
	if (tamSenha>=6){                         // se o tamanho da senha for maior que 6 caracteres, significa que o algoritmo vai mostrar pro usu�rio apenas requisitos de digito, caracter especial, letra maiuscula e minuscula que fatam pro usu�rio digitar
		printf("\n%d\n\n", 4-result);             // Mostra o resultado do algoritmo na tela
	}else{                                    // Se o tamanho da senha for menor que 6, significa que alem de mostrar os caracteres de requisitos faltantes na senha, ainda deve mostrar quantos caracteres ainda faltam para conter pelo menos 6 carateres na senha
		result2 = (6-tamSenha) - (4-result);  // Processamento de dados
		printf("\n%d\n\n", (4-result) + result2); // Mostra na tela o resultado de n�mero de caracteres faltantes para deixar a senha forte
		}
	system("pause");
}
