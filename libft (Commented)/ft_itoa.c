/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:10:10 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/19 17:52:50 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* A função itoa converte um argumento int em uma string */
/* Funções criadas com static são funções que só podem ser usadas no bloco de código que estão inseridas, aqui são criadas as funções strncpy e a lenght_int */

/* A função strncpy foi criada para o caso do argumento int dado na função itoa ser igual a -2147483648, caso seja igual o que essa função faz é copiar caractere por caractere para uma nova string */
static char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	count_size;

	count_size = 0;
	while (src[count_size] && count_size < n)
	{
		dst[count_size] = src [count_size];
		count_size++;
	}
	while (count_size < n)
	{
		dst[count_size] = '\0';
		count_size++;
	}
	return (dst);
}

/* Essa função serve para medir o tamanho de casas decimais do número dado como argumento na função itoa.
Caso o número seja maior que zero ele ira somando um no número de casas decimais e sendo divido por 10 até não restar mais casas decimais. Caso o número seja negativo essa operação já começa no número 1 que corresponde a casa onde entrará o sinal de negativo do número. */
static int	lenght_int(int nb)
{
	int	lenght;

	if (nb > 0)
		lenght = 0;
	else
		lenght = 1;
	while (nb != 0)
	{
		lenght++;
		nb = nb / 10;
	}
	return (lenght);
}
/* */
char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	
	/* Usamos a função lenght_int para descobrir o número de casas decimais do número dado como argumento */
	len = lenght_int(n);
	/* Depois alocamos um pedaço de memória usando a quantidade de casas decimais calculadas anteriormente como argumento + 1 (Para o '/0') */
	str = (char *) malloc(sizeof(char) * (len + 1));
	/* Se a string for nula ela retorna NULL */
	if (str == 0)
		return (NULL);
	/* Se o número dado como argumento for 0 ela retorna uma string com o 0 na primeira casa */
	if (n == 0)
		str[0] = '0';
	/**/	
	if (n == -2147483648)
		return (ft_strncpy(str, "-2147483648\0", 12));
	/* Se o número dado for menor que zero, multiplicamos ele por -1 para torna-lo positivo para conseguirmos manipular ele na próxima função e adicionamos o sinal de negativo "-"" na primeira casa da string */
	if (n < 0)
	{
		n = n * (-1);
		str[0] = '-';
	}
	/* str[len] corresponde a ultima casa da string, portanto adicionamos o '\0' no final da string */
	str[len] = '\0';
	/* O número da casa anterior a casa final da string vai corresponder ao resto da divisão do número total por 10 mais 48 para corresponder ao valor do número na tabela ascii, depois dividimos o número por 10 para andar para sua casa decimal anterior */
	while (n > 0)
	{
		len -= 1;
		str[len] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}
