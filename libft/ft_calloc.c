/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 09:36:04 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/18 15:55:30 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	size_t	m_sizes;
	void	*receptor;

	if (number > 2147483647 || size > 2147483647)
		return (NULL);
	m_sizes = number * size;
	receptor = malloc(m_sizes);
	if (!receptor)
		return (0);
	ft_bzero(receptor, m_sizes);
	return (receptor);
}
