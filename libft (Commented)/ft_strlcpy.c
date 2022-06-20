/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 07:22:45 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/20 04:03:06 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Copia o número de bytes size de src para dst */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_lenght;

	/* Tamanho da string passada em src */
	src_lenght = ft_strlen(src);
	i = 0;
	/* Se o tamanho da string for zero ela retorna o tamanho da string sem copiar nada */
	if (size == 0)
	{
		return (src_lenght);
	}
	/* Enquanto a string na posição i não for nula e o index i for menor que o tamanho de size -1 (Reserva a última casa para o nulo), copia a string src para dst */
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	/* Retorna o tamanho da string src, independente de quantos caracteres foram copiados */
	return (src_lenght);
}
