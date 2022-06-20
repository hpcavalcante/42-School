/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:17:17 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/19 18:53:46 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Usamos a função write para escrever um caractere e o seu respectivo file descriptor (Um número inteiro usado para o sistema reconhecer o arquivo) */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}