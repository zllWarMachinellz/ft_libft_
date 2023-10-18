/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidtor <davidtor@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:30:27 by davidtor          #+#    #+#             */
/*   Updated: 2023/10/11 16:05:55 by davidtor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long	ft_getarrlen(int n)
{
	unsigned long	count;

	count = 0;
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	if (n == 0)
		count++;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	unsigned long	len;
	char			*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_getarrlen(n);
	res = (char *)malloc(len + 1 * sizeof(char));
	if (res == 0)
		return (0);
	if (n < 0)
	{
		n = n * -1;
		res[0] = '-';
	}
	if (n == 0)
		res[0] = 48;
	res[len] = 0;
	while (n != 0)
	{
		res[--len] = 48 + (n % 10);
		n = n / 10;
	}
	return (res);
}
/*
int	main(void)
{
	printf("%s", ft_itoa(0));
	return (0);
}*/
