/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkallo <mkallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:34:02 by mkallo            #+#    #+#             */
/*   Updated: 2024/08/26 16:31:45 by mkallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowercase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return str;
}
void *ft_strcapitalize(char *str)
{
	int i;
	int j;
	
	i = 0;
	j = 1;
	ft_strlowercase(str);
	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if(j == 1)
				str[i] -= 32;
			j = 0;
		}
		else if(str[i] >= '0' && str[i] <= '9')
			j = 0;
		else
			j = 1;
		i++;
	}
	return str;

}

int main()
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(str));
}
