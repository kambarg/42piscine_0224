#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int res;

    if (nb < 0)
    {
        return (0);
    }
    else if (nb == 0)
		return (1);
	else
        res = 1;
        while (nb > 0)
        {
            res = res * nb;
            nb--;
        }
        return (res);
}

// 0! = 1
// 3! = 3*2*1 = 6
// 4! = 4*3*2*1 = 24
int main (void)
{
    int myn;
    int f;

    myn = 4;
    f = ft_iterative_factorial(myn);
    printf("myn = %d, myn! = %d\n", myn, f);
}