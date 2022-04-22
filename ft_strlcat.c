/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shafsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:44:10 by shafsi            #+#    #+#             */
/*   Updated: 2021/12/04 09:57:35 by shafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	k;

	k = 0;
	j = 0;
	while (dst[j] != '\0' && j < size)
		j++;
	while (src[k] && (j + k + 1) < size)
	{
		dst[j + k] = src[k];
		k++;
	}
	if (j < size)
		dst[j + k] = '\0';
	return (j + ft_strlen(src));
}
