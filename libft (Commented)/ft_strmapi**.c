/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi**.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:12:41 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/20 04:51:23 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Aplica a função f em cada caractere da string s */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	count_size;
	/* Usa a função strdup para alocar na memória a cópia da string s e esse valor sera atribuido a variável str */
	str = ft_strdup((char *)s);
	if (!s || !f || !str)
		return (0);
	count_size = 0;
	/* Passa a função f em cada caractere da string copiada str */
	while (str[count_size])
	{
		str[count_size] = f(count_size, str[count_size]);
		count_size++;
	}
	/* Retorna a string str depois de ter sido aplicado a função f em cada caractere dela */
	return (str);
}
