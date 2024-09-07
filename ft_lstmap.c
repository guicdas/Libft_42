/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:41:46 by gcatarin          #+#    #+#             */
/*   Updated: 2022/11/20 16:24:26 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ncontent;
	t_list	*nlist;

	nlist = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		ncontent = ft_lstnew(f(lst->content));
		if (!ncontent)
		{
			ft_lstclear(&nlist, del);
			return (NULL);
		}
		ft_lstadd_back(&nlist, ncontent);
		lst = lst->next;
	}
	return (nlist);
}
