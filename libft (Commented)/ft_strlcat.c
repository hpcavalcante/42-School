/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 08:29:32 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/20 03:55:15 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Compia a string src para o final da string dest copiando o número size de bytes apenas */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_lenght;
	size_t	src_lenght;

	i = 0;
	dest_lenght = ft_strlen(dest);
	src_lenght = ft_strlen(src);
	if (size < dest_lenght + 1)
		return (size + src_lenght);
	/* Enquanto o tamanho definido em size for maior ou igual ao tamanho de dest_lenght +1, copia src para dest */
	if (size >= dest_lenght + 1)
	{
		while (dest_lenght + i < size - 1 && src[i] != '\0')
		{
			dest[dest_lenght + i] = src[i];
			i++;
		}
	}
	/* Adiciona '\0' ao final da string */
	dest[dest_lenght + i] = '\0';
	/* Retorna o tamanho total da string copiada */
	return (dest_lenght + src_lenght);
}
