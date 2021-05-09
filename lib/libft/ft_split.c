#include "libft.h"

// static char	**comp_free(char **strset, int ma)
// {
// 	int i;

// 	i = 0;
// 	while (i <= ma)
// 	{
// 		free(strset[i]);
// 		strset[i] = NULL;
// 		i++;
// 	}
// 	free(strset);
// 	strset = NULL;
// 	return (strset);
// }

// char		**ft_split(char const *s, char c)
// {
// 	char	**strs;
// 	int		i;

// 	if (!s || !(strs = (char **)malloc(sizeof(char *) * ((ft_strlen(s) + 1)))))
// 		return (NULL);
// 	i = 0;
// 	while (*s)
// 	{
// 		while (*s == c)
// 			s++;
// 		if (!(ft_strlen(s)))
// 			break ;
// 		if (!(strs[i] = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
// 			return (strs = comp_free(strs, i));
// 		if (!(ft_strchr(s, c)))
// 			ft_strlcpy(strs[i], s, ft_strlen(s) + 1);
// 		else
// 			ft_strlcpy(strs[i], s, ft_strchr(s, c) - s + 1);
// 		s += ft_strlen(strs[i++]);
// 	}
// 	strs[i] = NULL;
// 	return (strs);
// }
