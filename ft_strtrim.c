/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shafsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 09:40:10 by shafsi            #+#    #+#             */
/*   Updated: 2021/12/04 10:04:19 by shafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	checker(char s, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	index;
	size_t	start;
	size_t	len;

	index = 0;
	while (checker(s1[index], set) == 1)
		index++;
	start = index;
	while (s1[index])
		index++;
	index--;
	while (checker(s1[index], set) == 1)
		index--;
	len = index - start + 1;
	return (ft_substr(s1, start, len));
}
