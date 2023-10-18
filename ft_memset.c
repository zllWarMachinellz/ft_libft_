/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidtor <davidtor@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:27:29 by davidtor          #+#    #+#             */
/*   Updated: 2023/09/29 13:21:37 by davidtor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int n, unsigned long len)
{
	unsigned long	i;
	unsigned char	*str;

	str = (unsigned char *)dest;
	i = 0;
	while (i < len)
		str[i++] = n;
	return (dest);
}
/*
int	main(void)
{
	char	*str = "Hola soy callou";
	char 	str1[16];
	strcpy(str1,str);
	printf("%s \n", ft_memset(str1,'$',-7));
	//printf("%s", memset(str1,'$',7));
	return (0);
}*/