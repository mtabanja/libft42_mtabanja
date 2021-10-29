#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		len;
	int		i;

	if (!s1 || !s2)
		return (0);
	len = (ft_strlen((char *)s1) + ft_strlen((char *)s2)) + 1;
	join = malloc(len * sizeof(char));
	if (!join)
		return (0);
	i = 0;
	while (len-- && *s1)
		join[i++] = *s1++;
	while (len--)
		join[i++] = *s2++;
	join[i] = 0;
	return (join);
}

// int main()
// {
// 	char *res = ft_strjoin("MOUAZ", "TAB");

// 	printf("%s\n",res);
// 	printf("%c",res[7]);

// }