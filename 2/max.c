/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 05:48:38 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/22 05:59:56 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	int max = 0;
	unsigned int i = 0;

	while (i <= len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
/*
int main(void)
{
	int array1[] = {0, 98, 100, 65, 752, 9};
	int array2[] = {65, 5, 87, 75, 9897, 1};
	int array3[] = {331, 96, 459, 8645, 12345, 9654};

	printf("max: %i\n", max(array1, 6));
	printf("max: %i\n", max(array2, 6));
	printf("max: %i\n", max(array3, 6));
	return (0);
}*/
