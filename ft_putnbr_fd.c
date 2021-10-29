#include "libft.h"

int	get_nbr_len(int n)
{
	int	nbr_len;

	nbr_len = 0;
	if (n < 0)
		nbr_len++;
	while (n)
	{
		n = n / 10;
		nbr_len++;
	}
	return (nbr_len);
}

void	copy_nbr_to_str(int n, char str[])
{
	int	nbr_len;
	int	minus;

	minus = 0;
	nbr_len = get_nbr_len(n);
	ft_bzero(str, 13);
	if (n < 0)
		n = n * --minus;
	nbr_len--;
	while (nbr_len >= 0)
	{
		if (nbr_len == 0 && minus == -1)
		{
			str[0] = '-';
			break ;
		}
		str[nbr_len--] = (n % 10) + '0';
		n = n / 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char	str[13];
	int		i;

	i = 0;
	if (n == 0)
		write(fd, "0", 1);
	else if (n <= -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		copy_nbr_to_str(n, str);
		while (str[i])
			write(fd, &str[i++], 1);
	}
}

// int main()
// {
//    ft_putnbr_fd(0,1);
// }

// int		main(int argc, const char *argv[])
// {
// 	int		arg;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	else if ((arg = atoi(argv[1])) == 1)
// 		ft_putnbr_fd(0, 2);
// 	else if (arg == 2)
// 		ft_putnbr_fd(5, 1);
// 	else if (arg == 3)
// 		ft_putnbr_fd(-5, 2);
// 	else if (arg == 4)
// 		ft_putnbr_fd(42, 1);
// 	else if (arg == 5)
// 		ft_putnbr_fd(-57, 2);
// 	else if (arg == 6)
// 		ft_putnbr_fd(164189, 1);
// 	else if (arg == 7)
// 		ft_putnbr_fd(-987441, 2);
// 	else if (arg == 8)
// 		ft_putnbr_fd(2147483647, 1);
// 	else if (arg == 9)
// 		ft_putnbr_fd(-2147483648LL, 2);
// 	return (0);
// }
