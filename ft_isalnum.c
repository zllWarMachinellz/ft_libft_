/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidtor <davidtor@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:41:09 by davidtor          #+#    #+#             */
/*   Updated: 2023/09/16 17:18:28 by davidtor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int n)
{
	if ((n >= 65 && n <= 90) || \
	(n >= 97 && n <= 122) || \
	(n >= 48 && n <= 57))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d \n", isalnum('A'));
	printf("%d", ft_isalnum('A'));
	return (0);
}*/
