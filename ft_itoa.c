#include "libft.h"

int	get_n_len(int n)
{
	int	n_len;

	n_len = 0;
	if (n < 0)
		n_len++;
	while (n)
	{
		n = n / 10;
		n_len++;
	}
	return (n_len);
}

char	*allocate(int n)
{
	char	*res;
	int		n_len;

	n_len = get_n_len(n);
	res = malloc((n_len + 1) * sizeof(char));
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		minus;
	int		n_len;

	if (n == 0)
		return (ft_strdup("0"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	minus = 0;
	res = allocate(n);
	n_len = get_n_len(n);
	if (!res)
		return (0);
	if (n < 0)
	{
		n = n * --minus;
		res[0] = '-';

	}
	res[n_len--] = 0;
	while (n)
	{
		res[n_len--] = (n % 10) + '0';
		n = n / 10;
	}
	return (res);
}

// int main()
// {

// 	printf("%s",ft_itoa(-2147483648));
// }
