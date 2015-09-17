#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int counter;
	vector<int> number (10);
	for (counter = 0; counter < 10; counter++)
	{
		cin >> number[counter];
		cout << endl;

		if (number[counter] == 42)
		{
			break;
		}
	}
	for (int i = 0; i < counter + 1; i++)
	{
		cout << number[i] << endl;
	}
	return 0;
}