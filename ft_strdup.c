#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*str2;
	int		i;

	str2 = (char *)malloc(sizeof(char) * (ft_strlen(str1) + 1));
	if (str2 == NULL)
		return (0);
	i = 0;
	while (str1[i])
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = 0;
	return (str2);
}

// int main()
// {
//     char src[100] = "abcdefghij";

//     char src1[100] = "abcdefghij";

//     char *res1 = ft_strdup(src);
//     char *res2 = strdup(src1);
//     printf("%s\n",res1);
//     printf("%s\n",res2);
// }