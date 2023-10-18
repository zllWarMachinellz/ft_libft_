/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidtor <davidtor@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:09:02 by davidtor          #+#    #+#             */
/*   Updated: 2023/09/16 19:41:18 by davidtor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, unsigned long n)
{
	unsigned long	i;
	unsigned char	*str;
	unsigned char	*str1;

	i = 0;
	if (dst == 0 && src == 0)
		return (NULL);
	str = (unsigned char *)dst;
	str1 = (unsigned char *)src;
	while (i < n)
	{
		str[i] = str1[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	*str = "Hola como estas";
	char	str1[16];
	
	//printf("%s", ft_memcpy(str, str + 2, 2));
	printf("%s", memmove(str1, str + 2, 10));
	return (0);
}*/