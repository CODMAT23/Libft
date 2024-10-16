/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codmat23 <codmat23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:29:32 by codmat23          #+#    #+#             */
/*   Updated: 2024/10/04 11:11:22 by codmat23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Fonction qui retourne 1 si le caractère 'c' est un caractère alphabetique,
// Sinon retourne 0
int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
