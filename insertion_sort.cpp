#include<iostream>

using namespace std;
void print(int a [],int n){
		for (int i = 0 ; i <=n ; i ++ ){
		cout << a[i]<<" ";
	}
}
void insSort(int a[] ,int n){
	
	int k , i , key ; 
	for (k=1 ; k<=n-1;k++){
		key = a[k];
		i = k-1 ;
		while (i >=0&& a[i]>key){
			a[i+1]=a[i];
			i--;
		}
		a[i+1]= key ; 
	}
	print(a,n);
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
	insSort(a,n);
}