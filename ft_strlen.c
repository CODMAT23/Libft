/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codmat23 <codmat23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:37:19 by codmat23          #+#    #+#             */
/*   Updated: 2024/10/04 11:02:59 by codmat23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fonction qui retourne la taille d'une chaîne de caractères.
size_t	ft_strlen(const char *s)
{
	size_t	ret;

	ret = 0;
	while (*s++)
		ret++;
	return (ret);
}
