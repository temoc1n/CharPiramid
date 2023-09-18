#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	
	string word;
	string prinword;

	cout << "Word: ";
	getline(cin, word);

	int len = word.length();

	string prev;

	for(int i = 0; i < word.length(); i++){
		
		prinword = prinword + word[i];

		for(int i = 0; i <= len; i++){
			cout << " ";
		}
		len--;
		
		string prev;
		
		for(int j = prinword.length(); j >= 0; j--){
			if (i != j){
				prev += prinword[j];
			}
		}
		
		cout << prinword << prev << endl;

	}

	return 0;
}
