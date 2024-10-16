/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codmat23 <codmat23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:58:21 by codmat23          #+#    #+#             */
/*   Updated: 2024/10/04 11:05:53 by codmat23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Fonction qui renvoie la version majuscule d'un caractère ASCII.
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	else
		return (c);
}
