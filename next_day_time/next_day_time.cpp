#include "pch.h"

#include <iostream>
#include <time.h>
#include <string>
#include "sstream"

using namespace std;


int main()
{
	int year = 0, month = 0, day = 0;
	bool mark = true;
	next_day_time n;

	while (mark)
	{
		cout << "YYYY MM DD: ";
		cin >> year >> month >> day;
		if (n.next(year, month, day) == "")
		{
			cout << "Wrong input date, try again." << endl;
			continue;
		}
		mark = false;
	}
	return 0;
}



