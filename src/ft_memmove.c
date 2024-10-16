/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:10:38 by tobesnar          #+#    #+#             */
/*   Updated: 2024/10/16 12:12:20 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*dst;
	size_t			i;

	ptr = (unsigned char *)src;
	dst = (unsigned char *)dest;
	i = 0;
	while (i < len)
	{
		dst[i] = ptr[i];
		ptr[i] = '\0';
		i++;
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
