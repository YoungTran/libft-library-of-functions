/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 03:40:00 by ytran             #+#    #+#             */
/*   Updated: 2018/04/23 04:44:59 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int	dur;

	i = 0;
	dur = ft_strlen(src) + 1;
	while (i < dur)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
