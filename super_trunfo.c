// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado[25];
  char Codigo[4];
  char Cidade[25];
  int Populacao;
  float Area;
  float PIB;
  int Numero_de_pontos_turisticos;
  char Estado2[25];
  char Codigo2[4];
  char Cidade2[25];
  int Populacao2;
  float Area2;
  float PIB2;
  int Numero_de_pontos_turisticos2;

  // Área para entrada de dados
  printf("\n=== Cadastro da Carta 1 ===\n");
  printf("Digite o nome do Estado: ");
  scanf("%24s", Estado);
  printf("Digite o código da cidade: ");
  scanf("%3s", Codigo);
  printf("Digite o nome da cidade: ");
  scanf("%24s", Cidade);
  printf("Digite a população: ");
  scanf("%d", &Populacao);
  printf("Digite a área (em km²): ");
  scanf("%f", &Area);
  printf("Digite o PIB (em milhões): ");
  scanf("%f", &PIB);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &Numero_de_pontos_turisticos);
  // Área para entrada de dados da segunda cidade
  printf("\n=== Cadastro da Carta 2 ===\n");
  printf("Digite o nome do Estado: ");
  scanf("%24s", Estado2);
  printf("Digite o código da cidade: ");
  scanf("%3s", Codigo2);
  printf("Digite o nome da cidade: ");
  scanf("%24s", Cidade2);
  printf("Digite a população: ");
  scanf("%d", &Populacao2);
  printf("Digite a área (em km²): ");
  scanf("%f", &Area2);
  printf("Digite o PIB (em milhões): ");
  scanf("%f", &PIB2);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &Numero_de_pontos_turisticos2);

  // Área para exibição dos dados da cidade

  printf("\n--- Carta 1 ---\n");
  printf("Estado: %s\n", Estado);
  printf("Código da Cidade: %s\n", Codigo);
  printf("Cidade: %s\n", Cidade);
  printf("População: %d habitantes\n", Populacao);
  printf("Área: %.2f km²\n", Area);
  printf("PIB: %.2f milhões\n", PIB);
  printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_turisticos);

  printf("\n--- Carta 2 ---\n");
  printf("Estado: %s\n", Estado2);
  printf("Código da Cidade: %s\n", Codigo2);
  printf("Cidade: %s\n", Cidade2);
  printf("População: %d habitantes\n", Populacao2);
  printf("Área: %.2f km²\n", Area2);
  printf("PIB: %.2f milhões\n", PIB2);
  printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_turisticos2);

return 0;
} 
