/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codmat23 <codmat23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:48:56 by codmat23          #+#    #+#             */
/*   Updated: 2024/10/04 11:09:25 by codmat23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Fonction qui retourne 1 si le caractère 'c' est un caractère ASCII,
// Sinon retourne 0
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
