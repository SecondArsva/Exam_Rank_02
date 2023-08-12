/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:19:55 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/12 19:37:32 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		i = ft_strlen(argv[1]) - 1;
		while (i >= 0)
		{
			write (1, &argv[1][i], 1);
			i--;
		}
	}
	return (write (1, "\n", 1), 0);
}
