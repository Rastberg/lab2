#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int NWD(int x,int y)
{
    while(y!=0)
    {
    int temp;
    temp = y;
    y = x%y;
    x = temp;
    }
    return x;
}
int RoN(int n)
{
    int counter = 0;
    for(int i = 2 ; i < n;i++)
    {
        for(int j = 2;j<n;j++)
        {
        if(NWD(i,j)==1)
            counter++;
        }
    }
  return counter;
}
int main()
{

    FILE *fp;
     if ((fp=fopen("test.txt", "w"))==NULL) {
     printf ("Nie mogę otworzyć pliku test.txt do zapisu!\n");
     exit(1);
     }
    int n = 2;
    while(n<=1000)
    {
        double k = (double)RoN(n)/(n*n);
        fprintf(fp,"%d;%lf\n",n,(double)k);
        n++;
    }



   // printf("%d",RoN(100));
    return 0;
}
