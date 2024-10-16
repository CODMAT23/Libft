/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codmat23 <codmat23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:42:36 by codmat23          #+#    #+#             */
/*   Updated: 2024/10/04 11:13:50 by codmat23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fonction qui enlève les espaces
// en début et fin d'une chaîne de caractères.
static int	ft_isset(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

// Fonction qui renvoie une nouvelle chaîne de caractères 
// sans les espaces en début et fin.
char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ret;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (0);
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && ft_isset(*start, set))
		start++;
	while (start < end && ft_isset(*(end - 1), set))
		end--;
	ret = ft_substr(start, 0, end - start);
	return (ret);
}
