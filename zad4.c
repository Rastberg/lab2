#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int PiN(int x)
{
    int counter = -2;
    bool liczby[x+1];
    for(int i = 0 ; i <= x; i++)
        liczby[i] = false;
    liczby[0] = false;
    liczby[1] = false;

    for(int i = 0 ; i <= sqrt(x);i++)
    {
        if(liczby[i])
        {
          for(int j = i*i;j<=x;j++)
          {
              liczby[j]=false;
              counter--;
          }

        }
    }
    return (x+counter);

}
int main()
{
    FILE *fp;
    if ((fp=fopen("test.txt", "w"))==NULL) {
     printf ("Nie mogę otworzyć pliku test.txt do zapisu!\n");
     exit(1);
     }
    int n = 2;
    while(n<=10000)
    {
        double k = (PiN(n)/n)*log((double)n);
        fprintf(fp,"%d;%lf\n",n,k);
        n++;
    }
    return 0;
}
