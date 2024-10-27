
#include <stdio.h>
void main(){
	 int a,b,c;
	 
	 printf("Enter values for a, b and c :\n");
	 scanf("%d %d %d",&a, &b, &c);

	 if(a*a + b*b == c*c)
		 printf("Pythagorean triplet\n");
	 else
		 printf("Not a pythagorean triplet\n");

}
