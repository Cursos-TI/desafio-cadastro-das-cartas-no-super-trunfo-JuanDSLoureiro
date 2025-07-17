#include <stdio.h>


struct Carta //cria uma estrutura de dados (DataType)
{
    char Estado;
    char Codigo[4];
    char Cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int PTuristicos;
    float PIBPerCap;
    float DensPop;
    float SuperPoder;
};


int main(){
    struct Carta Carta1,Carta2; //inicia a struct
    unsigned short int escolhaJogador;
    
    #pragma region input carta1  //recebe carta 1
        
        printf("==========================================================\n");
        printf("                         Carta1\n");
        printf("==========================================================\n\n");

        printf("Digite o Estado da Carta1: ");
        scanf(" %c",&Carta1.Estado);

        printf("Digite o Código da Carta1: ");
        scanf(" %s",&Carta1.Codigo);

        printf("Digite o Nome da Cidade da Carta1: ");
        scanf(" %s",&Carta1.Cidade);

        printf("Digite a População da Carta1: ");
        scanf("%d",&Carta1.Populacao);

        printf("Digite a Área (em km²) da Carta1: ");
        scanf("%f",&Carta1.Area);

        printf("Digite o PIB da Carta1: ");
        scanf("%f",&Carta1.PIB);

        printf("Digite o Número de Pontos Turísticos da Carta1: ");
        scanf("%d",&Carta1.PTuristicos);

        //Densidade Populacional
        Carta1.DensPop = Carta1.Populacao / Carta1.Area;

        //PIB per Capita
        Carta1.PIBPerCap = Carta1.PIB / Carta1.Populacao;

        //Super Poder
        Carta1.SuperPoder = (float)Carta1.Populacao + Carta1.Area + Carta1.PIB + Carta1.PTuristicos + Carta1.PIBPerCap + (1 / Carta1.DensPop);

    #pragma endregion

    #pragma region output carta1 //resultado carta 1
        printf("\nCarta 1:\n");
        printf("Estado: %c\n",Carta1.Estado);
        printf("Código: %3s\n",Carta1.Codigo);
        printf("Nome da Cidade: %s\n",Carta1.Cidade);
        printf("População: %d\n",Carta1.Populacao);
        printf("Área: %.2f\n",Carta1.Area);
        printf("PIB: %.2f\n",Carta1.PIB);
        printf("Número de Pontos Turísticos: %d \n",Carta1.PTuristicos);
        printf("Densidade Populacional: %.2f hab/km²\n",Carta1.DensPop);
        printf("PIB per Capita: %.2f reais\n",Carta1.PIBPerCap);
    #pragma endregion
    
    #pragma region input carta2//recebe carta 2
        printf("\n==========================================================\n");
        printf("                         Carta2\n");
        printf("==========================================================\n\n");

        printf("Digite o Estado da Carta2: ");
        scanf(" %c",&Carta2.Estado);

        printf("Digite o Código da Carta2: ");
        scanf(" %s",&Carta2.Codigo);

        printf("Digite o Nome da Cidade da Carta2: ");
        scanf(" %s",&Carta2.Cidade);

        printf("Digite a População da Carta2: ");
        scanf("%d",&Carta2.Populacao);

        printf("Digite a Área (em km²) da Carta2: ");
        scanf("%f",&Carta2.Area);

        printf("Digite o PIB da Carta2: ");
        scanf("%f",&Carta2.PIB);

        printf("Digite o Número de Pontos Turísticos da Carta2: ");
        scanf("%d",&Carta2.PTuristicos);

        //Densidade Populacional
        Carta2.DensPop = Carta2.Populacao / Carta2.Area;

        //PIB per Capita
        Carta2.PIBPerCap = Carta2.PIB / Carta2.Populacao;

        //Super Poder
        Carta2.SuperPoder = (float)Carta2.Populacao + Carta2.Area + Carta2.PIB + Carta2.PTuristicos + Carta2.PIBPerCap + (1 / Carta2.DensPop);

    #pragma endregion 

    #pragma region output carta2 //resultado carta 2
        printf("\nCarta 2:\n");
        printf("Estado: %c\n",Carta2.Estado);
        printf("Código: %s\n",Carta2.Codigo);
        printf("Nome da Cidade: %s\n",Carta2.Cidade);
        printf("População: %d\n",Carta2.Populacao);
        printf("Área: %.2f\n",Carta2.Area);
        printf("PIB: %.2f\n",Carta2.PIB);
        printf("Número de Pontos Turísticos: %d\n",Carta2.PTuristicos);
        printf("Densidade Populacional: %.2f hab/km²\n",Carta2.DensPop);
        printf("PIB per Capita: %.2f reais\n",Carta2.PIBPerCap);
    #pragma endregion

    #pragma region escolha do jogador
        printf("\nEscolha uma opção de comparação:\n");
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Pontos turisticos\n");
        printf("5. PIB percapto\n");
        printf("6. Densidade populacional\n");
        printf("7. Super poder\n");
        printf("Escolha:\n");
        scanf("%d",&escolhaJogador);

    #pragma endregion

    #pragma region Comparacao //resultado Comparacao entre as duas cartas
        switch (escolhaJogador)
        {
        case 1: //Populacao
            printf("\nComparação de cartas (Atributo: População):\n\n");
            //exibe informação das duas cartas
            printf("Carta 1 - %s: %d\n",Carta1.Cidade,Carta1.Populacao);
            printf("Carta 2 - %s: %d\n",Carta2.Cidade,Carta2.Populacao);
            //compara e exibe a carta vencedora
            if(Carta1.Populacao > Carta2.Populacao){
                printf("Resultado: Carta 1 %s venceu!\n",Carta1.Cidade);
            } else if (Carta1.Populacao < Carta2.Populacao) {
                printf("Resultado: Carta 2 %s venceu!\n",Carta2.Cidade);
            } else{
                printf("Resultado: Empate!\n");
            }
        break;
        case 2: //Area
            printf("\nComparação de cartas (Atributo: Area):\n\n");
            //exibe informação das duas cartas
            printf("Carta 1 - %s: %.2f\n",Carta1.Cidade,Carta1.Area);
            printf("Carta 2 - %s: %.2f\n",Carta2.Cidade,Carta2.Area);
            //compara e exibe a carta vencedora
            if(Carta1.Area > Carta2.Area){
                printf("Resultado: Carta 1 %s venceu!\n",Carta1.Cidade);
            } else if (Carta1.Area < Carta2.Area) {
                printf("Resultado: Carta 2 %s venceu!\n",Carta2.Cidade);
            } else{
                printf("Resultado: Empate!\n");
            }
        break;
        case 3: //PIB
            printf("\nComparação de cartas (Atributo: PIB):\n\n");
            //exibe informação das duas cartas
            printf("Carta 1 - %s: %.2f\n",Carta1.Cidade,Carta1.PIB);
            printf("Carta 2 - %s: %.2f\n",Carta2.Cidade,Carta2.PIB);
            //compara e exibe a carta vencedora
            if(Carta1.PIB > Carta2.PIB){
                printf("Resultado: Carta 1 %s venceu!\n",Carta1.Cidade);
            } else if (Carta1.PIB < Carta2.PIB) {
                printf("Resultado: Carta 2 %s venceu!\n",Carta2.Cidade);
            } else{
                printf("Resultado: Empate!\n");
            }
        break;
        case 4: //Pontos turisticos
            printf("\nComparação de cartas (Atributo: Pontos turisticos):\n\n");
            //exibe informação das duas cartas
            printf("Carta 1 - %s: %d\n",Carta1.Cidade,Carta1.PTuristicos);
            printf("Carta 2 - %s: %d\n",Carta2.Cidade,Carta2.PTuristicos);
            //compara e exibe a carta vencedora
            if(Carta1.PTuristicos > Carta2.PTuristicos){
                printf("Resultado: Carta 1 %s venceu!\n",Carta1.Cidade);
            } else if (Carta1.PTuristicos < Carta2.PTuristicos) {
                printf("Resultado: Carta 2 %s venceu!\n",Carta2.Cidade);
            } else{
                printf("Resultado: Empate!\n");
            }
        break;
        case 5: //PIB percapto
            printf("\nComparação de cartas (Atributo: Densidade populacional):\n\n");
            //exibe informação das duas cartas
            printf("Carta 1 - %s: %.2f\n",Carta1.Cidade,Carta1.PIBPerCap);
            printf("Carta 2 - %s: %.2f\n",Carta2.Cidade,Carta2.PIBPerCap);
            //compara e exibe a carta vencedora
            if(Carta1.PIBPerCap > Carta2.PIBPerCap){
                printf("Resultado: Carta 1 %s venceu!\n",Carta1.Cidade);
            } else if (Carta1.PIBPerCap < Carta2.PIBPerCap) {
                printf("Resultado: Carta 2 %s venceu!\n",Carta2.Cidade);
            } else{
                printf("Resultado: Empate!\n");
            }
        break;
        case 6: //Densidade populacional
            printf("\nComparação de cartas (Atributo: Densidade populacional):\n\n");
            //exibe informação das duas cartas
            printf("Carta 1 - %s: %.2f\n",Carta1.Cidade,Carta1.DensPop);
            printf("Carta 2 - %s: %.2f\n",Carta2.Cidade,Carta2.DensPop);
            //compara e exibe a carta vencedora
            if(Carta1.DensPop < Carta2.DensPop){
                printf("Resultado: Carta 1 %s venceu!\n",Carta1.Cidade);
            } else if (Carta1.DensPop > Carta2.DensPop) {
                printf("Resultado: Carta 2 %s venceu!\n",Carta2.Cidade);
            } else{
                printf("Resultado: Empate!\n");
            }
        break;
        case 7: //Super poder
            printf("\nComparação de cartas (Atributo: Super poder):\n\n");
            //exibe informação das duas cartas
            printf("Carta 1 - %s: %.2f\n",Carta1.Cidade,Carta1.SuperPoder);
            printf("Carta 2 - %s: %.2f\n",Carta2.Cidade,Carta2.SuperPoder);
            //compara e exibe a carta vencedora
            if(Carta1.SuperPoder > Carta2.SuperPoder){
                printf("Resultado: Carta 1 %s venceu!\n",Carta1.Cidade);
            } else if (Carta1.SuperPoder < Carta2.SuperPoder) {
                printf("Resultado: Carta 2 %s venceu!\n",Carta2.Cidade);
            } else{
                printf("Resultado: Empate!\n");
            }
        break;
        
        default:
            break;
        }

    #pragma endregion

    return 0;
}