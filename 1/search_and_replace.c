/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 02:29:50 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/15 02:53:26 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
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

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int	i = 0;
	char *str = NULL;
	char c0;
	char c1;

	if (argc == 4)
	{
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		{
			str = argv[1];
			c0 = argv[2][0];
			c1 = argv[3][0];
			if (!ft_strchar(str, c0))
				return (ft_putstr(str), write (1, "\n", 1), 0);
			while (str[i])
			{
				if (str[i] == c0)
					str[i] = c1;
				write (1, &str[i], 1);
				i++;
			}	
		}
	}
	return (write (1, "\n", 1), 0);
}
