/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 08:48:43 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/15 13:08:07 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int		 ft_recursive_factorial(int nb)
{
	if(nb >= 1)
	{
		return(nb * ft_recursive_factorial(nb - 1));
	}
	if(nb == 0)
	{
		return 1;
	}
	return 0;
}

