/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:30:43 by gcatarin          #+#    #+#             */
/*   Updated: 2022/11/20 17:30:43 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
	}
	i = ft_strlen(s1);
	while (i > 0 && ft_strchr(set, s1[i]))
	{
		i--;
	}
	return (ft_substr(s1, 0, i + 1));
}
/*
int main() {
	char *ret;

    ret = ft_strtrim("medo, eu tenhomdeo", "medo");
	printf("string :%s", ret);
}*/