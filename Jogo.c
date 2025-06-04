/*Não utilizar !!

- estruturas de repetição (for) (while) (do while)

- estruturas de condição (if) (else)

// ultimo desáfio

// super poder!!

// e comparar
*/

#include <stdio.h>
int main(){

    // entrada e tipo de dados das cartas
    int EscolhaCarta;

    // informações das carta 1 !!

    // tipos de dados = strings 
    char poa [20] = "Porto Alegre"; // cidade da carta
    char rs [20] = "rs"; // estado da carta => RS : Rio Grande do Sul

    // carta numero 1
    int i = 1;

    // tipos de dados = inteiro
    int populacaoPoa = 130000;// população de porto alegre
    int pontosPoa = 50; // pontos turisticos de porto alegre

    // tipos de dados = flutuante
    float AreaPoa = 496.8; // area de porto alegre
    float pibPoa = 54.64738; // pib percapita de porto alegre

    // informções da carta 2 !!
    // segunda carta !!
    // carta numero 2

    // variaveis novas do desafío !!
    float pibPerPoa = pibPoa / populacaoPoa; // pib percapita
    float DensidadePopuPoa = populacaoPoa / AreaPoa; // densidade populacional  

    // super poder de porto alegre
    float SuperPoa = populacaoPoa + pontosPoa + AreaPoa + pibPoa + pibPerPoa + DensidadePopuPoa;

    // carta 2
    int j = 2;

    // tipo de dado char => string
    char rj [20] = "rj"; // estado da carta => RJ; : Rio de janeiro
    char cidadeRio [20] = "Tijuca"; // cidade da carta => Tijuca

    // tipo de dados int => inteiro
    int populacaoRj = 394037; // população da Tijuca
    int pontosRj = 30; // pontos turisticos da Tijuca

    // tipo de dados float => flutuante
    float areaRj = 100; // area da Tijuca
    float pibRj = 4.373; // pib da Tijuca
    
    // variaveis novas !!
    float pibPerRj = pibRj / populacaoRj; // pib / população
    float densidadePopuRj = populacaoRj / areaRj; // população / area

    // super poder
    int superRj = populacaoRj + pontosRj + areaRj + pibRj + densidadePopuRj + pibPerRj;

    // comparações
    int comparaPopulacao = populacaoPoa > populacaoRj;
    int pontosCompara = pontosPoa > pontosRj;
    float areaCompara = AreaPoa > areaRj;
    float pibCompara = pibPoa > pibPoa;
    float Percompara = pibPerPoa > pibPerRj;
    float densidadeCompara = DensidadePopuPoa < densidadePopuRj;
    float superCompara = SuperPoa > superRj;
    // valores boleanos

    // imprimir + informações da carta 1!!
    printf("Bem vindo ao jogo super trunfo...\n");
    printf("Informacoes da carta %d !!\n", i); // mostrar informações da carta 1
    printf("Cidade : %s, estado : %s\n", poa, rs); // nome e estado + tipos de dados char = strings
    printf("Populacao : %d, pontos turisticos : %d\n", populacaoPoa, pontosPoa);  // populacao da cidade e pontos turisticos
    //+ tipo de dados inteiros + int
    printf("area : %.2f, pib : %.5f\n", AreaPoa, pibPoa); // area da cidade e pib da cidade
    // tipos de dados flutuantes + float 
    printf("pib percapita %f, densidade populacioal : %f \n", pibPerPoa, DensidadePopuPoa); // pib percapita e densidade populacional
    printf("Super poder : %d\n", SuperPoa);
   printf("Informacoes da carta %d !!\n", j); // imprimir informações da carta 2!!
    printf("Cidade : %s, estado %s\n", cidadeRio, rj); // // nome + estado + tipos de dados char = strings
    printf("Populacao : %d, pontos turisticos : %d\n", populacaoRj, pontosRj);  // populção da cidade e pontos turisticos
    printf("area : %.2f, pib :%.3f\n", areaRj, pibRj); // area da cidade e pib
    printf("Pib percapita : %f, densidade populacional : %f\n", pibPerRj, densidadePopuRj);
    printf("Super poder : %d \n", superRj);
    printf("Qual carta voce escolhe !!\n"); // escolha 
    printf("1. carta %d...\n", i); // carta 1
    printf("2. carta %d...\n", j); // carta 2
    printf("Escolha : \n"); // escolha 1 ou 2
    scanf("%d", &EscolhaCarta); // entrada e saida de dados
    // valores boleanos
    printf("populacao porto alegre : %d maior que populacao do rio de janeiro : %d : valor boleano : %d \n", populacaoPoa, populacaoRj, comparaPopulacao); // 0 
    printf("pontos turisticos porto alegre : %d maior que pontos turisticos do rio de janeiro : %d : valor boleano : %d \n", pontosPoa, pontosRj, pontosCompara); // 1
    printf("area de porto alegre : %.2f : maior que a area do rio de janeiro :%.2f : valor boleano : %.0f \n ", AreaPoa, areaRj, areaCompara); // 1
    printf("pib de porto alegre : %f : maior que pib do rio de janeiro : %f : valor boleano : %.0f \n", pibPerPoa, pibPerRj, pibCompara); // 0
    printf("pib percapita de porto alegre : %f : maior que pib percapita do rio de janeiro : %f : valor boleano : %.0f\n", pibPerPoa, pibPerRj, Percompara); // 1
    printf("densidade demografica de porto alegre : %f : menor que densidade demografica do rio de janeiro : %f : valor boleano %.0f\n", DensidadePopuPoa, densidadePopuRj, densidadeCompara); // 1
    printf("Super poder porto alegre : %f : maior que super poder do rio de janeiro : %f : valor boleano : %.0f", SuperPoa, superRj, superCompara); 


 

    return 0;
}