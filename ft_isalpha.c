/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 21:56:12 by fberger           #+#    #+#             */
/*   Updated: 2018/11/13 19:10:03 by fberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' || c <= 'z') || (c >= 'A' || c <= 'Z'))
		return (0);
	return (1);
}
