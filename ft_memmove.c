/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:09:28 by gcatarin          #+#    #+#             */
/*   Updated: 2022/11/20 16:25:41 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*d;

	if (!dest && !src)
		return (0);
	d = dest;
	if (dest >= src)
	{
		dest = dest + n - 1;
		src = src + n - 1;
		while (n--)
			*(char *)dest-- = *(char *)src--;
	}
	else if (src >= dest)
	{
		while (n--)
			*(char *)dest++ = *(char *)src++;
	}
	return (d);
}
/*
int main()
{
    char str2[] = "Geeks"; // Array of size 100
    char str1[] = "Quiz"; // Array of size 5
  
    puts("str1 before memmove ");
    puts(str2);
  
    ft_memmove(str2, str1, sizeof(str1));
    puts("\nstr1 after memmove ");
    puts(str2);
  
    return 0;
}*/