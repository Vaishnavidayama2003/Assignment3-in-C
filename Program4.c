
#include <stdio.h>

void main(){
	char ch;
	printf("Enter character : ");
	scanf("%c",&ch);

	if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
		printf("%c is a vowel\n",ch);
	else
		printf("%c is a consonant\n",ch);
}
