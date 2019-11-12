#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int sumdziel(int a)
{
	int i;
	int sum = 1;
	for (i = 2; i*i <= a; i++)
	{
		if (a%i == 0)
		{
			sum += i + a / i;
		}
	}
	return sum;
}

int main()
{
	int k = 0;
	// dla doskonalych
	int omega[5];
	for (int i = 0; i < 5; i++)
		omega[i] = 0;
	// dla pary liczba-suma dzielników
	int* test = (int*)malloc(1000 * sizeof(int));
	for (int i = 1; i <= 1000; i++)
	{
		test[i] = sumdziel(i);
		if (i == test[i] && i > 1)
		{
			omega[k] = i;
			k++;
		}
	}
	printf("Liczby doskonale: \n");
	for (int i = 0; i < k; i++)
	{
		printf("%d\n", omega[i]);

	}

    printf("Liczby zaprzyjaznione: \n");
	for (int i = 1; i <= 1000; i++)
	{
	    int temp = test[i];
			if (i == sumdziel(sumdziel(i))&&i != sumdziel(i))
				printf("(%d %d)", i,sumdziel(i));

	}

	return 0;
}

