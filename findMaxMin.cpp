#include <iostream>

using namespace std ; 

void findMaxMin(int a[],int n,int*max,int*min){
	for (int i=1;i<=n-1;i++){
		if(a[i]>*max) *max=a[i];
		else if (a[i]<*min) *min=a[i];
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
	int max=a[0];
	int min =a[0];
	findMaxMin(a,n,&max,&min);
	cout << "max: " << max << endl;
	cout << "min: " << min;
}