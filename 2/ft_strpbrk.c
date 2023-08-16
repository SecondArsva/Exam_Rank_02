/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:31:09 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/16 20:25:42 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strchar(const char *str, char c)
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

char *ft_strpbrk(const char *s, const char *charset)
{
	int i = 0;
	const char *ptr = NULL;
	while (s[i])
	{
		if (ft_strchar(charset, s[i]))
		{
			ptr = &s[i];
			return ((char *) ptr);
		}
		i++;
	}
	return (NULL);
}
/*
int main(int argc, char **argv)
{
	const char *str1 = argv[1];
	const char *str2 = argv[2];

	if (argc == 3)
	{
		printf("og: %p\n", strpbrk(str1, str2));
		printf("ft: %p\n", ft_strpbrk(str1, str2));
	}
	return (0);
}*/
