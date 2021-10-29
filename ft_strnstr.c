#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j]
			&& little[j] && i + j < len)
			j++;
		if (!little[j])
			return ((char *)(big + i));
		i++;
	}
	return (0);
}

// int main()
// {
//     // char big[100] = "ABCDEFGs";
//     // char little[100] = "EFG";

//     // char big1[100] = "ABCDE";
//     // char little1[100] = "EFG";

//     // int len = 5;

//     // char *res1 = ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
//     // char *res2 = strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);

//     // printf("===========\n");
// 	char *s1 = "A";
// 	char *i1 = strnstr(s1, s1, 2);
// 	char *i2 = ft_strnstr(s1, s1, 2);

// 	printf("%s\n",i1);
//     printf("%s\n",i2);

// }