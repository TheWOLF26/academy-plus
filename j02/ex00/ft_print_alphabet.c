#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int x;

	x = 'a';
	while (x <= 'z')
	{	
		ft_putchar(x);
		x++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}
