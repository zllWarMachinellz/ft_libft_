/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidtor <davidtor@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:10:35 by davidtor          #+#    #+#             */
/*   Updated: 2023/10/04 19:30:03 by davidtor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned long	i;
	unsigned long	len;
	char			*str2;

	len = ft_strlen(s1);
	str2 = malloc((len + 1) * sizeof(char));
	if (str2 == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		*str2++ = *s1++;
		i++;
	}
	*str2 = 0;
	return (str2 - i);
}
