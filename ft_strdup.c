/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shafsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:01:04 by shafsi            #+#    #+#             */
/*   Updated: 2021/11/10 10:05:15 by shafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	size_t	index;

	copy = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!copy)
		return (NULL);
	index = 0;
	while (src[index])
	{
		copy[index] = src[index];
		index++;
	}
	copy[index] = '\0';
	return (copy);
}
