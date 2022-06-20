/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:21:41 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/19 21:18:05 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Retornar um inteiro a um determinado file descriptor */

/* Função static usada apenas para este bloco de código que recebe um inteiro e soma-o a '0' para transforma-lo em um número da tabela ascii */
static void	ft_putchar_int(int i, int fd)
{
	char	c;

	c = '0';
	c = c + i;
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = 1;
	/* Se o número for o menor int possível, imprime o número -2 e n fica com o valor restante pra ser impresso normalmente pela função write */
	if (n == -2147483648)
	{
		ft_putstr_fd("-2", fd);
		n = 147483648;
	}
	/* Se n for um número negativo imprime o sinal de negativo e multiplica n por -1 para transforma-lo em positivo e ser impresso por write */
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	/* i vai ser usado para andar pelas casas decimais do número */
	while (i <= n / 10)
		i = i * 10;
	while (i >= 1)
	{
		/* Imprime o primeiro número */
		ft_putchar_int(n / i, fd);
		/* Retira o primeiro número e n fica valendo os números restantes */
		n = n - (n / i) * i;
		/* i vai ser dividido por 10 até valer 0, assim acabando as casas decimais do número e terminando o while*/
		i = i / 10;
	}
}
