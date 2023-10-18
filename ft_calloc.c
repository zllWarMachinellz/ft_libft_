/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidtor <davidtor@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:29:48 by davidtor          #+#    #+#             */
/*   Updated: 2023/10/04 19:01:57 by davidtor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (0);
	if (size != 0)
		ft_bzero(ptr, count * size);
	return (ptr);
}
/*
int	main(void)
{
	char	*ptr;

	ptr = calloc(5, sizeof(char));

	return (0);
}*/