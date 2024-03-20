/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:28:48 by vmyshko           #+#    #+#             */
/*   Updated: 2024/03/08 13:55:05 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // Include for atoi function
#include <signal.h> 
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		int pid = atoi(argv[1]);
		write(1, "Process killed\n", 20);
		kill(pid, SIGUSR1);
		
		// int i = 0;
		// while (i >= 0)
		// {
		// 	write(1, "hi", 2);
		// 	i++;
		// }
	}
}