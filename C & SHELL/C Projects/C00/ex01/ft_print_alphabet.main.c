/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkallo <mkallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:08:42 by mkallo            #+#    #+#             */
/*   Updated: 2024/08/22 14:10:33 by mkallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	a;

	a = 97;
	while (a < 123)
	{
		write(1, &a, 1);
		a++;
	}
}

int main()
{
	ft_print_alphabet();
}
