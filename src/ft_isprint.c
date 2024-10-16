/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:33:40 by tobesnar          #+#    #+#             */
/*   Updated: 2024/10/16 12:13:56 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(char c)
{
	return (c >= 32 && c <= 126);
}
/*int main()
{
	printf("%i\n", ft_isprint('Z'));
	printf("%i\n", ft_isprint('\n'));
	return 0;
}*/
