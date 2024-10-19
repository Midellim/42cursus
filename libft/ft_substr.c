/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-lim <mide-lim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:20:14 by mide-lim          #+#    #+#             */
/*   Updated: 2024/10/16 09:29:54 by mide-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *string);
void	*ft_calloc(size_t nmemb, size_t size);
size_t	strlcpy(char *dest, const char *src, size_t size);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	len_substring;
	char	*substring;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	len_substring = len_s - (size_t)start;
	if (start > len_s)
		return ((char *)ft_calloc(1, sizeof(char)));
	if (len > len_s)
		len = len_substring + 1;
	if (len_substring > len)
		len_substring = len;
	substring = (char *)ft_calloc(len_substring + 1, sizeof(char));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, (s + start), len + 1);
	return (substring);
}