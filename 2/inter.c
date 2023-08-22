/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 01:38:01 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/22 03:39:08 by davidga2         ###   ########.fr       */
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

int ft_look_behind(char *str, char c, int pos)
{
	while (pos >= 0)
	{
		if (str[pos] == c)
			return (1);
		pos--;
	}
	return (0);
}

int ft_strchar(char *str, char c)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int main(int argc, char **argv)
{
	char *str1 = NULL;
	char *str2 = NULL;
	char storage[1028];
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2];
		while (str1[i])
		{
			if (ft_strchar(str2, str1[i]) != -1)
			{
				if (!ft_look_behind(str1, str1[i], i - 1))
				{
					storage[j] = str1[i];
					j++;
				}
			}
			i++;
		}
		ft_putstr(storage);
	}
	return (write (1, "\n", 1), 0);
}
