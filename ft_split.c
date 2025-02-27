/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:29:10 by gcatarin          #+#    #+#             */
/*   Updated: 2022/11/20 17:29:10 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordnum(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*word(char const *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	word = (char *)malloc(sizeof(char) * (wordlen(s, c) + 1));
	if (!word)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**frase;

	i = 0;
	frase = (char **)malloc(sizeof(char *) * (wordnum(s, c) + 1));
	if (!frase)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			frase[i] = word(s, c);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	frase[i] = NULL;
	return (frase);
}
/*
int main(int argc, char **argv)
 {
	int i;

	i = 0;
 	if (argc == 2)
 	{
 		char *str = argv[1];
 		char **master = ft_split(str, 'c');

 		while (i < wordnum(str, 'c'))
		{
			printf("%s\n", master[i]);
			i++;
		}
 	}
 	return (0);
}*/