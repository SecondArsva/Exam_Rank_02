/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 22:58:56 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/25 23:44:38 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_check_order(int start, int end)
{
	int i = 0;

	if (start < end)
		i = 1;
	else if (start > end)
		i = -1;
	return (i);
}

int ft_total_slots(int start, int end)
{
	int i = 0;
	
	if (ft_check_order(start, end) == 1)
		i = (end - start) + 1;
	else if (ft_check_order(start, end) == -1)
		i = (end - start) + 1;
	return (i);
}

int     *ft_rrange(int start, int end)
{
	int reserve = 0;
	int *array = NULL;
	int i = 0;

	if (start == end)
	{
		array = malloc(1*sizeof(int));
		array[0] = start;
		return (array);
	}
	else
	{
		reserve = ft_total_slots(start, end);
		array = malloc(reserve*sizeof(int));
		if (ft_check_order(start, end) == 1)
		{
			while (i < reserve)
			{
				array[i] = end;
				end--;
				i++;	
			}
		}
		else if (ft_check_order(start, end) == -1)
		{
			while (i < reserve)
			{
				array[i] = end;
				end++;
				i++;
			}
		}
	}
	return (array);
}
/*
int	main(int argc, char **argv)
{
	int start = 0;
	int end = 0;
	int total_slots = 0;
	int *array = NULL;
	int i = 0;

	if (argc == 3)
	{
		start = atoi(argv[1]);
		end = atoi(argv[2]);
		total_slots = ft_total_slots(start, end);
		printf("total_slots: %i\n", ft_total_slots(start, end));
		array = ft_rrange(start, end);
	}
	if (start == end)
		printf("array[0]: %i\n", array[0]);
	while (i != total_slots)
	{
		printf("array[%i]: %i\n", i, array[i]);
		i++;
	}	
	return (0);
}*/
