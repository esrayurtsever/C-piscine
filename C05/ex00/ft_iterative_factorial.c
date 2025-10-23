/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esyurtse <esyurtse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:39:22 by esyurtse          #+#    #+#             */
/*   Updated: 2025/10/16 16:44:44 by esyurtse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb != 0)
	{
		result *= nb; 
		nb--;
	}
	return (result);
}
int main(int argc, char const *argv[])
{
	printf("%d", ft_iterative_factorial(41));
}
