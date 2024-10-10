/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-lim <mide-lim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:23:35 by mide-lim          #+#    #+#             */
/*   Updated: 2024/10/10 14:14:42 by mide-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_callc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *) malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_subzero(ptr, (nmemb * size));
	return (ptr);
}
