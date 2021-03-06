/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:32:38 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/15 13:28:24 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Erase the data for n byte for the memory starting at the location pointed by s */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
