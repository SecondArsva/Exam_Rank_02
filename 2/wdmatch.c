/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 05:21:48 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/22 05:41:13 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int ft_strchar_mod(char *str, char c, int pos)
{
	while (str[pos])
	{
		if (str[pos] == c)
			return (pos);
		pos++;
	}
	return (-1);
}

int	main(int argc, char **argv)
{
	char *str1 = argv[1];
	char *str2 = argv[2];
	int i = 0;
	int j = 0;
	int bolean = 0;

	if (argc == 3)
	{
		while (str1[i])
		{
			if (ft_strchar_mod(str2, str1[i], j) != -1)
			{
				j = ft_strchar_mod(str2, str1[i], j);
				bolean = 1;
			}
			else
			{
				bolean = 0;
				break ;
			}
			i++;
		}
		if (bolean == 1)
			ft_putstr(str1);
	}
	return (write (1, "\n", 1), 0);
}
