#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main(){
	struct kisiler{
		int idNo;
		string isim;
		string cinsiyet;
		int dogumYili;
		string okul;
		float ortalama;
	}ogrenciler[50];
	
	ogrenciler[0].idNo=58;
	ogrenciler[0].isim="Ahmet Berber";
	ogrenciler[0].cinsiyet="Erkek";
	ogrenciler[0].dogumYili=1992;
	ogrenciler[0].okul="Ankara Üniversitesi";
	ogrenciler[0].ortalama=3.08;
	
	cout<<ogrenciler[0].okul<<endl;
	/*
	for(int i=0; i<50; i++){
		if(ogrenciler[0].idNo %2==0){
			cout<<ogrenciler[0].okul<<endl;
		}
	}
	*/
	int a;
	int yas[50];
	for(int i=0; i<50; i++){
		
		yas[i]=2022-ogrenciler[i].dogumYili;
		a=std::min(29, yas[i]);
	}
	
	cout<<"En Küçük Yaþ: "<<a<<endl;
	
}
