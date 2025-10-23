/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esyurtse <esyurtse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:00:30 by esyurtse          #+#    #+#             */
/*   Updated: 2025/10/16 16:38:37 by esyurtse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	is_neg;

	i = 0;
	nbr = 0;
	is_neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
	{
		i++;
	}
	while ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			is_neg = -1 * is_neg;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - 48;
		i++;
	}
	return (nbr * is_neg);
}
int main()
{
	printf("%d", ft_atoi("2147483657"));
	return 0;
}
