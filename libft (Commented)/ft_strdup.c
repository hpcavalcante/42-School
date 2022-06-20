/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 09:47:48 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/20 03:22:28 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Essa função duplica a string apontada por src e retorna a string copiada */
char	*ft_strdup(char *src)
{
	char	*copy;
	int		src_size;
	int		i;

	src_size = ft_strlen(src);
	copy = (char *)malloc(sizeof(char) * (src_size + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < src_size)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
