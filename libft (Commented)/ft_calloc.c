/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 09:36:04 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/19 00:23:44 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Função usada para alocar um numéro especificado de bytes em size_t size e a quantidade de variáveis que vão serem alocadas na memória em size_t number */
void	*ft_calloc(size_t number, size_t size)
{
	size_t	m_sizes;
	void	*receptor;
	/* Verifica se o número de váriaves não é maior que o número suportado para alocação de memória, caso seja a alocação de memória falha e retorna NULL */
	if (number > 2147483647 || size > 2147483647)
		return (NULL);
	/* m_sizes corresponde ao tamanho de memória a ser alocado, que é o número de variáveis multiplicado pela quantidade de bytes que vão ser alocadas em cada variáveis. Para isso usamos a função malloc para alocar o espaço total na memória */
	m_sizes = number * size;
	receptor = malloc(m_sizes);
	/* Se a alocação de memória falhar a função acaba e retorna nulo */
	if (!receptor)
		return (0);
	/* Por fim usamos a função bzero para zerar o espaço alocado colocando nulo em cada byte no tamanho total do espaço e retorna o espaço alocado já zerado */
	ft_bzero(receptor, m_sizes);
	return (receptor);
}
