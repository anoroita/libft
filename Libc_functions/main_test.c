/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:50:55 by anoroita          #+#    #+#             */
/*   Updated: 2018/05/24 07:51:37 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size);

int		main(void)
{
	size_t	res;

	res = ft_strlcat("Anele", "Noroita", 4);
	printf("%ld\n", res);
	return (0);
}