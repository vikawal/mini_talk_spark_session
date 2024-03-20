/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:22:26 by vmyshko           #+#    #+#             */
/*   Updated: 2024/03/08 15:13:31 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>

// void any_function(void)
// {
// 	int i = 0;
// 	while (i >= 0)
// 	{
// 		write(1, "hi", 2);
// 		i++;
// 	}
// }

void sig_handler(int signum)
{
	(void)signum;
	printf("Process is NOT KILLED\n");
}
void signal_handler(int signum, siginfo_t *info, void *context)
{
	(void)context;
	printf("Signal %d received from PID %d.\n", signum, info->si_pid);
}
int main()
{
	pid_t pid = getpid();
	struct sigaction new_sig_action;
	new_sig_action.sa_sigaction = signal_handler;
	//new_sig_action.sa_flags = SA_SIGINFO;
	printf("PID of the server process: %d\n", pid);
	// signal(SIGUSR1, sig_handler);
	sigaction(SIGUSR1, &new_sig_action, 0);
	int i = 0;
	while (1)
	{

		i++;
	}
	
    
    return 0;
}