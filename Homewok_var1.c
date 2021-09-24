#include <stdio.h>
#include <conio.h>

void convertion( int  n )
{ 
	if ( n >= 2 )
	{
		convertion( n >> 1 );
	}
	printf("%d", n & 1);
}

int main () { 
	int n;
	printf("Enter a number from the decimal system: ");
	scanf("%d", &n); 
	printf("(Decimal number system): %d = ", n);
	convertion( n );
	printf(" (Binary number system)\n"); 
	getch();
	return 0;
}