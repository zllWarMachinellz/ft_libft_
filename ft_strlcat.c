/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidtor <davidtor@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:02:11 by davidtor          #+#    #+#             */
/*   Updated: 2023/09/27 16:22:46 by davidtor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcat(char *dst, const char *src, unsigned long dstsize)
{
	unsigned long	i;
	unsigned long	srccount;
	unsigned long	j;
	unsigned long	tlen;

	i = ft_strlen(dst);
	srccount = ft_strlen(src);
	j = 0;
	if (dstsize > i)
		tlen = srccount + i;
	else
		tlen = srccount + dstsize;
	while (src[j] && (i + 1) < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (tlen);
}
