/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:12:23 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/12 15:33:14 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_rep(char *str, int pos)
{
	char *minus = "abcdefghijklmnopqrstuvwxyz";
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int rep = 0;

	if (str[pos] >= 'a' && str[pos] <= 'z')
	{
		while (str[pos] != minus[rep])
			rep++;
	}
	else if (str[pos] >= 'A' && str[pos] <= 'Z')
	{		
		while (str[pos] != alpha[rep])
			rep++;
	}
	return (rep + 1);
}

int main(int argc, char **argv)
{
	char *str = argv[1];
	int rep = 0;
	int pos = 0;

	if (argc == 2)
	{
		while (str[pos])
		{
			rep = ft_rep(str, pos);
			while (rep > 0)
			{
				write (1, &str[pos], 1);
				rep--;
			}
			pos++;
		}
	}
	return (write (1, "\n", 1), 0);
}
