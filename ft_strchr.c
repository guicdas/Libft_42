/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:29:26 by gcatarin          #+#    #+#             */
/*   Updated: 2022/11/20 17:29:26 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char) c)
		{
			return ((char *)str);
		}
		str++;
	}
	if ((char) c == 0)
		return ((char *)str);
	return (NULL);
}
/*
int main () {
   const char str[] = "www.tutorialspoin";
   const char ch = '.';
   char *ret;
   char * yert;

   ret = strchr(str, ch);
   yert = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("String after |%c| is - |%s|\n", ch, yert);
   
}*/