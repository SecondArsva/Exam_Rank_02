/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:36:17 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/22 17:09:29 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_find_first_char(char *str, int i)
{

	while (i >= 0 && str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		i--;
	return (i + 1);
}

int ft_find_last_char(char *str, int i)
{
	while (str[i] == '\0' || str[i] == ' ' || str[i] == '\t')
		i--;
	return (i);
}

int ft_find_str_end(char *str, int i)
{
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if (argc == 2)
	{
		i = ft_find_str_end(argv[1], i);
		i = ft_find_last_char(argv[1], i);
		j = ft_find_first_char(argv[1], i);

		while (j <= i)
		{
			write (1, &argv[1][j], 1);
			j++;
		}
	}
	return (write (1, "\n", 1), 0);
}
