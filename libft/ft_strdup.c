/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-lim <mide-lim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:15:08 by mide-lim          #+#    #+#             */
/*   Updated: 2024/10/10 14:36:09 by mide-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_memcpy(void *dest, const void *src, size_t n);

char	*strdup(const char *s)
{
    size_t  len;
    char    *dest;

    len = ft_strlen(s);
    dest = (char *)malloc(len * sizeof(char) + 1);
    if (dest == NULL)
        return (0);
    ft_memcpy(dest, s, len);
    dest[len] = '\0';
    return (dest)
}
