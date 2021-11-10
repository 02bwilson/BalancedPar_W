#include <iostream>
#include "BalPar.h"
#include "String"
using namespace std;

int main() {
	BalPar isThisBal;

	cout << "0 = is not balanced, 1 = is balaned" << endl;;
	cout << "The String: ((())) {} {{ { }} }   is: ";
	cout << isThisBal.isBalanced("((())) {} {{ { }} }");

	cout << endl <<  "Input your own string! " << endl;
	string inputString;
	cin >> inputString;

	cout << endl << isThisBal.isBalanced(inputString);





	return 0;
}