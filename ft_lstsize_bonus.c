/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codmat23 <codmat23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 08:43:42 by codmat23          #+#    #+#             */
/*   Updated: 2024/10/04 10:32:31 by codmat23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fonction qui renvoie la taille d'une liste chaînée
int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst && ++size)
		lst = lst->next;
	return (size);
}
