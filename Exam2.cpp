// Tyion Parham
// Exam of Module 5

#include <iostream>
#include "Email.h"
#include "consoleLog.h"
#include "Die.h"

int howManyRolls(int bDay, Die dii, int recursions)
{
	recursions++;
	if (bDay == dii.getFaceValue())
		return recursions;
	else
	{
		dii.roll();
		howManyRolls(bDay, dii, recursions);
	}
}

int main()
{
	// Testing of Email
	Email email;
	email.collectEmail();
	cout << "\n\n\n";

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

	// Testing of ConsoleLog
	ConsoleLog<int> log;  // This line was used to test int, double, and string
	//log.consoleLog(13);

	Die d;
	ConsoleLog<Die> logDie;
	logDie.consoleLog(d);
	cout << "\n\n\n";

	/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

	// Testing of How many rolls function as declared and implemented above main
	srand(time(0)); 
	int recursionDepth = 0;
	Die day(365);
	int birthday = 234;
	howManyRolls(birthday, day, recursionDepth);
	cout << howManyRolls(birthday, day, recursionDepth);
}
