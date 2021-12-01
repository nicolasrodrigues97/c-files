#include <stdio.h>

int main()
{
	int n, i;
	printf("Amount: \n");
	scanf("%d", &n);
	while (n < 1)
	{
		printf("The amount must be equal or greater than 1. Type the value of N: \n");
		scanf("%d", &n);
	}

	printf("Fibonacci series up to %d: \n", n);
	for (i = 0; i<n; i++)
	{
		printf("%d ", fib(i));
	}
	return 0;
}

int fib(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
