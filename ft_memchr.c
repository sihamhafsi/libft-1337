/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shafsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:49:14 by shafsi            #+#    #+#             */
/*   Updated: 2021/12/04 09:53:10 by shafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	target;
	unsigned char	*source;

	i = 0;
	target = (unsigned char)c;
	source = (unsigned char *)s;
	while (i < n)
	{
		if (source[i] == target)
			return ((void *) source + i);
		i++;
	}
	return (NULL);
}
