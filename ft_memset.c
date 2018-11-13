/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:42:08 by fberger           #+#    #+#             */
/*   Updated: 2018/11/13 18:42:42 by fberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	char		*ptr;

	i = -1;
	ptr = b;
	while (++i < len)
		ptr[i] = c;
	ptr[i] = '\0';
	return (b);
}
