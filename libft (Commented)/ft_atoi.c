/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:59:03 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/19 00:09:34 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Função que transforma um argumento string em um tipo inteiro */
 
int	ft_atoi(const char *str)
{
	int	result;
	int	ch_sign;
	int	count_size;

	result = 0;
	ch_sign = 1;
	count_size = 0;
	
	/* Verifica se o caractere na posição count_size é uma tabulação, quebra de linha, return ou espaço, caso seja o while vai até uma posição da string em que não seja um desses */
	
	while ((str[count_size] >= '\t' && str[count_size] <= '\r') \
	|| str[count_size] == ' ')
		count_size++;
	
	/* Verifica se o caractere é um sinal de negativo ou positivo, caso seja NEGATIVO transforma o ch_sign em -1 que no retorno final da função vai multiplicar o número do resultado por -1, transformando-o em negativo, caso seja POSITIVO apenas soma mais um no contator e muda para a próxima posição do array */
	
	if (str[count_size] == '-' || str[count_size] == '+')
	{
		if (str[count_size] == '-')
			ch_sign *= -1;
		count_size++;
	}
	
	/* Aqui é utilizada a função ft_isdigit que verifica se o caractere passado na posição atual é um número, caso seja multiplica a variável result por 10 a cada vez que o while executa para emular as casas decimais do número final e soma ao número que está na posição da string */
	
	while (ft_isdigit(str[count_size]))
	{
		result = (result * 10) + (str[count_size] - '0');
		count_size++;
	}
	
	/* Por final retorna o resultado final multiplicado pela variável ch_sign que vai determinar se o número final vai ser positivo ou negativo */
	
	return (ch_sign * result);
}
