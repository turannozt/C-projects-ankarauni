#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{
	int sayilar[]={55,66,77,88,99,18};
	
	int *ptr=sayilar; // SAYA�LAR D�ZS�N�N B�R�NC� ELEMANINI ALIR 
	cout<<*ptr<<endl; // Say�lar[0] 55 yani
	
	ptr++;
	
	cout<<*ptr<<endl; // Say�lar[1] 66 yani okadaer
	
	cout<<*(ptr+3)<<endl;// Say�lar[4] 99 yani okadaer
	ptr--;
	
	cout<<*ptr<<endl;
	
}
