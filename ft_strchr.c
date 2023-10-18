/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidtor <davidtor@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:13:41 by davidtor          #+#    #+#             */
/*   Updated: 2023/09/28 16:29:50 by davidtor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned long	i;
	char			*temp;
	unsigned long	len;

	len = ft_strlen(s);
	i = 0;
	temp = (char *)s;
	while (i < len + 1)
	{
		if (*temp == (char)c)
			return (temp);
		temp++;
		i++;
	}
	temp = 0;
	return (temp);
}
