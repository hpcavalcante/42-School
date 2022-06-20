/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:05:02 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/20 03:36:59 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Aloca uma string com o tamanho total da concatenação da s1 com s2 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		count_s1;
	int		count_s2;
	char	*join;
	size_t	lenght;

	count_s1 = -1;
	count_s2 = -1;
	if (s1 == 0 || s2 == 0)
		return (NULL);
	/* O tamanho total da nova string vai ser o tamanho da s1 mais o da s2 mais 1 (para o '/0' no final */
	lenght = ft_strlen(s1) + ft_strlen(s2) + 1;
	/* Aloca o espaço para uma nova string com o tamanho dado pela variável lenght */
	join = (char *)malloc(lenght);
	if (join == 0)
		return (NULL);
	/* Passa o caractere da posição 0 de s1 para a nova string join e assim por diante até que a s1 chegue no '/0' e termine */
	while (s1[++count_s1] != '\0')
		join[count_s1] = s1[count_s1];
	/* Passa o caractere da posição 0 de s2 para a posição da nova string onde count_s1 parou somado a posição de s2 até chegar no '/0' da s2*/
	while (s2[++count_s2] != '\0')
		join[count_s1 + count_s2] = s2[count_s2];
	/* Por final chega na posição final da string join e adiciona o '/0' para terminar a string */
	join[count_s1 + count_s2] = '\0';
	return (join);
}
