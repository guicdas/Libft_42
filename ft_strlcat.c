/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:30:05 by gcatarin          #+#    #+#             */
/*   Updated: 2022/11/20 17:30:05 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = ft_strlen(dst);
	if (dstsize <= a)
		return (dstsize + ft_strlen(src));
	while (src[i] && i + a + 1 != dstsize)
	{
		dst[i + a] = src[i];
		i++;
	}
	dst[i + a] = '\0';
	return (a + ft_strlen(src));
}
/*
int main(){
    size_t dest;
    char destin[] = "sabimo";
    char src[] = "sabinkhdo";

    dest = ft_strlcat(destin, src, 4);
    printf("%ld", dest);
}*/