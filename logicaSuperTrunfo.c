//Todo printf Sera uma mensagem com informações sobre a partida como de quem é a vez ,ou mensagem dizendo oque deve ser digitado.
//Na montagem das cartas ira conter os dados preenchidos pelos jogadores ***ATUALIZADO DIA 25/03/2025***.
//Nova função adicionada, agr o código calcula a densidade populacional e o pib per capita ***ATUALIZADO DIA 26/03/2025***.
/*Nova função adicionada, agr o código calcula a densidade populacional invertida e faz a comparação entre os 
atributos de cada carta para determinar o jogador vencedor do duelo ***ATUALIZADO DIA 27/03/2025***.*/
//Nova função atribuida, agr temos uma estrutura de decisão basica onde é feita a comparação de atributos pre-definidos onde após
//a comparação onde é mostrado para os jogadores qual carta venceu atravez de seu atributo ***ATUALIZADO DIA 31/03/2025***.
//Nova função atribuida, AGR TEMOS UM MENU INTERATIVO FEITO COM SWITCH ONDE O JOGADOR PODE ESCOLHER UM ATRIBUTO
//PARA REALIZAR A COMPARAÇÃO ***ATUALIZADO DIA 31/03/2025***.

//INICIO DO CODIGO
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(0));
    // Variaveis da carta 1
    int JOGADOR1;//VARIAVEL PARA UTILIZAR O MENU INTERATIVO
    char carta1[4];
    char estado1[4];
    char codigo1[20] ;
    char cidade1[20] ;
    unsigned long int populacao1;
    float area1;
    float pib1;
    int NumeroDePontosTuristicos1;
    float densidadePopulacional1;//AQUI O CODIGO FAZ A DIVISÃO DA POPULAÇÃO PELA AREA
    float densidadePopulacionalInvertido1;//AQUI O CODIGO FAZ A DIVISÃO DA POPULAÇÃO POR 1 PARA INVERTER O RESULTADO  
    float pibPerCapita1;//AQUI O CODIGO FAZ A DIVISÃO DO PIB PELA POPULAÇÃO
    float resultadoSuperPoder1;

    // Variaveis da carta 2
    int JOGADOR2;//VARIAVEL PARA UTILIZAR O MENU INTERATIVO
    char carta2[4];
    char estado2[4];
    char codigo2[20] ;
    char cidade2[20] ;
    unsigned long int populacao2;
    float area2;
    float pib2;
    int NumeroDePontosTuristicos2;
    float densidadePopulacional2;//AQUI O CODIGO FAZ A DIVISÃO DA POPULAÇÃO PELA AREA
    float densidadePopulacionalInvertido2 ;//AQUI O CODIGO FAZ A DIVISÃO DA POPULAÇÃO POR 1 PARA INVERTER O RESULTADO
    float pibPerCapita2;//AQUI O CODIGO FAZ A DIVISÃO DO PIB PELA POPULAÇÃO
    float resultadoSuperPoder2;

//VARIAVEIS DE COMPARAÇÃO
//ESTAS VARIAVEIS FARAM A COMPARAÇÃO ENTRE AS CARTAS DOS JOGADORES 1 E 2
int resultadoPopulacao;
int resultadoArea;
int resultadoPIB;
int resultadoPontosTuristicos;
int resultadoDensidadePopulacional;
int resultadoPIbPerCapita;
float resultadoFinalSuperPoder;
//FIM DAS VARIAVEIS DE COMPARAÇÃO

//MONTAGEM DA CARTA DO JOGADOR NUMERO 1

printf("****JOGO SUPER TRUNFO****\n\n");

    printf("Jogador 1 é a sua vez\n\n");
printf("JOGADOR 01 \n digite o numero da sua carta: \n");
scanf("%s",carta1);

printf("JOGADOR 01 \n digite o estado da sua carta: \n");
scanf("%s",estado1);

printf("JOGADOR 01 \n digite o código da sua carta: \n");
scanf("%s",codigo1);

printf("JOGADOR 01 \n digite a cidade da sua carta: \n");
scanf("%s",cidade1);

printf("JOGADOR 01 \n digite o numero de Habitantes da cidade em sua carta: \n");
scanf("%u",&populacao1);

printf("JOGADOR 01 \n digite o tamanho da cidade em sua carta: \n");
scanf("%f",&area1 );

printf("JOGADOR 01 \n digite o pib da cidade em sua carta: \n");
scanf("%f",&pib1);

printf("JOGADOR 01 \n digite o numero de pontos turisticos na cidade em sua carta: \n");
scanf("%i",&NumeroDePontosTuristicos1);
//AQUI SÃO FEITOS OS CALCULOS ANTES DO ENCERRAMENTO DA MONTAGEM DA CARTA.
densidadePopulacional1 = (float)populacao1 / area1;
densidadePopulacionalInvertido1 = (float)populacao1 / 1;
pibPerCapita1 = (float)pib1 / populacao1;
//FIM DA MONTAGEM DA CARTA DO JOGADOR 1

printf("Agora é a vez do JOGADOR 2\n\n");//Texto informando que é a vez do proximo jogador

//MONTAGEM DA CARTA DO JOGADOR NUMERO 2

printf("JOGADOR 02 \n digite o numero da sua carta: \n");
scanf("%s",carta2);

printf("JOGADOR 02 \n digite o estado da sua carta: \n");
scanf("%s",estado2);

printf("JOGADOR 02 \n digite o código da sua carta: \n");
scanf("%s",codigo2);

printf("JOGADOR 02 \n digite a cidade da sua carta: \n");
scanf("%s",cidade2);

printf("JOGADOR 02 \n digite o numero de Habitantes da cidade em sua carta: \n");
scanf("%u",&populacao2);

printf("JOGADOR 02 \n digite o tamanho da cidade em sua carta: \n");
scanf("%f",&area2 );

printf("JOGADOR 02 \n digite o pib da cidade em sua carta: \n");
scanf("%f",&pib2);

printf("JOGADOR 02 \n digite o numero de pontos turisticos na cidade em sua carta: \n");
scanf("%i",&NumeroDePontosTuristicos2);
//AQUI SÃO FEITOS OS CALCULOS ANTES DO ENCERRAMENTO DA MONTAGEM DA CARTA.
densidadePopulacional2 = (float)populacao2 / area2;
densidadePopulacionalInvertido2 = (float)populacao2 / 1;
pibPerCapita2 = (float)pib2 / populacao2;
//FIM DA MONTAGEM DA CARTA DO JOGADOR 2

//CALCULOS DAS VARIAVEIS DE COMPARAÇÃO
resultadoPopulacao = populacao1 > populacao2;
resultadoArea = area1 > area2;
resultadoPIB = pib1 > pib2;
resultadoPontosTuristicos = NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2;
resultadoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
resultadoPIbPerCapita = pibPerCapita1 > pibPerCapita2;
resultadoSuperPoder1 = populacao1 + area1 + pib1 + NumeroDePontosTuristicos1 + pibPerCapita1 + densidadePopulacionalInvertido1 ;
resultadoSuperPoder2 = populacao2 + area2 + pib2 + NumeroDePontosTuristicos2 + pibPerCapita2 + densidadePopulacionalInvertido2 ;
resultadoFinalSuperPoder = resultadoSuperPoder1 > resultadoSuperPoder2;
//FIM DOS CALCULOS DE COMPARAÇÃO

printf("****INFORMAÇÕES DAS CARTAS****\n\n");

printf("CARTA DO JOGADOR 01 \n\nCARTA: %s\nEstado:%s\nCódigo:%s\nCidade: %s\nPopulação:%lu\nArea: %.2f Km²\nPib: %.2f bilhões de reais\nNumero de pontos turisticos:%i\nDensidade populacional: %.2f hab/Km²\nPib per capita: %.2f reais\nSuper poder: %.2f\n\n",
    carta1,estado1,codigo1,cidade1,populacao1,area1,pib1,NumeroDePontosTuristicos1,densidadePopulacional1,pibPerCapita1,resultadoSuperPoder1);

printf("CARTA DO JOGADOR 02 \n\nCARTA: %s\nEstado:%s\nCódigo:%s\nCidade: %s\nPopulação:%lu\nArea: %.2f Km²\nPib: %.2f bilhões de reais\nNumero de pontos turisticos:%i\nDensidade populacional: %.2f hab/Km²\nPib per capita: %.2f reais\nSuper poder: %.2f\n\n",
    carta2,estado2,codigo2,cidade2,populacao2,area2,pib2,NumeroDePontosTuristicos2,densidadePopulacional2,pibPerCapita2,resultadoSuperPoder2);

    printf("****COMPARAÇÃO ENTRE AS CARTAS****\n\n");
    printf("Se o resultado for igual a 1 o atributo vencedor da comparação sera da carta do JOGADOR 1\n");
    printf("Se o resultado for igual a 0 o atributo vencedor da comparação sera da carta do JOGADOR 2\n\n");

    printf("POPULAÇÃO: VENCEU(%lu)\n",resultadoPopulacao);
    printf("ÁREA: VENCEU(%i)\n",resultadoArea);
    printf("PIB: VENCEU(%i)\n",resultadoPIB);
    printf("PONTOS TURISTICOS: VENCEU(%i)\n",resultadoPontosTuristicos);
    printf("DENSIDADE POPULACIONAL: VENCEU(%i)\n",resultadoDensidadePopulacional);
    printf("PIB PER CAPITA: VENCEU(%i)\n",resultadoPIbPerCapita);
    printf("SUPER PODER: VENCEU(%.0f)\n\n",(float)resultadoFinalSuperPoder);

    printf("****COMPARAÇÃO DE ATRIBUTO : ÁREA****\n\n");
    printf("CARTA 1- %s (%s): %.2f\n",cidade1,estado1,area1);
    printf("CARTA 2- %s (%s): %.2f\n",cidade2,estado2,area2);
    if(area1 > area2){
        printf("RESULTADO: CARTA 1- (%s) venceu!",cidade1);
    }else{
        printf("RESULTADO: CARTA 2- (%s) venceu!\n",cidade2);
    }

    // NESTA ETAPA TEM O SEGUNDO METODO DE COMPARAÇÃO 
    printf("***COMPARAÇÃO NIVEL 2 ***\n\n");
    printf("Escolha uma opção:\n");
    printf("1.AREA\n");
    printf("2.POPULAÇÃO\n");
    printf("3.PIB\n");
    printf("4.PONTOS TURISTICOS\n");
    printf("5.DENSIDADE DEMOGRAFICA\n");
    printf("Escolha:\n");
    scanf("%d",&JOGADOR1);

    

    switch (JOGADOR1)
    {
    case 1: //AREA
    if (area1 > area2){
        printf("jogador 1 cidade escolhida %s - jogador 2 cidade escolhida %s\n", cidade1,cidade2);
        printf("atributo Escolhido - Area\n");
        printf("jogador 1 Area:%f - jogador 2 Area:%f\n",area1,area2);
        printf("%s tem a maior area\n",cidade1); 
        }else if(area1 < area2)
        printf("%s tem a menor area\n",cidade2); 
       else if (area1 == area2)
       {
        printf("###EMPATE###");  
       }
        break;
        case 2://POPULAÇÃO
        if (populacao1 > populacao2){
            printf("jogador 1 cidade escolhida %s - jogador 2 cidade escolhida %s\n", cidade1,cidade2);
            printf("atributo Escolhido - população\n");
            printf("jogador 1 população:%u - jogador 2 população:%u\n",populacao1,populacao2);
            printf("%s tem a maior população\n",cidade1); 
         } else if(populacao1 < populacao2)
        printf("%s tem a menor população\n",cidade2); 
       else if (populacao1 == populacao2)
       {
        printf("###EMPATE###"); 
       }      
       break;
        case 3://PIB
        if (pib1 > pib2){
            printf("jogador 1 cidade escolhida %s - jogador 2 cidade escolhida %s\n", cidade1,cidade2);
            printf("atributo Escolhido - PIB\n");
            printf("jogador 1 PIB:%f - jogador 2 PIB:%f\n",pib1,pib2);
            printf("%s tem o maior PIB\n",cidade1); 
         } else if(pib1 < pib2)
        printf("%s tem o menor PIB\n",cidade2); 
       else if (pib1 == pib2)
       {
        printf("###EMPATE###"); 
       } 
       break;
        case 4://PONTOS TURISTICOS
        if (NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2){
            printf("jogador 1 cidade escolhida %s - jogador 2 cidade escolhida %s\n", cidade1,cidade2);
            printf("atributo Escolhido - PONTOS TURISTICOS\n");
            printf("jogador 1 PONTOS TURISTICOS:%i - jogador 2 PONTOS TURISTICOS:%i\n",NumeroDePontosTuristicos1,NumeroDePontosTuristicos2);
            printf("%s tem o maior numero de pontos turisticos\n",cidade1); 
         } else if(NumeroDePontosTuristicos1 < NumeroDePontosTuristicos2)
        printf("%s tem o menor numero de pontos turisticos\n",cidade2); 
       else if (NumeroDePontosTuristicos1 == NumeroDePontosTuristicos2)
       {
        printf("###EMPATE###"); 
       }
       break;
        case 5://DENSIDADE DEMOGRAFICA
        if (densidadePopulacionalInvertido1 < densidadePopulacionalInvertido2){
            printf("jogador 1 cidade escolhida %s - jogador 2 cidade escolhida %s\n", cidade1,cidade2);
            printf("atributo Escolhido - DENSIDADE DEMOGRAFICA \n");
            printf("jogador 1 DENSIDADE DEMOGRAFICA:%.2f - jogador 2 DENSIDADE DEMOGRAFICA:%.2f\n",densidadePopulacionalInvertido1,densidadePopulacionalInvertido2);
            printf("%s tem a maior DENSIDADE DEMOGRAFICA\n",cidade1); 
         } else if(densidadePopulacionalInvertido1 > densidadePopulacionalInvertido2)
        printf("%s tem a menor DENSIDADE DEMOGRAFICA\n",cidade2); 
       else if (densidadePopulacionalInvertido1 == densidadePopulacionalInvertido2)
       {
        printf("###EMPATE###"); 
       }        
    }

    return 0;
}

//FIM DO CODIGO