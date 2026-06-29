#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
 
// *****
//  ***
//   *

int main()
{
	for (int i = 4; i >= 0; i--)
	{
		if (i != 4)
			cout << '\n';
		
		for (int j = 0; j < i + 1; j++) 
			cout << " ";
			
		for (int j = 0; j < (4 - i) + (4 - i - 1); j++)
			cout << "*";
	}
	
	for (int i = 0; i < 5; i++)
	{
		cout << '\n';
		
		for (int j = 0; j < i; j++) 
			cout << " ";
			
		for (int j = 0; j < (5 - i) + (5 - i - 1); j++)
			cout << "*";
	}
}
