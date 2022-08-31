#include <iostream>

using namespace std;

int main(){
	float x,y,z,v;
	
	cout<<"VOLUME BALOK"<<endl;
	cout<<"------------"<<endl;
	cout<<"Masukkan panjang: ";
	cin>>x;
	cout<<"Masukkan lebar: ";
	cin>>y;
	cout<<"Masukkan tinggi: ";
	cin>>z;
	v = x*y*z;
	cout<<"Volume nya adalah "<<v<<endl;
	
	return 0;
}
