/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuet <mhuet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:18:20 by test              #+#    #+#             */
/*   Updated: 2024/10/09 15:22:27 by mhuet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Fonction qui applique une fonction à chaque caractère
// d'une chaîne de caractères
void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
