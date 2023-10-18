/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidtor <davidtor@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:04:10 by davidtor          #+#    #+#             */
/*   Updated: 2023/09/26 15:17:44 by davidtor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned long len)
{
	unsigned int	i;
	unsigned char	*str;
	unsigned char	*str1;

	str = dst;
	i = 0;
	str1 = (unsigned char *)src;
	if (dst == 0 && src == 0)
		return (NULL);
	if (src < dst)
	{
		while (len--)
			str[len] = str1[len];
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
/*
int	main(void)
{
	char	*str1 = "Hola como estas";
	char	str[16];
	
	memcpy(str,str1,16);
	//printf("%s", str);
	printf("%s \n", ft_memmove(0, 0, 1));
	printf("%s", memmove(0, 0, 1));
	return (0);
}*/