/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codmat23 <codmat23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:28:58 by test              #+#    #+#             */
/*   Updated: 2024/10/07 13:31:46 by codmat23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Cette fonction calcule le nombre de caractères nécessaires
// pour représenter l'entier n en tant que chaîne de caractères.
size_t	get_size(int n)
{
	size_t	size;

	if (n > 0)
		size = 0;
	else
		size = 1;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

// Cette fonction convertit un entier n 
// en une chaîne de caractères terminée par un caractère nul (\0).
char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	size_t	size;

	num = n;
	size = get_size(n);
	if (n < 0)
		num *= -1;
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	*(str + size--) = '\0';
	while (num > 0)
	{
		*(str + size--) = num % 10 + '0';
		num /= 10;
	}
	if (size == 0 && str[1] == '\0')
		*(str + size) = '0';
	else if (size == 0 && str[1])
		*(str + size) = '-';
	return (str);
}
