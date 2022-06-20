/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:16:42 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/20 04:47:01 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Transforma uma letra minúscula em maiúscula*/
int	ft_toupper(int c)
{
	/* Se o caractere passado como argumento for minúscula é diminuido 32 de seu valor para corresponder ao seu valor ascii de letra maiúscula */
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}
