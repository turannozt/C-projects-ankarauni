#include<iostream>
using namespace std;
void repchar(char,int);

struct Distance
{
	int m;
	float cm;
};
void uzaklik(Distance);
int main()
{
	char giris;
	int t;
	cout<<"bir karakter giriniz"<<endl;
	cin>>giris;
	cout<<"tekrar sayisi giriniz"<<endl;
	cin>>t;
	repchar(giris,t);
	Distance d1;
	cout<<"metre giriniz"<<endl;
	cin>>d1.m;
	cout<<"cm giriniz"<<endl;
	cin>>d1.cm;
	uzaklik(d1);
	
}

void uzaklik(Distance dd)
{
	cout<<dd.m<<"-"<<dd.cm;
}
void repchar (char ch,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<ch;
	}
	cout<<endl;
}
