/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamulaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:53:52 by bamulaud          #+#    #+#             */
/*   Updated: 2020/07/09 11:30:30 by bamulaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <stdio.h>

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

int main(void)
{
	int boos = 10;
	int wtc = 20;
	
	ft_swap(&boos, &wtc);
	printf("%d\n", boos);
	return (0);
}
