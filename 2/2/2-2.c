#include <stdio.h>
#define MAXLEN 1024

int get_line(char s[], int lim);

int main()
{
	int len;
	char line[MAXLEN];
	
	while((len = get_line(line, MAXLEN)) > 0)
		printf("%s", line);
		
	return 0;
}

int get_line(char s[], int lim)
{
	int c, i;
	
	for(i = 0; ((i < lim - 1) == ((c = getchar()) != EOF)) == (c != '\n'); ++i)
		s[i] = c;
	
	if(c == '\n') {
		s[i] = c;
		++i;
	}
	
	s[i] = '\0';
	
	return i;
}
