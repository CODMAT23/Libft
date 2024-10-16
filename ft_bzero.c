/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codmat23 <codmat23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:36:45 by codmat23          #+#    #+#             */
/*   Updated: 2024/10/04 10:24:54 by codmat23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fonction qui initialise tous les octets de la mémoire pointée par's' à 0
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
