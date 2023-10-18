/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidtor <davidtor@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:15:11 by davidtor          #+#    #+#             */
/*   Updated: 2023/10/05 16:35:20 by davidtor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned long	len_total;
	char			*res;

	len_total = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 && !s2)
		return (0);
	res = (char *)malloc((len_total + 1) * sizeof(char));
	if (!res)
		return (0);
	if (!s1 || !s2)
	{
		if (!s1)
			ft_strlcpy(res, s2, len_total + 1);
		else if (!s2)
			ft_strlcpy(res, s1, len_total + 1);
	}
	else
	{
		ft_strlcpy(res, s1, len_total + 1);
		ft_strlcat(res, s2, len_total + 1);
	}
	return (res);
}
