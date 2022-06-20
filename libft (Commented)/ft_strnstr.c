/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:56:16 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/20 04:18:57 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Procura uma substring em uma string, a primeira ocorrência do caractere '\0' que determina o final de alguma string. A busca é feita apenas nos primeiros len bytes de str */
char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	count_size;

	/* Tamanho da substring */
	count_size = ft_strlen(find);
	if (count_size == 0)
		return ((char *)str);
	/* Enquanto o ponteiro de str não apontar pra nulo e o contador for menor ou igual ao */
	while (*str != 0 && count_size <= len)
	{
		/* Se a str for igual a find nos primeiros bytes correspondente ao tamanho de find retorna a posição de str */
		if (ft_strncmp(str, find, count_size) == 0)
			return ((char *)str);
		len--;
		str++;
	}
	return (0);
}
