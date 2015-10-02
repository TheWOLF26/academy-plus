#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_reverse_alphabet(void)
{
	int x;

	x = 'z';
	while (x >= 'a')
	{
		ft_putchar(x);
		x--;
	}
}

int	main(void)
{
	ft_reverse_alphabet();
	ft_putchar('\n');
	return (0);
}
