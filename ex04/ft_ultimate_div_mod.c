/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamulaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:25:34 by bamulaud          #+#    #+#             */
/*   Updated: 2020/07/09 12:36:00 by bamulaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

void ft_ultimate_div_mod(int *a, int *b)
{
	int temp = *a;
	*a =*a / *b;
	*b = *temp % *b;
}

