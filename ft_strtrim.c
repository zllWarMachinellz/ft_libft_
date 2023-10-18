/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidtor <davidtor@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:49:31 by davidtor          #+#    #+#             */
/*   Updated: 2023/10/06 12:10:46 by davidtor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long	ft_startcuts(char const *s1, char const *set)
{
	unsigned long	i;
	unsigned long	len;
	unsigned char	c;

	i = 0;
	len = ft_strlen(s1);
	c = s1[i];
	while (i++ < len && ft_strchr(set, c))
		c = s1[i];
	return (i - 1);
}

static unsigned long	ft_endcuts(char const *s1, char const *set)
{
	unsigned long	i;
	unsigned long	len;
	unsigned char	c;

	i = 0;
	len = ft_strlen(s1);
	c = s1[len];
	while (len-- && ft_strrchr(set, c))
	{
		c = s1[len];
		i++;
	}
	return (i - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned long	count1;
	unsigned long	count2;
	char			*res;

	count1 = ft_startcuts(s1, set);
	count2 = ft_endcuts(s1, set);
	res = ft_substr(s1, count1, ft_strlen(s1) - (count1 + count2));
	return (res);
}
