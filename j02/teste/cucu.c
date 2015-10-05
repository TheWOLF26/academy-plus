#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int    *ft_sort_integer_table(int *tab, int size)
{
        int i;
        int j;

        i = 0;
        while (i < size)
        {
                j = i + 1;
                while (j < size)
                {
                        if (tab[i] > tab[j])
                                ft_swap(&tab[i], &tab[j]);
                        j++;
                }
                i++;
        }
	return (tab);
}

int	main(void)
{
	int tab[] = {10, 7, 9, 0, 11,5 ,6 ,54 ,4 ,6 ,8, 4, 6, 4, 7,8 ,9 ,4 ,34,7 ,9 ,43,7};
	int l;
	int i;

	i = 0;
	l = 23;
	printf("%d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	ft_sort_integer_table(tab, l);
	//printf("%d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	while (i < l)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (tab[i<l]) //do not appear?!?!?!
	{
		printf("%d ", tab[i]);	
		i++;
	}
	printf("\n");
	return (0);
}
