/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 01:21:21 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/26 01:46:14 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strchar_mod(char *str, char c, int j)
{
	while (str[j])
	{
		if (str[j] == c)
			return (j);
		j++;
	}
	return (-1);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	char *str1 = NULL;
	char *str2 = NULL;
	char bolean = 0;

	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2];
		while (str1[i])
		{
			if (ft_strchar_mod(str2, str1[i], j) != -1)
			{
				j = ft_strchar_mod(str2, str1[i], j);
				bolean = '1';
			}
			else if  (ft_strchar_mod(str2, str1[i], j) == -1)
			{
				bolean = '0';
				break ;
			}
			i++;
		}
		write (1, &bolean,1);
	}
	return (write (1, "\n", 1), 0);
}
