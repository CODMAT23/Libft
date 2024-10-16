/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codmat23 <codmat23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:49:02 by codmat23          #+#    #+#             */
/*   Updated: 2024/10/04 10:43:22 by codmat23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fonction qui copie n octets depuis la source vers la destination.
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*ret;

	if (!dst && ! src)
		return (0);
	ret = dst;
	while (n--)
		*(char *)dst++ = *(char *)src++;
	return (ret);
}
