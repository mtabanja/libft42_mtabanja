#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*sub_str;

	i = 0;
	if(len > ft_strlen(s))
		len = ft_strlen(s);
	sub_str = malloc((len + 1) * sizeof(char));
	if (!sub_str || !s)
		return (0);

	if (start > ft_strlen((char *)s))
	{
		sub_str[i] = 0;
		return (sub_str);
	}
	while (len--)
		sub_str[i++] = s[start++];
	sub_str[i] = 0;
	return (sub_str);
}
// int main() 
// {

// 	char *s = "MOUAZ";
//     char *res1 = ft_substr(s,1,2);
// 	// char *res2 = substr(s,4,5);
//     // printf("%d",res1[0]);
//     printf("%s\n",res1);
//     printf("======================\n");
//     // printf("%s\n",src);
//     // printf("%s\n",src1);
//     // printf("======================\n");
//     // printf("%s\n",src);
//     // printf("%s\n",src1);
// }