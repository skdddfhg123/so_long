/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idongmin <idongmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:59:32 by dongmlee          #+#    #+#             */
/*   Updated: 2022/03/15 15:09:18 by idongmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*s_ptr;

	s_ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s_ptr[i] = 0;
		i++;
	}
}
