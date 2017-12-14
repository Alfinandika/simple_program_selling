#include <iostream>
using namespace std;
#define max 100

int jml, A[max], sm;


int main(){

	cout<<"Masukkan Jumlah Bilangan : ";
	cin>>jml;

	for (int i = 0; i <jml; i++)
	{
		cout<<"Bilangan Ke ";
		cout<<i+1;
		cout<<" : ";
		cin>>A[i];
		cout<<""<<endl;
	}

	for (int i=1;i<=jml-1;i++){
		for (int j=i;j<jml;j++){
			if (A[i-1]<A[j]){
				sm = A[i-1];
				A[i-1] = A[j];
				A[j] = sm;
			}
		}
	}

	cout<<"Bilangan Terbesar : ";
	cout<<A[0];
	cout<<""<<endl;

} 