#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	nbf;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		nbf = nb * ft_recursive_factorial(nb - 1);
	return (nbf);
}

// 0! = 1
// 3! = 3*2*1 = 6
// 4! = 4*3*2*1 = 24
int	main(void)
{
	printf("%d\n", ft_recursive_factorial(4));
}