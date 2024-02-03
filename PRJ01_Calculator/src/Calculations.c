
/* ********************************* Includes Section ********************************* */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Helper.h"
/* ==================================================================================== */

/* **************************** Global Declaration Section **************************** */
	const char password[]={"Tawaky"};
/* ==================================================================================== */

/* ****************************** User Defined Functions ****************************** */
/* ==================================================================================== */
/*
	@Brief      : checking if password is wrong or right
	@Parameters : the string containing entered password
	@Return		: boolean to the flag
*/
int check_pass( char pass_entered[] , int size )
{
	int i;
	for( i=0 ; password[i] ; i++ )
	{
		if(pass_entered[i] != password[i])
		{
			return 0;
		}
	}
	return 1;
}

/*
	@Brief      : Adding numbers
	@Parameters : the number of numbers you want to add
	@Return		: the sum
*/
float addition(int n){
	int i;
	float sum=0;
	float number;
	for( i=0 ; i<n ; i++ )
	{
		printf("%d) ",i+1);
		fflush(stdin);	fflush(stdout);
		scanf("%f",&number);
		sum+=number;
	}
	return sum;
}
