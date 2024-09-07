/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:13:37 by gcatarin          #+#    #+#             */
/*   Updated: 2022/11/20 17:13:37 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	tam;
	int		i;

	i = 0;
	tam = ft_strlen(s);
	str = (char *)malloc((sizeof(char) * tam) + 1);
	if (!str)
		return (NULL);
	while (*s)
	{
		str[i] = *s;
		i++;
		s++;
	}
	str[i] = '\0';
	return (str);
}
/*	
	char	*dup;
	int		i;
	int		length;

	length = 0;
	i = 0;
	while (s[length])
		length++;
	dup = (char *)malloc(sizeof(char) * (length + 1));
	if (!s || !dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);


int main(){
    char *src = "boasd soueu";
    char *str;

    str = ft_strdup(src);

    printf("%s", str);
}*/