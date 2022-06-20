/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:23:30 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/20 03:21:26 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Procura a primeira ocorrência do caractere c no ponteiro apontado por str */
char	*ft_strchr(const char *str, int c)
{
	unsigned char	*s;
	unsigned char	i;

	i = (unsigned char) c;
	s = (unsigned char *)str;
	while (*s != i && *s != '\0')
	{
		s++;
	}
	if (*s == i)
	{
		/* Caso encontre o caractere i(c) na string ele retorna a string s na posição atualmente apontada */
		return ((char *)s);
	}
	return (0);
}
