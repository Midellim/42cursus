/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-lim <mide-lim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:23:05 by mide-lim          #+#    #+#             */
/*   Updated: 2024/09/27 10:24:30 by mide-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	size_t	i;

	i = strlen(s);
	if ( i < n )
		return (err);
	i = 0;
	while (s[i] = '\0')
	{
		s[i] = c;
		i++;
	}
	return (s);
}

