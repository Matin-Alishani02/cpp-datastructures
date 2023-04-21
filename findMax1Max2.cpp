#include<iostream>

using namespace std;

void findMax1Max2(int a[] ,int n , int *max1 ,int *max2  ){
	for (int i = 0 ; i <=n-1;i++){
		if (a[i]>*max1){
			*max2=*max1;
			*max1=a[i];
		}
		else if (a[i] > *max2)
			*max2=a[i];
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
	int max1, max2 = INT32_MIN;
	findMax1Max2(a,n,&max1,&max2);
	cout << "max1: " << max1 << endl <<"max2: " << max2 ;
}