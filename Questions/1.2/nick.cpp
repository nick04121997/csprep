void reverse_string(char* str)
{
	char* i = str;

	while (*i != '\0') {
		i++;
	}
	// one before null char
	i--;

	// swap in place
	while (str < i) {
		char tmp = *str;
		*str = *i;
		*i = tmp;
		str++;
		i--;
	}
}