/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 09:32:38 by isabde-s          #+#    #+#             */
/*   Updated: 2025/08/07 16:13:23 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_comb(void)
{
	int first_digit;
	int second_digit;
	int third_digit;

	while (third_digit <= 7)
	{
		third_digit = 0;
		
		while (second_digit <= 8)
			{
				second_digit = 1;
			
				while (third_digit <= 9)
				{
					third_digit = 2;

					if (third_digit != second_digit || third_digit != first_digit)
						write(1, &third_digit, 4)
					else
						third_digit++;
				}
			}
			second_digit++;
		third_digit++;
	} 
}

int main(void)
{
	
}
