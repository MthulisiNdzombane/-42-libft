/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:29:04 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/04 15:21:30 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void*	ft_memset(void *b, int c, size_t len)
{
	byte	*str;

	if (!len || !b)
		return (b);
	str = (byte *) b;
	while (len--)
		*str++ = (byte) c;
	return (b);
}