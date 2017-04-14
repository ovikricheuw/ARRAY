#include<iostream>
using namespace std;

int main(){
	char kata[10];

	int jumlah=0;
	for (int i=0; i<10; i++){
cout<<"masukan character : "<<endl;
cin>>kata[i];
	if (kata[i]=='a') {
	jumlah++; }

}
for (int i=0; i<10; i++){
	cout <<kata[i]<<endl;
}
	cout<<"jumlah a Adalah :";
	cout<<jumlah<<endl;
return 0;
}