#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int x;
    don:cout<<"deger giriniz"<<endl;
	cin>>x;
	if(x>0)
	{
		cout<<x*x<<endl;
	}
	else
	{
		goto don;
	}
}
	
