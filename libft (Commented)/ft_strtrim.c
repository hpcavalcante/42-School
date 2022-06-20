/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 20:30:55 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/20 04:41:14 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Retorna uma cópia da string s1 removendo o caractere set no início e final da string s1 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	lenght_s1;

	if (s1 == NULL || set == NULL)
		return (NULL);
	/* Procura a primeira ocorrência de set na string s1 */
	while (*s1 && ft_strchr(set, *s1) != NULL)
		s1++;
	/* Define o tamanho da string s1 */	
	lenght_s1 = ft_strlen(s1);
	/* Enquanto o tamanho da string s1 for maior que zero e o retorno da função strchr for True, o tamanho da string diminui até acabar o tamanho da string ou o caractere */
	while (lenght_s1 && ft_strchr(set, s1[lenght_s1]))
		lenght_s1--;
	return (ft_substr((char *)s1, 0, lenght_s1 + 1));
}
