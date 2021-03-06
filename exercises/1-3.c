// Exercise 1-3 from page 13
// Modify the temperature conversion program to print a heading above the table.

#include <stdio.h>

// Print Fahrenheit-Celsius table
// for fahr = 0, 20, ..., 300; floating-point version
main() {
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;    // Lower limit of temperature table
	upper = 300;  // Upper limit
	step = 20;    // Step size
	
	fahr = lower;
	printf("Fahrenheit | Celsius\n");
	printf("-----------|--------\n");
	
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%6.1f     | %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
