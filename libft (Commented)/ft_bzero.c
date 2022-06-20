/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:01:51 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/19 00:14:18 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* A função bzero é usada para zerar determinada região da memória pra onde o ponteiro *str aponta, preenchendo-a de '\0' em uma quantidade de bytes determinada em size_t n */
void	ft_bzero(void *str, size_t n)
{
	/* Usamos a função ft_memset usando como argumento a str que queremos usar, o nulo (\0) e a quantidade de bytes que seram preenchidas com nulo */
	ft_memset(str, '\0', n);
}
