#include <stdio.h>
#include <string.h>

int main (){
    // Declarando as variaveis do sistema;

    char estado1[10] ,codigo_da_carta1[10], nome_da_cidade1[50], estado2[10] ,codigo_da_carta2[10], nome_da_cidade2[50];
    unsigned long int numero_habitantes1 , numero_habitantes2;
    int numeros_pontos_turisticos1,numeros_pontos_turisticos2;
    float area1, pib1, area2, pib2, densidade_populacional1, pib_percapita1, densidade_populacional2, pib_percapita2, super_poder1, super_poder2;
 
    // Inicializando a captação dos dados do usuario para a Carta 01
    printf("Digite a LETRA do Estado: ");
    scanf(" %s", estado1);

    printf("Digite o codigo da carta: ");
    scanf(" %s", codigo_da_carta1); // Sem a necessidade do "&" por se tratar de uma String

    printf("Digite o nome da cidade: ");
    // getchar(); // Usei o getchar para consumir a quebra de linha que fica no buffer do scanf
    // fgets(nome_da_cidade1, 50, stdin); // Utilizei o fgets para permitir o usuario cadastrar dados compostos, porem acentos ainda são problematicos.
    scanf("%s", nome_da_cidade1); // Retornei com a opção de scanf pois o fgets apresentava problemas na apresentação dos dados

    printf("Digite a população: ");
    scanf("%lu", &numero_habitantes1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turisticos: ");
    scanf("%d", &numeros_pontos_turisticos1);

    // strcpy(estado1, "PE");
    // strcpy(codigo_da_carta1, "A01");
    // strcpy(nome_da_cidade1, "Recife");
    // numero_habitantes1 = 231456;
    // area1 = 1231;
    // pib1 = 231;
    // numeros_pontos_turisticos1 = 10;
    
    // strcpy(estado2, "AL");
    // strcpy(codigo_da_carta2, "B02");
    // strcpy(nome_da_cidade2, "Maceio");
    // numero_habitantes2 = 123456;
    // area2 = 1211;
    // pib2 = 213;
    // numeros_pontos_turisticos2 = 20;


    // Mostrando os dados da Carta 01
    printf("\n######### Carta 1 ########\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s \n", nome_da_cidade1); // Sem a necessidade da quebra de linha, pois o fgets incorpora o "\n" introduzido pelo usuario.
    printf("População: %lu \n", numero_habitantes1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões \n", pib1); // %.2f -> Limita a quantidade de casas decimais após o ponto.
    printf("Número de Pontos Turisticos: %d \n", numeros_pontos_turisticos1);
    
     // usei a conversão para double para melhorar a precisão, porém com numeros muito alto, ainda não funciona tão bem.
    densidade_populacional1 = numero_habitantes1 / area1;
    pib1 *= 1000000000; // Convertendo o PIB que foi inserido em Bilhões para Reais,
    pib_percapita1 = pib1 / numero_habitantes1;
    
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional1);
    printf("PIB per Capita: R$ %.2f \n", pib_percapita1);

    super_poder1 = (float) numero_habitantes1 + area1 + (pib1/1000000000) + (float)numeros_pontos_turisticos1 + pib_percapita1 + (1/densidade_populacional1);


    printf("Super Poder: %.2f \n", super_poder1);

    printf("\n------------------------------\n");

    // Inicializando a captação dos dados do usuario para a Carta 02

    printf("Digite a LETRA do Estado: ");
    scanf(" %s", estado2);
    
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_da_carta2);
    
    printf("Digite o nome da cidade: ");
    // getchar();
    // fgets(nome_da_cidade2, 50, stdin); // stdin serve para o fgets identificar de onde vem a entrade de dados. Nesse caso do Teclado.
    scanf("%s", nome_da_cidade2);
    
    printf("Digite a população: ");
    scanf("%lu", &numero_habitantes2);
    
    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de Pontos Turisticos: ");
    scanf("%d", &numeros_pontos_turisticos2);



    // Mostrando os dados da Carta 02
    
    printf("\n######### Carta 2 ########\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s \n", nome_da_cidade2);
    printf("População: %lu \n", numero_habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de Pontos Turisticos: %d \n", numeros_pontos_turisticos2);
   
    densidade_populacional2 = numero_habitantes2 / area2;
    pib2 *= 1000000000;
    pib_percapita2 = pib2 / numero_habitantes2;
    
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional2);
    printf("PIB per Capita: R$ %.2f \n", pib_percapita2);

    super_poder2 = (float) numero_habitantes2 + area2 + (pib2 /1000000000) + (float)numeros_pontos_turisticos2 + pib_percapita2 + (1/densidade_populacional2);


    printf("Super Poder: %.2f \n", super_poder2);
    
    printf("\n------------------------------\n");


    int opcao1;
    int opcao2;
    double atributo1_C1, atributo2_C1;
    double atributo1_C2, atributo2_C2;
    

    printf("Selecione o primeiro atributo: (Escolha uma opção) \n");
    printf(" 1 - Numero de Habitantes \n");
    printf(" 2 - Área \n");
    printf(" 3 - PIB \n");
    printf(" 4 - Pontos Turisticos \n");
    printf(" 5 - Densidade Populacional \n");
    printf(" 6 - PIB per Capita \n");
    printf(" 7 - Super Poder \n");
    scanf("%d", &opcao1);
    
    printf("\n");


    printf("Selecione o segundo atributo: (Escolha uma opção) \n");
    printf(" 1 - Numero de Habitantes \n");
    printf(" 2 - Área \n");
    printf(" 3 - PIB \n");
    printf(" 4 - Pontos Turisticos \n");
    printf(" 5 - Densidade Populacional \n");
    printf(" 6 - PIB per Capita \n");
    printf(" 7 - Super Poder \n");
    scanf("%d", &opcao2);
    
    

    if (opcao2 == opcao1){
        printf("Você já escolheu essa opção");
    } else {
        printf("\n");
        printf("### COMPARAÇÃO DE CARTAS ###\n");
        printf("\n");
        switch (opcao1){
            case 1:
                printf("--- Atributo População ---\n");
                printf("\n");
                printf("Carta 1 - %s (%s): %lu habitantes\n", nome_da_cidade1, estado1, numero_habitantes1);
                printf("Carta 2 - %s (%s): %lu habitantes\n", nome_da_cidade2, estado2, numero_habitantes2);
                printf("Resultado: ");

                atributo1_C1 = (double) numero_habitantes1;
                atributo1_C2 = (double) numero_habitantes2;

                if (numero_habitantes1 == numero_habitantes2){
                    printf("Empate!");
                } else if (numero_habitantes1 > numero_habitantes2){
                    printf("Carta 1 - (%s) Venceu! \n", nome_da_cidade1);
                } else {
                    printf("Carta 2 - (%s) Venceu! \n", nome_da_cidade2);
                }
                printf("\n");
                break;
            case 2:
                printf("--- Atributo ÁREA ---\n");
                printf("\n");
                printf("Carta 1 - %s (%s): %.2f km² \n", nome_da_cidade1, estado1, area1);
                printf("Carta 2 - %s (%s): %.2f km² \n", nome_da_cidade2, estado2, area2);
                printf("Resultado: ");

                atributo1_C1 = area1;
                atributo1_C2 = area2;

                if (area1 == area2){
                    printf("Empate!");
                } else if (area1 > area2){
                    printf("Carta 1 - (%s) Venceu! \n", nome_da_cidade1);
                } else {
                    printf("Carta 2 - (%s) Venceu! \n", nome_da_cidade2);
                }
                printf("\n");
                break;
            case 3:
                printf("--- Atributo PIB ---\n");
                printf("\n");
                printf("Carta 1 - %s (%s): R$ %.2f \n", nome_da_cidade1, estado1, pib1);
                printf("Carta 2 - %s (%s): R$ %.2f \n", nome_da_cidade2, estado2, pib2);
                printf("Resultado: ");

                atributo1_C1 = pib1;
                atributo1_C2 = pib2;

                if (pib1 == pib2){
                    printf("Empate!");
                } else if (pib1 > pib2){
                    printf("Carta 1 - (%s) Venceu! \n", nome_da_cidade1);
                } else {
                    printf("Carta 2 - (%s) Venceu! \n", nome_da_cidade2);
                }
                printf("\n");
                break;
            case 4:
                printf("--- Atributo Pontos Turisticos ---\n");
                printf("\n");
                printf("Carta 1 - %s (%s): %d Pontos Turisticos \n", nome_da_cidade1, estado1, numeros_pontos_turisticos1);
                printf("Carta 2 - %s (%s): %d Pontos Turisticos \n", nome_da_cidade2, estado2, numeros_pontos_turisticos2);
                printf("Resultado: ");

                atributo1_C1 = (double) numeros_pontos_turisticos1;
                atributo1_C2 = (double) numeros_pontos_turisticos2;

                if (numeros_pontos_turisticos1 == numeros_pontos_turisticos2){
                    printf("Empate!");
                } else if (numeros_pontos_turisticos1 > numeros_pontos_turisticos2){
                    printf("Carta 1 - (%s) Venceu! \n", nome_da_cidade1);
                } else {
                    printf("Carta 2 - (%s) Venceu! \n", nome_da_cidade2);
                }
                printf("\n");
                break;
            case 5:
                printf("--- Atributo Densidade Populacional ---\n");
                printf("\n");
                printf("Carta 1 - %s (%s): %.2f hab/km² \n", nome_da_cidade1, estado1, densidade_populacional1);
                printf("Carta 2 - %s (%s): %.2f hab/km² \n", nome_da_cidade2, estado2, densidade_populacional2);
                printf("Resultado: ");

                atributo1_C1 = densidade_populacional1;
                atributo1_C2 = densidade_populacional1;

                if (densidade_populacional1 == densidade_populacional2){
                    printf("Empate!");
                } else if (densidade_populacional1 < densidade_populacional2) {
                    printf("Carta 1 - (%s) Venceu! \n", nome_da_cidade1);
                } else {
                    printf("Carta 2 - (%s) Venceu! \n", nome_da_cidade2);
                }
                printf("\n");
                break;
                case 6:
                printf("--- Atributo PIB per Capita ---\n");
                printf("\n");
                printf("Carta 1 - %s (%s): R$ %.2f \n", nome_da_cidade1, estado1, pib_percapita1);
                printf("Carta 2 - %s (%s): R$ %.2f \n", nome_da_cidade2, estado2, pib_percapita2);
                printf("Resultado: ");

                atributo1_C1 = pib_percapita1;
                atributo1_C2 = pib_percapita2;

                if (pib_percapita1 == pib_percapita2){
                    printf("Empate!");
                } else if (pib_percapita1 > pib_percapita2){
                    printf("Carta 1 - (%s) Venceu! \n", nome_da_cidade1);
                } else {
                    printf("Carta 2 - (%s) Venceu! \n", nome_da_cidade2);
                }
                printf("\n");
                break;
            case 7:
                printf("--- Atributo PIB per Capita ---\n");
                printf("\n");
                printf("Carta 1 - %s (%s): %.2f \n", nome_da_cidade1, estado1, super_poder1);
                printf("Carta 2 - %s (%s): %.2f \n", nome_da_cidade2, estado2, super_poder2);
                printf("Resultado: ");

                atributo1_C1 = super_poder1;
                atributo1_C2 = super_poder2;

                if (super_poder1 == super_poder2){
                    printf("Empate!");
                } else if (super_poder1 > super_poder2){
                    printf("Carta 1 - (%s) Venceu! \n", nome_da_cidade1);
                } else {
                    printf("Carta 2 - (%s) Venceu! \n", nome_da_cidade2);
                }
                printf("\n");
                break;
            default:
                printf("### ERRO - Opção inexistente ###");
            }
        switch (opcao2){
            case 1:
                printf("--- Atributo População ---\n");
                printf("\n");
                printf("Carta 1 - %s (%s): %lu habitantes\n", nome_da_cidade1, estado1, numero_habitantes1);
                printf("Carta 2 - %s (%s): %lu habitantes\n", nome_da_cidade2, estado2, numero_habitantes2);
                printf("Resultado: ");

                atributo2_C1 = numero_habitantes1;
                atributo2_C2 = numero_habitantes2;

                if (numero_habitantes1 == numero_habitantes2){
                    printf("Empate!");
                } else if (numero_habitantes1 > numero_habitantes2){
                    printf("Carta 1 - (%s) Venceu! \n", nome_da_cidade1);
                } else {
                    printf("Carta 2 - (%s) Venceu! \n", nome_da_cidade2);
                }
                printf("\n");
                break;
            case 2:
                printf("--- Atributo ÁREA ---\n");
                printf("\n");
                printf("Carta 1 - %s (%s): %.2f km² \n", nome_da_cidade1, estado1, area1);
                printf("Carta 2 - %s (%s): %.2f km² \n", nome_da_cidade2, estado2, area2);
                printf("Resultado: ");

                atributo2_C1 = area1;
                atributo2_C2 = area2;

                if (area1 == area2){
                    printf("Empate!");
                } else if (area1 > area2){
                    printf("Carta 1 - (%s) Venceu! \n", nome_da_cidade1);
                } else {
                    printf("Carta 2 - (%s) Venceu! \n", nome_da_cidade2);
                }
                printf("\n");
                break;
            case 3:
                printf("--- Atributo PIB ---\n");
                printf("\n");
                printf("Carta 1 - %s (%s): R$ %.2f \n", nome_da_cidade1, estado1, pib1);
                printf("Carta 2 - %s (%s): R$ %.2f \n", nome_da_cidade2, estado2, pib2);
                printf("Resultado: ");

                atributo2_C1 = pib1;
                atributo2_C2 = pib2;

                if (pib1 == pib2){
                    printf("Empate!");
                } else if (pib1 > pib2){
                    printf("Carta 1 - (%s) Venceu! \n", nome_da_cidade1);
                } else {
                    printf("Carta 2 - (%s) Venceu! \n", nome_da_cidade2);
                }
                printf("\n");
                break;
            case 4:
                printf("--- Atributo Pontos Turisticos ---\n");
                printf("\n");
                printf("Carta 1 - %s (%s): %d Pontos Turisticos \n", nome_da_cidade1, estado1, numeros_pontos_turisticos1);
                printf("Carta 2 - %s (%s): %d Pontos Turisticos \n", nome_da_cidade2, estado2, numeros_pontos_turisticos2);
                printf("Resultado: ");

                atributo2_C1 = numeros_pontos_turisticos1;
                atributo2_C2 = numeros_pontos_turisticos2;

                if (numeros_pontos_turisticos1 == numeros_pontos_turisticos2){
                    printf("Empate!");
                } else if (numeros_pontos_turisticos1 > numeros_pontos_turisticos2){
                    printf("Carta 1 - (%s) Venceu! \n", nome_da_cidade1);
                } else {
                    printf("Carta 2 - (%s) Venceu! \n", nome_da_cidade2);
                }
                printf("\n");
                break;
            case 5:
                printf("### COMPARAÇÃO DE CARTAS ###\n");
                printf("--- Atributo Densidade Populacional ---\n");
                printf("\n");
                printf("Carta 1 - %s (%s): %.2f hab/km² \n", nome_da_cidade1, estado1, densidade_populacional1);
                printf("Carta 2 - %s (%s): %.2f hab/km² \n", nome_da_cidade2, estado2, densidade_populacional2);
                printf("Resultado: ");

                atributo2_C1 = densidade_populacional1;
                atributo2_C2 = densidade_populacional2;

                if (densidade_populacional1 == densidade_populacional2){
                    printf("Empate!");
                } else if (densidade_populacional1 < densidade_populacional2) {
                    printf("Carta 1 - (%s) Venceu! \n", nome_da_cidade1);
                } else {
                    printf("Carta 2 - (%s) Venceu! \n", nome_da_cidade2);
                }
                printf("\n");
                break;
                case 6:
                printf("--- Atributo PIB per Capita ---\n");
                printf("\n");
                printf("Carta 1 - %s (%s): R$ %.2f \n", nome_da_cidade1, estado1, pib_percapita1);
                printf("Carta 2 - %s (%s): R$ %.2f \n", nome_da_cidade2, estado2, pib_percapita2);
                printf("Resultado: ");

                atributo2_C1 = pib_percapita1;
                atributo2_C2 = pib_percapita2;

                if (pib_percapita1 == pib_percapita2){
                    printf("Empate!");
                } else if (pib_percapita1 > pib_percapita2){
                    printf("Carta 1 - (%s) Venceu! \n", nome_da_cidade1);
                } else {
                    printf("Carta 2 - (%s) Venceu! \n", nome_da_cidade2);
                }
                printf("\n");
                break;
            case 7:
                printf("--- Atributo PIB per Capita ---\n");
                printf("\n");
                printf("Carta 1 - %s (%s): %.2f \n", nome_da_cidade1, estado1, super_poder1);
                printf("Carta 2 - %s (%s): %.2f \n", nome_da_cidade2, estado2, super_poder2);
                printf("Resultado: ");

                atributo2_C1 = super_poder1;
                atributo2_C2 = super_poder2;

                if (super_poder1 == super_poder2){
                    printf("Empate!");
                } else if (super_poder1 > super_poder2){
                    printf("Carta 1 - (%s) Venceu! \n", nome_da_cidade1);
                } else {
                    printf("Carta 2 - (%s) Venceu! \n", nome_da_cidade2);
                }
                printf("\n");
                break;
            default:
                printf("### ERRO - Opção inexistente ###");
            }
        
        double resultado_C1 = atributo1_C1 + atributo2_C1;
        double resultado_C2 = atributo1_C2 + atributo2_C2;

        printf("### SOMA DOS ATRIBUTOS ### \n");
        printf("\n");
        printf("Carta 1 - (%s) TOTAL: %.2f\n",nome_da_cidade1, resultado_C1);
        printf("Carta 2 - (%s) TOTAL: %.2f\n",nome_da_cidade2, resultado_C2);
        printf("Resultado: ");
        
        if (resultado_C1 == resultado_C2){
            printf("Empate");
        } else if (resultado_C1 > resultado_C2){
            printf("Carta 1 - %s: VENCEU! \n", nome_da_cidade1);
        } else {
            printf("Carta 2 - %s: VENCEU! \n", nome_da_cidade2);
        }
        printf("\n------------------------------------\n");
        printf("\n");
        

    }


    return 0;
}