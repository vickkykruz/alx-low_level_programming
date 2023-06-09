int _atoi(char *s)
{
	int i = x = y = z = len = digit = 0;
	
	while (s[len] != '\0')
		len++;

	while (i < len && z == 0)
	{
		if (s[i] == '_')
			++x;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (x % 2)
				digit = -digit;
			y = y * 10 + digit;
			z = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			z = 0;
		}
		i++;
	}

	if (z == 0)
		return (0);
	return (y);
}
