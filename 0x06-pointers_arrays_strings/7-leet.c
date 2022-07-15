nclude "main.h"
/**
 * leet - encodes a string
 * @s: pointer to string
 * Return: pointer to s
 */
char *leet(char *s)
{
	int stringCount, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	/* scan through a string using stringcount */
	stringCount = 0;

	while (s[stringCount] != '\0')
		/* check whether leetLetters are found */
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == s[stringCount])
			{
				s[stringCount] = leetNums[leetCount];
			}
			leetCount++;
		}
		stringCount++;
	}
	return (s);
}
