/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuet <mhuet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:47:30 by codmat23          #+#    #+#             */
/*   Updated: 2024/10/08 12:15:48 by mhuet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// fonction qui sert a convertir une chaine de caractères en 'int'
int	ft_atoi(const char *str)
{
	int					num;
	int					neg;

	num = 0;
	neg = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * neg);
}
