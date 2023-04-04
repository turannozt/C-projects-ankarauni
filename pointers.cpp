#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
  int a = 100,b;
  int *ptr=&a; //a nýn bellekteki yeri ile pointerin bellekteki yerini eþitledik
  
  cout<<"A nýn bellekteki yeri: "<<&a<<endl;
  cout<<"Pointerin deðiþken içine atýlmýþ halinin bellekteki yeri: "<<ptr<<endl;
  cout<<"Pointerin bellekteki yeri: "<<&ptr<<endl;
  cout<<"Pointerin bellekteki yerinin deðeri: "<<*ptr<<endl;
  
  cout<<"Deðiþtirmek istediðiniz deðeri giriniz: ";
  cin>>b;
  
  *ptr=b;
  
  cout<<"pointerin içindeki deðiþkenin deðiþmiþ deðeri: "<<*ptr<<endl;
  cout<<"pointerin içindeki deðiþkenin bellekteki yeri: "<<ptr<<endl;

	int ikinciPointerGir;
	int **pptr=&ptr; // ilk pointeri 2. pointerin içine þutladýk
	cout<<"ikinci pointerin deðerini yani 1. pointerin deðerini yazdýrdýk yani 2==1 :"<<pptr<<endl;
	cout<<"Ýkinci Pointerin deðiþtirmek istediðiniz deðeri giriniz yani taa en baþtaki a : "<<endl;
	cin>>ikinciPointerGir;
	**pptr=ikinciPointerGir;
	cout<<"Ýkinci Pointerin yeni deðerini yazdýrdýk: "<<**pptr<<endl;
	cout<<"Taaa en baþtaki a yý yazdýrdýk: "<<a<<endl;
}

