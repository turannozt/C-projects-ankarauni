#include<iostream>
using namespace std;
int main()
{
	int a;
	a=5;
	cout<<a<<endl;
	
	int dizi[]={100,200,300,400,500,600};
	
	cout<<dizi[0]<<endl;
	cout<<dizi[1]<<endl;
	cout<<dizi[2]<<endl;
	cout<<dizi[3]<<endl;
	cout<<"-------------";
	
	for(int i=0; i<6; i++){
		cout<<dizi[i]<<endl;
	}
	cout<<"---While---";
	int j=0;
	while(j<5){
		cout<<dizi[j]<<endl;
		j++
	}

}
