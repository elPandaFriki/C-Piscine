#include <stdio.h>
#include <stdlib.h>

void ft_swap(int *a, int *b)
{
	int	c;

	c = a;
	a = b;
	b = c;
}

int main(void)
{
	int *a = malloc(sizeof(int));
	int *b = malloc(sizeof(int));
	
	printf("Insert your first number: ");
	scanf("%d", a);
	printf("\nInsert your second number: ");
	scanf("%d", b);
	printf("\nYou have inserted %d as your first and %d as your second.\n\nLET'S SWAP THEM!\n", *a, *b);
	ft_swap(a, b);
	printf("\nSwap done!\n\nNow you have %d as your first and %d as your second\n", *a, *b);
	free(a);
	free(b);
	return (0);
}