#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
  int a = 100,b;
  int *ptr=&a; //a n�n bellekteki yeri ile pointerin bellekteki yerini e�itledik
  
  cout<<"A n�n bellekteki yeri: "<<&a<<endl;
  cout<<"Pointerin de�i�ken i�ine at�lm�� halinin bellekteki yeri: "<<ptr<<endl;
  cout<<"Pointerin bellekteki yeri: "<<&ptr<<endl;
  cout<<"Pointerin bellekteki yerinin de�eri: "<<*ptr<<endl;
  
  cout<<"De�i�tirmek istedi�iniz de�eri giriniz: ";
  cin>>b;
  
  *ptr=b;
  
  cout<<"pointerin i�indeki de�i�kenin de�i�mi� de�eri: "<<*ptr<<endl;
  cout<<"pointerin i�indeki de�i�kenin bellekteki yeri: "<<ptr<<endl;

	int ikinciPointerGir;
	int **pptr=&ptr; // ilk pointeri 2. pointerin i�ine �utlad�k
	cout<<"ikinci pointerin de�erini yani 1. pointerin de�erini yazd�rd�k yani 2==1 :"<<pptr<<endl;
	cout<<"�kinci Pointerin de�i�tirmek istedi�iniz de�eri giriniz yani taa en ba�taki a : "<<endl;
	cin>>ikinciPointerGir;
	**pptr=ikinciPointerGir;
	cout<<"�kinci Pointerin yeni de�erini yazd�rd�k: "<<**pptr<<endl;
	cout<<"Taaa en ba�taki a y� yazd�rd�k: "<<a<<endl;
}

