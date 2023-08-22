/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 01:04:10 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/22 03:42:39 by davidga2         ###   ########.fr       */
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

size_t ft_strspn(const char *s, const char *charset)
{
	int i = 0;
	size_t span = 0;

	while (s[i])
	{
		if (ft_strchar(charset, s[i]))
			span++;
		else
			return (span);
		i++;
	}
	return (span); 
}

// Esta función retorna el número de caracteres coincidentes del primer string
// en el segundo hasta que se de una no-coincidencia de un caracter del primer
// string.
// En ese punto se deja de contar.
// Se usa un strchar en todos los caracteres del primer string sobre el
// segundo string.
/*int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("og: %lu\n", strspn(argv[1], argv[2]));
		printf("ft: %lu\n", ft_strspn(argv[1], argv[2]));
	}
	return (0);
}*/
