/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codmat23 <codmat23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:43:14 by codmat23          #+#    #+#             */
/*   Updated: 2024/10/04 11:13:25 by codmat23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fonction qui retourne 1 si le caractère 'c'
// est un caractère alphanumérique,
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
