/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codmat23 <codmat23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:10:56 by codmat23          #+#    #+#             */
/*   Updated: 2024/10/04 11:05:41 by codmat23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Fonction qui renvoie la version minuscule d'un caractère ASCII.
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	else
		return (c);
}
