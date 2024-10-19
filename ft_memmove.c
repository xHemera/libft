/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:10:38 by tobesnar          #+#    #+#             */
/*   Updated: 2024/10/17 14:15:22 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((t_byte *)dest)[i] = ((t_byte *)src)[i];
			i++;
		}
	}
	else if (src < dest)
	{
		while (n--)
			((t_byte *)dest)[n] = ((t_byte *)src)[n];
	}
	return (dest);
}
/* int main()
{

	printf("Test de ft_memmove() :\n");
	printf("");
	int		erreur = 0;
	int		reussi = 0;
	char dest[10] = "oldstring";
	char src[10]  = "newstring";
	char destn[] = "oldstring";
	char srcn[]  = "newstring";
	memmove(dest, src, 9);
	ft_memmove(destn, srcn, 9);
	erreur = memcmp(dest, destn, 9);
	printf("Erreur = %i\n", erreur);
} */
