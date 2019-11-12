#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 0;
    int n;
    double temp,wynik;
    double sum = 0;
    printf("podaj liczbę naturalną n: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("n musi byc większe od 0");
        return 1;
    }
    while(counter<n)
    {
        printf("podaj liczbę rzeczywistą dla wyliczenia śriedniej");
        printf("(jeszcze %d)",n-counter);
        scanf("%lf",&temp);
        sum += temp;
        counter++;
        printf("\n");
    }
    printf("\n\n");
    wynik =  sum / n;
    printf("Sriednia arytmetyczna: %lf",wynik);
    return 0;
}
