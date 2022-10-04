#include <stdio.h>

double FtoC(int f)
{
	return (f-32)*5./9;
}

int main()
{
	int f;
	printf("enter temperature in fahrenheit: ");
	scanf("%i", &f);

	printf("temperature in  celcius: %lf\n", FtoC(f));
	return 0;
}
