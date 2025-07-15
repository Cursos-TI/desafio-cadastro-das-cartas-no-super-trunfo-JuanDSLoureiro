#include <stdio.h>


struct Carta //cria uma estrutura de dados (DataType)
{
    char Estado;
    char Codigo[3];
    char Cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int PTuristicos;
};


int main(){
    struct Carta Carta1,Carta2; //inicia a struct
    
    #pragma region input carta1  //recebe carta 1
        
        printf("==========================================================\n");
        printf("                         Carta1\n");
        printf("==========================================================\n\n");

        printf("Digite o Estado da Carta1: ");
        scanf(" %c",&Carta1.Estado);

        printf("Digite o Código da Carta1: ");
        scanf("%s",Carta1.Codigo);

        printf("Digite o Nome da Cidade da Carta1: ");
        scanf("%s",Carta1.Cidade);

        printf("Digite a População da Carta1: ");
        scanf("%d",&Carta1.Populacao);

        printf("Digite a Área (em km²) da Carta1: ");
        scanf("%f",&Carta1.Area);

        printf("Digite o PIB da Carta1: ");
        scanf("%f",&Carta1.PIB);

        printf("Digite o Número de Pontos Turísticos da Carta1: ");
        scanf("%d",&Carta1.PTuristicos);
    #pragma endregion

    #pragma region output carta1 //resultado carta 1
        printf("\nCarta 1:\n");
        printf("Estado: %c\n",Carta1.Estado);
        printf("Código: %s\n",Carta1.Codigo);
        printf("Nome da Cidade: %s\n",Carta1.Cidade);
        printf("População: %d\n",Carta1.Populacao);
        printf("Área: %2f\n",Carta1.Area);
        printf("PIB: %2f\n",Carta1.PIB);
        printf("Número de Pontos Turísticos: %d \n",Carta1.PTuristicos);
    #pragma endregion
    
    #pragma region input carta2//recebe carta 2
        printf("\n==========================================================\n");
        printf("                         Carta2\n");
        printf("==========================================================\n\n");

        printf("Digite o Estado da Carta2: ");
        scanf(" %c",&Carta2.Estado);

        printf("Digite o Código da Carta2: ");
        scanf("%s",Carta2.Codigo);

        printf("Digite o Nome da Cidade da Carta2: ");
        scanf("%s",Carta2.Cidade);

        printf("Digite a População da Carta2: ");
        scanf("%d",&Carta2.Populacao);

        printf("Digite a Área (em km²) da Carta2: ");
        scanf("%f",&Carta2.Area);

        printf("Digite o PIB da Carta2: ");
        scanf("%f",&Carta2.PIB);

        printf("Digite o Número de Pontos Turísticos da Carta2: ");
        scanf("%d",&Carta2.PTuristicos);
    #pragma endregion 

    #pragma region output carta2 //resultado carta 2
        printf("\nCarta 2:\n");
        printf("Estado: %c\n",Carta2.Estado);
        printf("Código: %s\n",Carta2.Codigo);
        printf("Nome da Cidade: %s\n",Carta2.Cidade);
        printf("População: %d\n",Carta2.Populacao);
        printf("Área: %2f\n",Carta2.Area);
        printf("PIB: %2f\n",Carta2.PIB);
        printf("Número de Pontos Turísticos: %d\n",Carta2.PTuristicos);
    #pragma endregion
    
    return 0;
}

