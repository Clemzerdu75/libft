/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:05:29 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/12 16:09:09 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Print a string with a '/n' at the end */
void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
