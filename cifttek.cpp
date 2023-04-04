#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	cout<<"L?tfen bir say? giriniz";
	int deger;
	cin>>deger;
	if(deger%2==0)
	{
		cout<<"girilen deger ?ift say?d?r.."<<endl;
	
	}
	else
	{
		cout<<"girilen deger tek say?d?r.."<<endl;
		
	}
}
