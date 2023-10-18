/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidtor <davidtor@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:51:59 by davidtor          #+#    #+#             */
/*   Updated: 2023/10/03 15:17:04 by davidtor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t			i;
	size_t			j;
	size_t			nlen;

	i = 0;
	nlen = ft_strlen(need);
	if (nlen == 0 || hay == need)
		return ((char *)hay);
	while (hay[i] != 0 && i < len)
	{
		j = 0;
		while (hay[i + j] != 0 && need[j] != 0
			&& hay[i + j] == need[j] && i + j < len)
			j++;
		if (j == nlen)
			return ((char *)hay + i);
		i++;
	}
	return (0);
}
