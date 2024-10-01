/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-lim <mide-lim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:39:44 by mide-lim          #+#    #+#             */
/*   Updated: 2024/10/01 10:07:31 by mide-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d = (char *)dest;
	unsigned char *s = (char *)src;
	size_t	i;

	i = 0;
	while (i <= n)
		d[i] = s[i];
	return (dest);
}
