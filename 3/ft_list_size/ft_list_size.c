/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:46:15 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/23 20:17:37 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int total = 0;
	t_list *lst = begin_list;

	while (lst)
	{
		lst = lst->next;
		total++;
	}
	return (total);
}
/*
int main(void)
{
	t_list *a = malloc(1*sizeof(t_list));
	t_list *b = malloc(1*sizeof(t_list));
	t_list *c = malloc(1*sizeof(t_list));
	t_list *d = malloc(1*sizeof(t_list));

	a->next = b;
	b->next = c;
	c->next = d;
	
	printf("result: %i\n", ft_list_size(a));
	return (0);
}*/
