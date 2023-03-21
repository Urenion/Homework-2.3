#include <stdio.h>

main() 
{
	int login, password;
	printf("Write login ");
	scanf("%i",&login);
	printf("Write password ");
	scanf("%i",&password);
	
	if((login==111)&&(password==111))
	{
		printf("OK");
	}
	else
	{
		printf("EROR");
	}
}
