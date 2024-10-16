/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codmat23 <codmat23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:17:08 by codmat23          #+#    #+#             */
/*   Updated: 2024/10/04 11:08:42 by codmat23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Fonction qui recherche la première occurrence d'un caractère, 
// dans une chaîne de caractères.
char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
}
