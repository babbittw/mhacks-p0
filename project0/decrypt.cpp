#include <iostream>
#include <string>

using namespace std;

int main() {

	string ciphertext, cleartext;


	cout << "Input the ciphertext: ";
	getline(cin, ciphertext);

	cleartext = ciphertext;

	for (int i = 0; i < ciphertext.size(); i++) {
		char target = ciphertext[i];
		int dist;

		if (target >= 97 && target <= 122) {
			dist = target - 97;
			cleartext[i] = 122 - dist;
		}
	}

	cout << "\nThe cleartext is: " << cleartext;

	return 0;

}
