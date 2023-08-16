/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:56:48 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/16 23:19:08 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

char    *ft_strrev(char *str)
{
	int i = 0;
	int len = ft_strlen(str);
	char tmp[len];

	while (str[i])
	{
		tmp[i] = str[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		str[i] = tmp[len - 1 - i];
		i++;
	}
	return (str);
}
/*
int main(int argc, char **argv)
{
	char *str = argv[1];

	if (argc == 2)
	{
		printf("ft: %s\n", ft_strrev(str));
	}
	return (0);
}*/
