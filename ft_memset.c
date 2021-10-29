#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int	i;

	i = 0;
	while (n-- > 0)
	{
		*(unsigned char *)(str + i) = (unsigned char)c;
		i++;
	}
	return (str);
}

// int main()
// {
//     char str1[] = "1234";
//     char str2[] = "1234";

//     ft_memset(str1,'A',3);
//     memset(str2,'A',3);
//     printf("%s\n",str1);
//     printf("%s",str2);
// }