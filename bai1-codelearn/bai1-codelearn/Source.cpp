#include<iostream>
using namespace std;

void EnterArray (int a[], int &n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}

void ExportArray(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int congMang(int a[], int n) {
	int Sum = 0;
	for (int i = 0; i < n; i++) {
		Sum = Sum + a[i];
	}
	return Sum;
}

int main() {
	int n;
	int a[100];
	cout << "Nhap so luong phan tu n: ";
	cin >> n;

	EnterArray(a, n);
	ExportArray(a, n);

	cout << "Sum Array: " << congMang(a,n) << endl;
}