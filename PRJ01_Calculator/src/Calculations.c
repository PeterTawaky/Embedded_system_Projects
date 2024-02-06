
/* ********************************* Includes Section ********************************* */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "Helper.h"
/* ==================================================================================== */

/* **************************** Global definition Section **************************** */
const char password[]={"Tawaky"};
char mode[][16]={"addition","subtraction","factorial","status","number inverter","Home"};
char alphapet='a';
unsigned int min_limit;
unsigned int max_limit;
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
float addition(int numbers)
{
	int i;
	float sum=0;
	float number;
	for( i=0 ; i<numbers ; i++ )
	{
		printf("%d) ",i+1);
		fflush(stdin);	fflush(stdout);
		scanf("%f",&number);
		sum+=number;
	}
	return sum;
}

/*
	@Brief      : Factorial of the any number dealing with (+ve || -ve || 0)
	@Parameters : the number you want it's factorial
	@Return		: factorial
 */
long double factorial(int number)
{
	long double fact;
	if(number<0)
	{
		return 0;
	}
	else
	{
		for( fact=1 ; number>1 ; number-- )
		{
			fact *= number;
		}
		return fact;
	}
}

/*
 	@Brief      : subtracting numbers
 	@Parameters : the number of numbers you want to subtract
 	@Return		: the difference
 */
float subtraction(int numbers)
{
	int i;
	float diff;
	float number;
	printf("1) ");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&diff);
	for( i=1 ; i<numbers ; i++ )
	{
		printf("%d) ",i+1);
		fflush(stdin);	fflush(stdout);
		scanf("%f",&number);
		diff-=number;
	}
	return diff;
}
/*
 	@Brief      : return the number status of the number
 	@Parameters : the number of numbers you want to know it's status
 	@Return		: print
 */
void status ( int number )
{
	int i;
	printf( number > 0 ? "Positive\n" : number<0 ? "Negative\n" : "Zero\n");
	printf( number % 2 ? "Odd\n" : "Even\n" );
	if(number>0){
		for(i=2;i<number;i++)
		{
			if( number % i == 0 )
			{
				printf ("not prime\n");
				goto not_prime;
			}
		}
		printf("Prime number\n");
		not_prime:
	}
}

/*
 	@Brief      : subtracting numbers
 	@Parameters : the number of numbers you want to subtract
 	@Return		: the difference
 */
unsigned int numberinverter(unsigned int *number)
{
	int numberinverted=0;
	unsigned int count=0;
	while(*number)
	{
		numberinverted = (numberinverted*10) + (*(number) % 10);
		count++;
		*(number) /= 10;
	}
	*number = numberinverted;

	return count;
}


/*
 	@Brief      : subtracting numbers
 	@Parameters : the number of numbers you want to subtract
 	@Return		: the difference
 */
void pattern (long double number)
{
	printf("----------------------------------------------------------------------------------\n\n"
			"*****************************************************************************\n"
			"                                   %0.2Lf                                    \n"
			"*****************************************************************************\n",number);
}

