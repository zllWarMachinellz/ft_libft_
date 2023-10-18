/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidtor <davidtor@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:18:51 by davidtor          #+#    #+#             */
/*   Updated: 2023/09/29 17:44:43 by davidtor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned long n)
{
	unsigned long	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (!(*str != (unsigned char)c))
			return ((void *)str);
		str++;
		i++;
	}
	str = 0;
	return ((void *)str);
}
/*
int	main(void)
{
	printf("%s\n", (char *)ft_memchr("", '\200', 10));
	return (0);
}*/