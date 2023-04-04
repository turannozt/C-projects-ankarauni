#include <iostream>
#include <stdlib.h>
#include <time.h>
 
using namespace std;
 
int main()
{
setlocale(LC_ALL, "Turkish");
int rasgele;

srand(time(NULL));
rasgele=rand()%20;



int puan=100, tahminim;
int deneme=0;

tahminim=-1;

while (tahminim!=rasgele || puan!=0) {
	
        bas:cout << "1-20 Arasýnda Sayý Tahmini Yapýnýz..." << endl;
        cin >> tahminim;
        
        if (tahminim < rasgele) {
            cout << "Sayýyý Büyültünüz..." << endl;
            deneme++;
            puan = puan - 10;
        } else if(tahminim > rasgele) {
            cout << "Sayýyý Küçültünüz..." << endl;
            deneme++;
            puan = puan - 10;
        }
        else{
        	cout << "Sayýyý Doðru Bildiniz..  Sayý: " << tahminim << endl;
        	cout << deneme+1 <<". denemede buldunuz."<<endl;
            cout <<"Puanýnýz: "<< puan << endl;
            string devamet;
            cout<<"Devam Etmek Ýstinmi? Evet:e Hayýr:h\n ";
            cin>>devamet;
            if(devamet=="e"){
            	goto bas;
			}
			else{
				break;
			}
            
		}
        if (puan==0) {
            cout << "Puanýn Sýfýrlanduu..... Hakkýnýz Bitti..." << endl;
            break;
        }
        
    }
   
}





