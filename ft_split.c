#include "libft.h"
#include <unistd.h>

size_t	char_count_in_word(const char *s, char c)
{
	size_t	word_count;

	word_count = 1;
	while (s[word_count])
	{
		if (s[word_count] == c)
			break ;
		word_count++;
	}
	return (word_count);
}

char	**allocate_mem(char *s, char c)
{
	char	**allocated;
	size_t	i;
	size_t	words_count;
	size_t	s_len;

	i = 0;
	words_count = 0;
	if (s[0] != c)
		words_count++;
	s_len = ft_strlen((char *)s);
	while (s[i])
	{
		if (s[i] == c && s[i] != s[i + 1] && i != s_len - 1)
			words_count++;
		i++;
	}
	allocated = malloc(sizeof(s) * (words_count + 1));
	if (!allocated)
		return (0);
	return (allocated);
}

char	*push_first_word(char *s, char c)
{
	size_t	s_len;
	size_t	i;

	i = 0;
	s_len = ft_strlen(s);
	while (s[i])
	{
		if (s[i] == c)
		{
			if (s[0] != c)
			{
				return (ft_substr(s, 0, i));
			}
		}
		i++;
	}
	return (0);
}

char	*no_match_return(char const *s, char c)
{
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	i = 0;
	while (s[i] && s[i] != c)
	{
		if (i + 1 == s_len)
		{
			return (ft_substr(s, 0, i + 1));
		}
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		j;
	size_t	i;
	size_t	s_len;

	j = 0;
	i = 0;
	s_len = ft_strlen((char *)s);
	ret = allocate_mem((char *)s, c);
	if (!ret)
		return (0);
	ret[j] = push_first_word((char *)s, c);
	if (ret[j])
		j++;
	ret[j] = no_match_return(s, c);
	if (ret[j])
		j++;
	while (s[i])
	{
		if (s[i] == c && s[i] != s[i + 1] && i != (s_len - 1))
			ret[j++] = ft_substr(s, (i + 1), char_count_in_word(s + i, c) - 1);
		i++;
	}
	ret[j] = 0;
	return (ret);
}

// int main()
// {
//     char **res = ft_split("Tripouille ", ' ');
//     int i = 0;

//     for (size_t i = 0; res[i]; i++)
//     {
// 		// for (size_t j = 0; res[i][j]; j++)
// 		// {
// 			printf("result array %zu : %s\n",i, res[i]);	
// 		// }
// 	}
// 		// printf("result array %d : %c\n",i, res[6][0]);	

// }

// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// int		main(int argc, const char *argv[])
// {
// 	char	**tabstr;
// 	int		i;
// 	int		arg;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	i = 0;
// 	if ((arg = atoi(argv[1])) == 1)
// 	{
// 		if (!(tabstr = ft_split("          ", ' ')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			while (tabstr[i] != NULL)
// 			{
// 				ft_print_result(tabstr[i]);
// 				write(1, "\n", 1);
// 				i++;
// 			}
// 		}
// 	}
// 	else if (arg == 2)
// 	{
// 		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			while (tabstr[i] != NULL)
// 			{
// 				ft_print_result(tabstr[i]);
// 				write(1, "\n", 1);
// 				i++;
// 			}
// 		}
// 	}
// 	else if (arg == 3)
// 	{
// 		if (!(tabstr = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			while (tabstr[i] != NULL)
// 			{
// 				ft_print_result(tabstr[i]);
// 				write(1, "\n", 1);
// 				i++;
// 			}
// 		}
// 	}
// 	else if (arg == 4)
// 	{
// 		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			while (tabstr[i] != NULL)
// 			{
// 				ft_print_result(tabstr[i]);
// 				write(1, "\n", 1);
// 				i++;
// 			}
// 		}
// 	}
// 	else if (arg == 5)
// 	{
// 		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			while (tabstr[i] != NULL)
// 			{
// 				ft_print_result(tabstr[i]);
// 				write(1, "\n", 1);
// 				i++;
// 			}
// 		}
// 	}
// 	else if (arg == 6)
// 	{
// 		if (!(tabstr = ft_split("", 'z')))
// 			ft_print_result("NULL");
// 		else
// 			if (!tabstr[0])
// 				ft_print_result("ok\n");
// 	}
// 	return (0);
// }
