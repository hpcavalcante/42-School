/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 13:40:40 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/19 17:58:34 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Está função procura pelo caractere c nos primeiros n bytes de uma string */
void	*ft_memchr(const void *str, int c, size_t n)
{
	/* Declaramos duas variáveis novas para fazer o cast dos argumentos do caractere a ser procurado e da string em que vamos procura-los para mudarmos o seu tipo podermos manipular esses valores */
	unsigned char	char_c;
	unsigned char	*cstr;

	char_c = (unsigned char)c;
	cstr = (unsigned char *)str;
	/* Começamos no valor total de n e vamos diminuindo-o até zero, caso encontre o caractere c na string apontada por cstr a função retorna o caractere */
	while (n--)
	{
		if (*cstr == char_c)
		{
			return (cstr);
		}
		cstr++;
	}
	return (0);
}
