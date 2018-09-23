#include<iostream>
using namespace std;

int main() {
	int *f;
	int size;
	cin >> size;
	f = new int[size];
	for (int i = 0; i < size; ++i)
		cin >> *(f + i);
	int ff;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (*(f + j) > *(f + j + 1)) {
				ff = *(f + j);
				*(f + j) = *(f + j + 1);
				*(f + j + 1) = ff;
			}
		}
	}
	for (int i = 0; i < size; ++i)
		cout <<*(f + i)<<endl;
	system("pause");
	return 0;
}



	
	
	
	
	
	
	
	




























