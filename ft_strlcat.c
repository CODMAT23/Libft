/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codmat23 <codmat23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:32:53 by codmat23          #+#    #+#             */
/*   Updated: 2024/10/04 11:01:55 by codmat23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fonction qui sert a combiner une chaîne de caractères à la fin d'une autre,
// tout en gérant la taille de la mémoire disponible.
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	c;
	size_t	d;

	d = ft_strlen(src);
	if (!dst && size == 0)
		return (d);
	b = ft_strlen(dst);
	c = b;
	if (size <= c)
		return (size + d);
	a = 0;
	while (src[a] && b + 1 < size)
	{
		dst[b] = src[a];
		a++;
		b++;
	}
	dst[b] = 0;
	return (c + d);
}
