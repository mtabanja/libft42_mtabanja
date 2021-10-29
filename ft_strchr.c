#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0 ;
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (0);
}

// int main()
// {
//     // char big[100] = "ABCDEFGs";
//     // char little[100] = "EFG";
//     // char big1[100] = "ABCDE";
//     // char little1[100] = "EFG";
//     char *res1 = ft_strchr("AB", 'A');
//     char *res2 = strchr("AB", 'A');
//     printf("===========\n");
//     printf("%s\n",res1);
//     printf("%s\n",res2);

// }