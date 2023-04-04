#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;
int main(){
	/*
	struct araba{
		string marka;
		string model;
		int yil;
		int eleman[2];
	};
	
	araba mercedes;
	mercedes.marka="Mercedes";
	mercedes.model="A1";
	mercedes.yil=2021;
	mercedes.eleman[0]=10;
	mercedes.eleman[1]=20;
	cout<<mercedes.marka<<" "<<mercedes.model<<" "<<mercedes.yil<<" "<<mercedes.eleman[0]+mercedes.eleman[1]<<endl;
	*/
	
	struct peoples{
		string name,surname;
	//	bool mutluMu=false;
		int age;
	}kisiSayisi[3];
	
	kisiSayisi[0].name="Turan";
	kisiSayisi[0].surname="Öztürk";
	kisiSayisi[0].age=18;
//	kisiSayisi[0].mutluMu=false;
	
	kisiSayisi[1].name="Fatma";
	kisiSayisi[1].surname="Nezih";
	kisiSayisi[1].age=85;
//	kisiSayisi[1].mutluMu=true
	
	kisiSayisi[2].name="Lale";
	kisiSayisi[2].surname="Menekþe";
	kisiSayisi[2].age=45;
//	kisiSayisi[2].mutluMu=false;
	
	for(int i=0; i<3; i++){
		cout<<kisiSayisi[i].name<<endl;
		cout<<kisiSayisi[i].surname<<endl;
		cout<<kisiSayisi[i].age<<endl;
	}
}
