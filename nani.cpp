#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int x;
    cout<<"Say� Girin";
    cin>>x;
    
    if(x>0){
    		cout<<x*x;
		}
    while(x<0){
    	cout<<"Say� Girin";
    cin>>x;
    break;
	}
        
}
