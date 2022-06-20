/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:14:18 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/19 18:41:34 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Copia os n caracteres de src para dest e evita overlapping de bloco de memória */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dest;
	s = (const unsigned char *)src;
	/* Se o dest, src ou o número de bytes for nulo a função retorna a d (cast de dest) */
	if ((!d && !s) || !n)
		return (d);
	/* Se o destino for maior que a fonte copia de trás pra frente os n bytes de src para dest para evitar a sobreposição de memória */
	if (d > s)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	/* Se o src for maior ou igual a dest usa a função memcpy para copiar a src para dest */
	else
	{
		ft_memcpy(d, s, n);
	}
	return ((void *)d);
}
