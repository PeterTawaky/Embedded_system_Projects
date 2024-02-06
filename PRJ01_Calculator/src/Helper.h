
/* **************************** Global Declaration Section **************************** */
	extern const char password[];
	extern unsigned int min_limit;
	extern unsigned int max_limit;
	extern char mode[][16];
	extern char alphapet;

/* ==================================================================================== */

/* ***************************** Sub-Program Declarations ***************************** */
	int check_pass( char pass_entered[] , int size );
	float addition(int numbers);
	long double factorial( int number);    //the output of the factorial maybe very large
	float subtraction (int numbers);
	void status ( int number );
	unsigned int numberinverter(unsigned int *number);
	void pattern (long double number);
/* ==================================================================================== */
