#include "libft.h"

int	is_c_found(const char *set, char c)
{	
	while (*set)
	{
		if (*set++ == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{	
	char	*trimed;
	int		skip_start;
	int		s_len;

	if (!s1)
		return (0);
	skip_start = 0;
	s_len = (int)ft_strlen(s1) - 1;
	while (is_c_found(set, s1[skip_start]))
		skip_start++;
	while (s_len > 0 && is_c_found(set, s1[s_len]))
		s_len--;
	if (s_len == 0)
		return (ft_strdup(""));
	trimed = ft_substr(s1, skip_start, (s_len + 1) - skip_start);
	if (!trimed)
		return (ft_strdup(""));
	
	return (trimed);
}

// int main()
// {
// 	char *res = ft_strtrim("           ", " ");

// 	printf("%s\n", ft_strtrim("   xxx   xxx", " x"));
// 	printf("%s\n", ft_strtrim("", " "));
// 	// 	for (size_t i = 0; i < ft_strlen(res); i++)
// 	// {
// 	// 		printf("ASCII : %d || CHAR : %c \n",res[i],res[i]);
// 	// }
// }