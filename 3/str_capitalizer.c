/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:29:29 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/27 01:59:00 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_upp(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int ft_low(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int ft_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	char *str = NULL;

	if (argc >= 2)
	{
		while (argv[i])
		{
			str = argv[i];
			while (str[j])
			{
				if (j == 0 && ft_low(str[j]))
					str[j] -= 32;
				else if (j == 0 && ft_upp(str[j]))
					str[j] = str[j];
				else if (ft_low(str[j]) && ft_space(str[j - 1]))
					str[j] -= 32;
				else if (ft_upp(str[j]) && !ft_space(str[j - 1]))
					str[j] += 32;
				write (1, &str[j], 1);
				j++;
			}
			j = 0;
			i++;
			write (1, "\n", 1);;
		}	
	}
	else
		write (1, "\n", 1);;
	return (0);
}
