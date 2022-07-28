#include <iostream>
#include <stdio.h>
#include <string.h>

struct Employee{
	const char * first_name;
	int age;
} emp;

struct Employee * ptr;



int main()
{
	ptr = &emp;
	ptr->first_name = "Kim";
	ptr->age = 18;
	
	printf("Baseadress of declared struct is: %d, value of ptr is: %d ", ptr, *ptr);
	printf("Value of emp, first name is: %s", ptr->first_name);
	return 0;
	
}
