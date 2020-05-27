//ASCII BASIC 


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
	char str;
	string main, ask;
	int ass, cheeks;
	int i, b;

	cout << "ASCII Digit Number Calculator NIGGA!!! : " << endl;
	cout << "string or 1 digit char?: " << endl;
	cin >> ask;

	if (ask=="string"){
		cout << "(Spaces don't count, space value is 32) Enter the string: " << endl;

		cin >> main;

		b = main.size();

		for (i =0; i < b; i++){
			str = main[i];
			ass = (char)str;

			cout << "ASCII is for digit " << i << " is: " << ass << endl;
		}
	}

	else if(ask=="char"){
		cout << "(Spaces don't count, space value is 32) Enter the char, space does not work: " << endl;
		cin >> str;
		ass = (char)str; 
		cout << "ASCII is: " << ass << endl;
	}

	else
		cout << "Write 'char' or 'string' retard. all miniscule <3" << endl;



	cout << endl; 

	return 0;
}
