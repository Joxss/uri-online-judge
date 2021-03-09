#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[12];
    scanf("%s",nome);
    if((strcmp(nome,"vertebrado"))==0)
    {
        scanf("%s",nome);
        if((strcmp(nome,"ave"))==0)
        {
            scanf("%s",nome);
            if((strcmp(nome,"carnivoro"))==0)
                printf("aguia\n");
            else if((strcmp(nome,"onivoro"))==0)
                printf("pomba\n");
        }
        else if((strcmp(nome,"mamifero"))==0)
        {
            scanf("%s",nome);
            if((strcmp(nome,"onivoro"))==0)
                printf("homem\n");
            else if((strcmp(nome,"herbivoro"))==0)
                printf("vaca\n");
        }
    }
    else if((strcmp(nome,"invertebrado"))==0)
        scanf("%s",nome);
        if((strcmp(nome,"inseto"))==0)
        {
            scanf("%s",nome);
            if((strcmp(nome,"hematofago"))==0)
                printf("pulga\n");
            else if((strcmp(nome,"herbivoro"))==0)
                printf("lagarta\n");
        }
        else if((strcmp(nome,"anelideo"))==0)
        {
            scanf("%s",nome);
            if((strcmp(nome,"hematofago"))==0)
                printf("sanguessuga\n");
            else if((strcmp(nome,"onivoro"))==0)
                printf("minhoca\n");
        }
}