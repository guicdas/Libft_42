/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:24:49 by gcatarin          #+#    #+#             */
/*   Updated: 2022/11/20 16:24:49 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *) s;
	i = 0;
	while (i < n)
	{
		if (*str == (char) c)
			return ((void *)str);
		str++;
		i++;
	}
	return (NULL);
}
/*
int main () {
   const char str[] = "ht/w.tutnt.com";
   const char ch = '.';
   char *ter;
   char *ret;


   ret = ft_memchr(str, ch, 5);
   ter = memchr(str, ch, 5);

   printf("String after |%c| is - |%s|\n", ch, ter);
   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/