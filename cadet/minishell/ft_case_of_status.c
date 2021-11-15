/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_of_status.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghan <junghan@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:14:42 by junghan           #+#    #+#             */
/*   Updated: 2021/11/15 10:16:06 by junghan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	case_of_exit(t_mini *mini, int status, char *cmd)
{
	if (!ft_strncmp(cmd, "exit", 5))
	{
		if (!mini->buf[1])
			exit(0);
		else if (!(check_digit(mini->buf[1]) && mini->buf[2]))
			exit (status / 256);
	}
	else if (status == 0 || status == 256)
		return (status / 256);
	else if (WEXITSTATUS(status) == 2)
	{
		printf("minishell: %s\n", strerror(WEXITSTATUS(status)));
		mini->exit_stat = 1;
	}
	return (-1);
}

int	case_of_status(t_mini *mini, char *cmd, int status)
{
	mini->exit_stat = WEXITSTATUS(status);
	if (status == 3072)
		return (mini->err.malloc);
	else if (status == 2)
		printf("^C\n");
	else if (status == 3)
		printf("^\\");
	else if (WEXITSTATUS(status) == 2)
		printf("minishell: %s\n", strerror(WEXITSTATUS(status)));
	else if (WEXITSTATUS(status) == 127)
		cmd_err(cmd, mini->err.cmd, mini);
	return (1);
}
