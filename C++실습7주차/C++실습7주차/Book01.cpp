#include <iostream>
#include <string>
#include <cstring>
using namespace std;

#include "Book01.h"

int main() {
	Book01 a("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력하세요>> ";
	getline(cin, b);
	if (b < a)
		cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나! " << endl;

	return 0;
}