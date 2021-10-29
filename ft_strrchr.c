#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	str_len;

	str_len = ft_strlen((char *)s);
	while (str_len >= 0)
	{
		if (s[str_len] == (char) c)
			return ((char *)(s + str_len));
		str_len--;
	}
	return (0);
}

// int main()
// {
//     // char big[100] = "ABCDEFGs";
//     // char little[100] = "EFG";

//     // char big1[100] = "ABCDE";
//     // char little1[100] = "EFG";

//     char *res1 = ft_strrchr("1263456789", '6');
//     char *res2 = strrchr("1263456789", '6');

//     printf("===========\n");

//     printf("%s\n",res1);
//     printf("%s\n",res2);

// }