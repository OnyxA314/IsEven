#include <iostream>

using namespace std;

int main (void)
{
	bool found_flag; //flag to see if a number has been declared even or odd
	int current_try; //integer to hold the current number being tested

	for (int i = 0; i < 300000; i++)
	{
		found_flag = false;
		current_try = 0;
		while (!found_flag)
		{
			if ((2 * current_try) == i) //def of even is n = 2q where n and q are integers
			{
				cout << i << " is even\n";
				found_flag = true;
			}
			else if ((2 * current_try) + 1 == i) //def of odd is n = 2q + 1 where n and q are integers
			{
				cout << i << " is odd\n";
				found_flag = true;
			}
			else	//if num not yet even or odd, then try with next largest number
			{
				current_try++;
			}
		}
	}

	return 0;
}

