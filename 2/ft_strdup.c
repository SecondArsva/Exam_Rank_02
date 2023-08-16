/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:21:56 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/16 18:33:35 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strdup(char *str)
{
	int i = 0;
	char *new = malloc((ft_strlen(str) + 1) * sizeof(char));
	
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
int main(int argc, char **argv)
{
	char *str = argv[1];
	if (argc == 2)
		printf("og: %s\nft: %s\n", ft_strdup(str), strdup(str));
	return (0);
}*/
