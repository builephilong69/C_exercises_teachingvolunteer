/*Chapter 21: Its about time*/

#include <stdio.h>
#include <time.h>


//EX1: Exercise 21-4: Write code that passes the time_t value 946684800 to the ctime() function. Output the string that’s returned.
//source code
int main_1() {
	time_t tictoc;
	time_t* p = &tictoc;
	*p = 946684800;
	printf("The time is now %s",ctime(&tictoc)); 
	return(0);
}

//EX2:Exercise 21-7: Write code that outputs the current time in the format hour:minute:second. Ensure that the minute-and-second output is two digits
//wide with a leading zero.

int main_2() {
	time_t tictoc; struct tm *today;
	time(&tictoc);
	today = localtime(&tictoc); 
	printf("It is %d:%d:%d\n", today->tm_hour, today->tm_min, today->tm_sec);
	return(0);
}

//EX3:Exercise 21-8: Fix your solution from Exercise 21-7 so that the output is in 12-hour format with an A.M. or P.M. suffix based on the time of day.
int main_3() {
	time_t tictoc; struct tm *today;
	time(&tictoc);
	today = localtime(&tictoc); 
	int h = today->tm_hour;
	char session[3] = "AM";
	if (h > 12)
	{
		h = h%12;
		session[0] = 'P';
	}
	printf("It is %d:%d:%d %s now.\n", h, today->tm_min, today->tm_sec, session);
	return(0);
}

//EX4: Modify the code in listing 21-3 so that the code print the correct year.
int main_4() {
	time_t tictoc; 
	struct tm *today;
	time(&tictoc);
	today = localtime(&tictoc); 
	printf("Today is %d/%d/%d\n", today->tm_mon, today->tm_mday, today->tm_year + 1900);
	return(0);
}