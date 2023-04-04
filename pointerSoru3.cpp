#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{
	int sayilar[]={55,66,77,88,99,18};
	
	int *ptr=sayilar; // SAYAÝLAR DÝZSÝNÝN BÝRÝNCÝ ELEMANINI ALIR 
	cout<<*ptr<<endl; // Sayýlar[0] 55 yani
	
	ptr++;
	
	cout<<*ptr<<endl; // Sayýlar[1] 66 yani okadaer
	
	cout<<*(ptr+3)<<endl;// Sayýlar[4] 99 yani okadaer
	ptr--;
	
	cout<<*ptr<<endl;
	
}
