#include <iostream> 
using namespace std;

	int main () {
	char nama [100] [100];
	int nilai [100];
	int no;
	
	cout <<"masukan Jumlah Mahasiswa :  "<<endl;
	cin>>no;
	
	//input data mahasiswa
	
	for (int i=1; i<=no; i++) {
	cout<<"masukan nama Mahasiswa : "<<endl;
	cin>>nama[i];
	cout <<"masukan nilai mahasiswa : "<<endl;
	cin>>nilai[i];
	}
	
	//menampilkan data 
	
	cout<<"tampikan data " <<endl;
	for(int a=1; a<=no; a++) {
	cout<<"nama :"<<" "<<nama[a]<<" "<<"dengan nilai "<<" "<<nilai[a]<<endl;
	}
	
return 0;
}