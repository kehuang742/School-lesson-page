
#include "pch.h"
#include <iostream>
using namespace std;
/*int GCD(int a, int b) {
	if (a%b == 0) {
		return b;
	}
	else {
		return GCD(b, a%b);
	}
}
int main()
{
	cout<<("Input two numbers: ");
	int a, b;
	cin >> a >> b;
	int result = GCD(a, b);
	cout << "GCD result" << result;
	return 0;

}
*/
int Factorial(int n) {
	if (n == 0)
		return 1;
	else
	{
		return n * Factorial(n - 1);
	}
}
int main()
{
	int n ,Total;
	cout << "請輸入數字";
	cin >> n;
	Total = Factorial(n);
	cout << n << "!=" << Total;
	return 0;
}



