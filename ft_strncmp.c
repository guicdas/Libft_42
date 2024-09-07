/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:13:04 by gcatarin          #+#    #+#             */
/*   Updated: 2022/11/20 16:25:08 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (str1[i] && str1[i] == str2[i])
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return (str1[i] - str2[i]);
}
/*
int main(){
    char s1[] = "sabinro";
    char s2[] = "sabindo";
    int a;

    a = ft_strncmp( s1, s2, 4);
    printf("%d", a);
}*/