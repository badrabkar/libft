/*
	Author : badr abkar <doublequintal@gmail.com
	Description : ft_atoi convert ASCII string to integer

Sign Handling: It then checks for an optional + or - sign. If a - sign is present, the result will be negative.

Digit Parsing: atoi then converts consecutive digits into an integer value. It stops when it encounters the first non-digit character.

Return: Finally, it returns the accumulated integer value.
*/

#include "../includes/libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;

	/*
	 * Inoring an leading whitespace characters 
	 * (spaces : ' ', tab : '\t', newline : '\n', Carriage return : '\r', Form feed : '\f', Vertical tab : '\v') in the string.
	 */ 

	while ((*str >= 9 && *str <= 13) || *str == ' ')  str++;

	// Sign Handling: It then checks for an optional + or - sign. If a - sign is present, the result will be negative.

	if (*str == '-') sign *= (-1);
	if (*str == '-' || *str == '-') str++;

    // Digit Parsing: atoi then converts consecutive digits into an integer value. It stops when it encounters the first non-digit character.

	while (ft_isdigit(*str)) num = num * 10 + (*str++ - 48);
	
	return (num * sign);
}
