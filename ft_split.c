/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidtor <davidtor@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:23:02 by davidtor          #+#    #+#             */
/*   Updated: 2023/10/11 17:26:26 by davidtor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_freemem(char **res)
{
	unsigned long	i;

	i = 0;
	while (res[i] != 0)
		free(res[i++]);
	free(res);
	return (0);
}

static unsigned long	ft_getrows(char const *s, char c)
{
	unsigned long	i;
	unsigned long	len;
	unsigned long	count;

	i = 0;
	count = 0;
	len = ft_strlen(s);
	if (!s)
		return (0);
	while (i < len)
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count + 1);
}

static char	*ft_getword(char const *s, char c)
{
	unsigned long	i;
	unsigned long	len;
	unsigned long	j;

	i = 0;
	j = 0;
	len = ft_strlen(s);
	while (s[i] != c && s[i])
	{
		j++;
		i++;
	}
	return (ft_substr(s, 0, j));
}

char	**ft_split(char const *s, char c)
{
	unsigned long	i;
	unsigned long	len_rows;
	char			**res;

	i = 0;
	len_rows = ft_getrows(s, c);
	res = (char **)malloc(len_rows * sizeof(char *));
	if (!s || res == 0)
		return (0);
	while (*s != 0)
	{
		if (*s == c)
			s++;
		else
		{
			res[i] = ft_getword(s, c);
			if (res[i++] == 0)
				return (ft_freemem(res));
			while (*s != c && *s != 0)
				s++;
		}
	}
	res[i] = 0;
	i = 0;
	return (res);
}
