#include <iostream>

using namespace std;

int main ()
{
	string warna;
	
	cout<<"PROJECT LAMPU LALU LINTAS"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Masukkan Warna Lampu Lalu Lintas : ";
	cin>>warna;
	if(warna=="hijau"){
		cout<<"Jalan"<<endl;
	} else if(warna=="merah"){
		cout<<"Berhenti"<<endl;
	}
	return 0;
}
