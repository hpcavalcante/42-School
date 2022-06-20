/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:32:58 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/20 04:47:13 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Transforma qualquer letra maiúscula em letras minúsculas */
int	ft_tolower(int c)
{
	/* Caso for encontrada uma letra maiúscula é somado 32 a ela que corresponde ao valor ascii de sua letra maiúscula correspondente */
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
		return (c);
	}
	else
		return (c);
}
