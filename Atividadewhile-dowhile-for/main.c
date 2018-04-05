#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao, voto1 = 0, voto2 = 0;
    float porcvoto1, porcvoto2;
    do{
    printf("Bem vindo a votação!\n");
    printf("Escolha para votar:\n");
    printf("Escolha '1' para votar em Fulano\n Escolha '2' para votar em Beltrano \n OU Escolha 0 para sair do programa: ");
    scanf("%i", &opcao);
    if(opcao > 2 || opcao < 0)
        printf("ERRO NA OPÇAO, selecione numeros validos!\n");
    else if(opcao == 0)
        printf("FIM DO PROGRAMA\n");
    else {
        if(opcao == 1)
            voto1++;
        else
            voto2++;
        porcvoto1 = 100.0 * voto1 / (voto1 + voto2);
        porcvoto2 = 100.0 * voto2 / (voto1 + voto2);
        printf("Votos do Fulano: %.1f %%\n", porcvoto1);
        printf("Votos do Beltrano: %.1f %%\n", porcvoto2);
    }}
    while(opcao !=0);

    return 0;
}
