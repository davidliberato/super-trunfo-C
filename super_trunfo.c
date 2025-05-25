#include <stdio.h>

int main (){
    // Declarando as variaveis do sistema;

    char estado1 ,codigo_da_carta1[10], nome_da_cidade1[50], estado2 ,codigo_da_carta2[10], nome_da_cidade2[50];
    int numero_habitantes1, numeros_pontos_turisticos1, numero_habitantes2, numeros_pontos_turisticos2;
    float area1, pib1, area2, pib2;
  
    // Inicializando a captação dos dados do usuario para a Carta 01
    printf("Digite a LETRA do Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta: ");
    scanf(" %s", codigo_da_carta1); // Sem a necessidade do "&" por se tratar de uma String

    printf("Digite o nome da cidade: ");
    getchar(); // Usei o getchar para consumir a quebra de linha que fica no buffer do scanf
    fgets(nome_da_cidade1, 50, stdin); // Utilizei o fgets para permitir o usuario cadastrar dados compostos, porem acentos ainda são problematicos.

    printf("Digite a população: ");
    scanf("%d", &numero_habitantes1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turisticos: ");
    scanf("%d", &numeros_pontos_turisticos1);

    // Mostrando os dados da Carta 01
    printf("\n######### Carta 1 ########\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s", nome_da_cidade1); // Sem a necessidade da quebra de linha, pois o fgets incorpora o "\n" introduzido pelo usuario.
    printf("População: %d \n", numero_habitantes1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f \n", pib1); // %.2f -> Limita a quantidade de casas decimais após o ponto.
    printf("Número de Pontos Turisticos: %d \n", numeros_pontos_turisticos1);

    printf("\n------------------------------\n");

    // Inicializando a captação dos dados do usuario para a Carta 02

    printf("Digite a LETRA do Estado: ");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_da_carta2);
    
    printf("Digite o nome da cidade: ");
    getchar();
    fgets(nome_da_cidade2, 50, stdin); // stdin serve para o fgets identificar de onde vem a entrade de dados. Nesse caso do Teclado.
    
    printf("Digite a população: ");
    scanf("%d", &numero_habitantes2);
    
    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de Pontos Turisticos: ");
    scanf("%d", &numeros_pontos_turisticos2);

    // Mostrando os dados da Carta 02
    
    printf("\n######### Carta 2 ########\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s", nome_da_cidade2);
    printf("População: %d \n", numero_habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f \n", pib2);
    printf("Número de Pontos Turisticos: %d \n", numeros_pontos_turisticos2);
    
    printf("\n------------------------------\n");
    
    return 0;
}