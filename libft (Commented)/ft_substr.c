/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment <hepiment@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 09:41:19 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/26 23:31:15 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Aloca uma nova string que começa com o index definido por start a partir da string apontada por s, 
essa nova string vai ter o tamanho máximo definido por len */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	cat_len_s;
	char	*dest;

	if (!s)
		return (NULL);
	cat_len_s = ft_strlen(s);
	if (cat_len_s <= len)
		len = cat_len_s - start;
	if (start > cat_len_s)
		return (ft_strdup(""));
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s + start, len + 1);
	return (dest);
}
