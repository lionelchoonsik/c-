#include<iostream>
using namespace std;
int main() {
	string s1("welcome");
	cout << s1.length() << endl;
	cout << < s1.size() << endl;
	cout << s1.capacity() << endl;
	s1.erase(1, 2);
	cout << s1.length() < endl;
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;
	/*s1.append("to c++");
	cout << s1 << endl;

	string s1("welcome");
	s1.assign("Dallas");
	cout << s1 << endl;

	string s2("welcome");
	s2.assign("Dallars.Texas")

	string s1("welcome");
	cout << s1.at(3) << endl;
	cout << s1.erase(2, 3) << endl;
	s1.clear();
	cout << s1.empty() << endl;*/

}
