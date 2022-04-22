/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shafsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:51:00 by shafsi            #+#    #+#             */
/*   Updated: 2021/11/10 09:59:18 by shafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pa;

	pa = malloc(count * size);
	if (pa == NULL)
		return (NULL);
	ft_bzero(pa, count * size);
	return (pa);
}
