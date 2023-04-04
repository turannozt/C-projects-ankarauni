#include<iostream>
#include<string>

void ayirici();// Parametresiz Fonsiyon
void inputlariAl(char, int); // Parametreli Fonsiyon
void structKuElemanAl(int, char, int);// Parametreli Fonsiyon
void yazBisiler(char, int, string);// Parametreli Fonsiyon
using namespace std;
int main(){
	
	
	string isimSoyisim;
	int yas;
	cout<<"Isminizi - Soyisminizi Giriniz"<<endl;
	cin>>isimSoyisim;
	ayirici();
	cout<<"Yaþýnýzý Giriniz"<<endl;
	cin>>yas;
	ayirici();
	
	inputlariAl('A',5);
	
	
	struct aritmetik{
		int s1,s2;
		char operators;
		
	};
	aritmetik m1;
	
	m1.s1=5;
	m1.s2=10;
	m1.operators='+';
	ayirici();
	structKuElemanAl(m1.s1, m1.operators, m1.s2);
	ayirici();
	yazBisiler('A',10,"Buse");
}

void ayirici(){
	cout<<"********************"<<endl;
}


void inputlariAl(char a, int b){
	
	cout<<a<<"  "<<b<<endl;
}

void structKuElemanAl(int a, char c, int b){
	cout<<a<<" "<<c<<" "<<b<<endl;
}

void yazBisiler(char a, int b, string m){
	for(int i=0; i<b; i++){
		cout<<"---"<<a<<"---"<<endl;
	}
	cout<<m<<endl;
}


