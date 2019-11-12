#include <stdio.h>
#include <stdlib.h>


//monety 1 gr, 2 gr, 5 gr, 10 gr, 20 gr, 50 gr, 1 zł, 2 zł, 5 zł
//banknoty 10 zł, 20 zł, 50 zł, 100 zł, 200 zł
int main()
{
    int zloty,groszy;
    printf("Podaj liczbe zloty: ");
    scanf("%d",&zloty);
    printf("Podaj liczbe groszy: ");
    scanf("%d",&groszy);

    const int banknoty[5] = {200,100,50,20,10};
    const int monety[9]={500,200,100,50,20,10,5,2,1};
    int wynikBanknot[5];
    int wynikMonet[9];
    int temp, reszta;
    for(int i = 0 ; i<5;i++)
    {
        reszta = zloty%banknoty[i];
        temp = zloty/banknoty[i];
        wynikBanknot[i] =temp;
        zloty = reszta;
    }
    if(zloty < 10)
    {
            groszy += (zloty*100);

    }
    for(int i = 0 ; i < 9;i++)
    {
        reszta = groszy%monety[i];
        temp = groszy/monety[i];
        wynikMonet[i]= temp;
        groszy = reszta;
    }

    printf("Banknoty: \n");
    for(int i = 0 ; i<5;i++){
        if(wynikBanknot[i]!=0)
        printf("%d x %d zloty \n",wynikBanknot[i],banknoty[i]);
    }
    printf("\n Monety: \n");
    for(int i = 0;i<3;i++)
    {
        if(wynikMonet[i]!=0)
        printf("%d x %d zloty \n",wynikMonet[i],monety[i]/100);
    }
    for(int i = 3; i < 9 ; i++)
    {
        if(wynikMonet[i]!=0)
        {
            printf("%d x %d groszy \n",wynikMonet[i],monety[i]);
        }
    }
    return 0;
}
