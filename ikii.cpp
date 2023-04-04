#include<iostream>
using namespace std;

int main(){
	
	int sayilar[5];
	int toplam=0;
	for(int i=0; i<5; i++){
		cin>>sayilar[i];
		toplam=sayilar[i]+toplam;
	}
	cout<<toplam/5;
	
}
