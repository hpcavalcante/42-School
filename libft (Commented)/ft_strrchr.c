/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:55:06 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/20 04:21:16 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Procura pela última ocorrencia do caractere c na string str */
char	*ft_strrchr(const char *str, int c)
{
	int	i;
	/* O índice começa no final, sendo o tamanho total da string str */
	i = ft_strlen(str);
	/* A busca começa de trás pra frente, assim que encontrar o caractere c é retornado a posição do caractere apontado pela string str */
	while (i > -1)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((char *)str + i);
		}
		i--;
	}
	return (0);
}
