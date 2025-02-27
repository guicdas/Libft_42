/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:30:53 by gcatarin          #+#    #+#             */
/*   Updated: 2022/11/20 17:30:53 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*comp;
	size_t	j;
	size_t	i;

	i = 0;
	comp = (char *) s;
	j = ft_strlen(comp);
	if (start >= j)
	{
		str = malloc(sizeof(char));
		if (!str)
			return (NULL);
		*str = '\0';
		return (str);
	}
	if (j - start < len)
		return (ft_strdup((char *)comp + start));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (start < j && i < len)
		str[i++] = comp[start++];
	str[i] = '\0';
	return (str);
}
/*
int main(){
   char *ret;

   ret = ft_substr("eu tenho medo", 5, 4);

   printf("String is - |%s|\n", ret);
}*/