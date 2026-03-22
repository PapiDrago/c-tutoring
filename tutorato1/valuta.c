#include<stdio.h>

int main(void) {
	double tasso_dol_eur = 1.18213;
	double importo_eur = 10;
	printf("Al tasso %20.8f, %f euro equivalgono a %f dollari.\n", tasso_dol_eur, importo_eur, importo_eur*tasso_dol_eur);
	
	printf("Al tasso %d, %f euro equivalgono a %f dollari.\n", tasso_dol_eur, importo_eur, importo_eur*tasso_dol_eur);
	/**
	Please notice that in the double type specifier denoted, for example, with '%.3f' the digit after the period ('.') indicates the precision desired when outputing the formatted string, i.e., the number of decimal digits that are going to be printed. Furthermore, before actually printing, the function rounds to the nearest.
	For instance, if I have 1.1871349, the value printed using '%f' is 1.187135. This examples shows that if the precision is not specified by default it is 6.
	
	We can also decide to specify the field width of the "converted value". It is enough to write a digit after the '%'. If the "converted value" has a smaller number of characters then, by default on the left, then it is padded with spaces.
	Just try to execute this program to appreciate it.
	
	If I use the %d specifier when passing a floating point number, in my architecture, printf goes to look to a specialized register for int values while actually the floating point number sits in a different location.
	*/
}
