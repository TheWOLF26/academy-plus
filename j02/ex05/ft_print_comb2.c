#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int x;
	int y;

	a = '0';
	b = '0';
	x = '0';
	y = '1';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (x <= '9')
			{
				while (y <= '9')
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(' ');
					ft_putchar(x);
					ft_putchar(y);
					if (a == '9' && b == '8')
						ft_putchar ('\n');
					else
						write(1, ", ", 2);
 					y++;
				}
			x++;
			if (a != '0' && b == '0')
				y = b + 1;
			else
				y = '0';
			}
		b++;
		x = a;
		y = b + 1;
		}
	a++;
	b = '0';
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
