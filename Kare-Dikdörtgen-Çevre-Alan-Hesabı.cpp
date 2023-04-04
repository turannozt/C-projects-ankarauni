#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "Turkish");
  int secim;
  cout<<"1- Kare 2-Dikdörtgen \n";
  cout<<"Seçiminizi Yapınız: ";
  basadon:cin>>secim;
  
  if(secim==1){
  	int kalan, kcevre, kenar, karesec;
  	cout<<"1-Alan Hesabı 2-Çevre Hesabı: ";
  	karedon:cin>>karesec;
  	
  	if(karesec==1){
  		cout<<"Kenar Uzunluğunu Giriniz: ";
  		cin>>kenar;
  		kalan=kenar*kenar;
  		cout<<"Karenin Alanı: "<<kalan;
	  }
	else if(karesec==2){
		cout<<"Kenar Uzunluğunu Giriniz: ";
  		cin>>kenar;
  		kcevre=kenar*4;
  		cout<<"Karenin Çevresi: "<<kcevre;
	}
	else{
		cout<<"Geçersiz Bir Değer Girdiniz";
		goto karedon;
	}
  	
	
  }
  else if(secim==2){
  	int dikalan, dikcevre, kisakenar, uzunkenar, diksec;
  	cout<<"1-Alan Hesabı 2-Çevre Hesabı: ";
  	dikdortgen:cin>>diksec;
  	if(diksec==1){
  		cout<<"Kısa Kenarı Giriniz: ";
  		cin>>kisakenar;
  		
  		cout<<"Uzun Kenarı Giriniz: ";
  		cin>>uzunkenar;
  		
  		dikalan=kisakenar*uzunkenar;
  		cout<<"Dikdörtgenin Alanı: "<<dikalan;
	  }
	  else if(diksec==2){
	  	cout<<"Kısa Kenarı Giriniz: ";
  		cin>>kisakenar;
  		
  		cout<<"Uzun Kenarı Giriniz: ";
  		cin>>uzunkenar;
  		
  		dikcevre=2*(kisakenar+uzunkenar);
  		cout<<"Dikdörtgenin Alanı: "<<dikcevre;
	  }
	  else{
	  	cout<<"Geçersiz Bir Değer Girdinizdiniz...";
	  	goto dikdortgen;
	  }
  }
  else{
  	cout<<"Hatalı Bir Değer Girdiniz Tekrar Deneyin....";
  	goto basadon;
  }
  
} 
