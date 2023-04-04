#include<iostream>
#include<string>

struct Distance{
	int m;
	int cm;
};
Distance toplama(Distance , Distance );
using namespace std;
int main(){
	
	Distance d1, d2, d3;
	cout<<"Uzaklýk 1 için deðerleri giriniz: "<<endl;
	cin>>d1.m;
	cin>>d1.cm;
	cout<<"Uzaklýk 2 için deðerleri giriniz: "<<endl;
	cin>>d2.m;
	cin>>d2.cm;
	
	d3=toplama(d1,d2);
	cout<<"Girilen uzaklik deðerlerinin toplami= "<<d3.m<<" - "<<d3.cm<<endl;
}

Distance toplama(Distance pd1, Distance pd2)
{
	Distance uzaklik;
	uzaklik.m=pd1.m+pd2.m;
	uzaklik.cm=pd1.cm+pd2.cm;
	
	int b,k=0;
	
	if(uzaklik.cm>100)
	{
		b=uzaklik.cm/100;
		k=uzaklik.cm%100;
	}
	uzaklik.m=uzaklik.m+b;
	uzaklik.cm=k;
	return uzaklik;
}
