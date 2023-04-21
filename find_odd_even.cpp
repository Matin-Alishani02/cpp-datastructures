#include <iostream>

using namespace std ; 

void findOE(int a[],int n,int*o,int*e){
	*e,*o=0;
	for (int i=0;i<=n-1;i++){
		if(a[i]%2==0) (*e)++;
		else (*o)++;
	}
}
int main (){
	int n;
	cout<<"Enter n : ";
	cin>>n;
	int a[n],i;
	for (i=0;i<=n-1;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	int e=0,o=0;
	findOE(a,n,&o,&e);
	cout << "o: " << o << " e: " << e;
}