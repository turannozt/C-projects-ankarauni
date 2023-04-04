#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{
	int satir, sutun;
	int satToplam=0;
	int sutToplam=0;
	cin>>satir;
	cin>>sutun;
	int sayilar[satir][sutun];
	
	for(int i=0; i<satir; i++){
		for(int j=0; j<sutun; j++){
			sayilar[i][j]=rand()%100;
			cout<<sayilar[i][j]<<" "<<endl;
		}
		
	}
	for(int i=0; i<satir; i++){
		satToplam=0;
		for(int j=0; j<sutun; j++){
			satToplam = satToplam + sayilar[i][j];
		}
		
	}
	for(int i=0; i<satir; i++){
		sutToplam=0;
		for(int j=0; j<sutun; j++){
			sutToplam = sutToplam + sayilar[j][i];			
		}
		
	}
	
}
