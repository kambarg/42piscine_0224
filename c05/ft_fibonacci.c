#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	f_index;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		f_index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (f_index);
}

// index:      0 1 2 3 4 5 6  7  8
// F sequence: 0 1 1 2 3 5 8 13  21 
int	main(void)
{
	printf("%d\n", ft_fibonacci(7));
}