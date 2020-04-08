#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	string str;
	getline(cin,str);
	for (int i = 0; i < str.size();i++) {
		if(str[i] <= 'Z' && str[i] >= 'A')
			cout << (char)((str[i] + 3 - 'A') % ('Z' - 'A' + 1) + 'A');
	}
}