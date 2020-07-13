/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 08:30:08 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/13 08:35:46 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_iterative_factorial(int nb)
{
	int factorial = 1;
	int i = 0;

	if(nb == 0)
	{
		return 1;
	}
	else if(nb < 0)
	{
		return 0;
	}
	while(i++ < nb)
	{
		factorial *= i;
		return factorial;
	}
}

