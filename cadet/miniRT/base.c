/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 18:23:52 by daekim            #+#    #+#             */
/*   Updated: 2021/02/25 18:25:37 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void		base_img(t_img *i)
{
	i->rate = 1.0;
	i->img_w = 500;
	i->img_h = i->img_w / i->rate;
//	i->sample = 5;
//	i->depth = 10;
}
