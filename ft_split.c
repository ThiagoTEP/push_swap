#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if ((s[i] != c) && s[i])
			count++;
		while ((s[i] != c) && s[i])
			i++;
	}
	return (count);
}

int	wordlen(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		count++;
	}
	return (count);
}

char	*makeword(char const *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (wordlen(s, c) + 1));
	if (!word)
		return (NULL);
	while (s[i] != c && s[i])
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**free_data_split(char **split, int i)
{
	while (i--)
		free(split[i]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**newstring;
	int		i;
	int		j;
	int		count_words;

	if (!s)
		return (NULL);
	i = -1;
	j = 0;
	count_words = ft_countwords(s, c);
	newstring = malloc(sizeof(char *) * (count_words + 1));
	if (!newstring)
		return (NULL);
	while (++i < count_words)
	{
		while (s[j] == c)
			j++;
		newstring[i] = makeword(s + j, c);
		if (!newstring[i])
			return (free_data_split(newstring, i));
		j += wordlen(s + j, c);
	}
	newstring[i] = NULL;
	return (newstring);
}