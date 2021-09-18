void ToUpper()
{
	char input_string[64];
	fgets(input_string, 63, stdin);
	int i=0;
	char ch;
	while (input_string[i] != '\0')
	{
		input_string[i] = (input_string[i] & ~32);  //(lower | 32) = upper 
		i++;										//Then ~(upper) = ~(lower) & ~32 <=> lower = upper & ~32 (De Morgan law)
	}
	printf("%s", input_string);
} 
