/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuet <mhuet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:24:22 by irobinso          #+#    #+#             */
/*   Updated: 2024/10/08 11:53:02 by mhuet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	j = 0;
	i = start;
	if (s == NULL || len == 0 || start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	while (j < len && s[i++] != '\0')
		j++;
	str = malloc(sizeof(char) * (j + 1));
	if (str == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && s[i] != '\0')
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
