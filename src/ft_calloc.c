/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:25:55 by tobesnar          #+#    #+#             */
/*   Updated: 2024/10/17 13:08:59 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*ptr;

	ptr = malloc(elementCount * elementSize);
	if (ptr)
		ft_bzero(ptr, elementCount * elementSize);
	return (ptr);
}

// int	main(void)
// {
// 	size_t	i;
// 	size_t	elementCount = 5;
// 	int		*arr_calloc;
// 	int		*arr_ft_calloc;

// 	// Utilisation de calloc
// 	arr_calloc = (int *)calloc(elementCount, sizeof(int));
// 	// Utilisation de ft_calloc
// 	arr_ft_calloc = (int *)ft_calloc(elementCount, sizeof(int));

// 	// Comparaison des deux résultats
// 	printf("Test avec calloc (fonction standard):\n");
// 	for (i = 0; i < elementCount; i++)
// 	{
// 		printf("arr_calloc[%zu] = %d\n", i, arr_calloc[i]);
// 	}

// 	printf("\nTest avec ft_calloc (ta fonction):\n");
// 	for (i = 0; i < elementCount; i++)
// 	{
// 		printf("arr_ft_calloc[%zu] = %d\n", i, arr_ft_calloc[i]);
// 	}

// 	// Libérer la mémoire
// 	free(arr_calloc);
// 	free(arr_ft_calloc);

// 	return (0);
// }
