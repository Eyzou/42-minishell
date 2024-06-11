/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athill <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 08:56:54 by athill            #+#    #+#             */
/*   Updated: 2024/04/16 09:15:42 by athill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffer.h"

void	*buffer_last(t_buffer *buf)
{
	if (buf->len)
		return (buf->ptr[buf->len - 1]);
	else
		return (0);
}