#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "Turkish");
  int secim;
  cout<<"1- Kare 2-Dikd�rtgen \n";
  cout<<"Se�iminizi Yap�n�z: ";
  basadon:cin>>secim;
  
  if(secim==1){
  	int kalan, kcevre, kenar, karesec;
  	cout<<"1-Alan Hesab� 2-�evre Hesab�: ";
  	karedon:cin>>karesec;
  	
  	if(karesec==1){
  		cout<<"Kenar Uzunlu�unu Giriniz: ";
  		cin>>kenar;
  		kalan=kenar*kenar;
  		cout<<"Karenin Alan�: "<<kalan;
	  }
	else if(karesec==2){
		cout<<"Kenar Uzunlu�unu Giriniz: ";
  		cin>>kenar;
  		kcevre=kenar*4;
  		cout<<"Karenin �evresi: "<<kcevre;
	}
	else{
		cout<<"Ge�ersiz Bir De�er Girdiniz";
		goto karedon;
	}
  	
	
  }
  else if(secim==2){
  	int dikalan, dikcevre, kisakenar, uzunkenar, diksec;
  	cout<<"1-Alan Hesab� 2-�evre Hesab�: ";
  	dikdortgen:cin>>diksec;
  	if(diksec==1){
  		cout<<"K�sa Kenar� Giriniz: ";
  		cin>>kisakenar;
  		
  		cout<<"Uzun Kenar� Giriniz: ";
  		cin>>uzunkenar;
  		
  		dikalan=kisakenar*uzunkenar;
  		cout<<"Dikd�rtgenin Alan�: "<<dikalan;
	  }
	  else if(diksec==2){
	  	cout<<"K�sa Kenar� Giriniz: ";
  		cin>>kisakenar;
  		
  		cout<<"Uzun Kenar� Giriniz: ";
  		cin>>uzunkenar;
  		
  		dikcevre=2*(kisakenar+uzunkenar);
  		cout<<"Dikd�rtgenin Alan�: "<<dikcevre;
	  }
	  else{
	  	cout<<"Ge�ersiz Bir De�er Girdinizdiniz...";
	  	goto dikdortgen;
	  }
  }
  else{
  	cout<<"Hatal� Bir De�er Girdiniz Tekrar Deneyin....";
  	goto basadon;
  }
  
} 
