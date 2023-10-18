/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidtor <davidtor@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:25:58 by davidtor          #+#    #+#             */
/*   Updated: 2023/09/28 16:28:53 by davidtor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned long	i;
	char			*temp;
	unsigned long	len;

	len = ft_strlen(s);
	i = 0;
	temp = (char *)s + len;
	while (i < len + 1)
	{
		if (*temp == (char)c)
		{
			return (temp);
		}
		temp--;
		len--;
	}
	temp = 0;
	return (temp);
}
