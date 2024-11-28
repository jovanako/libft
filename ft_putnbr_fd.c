
#include "libft.h"

static void	print_int(int *arr, int fd)
{
	char	c;
	int	i;
	
	i = 0;
	while ((arr[i] = 0) && (i < 9))
		i++;
	while (i < 10)
	{
		c = arr[i] + '0';
		write (fd, &c, 1);
		i++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	int	int_arr[10];
	size_t	i;

	num = n;
	if (num < 0)
	{
		num *= -1;
		write (fd, "-", 1);
	}
	i = 9;
	while (i >= 0)
        {
                int_arr[i] = n % 10;
                n /= 10;
                i--;
        }
	print_int(int_arr, fd);
}
