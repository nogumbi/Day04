/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 09:00:07 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/15 13:17:03 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 		ft_iterative_power(int nb, int power)
{
	int pwr;
   	pwr 	= 1;

	if( power < 0)
	
		return 0;
	}
	while(power--)
	{
		pwr *= nb;
		return pwr;
	}
}
