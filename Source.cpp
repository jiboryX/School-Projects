// Hussain Aljibory
// 2/2/2022


#include <iostream> 
using namespace std;
int main()
{
	int item1, item2, sum, difference, product;
	float quotient;

	cout << "Enter first item: ";
	cin >> item1;
	cout << "Enter second item: ";
	cin >> item2;
	sum = item1 + item2;
	difference = item1 - item2;
	product = item1 * item2;
	quotient = (float)item1 / item2;
	cout << "The sum of item 1 and item 2 is: " << sum << endl;
	cout << "The difference of item 1 and item 2 is: " << difference << endl;
	cout << "The product of item 1 and item 2 is: " << product << endl;
	cout << "The quotient of item 1 and item 2 is: " << quotient << endl;
	return 0;






}