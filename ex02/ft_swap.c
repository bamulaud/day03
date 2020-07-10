/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamulaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:53:52 by bamulaud          #+#    #+#             */
/*   Updated: 2020/07/10 15:02:46 by bamulaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(char c)
{
 write(1, &c, 1);
}

void ft_swap(int *a, int *b)
{
int temp;
temp = *b;
*b = *a;
*a = temp;
 }

