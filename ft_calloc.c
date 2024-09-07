/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:27:41 by gcatarin          #+#    #+#             */
/*   Updated: 2022/11/20 17:27:41 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (p)
	{
		ft_bzero(p, nmemb * size);
		return (p);
	}
	return (NULL);
}
/*
 int main ()
{
	void *i;
	
	i = ft_calloc(SIZE_MAX, SIZE_MAX);
	printf(%p, i);
}*/