#include<iostream>
#include<cstring>
using namespace std;
int main(void) {
	string name;
	int kg, age;
	while (1) {
		cin >> name >> age >> kg;
		if (name=="#" && age == 0 && kg == 0) {
			break;
		}
		if (age > 17 || kg >= 80) {
			cout << name <<" Senior"<< endl;
		}
		else{
			cout << name << " Junior" << endl;
		}
	}
}