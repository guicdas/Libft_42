/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:22:36 by gcatarin          #+#    #+#             */
/*   Updated: 2022/11/20 16:22:36 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	int		i;
	size_t	a;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i])
	{
		a = 0;
		while (big[i + a] == little[a] && i + a < len)
		{
			if (little[a] == '\0')
				return ((char *)&big[i]);
			a++;
		}
		if (little[a] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
int main () {
   char str1[15];
   char str2[15];
   char *ref;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "cd", 6);

   ref = ft_strnstr(str1, str2, 5);

	printf("%s", ref);
}*/