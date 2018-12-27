#include <stdio.h>
#include <stdlib.h>

/*Implementa��es necessarias: Sistema de gera��o das fragatas(submarino est� com placeholder)
							  Submarinos podem ser colocados na mesma posi��o e apenas 2 submarinos est�o pass�veis de posicionamento
							  Caso seja digitado um char na escolha de qual embarca��o posicionar, o codigo entra em loop eterno
							  Op��o para limpar o Campo de Batalha (de preferencia dentro da op��o 1 do menu principal)
							  Terminar o resto no Menu Principal*/

int main(int argc, char *argv[]) {
	int desliga, cont, opcaoMenu, opcaoEmbarcacao, menuCriar, submarinoCont, fragataCont, q, x, y, checkpoint;											//Vari�veis usadas por todo o c�digo.
	char campoChar[10][10], linhaChar;
	
	cont = 0;																														//Valores inciais da vari�vel de contador e da vari�vel 
	desliga = 0;																													//que mant�m o jogo ativo.
	submarinoCont = 0;
	fragataCont = 0;
	
	for (x = 0; x < 10; x++){																										//Gera o campo do jogo com todos os espa�os vazios (aparecendo um
		for (y = 0; y < 10; y++){																									//'+' nos espa�os em branco.
			campoChar[x][y] = '+';
		}
	}
	
	do{
		printf("\n\n\n************************** BATALHA NAVAL **************************");											//Mostra o menu para os jogadores e pede a escolha de uma das op��es.
		printf("\n\n\n"
		       "\n   1 - Criar campo de batalha"
		       "\n   2 - Jogar"
			   "\n   3 - Ver pontuacao"
			   "\n   4 - Sair"
			   "\n\n"
			   "   Ecolha uma das opcoes acima: ");
		scanf("%d", &opcaoMenu);
		
		switch (opcaoMenu){																											//Faz a verifica��o da escolha atrav�s da estrutura switch case.
			case 1 :
				printf("\n\n\n\n\n\n\n\n\n\n"																						//Caso a escolha seja a op��o 1: D� uma breve explica��o a respeito
					   "************************** BATALHA NAVAL **************************\n\n"
					   "     Aqui, voce ira criar o campo de batalha para que\n"													//do jogo e dos tipos de embarca��o.
					   "         seu oponente tente acertar os disparos!\n"
					   "         (O campo original sera 10x10)\n\n"
					   "     As embarcacoes disponiveis para colocar em jogo sao:\n\n"
					   "    1 - Submarino (Ocupa 1 unico espaco no campo. Ate 3 embarcacoes.)\n\n"
					   "        1  2  3  4  5\n\n"
					   "     A  +  +  +  +  + \n\n"
					   "     B  +  O  +  +  + \n\n"
					   "     C  +  +  +  +  + \n\n"
					   "     D  +  +  +  O  + \n\n"
					   "     E  +  O  +  +  + \n\n"
					   "   2 - Fragata (Ocupa 2 espacos no campo. Ate 2 embarcacoes.)\n\n"
					   "        1  2  3  4  5 \n\n"
					   "     A  +  +  O  O  + \n\n"
					   "     B  +  +  +  +  + \n\n"
					   "     C  +  O  +  +  + \n\n"
					   "     D  +  O  +  +  + \n\n"
					   "     E  +  +  +  +  + \n\n"
					   "   3 - Destroier (Ocupa 3 espacos no campo. Ate 1 embarcacao.)\n\n"
					   "        1  2  3  4  5 \n\n"
					   "     A  +  O  +  +  + \n\n"
					   "     B  +  O  +  +  + \n\n"
					   "     C  +  O  +  +  + \n\n"
					   "     D  +  +  +  +  + \n\n"
					   "     E  +  +  O  O  O \n\n"
					   "   4 - Porta-Avioes (Ocupa 5 espacos no campo em uma formacao de 'T'.\n"
					   "       Ate 1 embarcacao.)\n\n"
					   "        1  2  3  4  5 \n\n"
					   "     A  O  O  O  +  + \n\n"
					   "     B  +  O  +  +  + \n\n"
					   "     C  +  O  +  +  O \n\n"
					   "     D  +  +  O  O  O \n\n"
					   "     E  +  +  +  +  O \n\n"
					   "Insira '0' para continuar: ");
				scanf("%d", &checkpoint);															
			
				do {																												//Inicia um loop para que o jogador coloque todas as embarca��es.
					printf("\n\n\n************************** BATALHA NAVAL **************************\n\n");

					printf("\n\n        1  2  3  4  5  6  7  8  9  10\n\n     A");													//Mostra o campo de batalha para que o jogador posicione as embarca��es.
			
					for (y = 0; y < 10; y++){
						printf("  %c", campoChar[0][y]);
					}
					
					printf("\n\n     B");
					for (y = 0; y < 10; y++){
						printf("  %c", campoChar[1][y]);
					}
					
					printf("\n\n     C");
					for(y = 0; y < 10; y++){
						printf("  %c", campoChar[2][y]);
					}
					
					printf("\n\n     D");
					for(y = 0; y < 10; y++){
						printf("  %c", campoChar[3][y]);
					}
					
					printf("\n\n     E");
					for(y = 0; y < 10; y++){
						printf("  %c", campoChar[4][y]);
					}
					
					printf("\n\n     F");
					for(y = 0; y < 10; y++){
						printf("  %c", campoChar[5][y]);
					}
					
					printf("\n\n     G");
					for(y = 0; y < 10; y++){
						printf("  %c", campoChar[6][y]);
					}
					
					printf("\n\n     H");
					for(y = 0; y < 10; y++){
						printf("  %c", campoChar[7][y]);
					}
					
					printf("\n\n     I");
					for(y = 0; y < 10; y++){
						printf("  %c", campoChar[8][y]);
					}
					
					printf("\n\n     J");
					for(y = 0; y < 10; y++){
						printf("  %c", campoChar[9][y]);
					}
					
					printf("\n\n Escolha qual embarcacao gostaria de posicionar \n (Digite o numero antes do nome): ");				//Permite que o jogador escolha qual embarca��o deseja posicionar.
					scanf("%d", &opcaoEmbarcacao);																					//Entrada do jogador a respeito de qual embarca��o deseja posicionar.
			
					switch (opcaoEmbarcacao){																						//Faz a verifica��o da escolha atrav�s da estrutura switch case.
						case 1:																										//Caso escolha os submarinos, gera o mapa ofical do jogo na tela
							if (submarinoCont < 3){																					//Verifica se o n�mero m�ximo de submarinos n�o foi excedido.
								submarinoCont++;																					//Faz o controle do n�mero de submarinos possiveis a serem posicionados.
								
								printf("\n\nEscolha a linha da embarcacao (Digite a letra desejada): ");
								scanf(" %c", &linhaChar);
								
								if (linhaChar == 'A' || linhaChar == 'a'){
									x = 0;
									
									printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
									scanf("%d", &y);
									
								} else {
									if(linhaChar == 'B' || linhaChar == 'b'){
										x = 1;
										
										printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
										scanf("%d", &y);
										
									} else {
										if (linhaChar == 'C' || linhaChar == 'c'){
											x = 2;
											
											printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
											scanf("%d", &y);
											
										} else {
											if (linhaChar == 'D' || linhaChar == 'd'){
												x = 3;
												
												printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
												scanf("%d", &y);
												
											} else {
												if (linhaChar == 'E' || linhaChar == 'e'){
													x = 4;
													
													printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
													scanf("%d", &y);
													
												} else {				
													if (linhaChar == 'F' || linhaChar == 'f'){
														x = 5;
														
														printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
														scanf("%d", &y);
														
													} else {												
														if (linhaChar == 'G' || linhaChar == 'g'){
															x = 6;
															
															printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
															scanf("%d", &y);
															
														} else {
															if (linhaChar == 'H' || linhaChar == 'h'){
																x = 7;
																
																printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
																scanf("%d", &y);
																
															} else {
																if (linhaChar == 'I' || linhaChar == 'i'){
																	x = 8;
																	
																	printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
																	scanf("%d", &y);
																	
																} else {
																	if (linhaChar == 'J' || linhaChar == 'j'){
																		x = 9;
																		
																		printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
																		scanf("%d", &y);
																		
																	} else {
																		printf("\n\n\n\n*******************************************************************"
																			   "\n\n*******************************************************************"
																			   "\n\n************************ Operacao Invalida ************************"
																			   "\n\n*******************************************************************"
																			   "\n\n*******************************************************************");
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
								
							} else {
								printf("\n\n\n\n*******************************************************************"
									   "\n\n*******************************************************************"
									   "\n\n************ Todos os submarinos ja foram posicionados! ***********"
									   "\n\n*******************************************************************"
									   "\n\n*******************************************************************");
							}
							
						campoChar[x][y - 1] = 'O';
						submarinoCont++;
						
						break;
					
						case 2:
							if (fragataCont < 2){
								fragataCont++;																						
								
								printf("\n\nEscolha a linha da embarcacao (Digite a letra desejada): ");
								scanf(" %c", &linhaChar);
								
								if (linhaChar == 'A' || linhaChar == 'a'){
									x = 0;
									
									printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
									scanf("%d", &y);
									
								} else {
									if(linhaChar == 'B' || linhaChar == 'b'){
										x = 1;
										
										printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
										scanf("%d", &y);
										
									} else {
										if (linhaChar == 'C' || linhaChar == 'c'){
											x = 2;
											
											printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
											scanf("%d", &y);
											
										} else {
											if (linhaChar == 'D' || linhaChar == 'd'){
												x = 3;
												
												printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
												scanf("%d", &y);
												
											} else {
												if (linhaChar == 'E' || linhaChar == 'e'){
													x = 4;
													
													printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
													scanf("%d", &y);
													
												} else {				
													if (linhaChar == 'F' || linhaChar == 'f'){
														x = 5;
														
														printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
														scanf("%d", &y);
														
													} else {												
														if (linhaChar == 'G' || linhaChar == 'g'){
															x = 6;
															
															printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
															scanf("%d", &y);
															
														} else {
															if (linhaChar == 'H' || linhaChar == 'h'){
																x = 7;
																
																printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
																scanf("%d", &y);
																
															} else {
																if (linhaChar == 'I' || linhaChar == 'i'){
																	x = 8;
																	
																	printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
																	scanf("%d", &y);
																	
																} else {
																	if (linhaChar == 'J' || linhaChar == 'j'){
																		x = 9;
																		
																		printf("Escolha a coluna da embarcacao (Digite o numero desejado): ");
																		scanf("%d", &y);
																		
																	} else {
																		printf("\n\n\n\n*******************************************************************"
																			   "\n\n*******************************************************************"
																			   "\n\n************************ Operacao Invalida ************************"
																			   "\n\n*******************************************************************"
																			   "\n\n*******************************************************************");
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
								
							} else {
								printf("\n\n\n\n*******************************************************************"
									   "\n\n*******************************************************************"
									   "\n\n************ Todos as fragatas ja foram posicionados! *************"
									   "\n\n*******************************************************************"
									   "\n\n*******************************************************************");
							}
							
						campoChar[x][y - 1] = 'O';
						fragataCont++;
							
							break;
							
						case 3:
							
							
							break;
						
						case 4:
							
							
							break;
						
					}
					
				} while (menuCriar = 1);
				
				break;
			
			case 2 :
				
				break;
				
			case 3 :
				
				break;
			
			case 4 :
				
				desliga = 1;
				break;
				
		}

	} while (desliga = 0);
	
		   
	return 0;
}
