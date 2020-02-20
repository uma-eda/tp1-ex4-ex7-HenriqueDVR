#include <iostream>
#include <locale>
using namespace std;

int main() {
	locale::global(locale(""));
	cout << "7+3 =" << 7 + 3 << endl;
	cout << "7-3 =" << 7 - 3 << endl;
	cout << "7*3 =" << 7 * 3 << endl;
	cout << "7/3 =" << 7 / 3 << endl;
	cout << "7%3 =" << 7 % 3 << endl;
	cout << "7+3*5 =" << 7 + (3 * 5) << endl;
	cout << "(7+3)*5 =" << (7 + 3) * 5 << endl;
		return 0;
}