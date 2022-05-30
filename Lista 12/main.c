#include <stdio.h>
#include <stdlib.h>

int main()
{
    escreveMenu();
    leiaMenu();
    return 0;
}

void escreveMenu(){
    printf("\nDIGITE QUAL ITEM DO MENU VC DESEJA: ");
    printf("\n\t0. Sair do programa");
    printf("\n\t1. Inicializar ambiente");
    printf("\n\t2. Ler time");
    printf("\n\t3. Escrever time");
    printf("\n\t4. Pesquisar percentual");
}

int leiaMenu(){
    printf("\nDIGITE O NUMERO -> ");
    int menu;
    scanf("%i", &menu);
    return menu;
}

FILE* criaArquivo (char* arq){
    FILE* arquivo;
    arquivo = fopen("time.dat", "w");
    return arquivo;
}

void leTimes (FILE* arq){
    char time = toupper (time);
    printf("\n C -> Cruzeiro");
    printf("\n A -> Atletico");
    printf("\n O -> Outros");
    printf("\n S -> Sair");
    printf("\n\tDigite o time ->");
    scanf("%c", &time);
    char flag = 'S';
    while (time != flag){
        fprintf(arq, "%c", time);
        printf("\n\tDigite o time ->");
        scanf("%c", &time);
    }
    fclose(arq);
}

void escreveTime(FILE* arq){
    fopen("time.dat", "r");
    char time;
    while(!(feof)){
    fscanf(arq, "%c", &time);
    if(time == 'C') printf ("\n Cruzeiro");
    else if(time == 'A') printf ("\n Atletico");
    else if(time == 'O') printf ("\n Outros");
    }

}


