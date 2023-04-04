
#include <iostream>
#include<cmath>
using namespace std;


int main()
{
    int  toplam=0; 
    double ort , sapma,ara_deger,ara_deger1;
    cout << "serideki eleman sayýsýný gir:"<<endl;
    float seri[5] ;


    for(int i=0;i<5;i++)
    {
        int eleman;
        cout<<i+1<<". elemanný giriniz: "<<endl;
        cin>>eleman;
        seri[i]=eleman;

    }

    for(int i=0;i<5;i++)
    {
        toplam+=seri[i];
    }
    ort=toplam/5;
    
    for(int i=0;i<5;i++)
    {
       ara_deger=(seri[i]-ort)*(seri[i]-ort);
       ara_deger1+=ara_deger;
    }
    ara_deger1=ara_deger1/5;
	for(int i=0; i<5;i++){
		
	}

    for(int i=0;i<5;i++)
    {
       cout<<seri[i]<<" ";
    }
    
    cout<<"\nserisinin standart sapmasý = "<<sqrt(ara_deger1);

    return 0;
}
