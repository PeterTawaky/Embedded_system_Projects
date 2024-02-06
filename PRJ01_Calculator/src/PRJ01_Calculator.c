/*
 ************************************************************************************
 *	@File_Name	: Calculator.c
 *	@Version  	: 1.0.0
 *	@Brief    	: doing mathematical calculations
 *	@Details  	: password
 *	@Date     	: 2 / 2 / 2024
 *	@Copyright	: Feel Free to Fork at Any Time
 *	@Author   	: Peter Tawaky
 ************************************************************************************
 */

/* ********************************* Includes Section ********************************* */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "Helper.h"
/* ==================================================================================== */

/* ******************************** Definition Section ******************************** */
//#define
/* ==================================================================================== */

/* ******************************* Main Program Section ******************************* */
int main(void)
{
	register int i;
	char pass_entered[7];
	char option;
	float sum;
	long double f;
	float difference;
	unsigned int number;
	unsigned int numbers;
	unsigned int flag=0;
	wrong_pass:                      //label if pass is wrong< - - - - - -
	printf("PASSWORD: ");
	fflush(stdin);	fflush(stdout);
	scanf("%s", pass_entered);
	flag= check_pass(pass_entered,7);
	if(flag != 1)
	{
		min_limit++;
		if(min_limit<3)
		{
			printf("PASS is wrong, please try again"
					"\n"
					"==============================================="
					"\n"
			);
			goto wrong_pass;
		}
		else
		{
			printf("you have passed the limit ");
			max_limit++;
			if(max_limit<2)
			{
				min_limit=0;
				printf("please wait 10 seconds..\n");

				printf("now you can try again\n");
				goto wrong_pass;
			}
			else
			{
				printf("Your Data is Wrong");
				return 0;
			}
		}

	}
	else                   //Program
	{
		while(6){
			printf("Choose the character of the option you want: \n");
			alphapet='a';
			for(i=0;i<6; i++,alphapet++)
			{
				printf(" %c) %s\n",alphapet,mode[i]);
			}
			fflush(stdin);	fflush(stdout);
			scanf("%c",&option);
			switch ( option )
			{
			case 'a':
				printf("Please, enter the number of numbers you want to add: ");
				fflush(stdin);	fflush(stdout);
				scanf("%d",&numbers);
				sum= addition(numbers);
				pattern (sum);
				break;
			case 'b':
				printf("Please, enter the number of numbers you want to subtract: ");
				fflush(stdin);	fflush(stdout);
				scanf("%d",&numbers);
				difference= subtraction(numbers);
				pattern (difference);
				break;
			case 'c':
				printf("Please, enter the number you want: ");
				fflush(stdin);	fflush(stdout);
				scanf("%d",&number);
				f = factorial(number);
				if(0==f)
				{
					printf("Mathematical Error");
				}
				else
				{
					pattern (f);
				}
				break;
			case 'd':
				printf("enter the number: ");
				fflush(stdin);	fflush(stdout);
				scanf("%d",&number);
				status(number);
				break;
			case 'e':
				printf("enter the number: ");
				fflush(stdin);	fflush(stdout);
				scanf("%d",&number);
				printf("the number %d is ", number );
				printf("%d digits and it's inverse is : ",numberinverter(&number));
				printf("%d",number);
			}
//should add a time here and liner
		}
	}
	return 0;
}


/*
	History Log
	------------------------------------------------------------
	Date			By		Brief
	-------------     	------------- 	-------------
	2.Feb,2024		Peter Tawaky	Creating password checker
	3.Feb,2024		Peter Tawaky	Creating header file & source file to the project
	3.Feb,2024		Peter Tawaky	creating Factorial & subtraction & Pattern functions
	4.Feb,2024		Peter Tawaky    Adding Min & Max limit to the PASSWORD  [Should add the time library]
	6.Feb,2024		Peter Tawaky    adding Status & reverse Function
	6.Feb,2024		Peter Tawaky    making sections to the code that each section make a different operation


 */
