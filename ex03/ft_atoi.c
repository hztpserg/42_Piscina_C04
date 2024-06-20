/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:37:55 by seantoni          #+#    #+#             */
/*   Updated: 2023/10/31 21:01:58 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	signo;
	int	numero;

	i = 0;
	signo = 0;
	numero = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			signo++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		numero = numero * 10 + (str[i] - '0');
		i++;
	}
	if (signo != (signo / 2) * 2)
		numero = -numero;
	return (numero);
}
