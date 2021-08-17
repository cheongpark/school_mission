#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int sum = 0;
	for (int i = 0; i <= 100; i++)
	{
		sum += i;
		if (sum % 2 == 0)
			cout << "짝수 " << i << " : " << sum << endl;
		else 
			cout << "홀수 " << i << " : " << sum << endl;
	}
}