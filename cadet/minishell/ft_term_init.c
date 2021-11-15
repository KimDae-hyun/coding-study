/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghan <junghan@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:19:15 by junghan           #+#    #+#             */
/*   Updated: 2021/11/15 10:19:17 by junghan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ori_term_init(t_mini mini)
{
	tcgetattr(0, &mini.ori_term);
}

void	mini_term_init(t_mini mini)
{
	tcgetattr(0, &mini.mini_term);
	mini.mini_term.c_lflag &= ~(ECHOCTL);
	mini.mini_term.c_cc[VMIN] = 1;
	mini.mini_term.c_cc[VTIME] = 0;
	tcsetattr(0, TCSANOW, &mini.mini_term);
}
