/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:52:19 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/23 19:13:09 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int i = 0;
	char *str = NULL;

	if (argc == 2)
	{
		str = argv[1];
		while (ft_isspace(str[i]))
			i++;
		while (str[i])
		{
			if (ft_isspace(str[i]))
			{
				if (str[i + 1] != '\0' && !ft_isspace(str[i + 1]))
					write (1, "   ", 3);
			}
			else
				write (1, &str[i], 1);
			i++;
		}
	}
	return (write(1, "\n", 1), 0 );
}
