/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:24:42 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/19 18:23:09 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Copia a quantidade n de caracteres da src para a dest */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	/* Faremos o cast de dest e src para mudar seus tipos e podermos atribuir valores */
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	/* Até que o número de n bytes chegue a zero copiamos o valor de src para dest */
	while (n--)
		*d++ = *s++;
	return (dest);
}
