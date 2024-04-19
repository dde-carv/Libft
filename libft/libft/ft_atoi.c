/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:23:30 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/17 17:07:19 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	len;
	int	neg;
	int	nb;
	int	nbf;

	len = 0;
	neg = 0;
	nb = 0;
	while (str[len] == 12 || str[len] == 10 || str[len] == 13
		|| str[len] == 9 || str[len] == 11 || str[len] == 32)
		len++;
	while (str[len] == 45 || str[len] == 43)
	{
		neg++;
		len++;
	}
	while (str[len] >= 48 && str[len] <= 57)
	{
		nb = (nb * 10) + (str[len] - 48);
		len++;
	}
	nbf = nb;
	if (neg != 0)
		nbf = nbf * -1;
	return (nbf);
}

/* int	ft_atoi(const char *str)
{
	int	num;
	int	isneg;
	int	i;

	num = 0;
	isneg = 1;
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		isneg *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * isneg);
} */

/* #include <stdio.h>
int main(void)
{
    char *str = "   --+++++-+-+--+-12a345";
    int result = ft_atoi(str);
    printf("Result: %d\n", result);
    return 0;
} */
