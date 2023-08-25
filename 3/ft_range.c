/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 02:02:59 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/25 03:17:32 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_check_order(int start, int end)
{
	int i = 0;

	if (start < end)
		i = 1;
	else if (start > end)
		i = -1;
	return (i);
}

int ft_total_nums(int start, int end)
{
	int i = 0;
	
	if (ft_check_order(start, end) == 1)
		i = end - start + 1;
	else if (ft_check_order(start, end) == -1)
		i = start - end + 1;
	return (i);
}

int     *ft_range(int start, int end)
{
	int *arr = NULL;
	int reserve = ft_total_nums(start, end);
	int i = 0;

	arr = malloc(reserve*sizeof(int));
	if (ft_check_order(start, end) == 1)
	{
		while (i < reserve)
		{
			arr[i] = start;
			start++;
			i++;
		}
	}
	else if (ft_check_order(start, end) == -1)
	{
		while (i < reserve)
		{
			arr[i] = start;
			start--;
			i++;
		}
	}
	return (arr);
}
/*
int main(int argc, char **argv)
{
	int *arr = NULL;
	int start;
	int end;
	int i = 0;
	int total_nums;

	if (argc == 3)
	{
		start = atoi(argv[1]);
		end = atoi(argv[2]);
		arr = ft_range(start, end);
		total_nums = ft_total_nums(start, end);
		while (i < total_nums)
		{
			printf("arr[%i]: %i\n", i, arr[i]);
			i++;
		}
	}
	return (0);
}*/
