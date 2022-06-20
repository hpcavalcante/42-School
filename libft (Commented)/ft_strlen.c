/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:57:22 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/20 04:04:24 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Retorna o tamanho total da string passada como argumento */
int	ft_strlen(const char *str)
{
	int	count_size;
	
	/* Usando um contador que começa em zero e vai aumentando enquanto a posição da str ainda for válida, ou seja, diferente de '\0' */
	count_size = 0;
	if (str == NULL)
		return (0);
	while (str[count_size])
		count_size++;
	return (count_size);
}
