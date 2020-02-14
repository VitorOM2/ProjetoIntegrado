#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");

	float porcento[5];	
	int voto, i, num, conf, aux, x, votosC[5], nulo = 0, total = 0;
	char auxC[200], candidatos[5][200] = {"Aldair Pereira: 11111", "Bruna Souza n�mero: 22222", "Carlos Teixeira n�mero: 33333", "D�bora Queiroz n�mero: 44444", "Voto em Branco n�mero: 55555"};
	
	for(i = 0; i <= 5; i++){
		votosC[i] = 0;
		porcento[i] = 0;
	}
		
	do{
		printf("\t\t Sistema de elei��es do CIPA \n\n");
		printf(" Lista dos candidatos: \n\n");
		
		puts("\n Candidato(a): Aldair Pereira \n N�mero de inscri��o: 11111 \n Apelido: AP \n Setor: Log�stica \n Idade: 45 \n Tempo de servi�o: 11 ano(s)");
		puts("\n Candidato(a): Bruna Souza \n N�mero de inscri��o: 22222 \n Apelido: BS \n Setor: RH \n Idade: 22 \n Tempo de servi�o: 02 ano(s)");
		puts("\n Candidato(a): Carlos Teixeira \n N�mero de inscri��o: 33333 \n Apelido: CT \n Setor: Log�stica \n Idade: 32 \n Tempo de servi�o: 08 ano(s)");
		puts("\n Candidato(a): D�bora Queiroz\n N�mero de inscri��o: 44444 \n Apelido: DQ \n Setor: Administra��o \n Idade: 35 \n Tempo de servi�o: 09 ano(s)");
		puts("\n Candidato(a): Voto em Branco \n N�mero de inscri��o: 55555 \n");
		
		puts("\n Para anular seu voto digite o N�mero: 00000 \n\n");
			
			printf("\nDigite o n�mero do candidato que voc� deseja votar: ");
				scanf("%d", &voto);
			
			switch(voto){
				case 00000:
					printf("\nSe voc� deseja anular seu voto digite \n[1]sim \n[2]n�o \n");
						scanf("%d", &conf);
						
						if(conf == 1){
							nulo ++;
						}
					break;
				case 11111:
					printf("\nAldair Pereira \n deseja confirmar seu voto \n[1]sim \n[2]n�o \n");
						scanf("%d", &conf);
						if(conf == 1){
							
							votosC[0] ++;
							total ++;
						}
					break;
				case 22222:
					printf("\nBruna Souza \n deseja confirmar seu voto \n[1]sim \n[2]n�o \n");
						scanf("%d", &conf);
						
						if(conf == 1){
							
							votosC[1] ++;
							total ++;
							
						}
					break;
				case 33333:
					printf("\nCarlos Teixeira \n deseja confirmar seu voto \n[1]sim \n[2]n�o \n");
						scanf("%d", &conf);
						if(conf == 1){
							
							votosC[2] ++;
							total ++;
							
						}
					break;
				case 44444:
					printf("\nD�bora Queiroz \n deseja confirmar seu voto \n[1]sim \n[2]n�o \n");
						scanf("%d", &conf);
						
						if(conf == 1){
							votosC[3] ++;
							total ++;
							
						}
					break;
				case 55555:
					printf("\nVoto em Branco \n deseja confirmar seu voto \n[1]sim \n[2]n�o \n");
						scanf("%d", &conf);
						
						if(conf == 1){
							
							votosC[4] ++;
							total ++;
							
						}
					break;
				default:
					printf("\nN�mero inv�lido \n\n");
					
					system("PAUSE");
					return 0;
					break;
			}
			
			system("CLS");
			
			printf("\nDeseja votar novamente \n [1] sim \n [2] n�o \n");
				scanf("%d", &num);
				
			system("CLS");
			
	}while(num == 1);
	
	for(x = 1; x < 5; x ++){
		for(i = 0; i < 5; i++){
			if(votosC[i] < votosC[x]){
				aux = votosC[i];
				votosC[i] = votosC[x];
				votosC[x] = aux;
				
				strncpy(auxC, candidatos[i], 200); 
				strncpy(candidatos[i], candidatos[x], 200);
				strncpy(candidatos[x], auxC, 200);
				
			}
		}
	}
	
	for(i = 0; i < 5; i++){
			porcento[i] = (votosC[i] * 100) / total;
	}

	printf("\n\n\t\t\t Sistema de elei��es do CIPA \n\n");
	
	printf("\nO total de votos foi %d \n\n", total);
	
	printf("O total de votos Nulos foi %d \n\n", nulo);

	for(i = 0; i < 5; i ++){
		printf("\nO %d� lugar foi %s com %.1f dos voto(s) \n", i + 1, candidatos[i], porcento[i]);
		printf("\tO total de votos do candidato foi %d \n", votosC[i]);
	}
	
	printf("\n\n");
	
	system("PAUSE");
	return 0;
}
