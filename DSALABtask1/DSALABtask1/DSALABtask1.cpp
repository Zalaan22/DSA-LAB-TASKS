#include<iostream>
using namespace std;

void insertElement(int arr[], int& n, int pos, int element) {
	for (int i = n; i > pos; i--) {
		arr[i] = arr[i - 1];
	}
	arr[pos] = element;
	n++;
}
int main() {
	int sum = 0;
	int arr[10] = { 1,2,3,50,5 };
	int n = 5;
	insertElement(arr, n, 2, 99);
	cout << "Array elements" << endl;
	for (int i = 0; i < n; i++) {

		cout << arr[i] << " ";
		sum += arr[i];
	}
	cout << endl;

	cout << "sum of the array elements is : " << sum << endl;


	return 0;
}