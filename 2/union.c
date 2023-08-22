/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:50:51 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/22 23:21:03 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int ft_strchar(char *str, char c)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == c)
			return (1);	
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	char *str1 = NULL;
	char *str2 = NULL;
	char storage[1024];

	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2];
		while (str1[i])
		{
			if (!ft_strchar(storage, str1[i]))
			{
				storage[j] = str1[i];
				j++;
			}
			i++;
		}
		i = 0;
		while (str2[i])
		{
			if (!ft_strchar(storage, str2[i]))
			{
				storage[j] = str2[i];
				j++;
			}
			i++;
		}
		storage[j] = '\0';
		ft_putstr(storage);
	}
	return (write(1, "\n", 1), 0);
}
