/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:30:35 by gcatarin          #+#    #+#             */
/*   Updated: 2022/11/20 17:30:35 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 1;
	while (*str)
	{
		str++;
		i++;
	}
	while (i != 0)
	{
		if (*str == (char) c)
		{
			return ((char *)str);
		}
		str--;
		i--;
	}
	return (NULL);
}
/*
int main () {
   const char str[] = "htutpoint.com";
   const char ch = '.';
   char *ret;
   char * yert;

   ret = strrchr(str, ch);
   yert = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("String after |%c| is - |%s|\n", ch, yert);
}*/