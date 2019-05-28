/*
 * IfElse.cpp
 *
 *  Created on: 28 May 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

int main()
{
	cout << "1. Burger." << endl;
	cout << "2. Chips." << endl;
	cout << "3. Cheeseburger." << endl;
	cout << "4. Chicken Burger." << endl;
	cout << "5. Ice cream." << endl;

	cout << "Please make you selection:> " << flush;

	int value;

	cin >> value;

	if(value < 5)
	{
		cout << "Its time for savoury food!" << endl;
	}
	else
	{
		cout << "Its time for sweet food!" << endl;
	}


	return 0;
}


