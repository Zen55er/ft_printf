/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacorrei <gacorrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:56:20 by gacorrei          #+#    #+#             */
/*   Updated: 2022/11/22 11:16:49 by gacorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int					n;
	char				c;
	char				*str;
	unsigned int		hex;

	n = 0;
	hex = 4898555;
	c = 'H';
	str = "0123456789";
	printf("\nReturn values for int:\nFT_: %i\nREG: %i\n\n", ft_printf("Testing int (FT_): :%i:\n", n), printf("Testing int (REG): :%i:\n", n));
	printf("\nReturn values for uint:\nFT_: %i\nREG: %i\n\n", ft_printf("Testing uint (FT_): :%u:\n", n), printf("Testing uint (REG): :%u:\n", n));
	printf("\nReturn values for char:\nFT_: %i\nREG: %i\n\n", ft_printf("Testing char (FT_): :%c:\n", c), printf("Testing char (REG): :%c:\n", c));
	printf("\nReturn values for percent:\nFT_: %i\nREG: %i\n\n", ft_printf("Testing percent (FT_): :%%:\n"), printf("Testing percent (REG): :%%:\n"));
	printf("\nReturn values for str:\nFT_: %i\nREG: %i\n\n", ft_printf("Testing str (FT_): :%s:\n", str), printf("Testing str (REG): :%s:\n", str));
	printf("\nReturn values for ptr:\nFT_: %i\nREG: %i\n\n", ft_printf("Testing ptr (FT_): :%p:\n", str), printf("Testing ptr (REG): :%p:\n", str));
	printf("\nReturn values for x:\nFT_: %i\nREG: %i\n\n", ft_printf("Testing x (FT_): :%x:\n", hex), printf("Testing x (REG): :%x:\n", hex));
	printf("\nReturn values for X:\nFT_: %i\nREG: %i\n\n", ft_printf("Testing X (FT_): :%X:\n", hex), printf("Testing X (REG): :%X:\n", hex));
	return (0);
}
