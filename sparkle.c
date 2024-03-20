/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sparkle.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:06:57 by vmyshko           #+#    #+#             */
/*   Updated: 2024/03/08 15:12:47 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
// int main(void)
// {
// 	int i = 0;
// 	while (i >= 0)
// 	{
// 		write(1, "hi", 2);
// 		i++;
// 	}
// }

//BITS

int main() {
    char c = 'A';
    
    // Mask to isolate the first bit
    char first_bit = (c & 0x80) != 0; // or 128
	char second_bit = (c & 0x40) != 0; //or 64
	char third_bit = (c & 0x20) != 0; // or 32
    
    printf("The first bit of '%c' (%d) is: %d\n", c, c, first_bit);
	printf("The second bit of '%c' (%d) is: %d\n", c, c, second_bit);
    printf("The third bit of '%c' (%d) is: %d\n", c, c, third_bit);
    
	return 0;
}