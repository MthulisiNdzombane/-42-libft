/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:54:27 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/07 12:58:07 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, char *s2)
{
	char	*ret;
	if (!s1 || !s2)
		return (NULL);
	ret = s1;
	while (*s1)
		s1++;
	ft_strcpy(s1, s2);
	return (ret);
}
