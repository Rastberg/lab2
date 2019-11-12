#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 1;
    double suma = 1;
    while(suma <=10)
    {
        n++;
        suma += (1.0/n);
    }
    printf("%d - najmniejszy n",n);
    return 0;
}
