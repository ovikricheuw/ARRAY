#include<iostream>
using namespace std;
	int main () {
		int a[8];
		int jumlah;
	//masukan data
	for(int i=0; i<=7; i++) {
	cout <<"masukan data : " <<i+1<<" : ";
	cin >>a[i];
	}
	
	jumlah=0;
	for(int i=0; i<=7; i++) {
	jumlah=jumlah+a[i];
	cout<<"perulangan ke-"<<i+1<<"jumlah="<<jumlah-a[i]<<"+"<<a[i]<<"="<<jumlah<<endl;
	}
	
	cout <<"jumlah seluruhnya: " <<jumlah<<endl;
	return 0;
	}