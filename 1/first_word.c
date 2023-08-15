/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 03:20:45 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/15 16:07:48 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_jump_spaces_and_tabs(char *str, int i)
{
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	return (i);
}

int	ft_find_last_char(char *str, int i)
{
	while (str[i] && str[i] != ' ' && str[i] != '\t')
		i++;
	return (i - 1);
}

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;
	char *str = argv[1];

	if (argc == 2)
	{
		i = ft_jump_spaces_and_tabs(str, i);
		j = ft_find_last_char(str, i);
		while (i <= j)
		{
			write (1, &str[i], 1);
			i++;
		}
	}
	return (write (1, "\n", 1), 0);
}
