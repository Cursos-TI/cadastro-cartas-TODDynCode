#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado[25];
  char Codigo[4];
  char Cidade[25];
  unsigned long int Populacao;
  float Area;
  float PIB;
  int Numero_de_pontos_turisticos;
  float Densidade_Populacional;
  float PIB_per_capita;
  float Super_poder;
  
  // Variáveis para a segunda cidade
  char Estado2[25];
  char Codigo2[4];
  char Cidade2[25];
  unsigned long int Populacao2;
  float Area2;
  float PIB2;
  int Numero_de_pontos_turisticos2;
  float Densidade_Populacional2;
  float PIB_per_capita2;
  float Super_poder2;

  // Área para entrada de dados
  printf("\n--- Cadastro da Carta 1 ---\n");
  printf("Digite o nome do Estado: ");
  scanf("%24s", Estado);
  printf("Digite o código da cidade: ");
  scanf("%3s", Codigo);
  printf("Digite o nome da cidade: ");
  scanf("%24s", Cidade);
  printf("Digite a população: ");
  scanf("%lu", &Populacao);
  printf("Digite a área (em km²): ");
  scanf("%f", &Area);
  printf("Digite o PIB (em milhões): ");
  scanf("%f", &PIB);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &Numero_de_pontos_turisticos);
  
  // Cálculo da densidade populacional e PIB per capita para a primeira cidade
  Densidade_Populacional = (float)Populacao / Area;
  PIB_per_capita = PIB / Populacao;

  // Área para entrada de dados da segunda cidade

  printf("\n--- Cadastro da Carta 2 ---\n");
  printf("Digite o nome do Estado: ");
  scanf("%24s", Estado2);
  printf("Digite o código da cidade: ");
  scanf("%3s", Codigo2);
  printf("Digite o nome da cidade: ");
  scanf("%24s", Cidade2);
  printf("Digite a população: ");
  scanf("%lu", &Populacao2);
  printf("Digite a área (em km²): ");
  scanf("%f", &Area2);
  printf("Digite o PIB (em milhões): ");
  scanf("%f", &PIB2);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &Numero_de_pontos_turisticos2);
  
  // Cálculo da densidade populacional e PIB per capita para a segunda cidade
  Densidade_Populacional2 = (float)Populacao2 / Area2;
  PIB_per_capita2 = PIB2 / Populacao2;

  // Cálculo do super poder para ambas as cidades (exemplo: PIB per capita multiplicado pelo número de pontos turísticos)
  Super_poder = (float)Populacao + Area + PIB + Numero_de_pontos_turisticos + PIB_per_capita + (1.0 / Densidade_Populacional);

  Super_poder2 = (float)Populacao2 + Area2 + PIB2 + Numero_de_pontos_turisticos2 + PIB_per_capita2 + (1.0 / Densidade_Populacional2);

  // Área para exibição dos dados da cidade

  printf("\n--- Carta 1 ---\n");
  printf("Estado: %s\n", Estado);
  printf("Código da Cidade: %s\n", Codigo);
  printf("Cidade: %s\n", Cidade);
  printf("População: %lu habitantes\n", Populacao);
  printf("Área: %.2f km²\n", Area);
  printf("PIB: %.2f milhões\n", PIB);
  printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_turisticos);
  printf("Densidade Populacional: %.2f habitantes/km²\n", Densidade_Populacional);
  printf("PIB per Capita: %.2f milhões por habitante\n", PIB_per_capita);
  printf("Super Poder: %.2f\n", Super_poder);

  printf("\n--- Carta 2 ---\n");
  printf("Estado: %s\n", Estado2);
  printf("Código da Cidade: %s\n", Codigo2);
  printf("Cidade: %s\n", Cidade2);
  printf("População: %lu habitantes\n", Populacao2);
  printf("Área: %.2f km²\n", Area2);
  printf("PIB: %.2f milhões\n", PIB2);
  printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_turisticos2);
  printf("Densidade Populacional: %.2f habitantes/km²\n", Densidade_Populacional2);
  printf("PIB per Capita: %.2f milhões por habitante\n", PIB_per_capita2);
  printf("Super Poder: %.2f\n", Super_poder2);

  // Área para ver qual carta tem a melhor pontuação em cada categoria
  printf("\n--- Comparação entre as Cartas ---\n");
  printf("Comparação de População: %s(1) tem mais habitantes que %s(0)? %d\n", Cidade, Cidade2, Populacao > Populacao2);
  printf("Comparação de Área: %s(1) é maior que %s(0)? %d\n", Cidade, Cidade2, Area > Area2);
  printf("Comparação de PIB: %s(1) tem um PIB maior que %s(0)? %d\n", Cidade, Cidade2, PIB > PIB2);
  printf("Comparação de Número de Pontos Turísticos: %s(1) tem mais pontos turísticos que %s(0)? %d\n", Cidade, Cidade2, Numero_de_pontos_turisticos > Numero_de_pontos_turisticos2);
  printf("Comparação de Densidade Populacional: %s(1) tem uma densidade populacional menor que %s(0)? %d\n", Cidade, Cidade2, Densidade_Populacional < Densidade_Populacional2);
  printf("Comparação de PIB per Capita: %s(1) tem um PIB per capita maior que %s(0)? %d\n", Cidade, Cidade2, PIB_per_capita > PIB_per_capita2);
  printf("Comparação de Super Poder: %s(1) tem um super poder maior que %s(0)? %d\n", Cidade, Cidade2, Super_poder > Super_poder2);

return 0;
} 
