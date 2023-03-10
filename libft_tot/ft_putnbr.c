/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:41:37 by abourdon          #+#    #+#             */
/*   Updated: 2023/01/19 11:53:49 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n, int *len)
{
	if (n == -2147483648)
		ft_putstr("-2147483648", len);
	else
	{
		if (n < 0)
		{
			ft_putchar('-', len);
			n = n * -1;
		}
		if (n > 9)
		{
			ft_putnbr(n / 10, len);
		}
		ft_putchar((n % 10) + 48, len);
	}
}
