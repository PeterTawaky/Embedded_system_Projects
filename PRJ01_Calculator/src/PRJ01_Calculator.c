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
#include "Helper.h"
/* ==================================================================================== */

/* ******************************** Definition Section ******************************** */
//#define
/* ==================================================================================== */

/* ******************************* Main Program Section ******************************* */
int main(void)
{
    float sum;
	unsigned int numbers;
	unsigned int flag=0;
	char pass_entered[7];
	wrong_pass:                      //label if pass is wrong< - - - - - -
	printf("PASSWORD: ");           //                                   |
	fflush(stdin);	fflush(stdout);  //                                  |
	scanf("%s", pass_entered);     //                                    |
	flag= check_pass(pass_entered,7);//                                  |
	if(flag != 1)                  //                                    |
	{                              //                                    |
		printf("try again..."      //                                    |
				"\n"               //                                    |
				"==============================================="  //    |
				"\n"               //                                    |
				);                 //                                    |
		goto wrong_pass;           //                                    |

	}
	else                   //Program
	{
		printf("Please, enter the number of numbers you want to add: ");
		fflush(stdin);	fflush(stdout);
		scanf("%d",&numbers);
		sum= addition(numbers);
		printf("summation: %0.2f",sum);
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

*/
