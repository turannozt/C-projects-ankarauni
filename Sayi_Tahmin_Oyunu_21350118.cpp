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
	
        bas:cout << "1-20 Aras�nda Say� Tahmini Yap�n�z..." << endl;
        cin >> tahminim;
        
        if (tahminim < rasgele) {
            cout << "Say�y� B�y�lt�n�z..." << endl;
            deneme++;
            puan = puan - 10;
        } else if(tahminim > rasgele) {
            cout << "Say�y� K���lt�n�z..." << endl;
            deneme++;
            puan = puan - 10;
        }
        else{
        	cout << "Say�y� Do�ru Bildiniz..  Say�: " << tahminim << endl;
        	cout << deneme+1 <<". denemede buldunuz."<<endl;
            cout <<"Puan�n�z: "<< puan << endl;
            string devamet;
            cout<<"Devam Etmek �stinmi? Evet:e Hay�r:h\n ";
            cin>>devamet;
            if(devamet=="e"){
            	goto bas;
			}
			else{
				break;
			}
            
		}
        if (puan==0) {
            cout << "Puan�n S�f�rlanduu..... Hakk�n�z Bitti..." << endl;
            break;
        }
        
    }
   
}





