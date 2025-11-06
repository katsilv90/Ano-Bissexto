#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;

    printf("Insira um ano: ");
    scanf("%d", &ano);


    if(ano%400==0 || (ano%100!=0 && ano%4==0)){
        printf("Ano %d e bissexto",ano);
    }
    else{
        printf("Ano %d nao e bissexto",ano);
    }



    /** \brief
     *  Outra forma de fazer
     * \param
     *
     if(ano%400==0){
        printf("Ano %d e bissexto",ano);
    }
    else if (ano%100==0){
        printf("Ano %d nao e bissexto",ano);
    }
    else if (ano%4==0){
        printf("Ano %d  e bissexto",ano);
    }
    else  {
        printf("Ano %d nao e bissexto",ano);
    }
     */

    return 0;
}


