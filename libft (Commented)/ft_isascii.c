/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:37:14 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/19 00:27:47 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Esta função verifica se o argumento passado é um caractere ascii, os caracteres ascii válidos vão de 0 até 127 */
int	ft_isascii(int c)
{
	if ((c <= 127) && (c >= 0))
	{
		return (1);
	}
	else
		return (0);
}
