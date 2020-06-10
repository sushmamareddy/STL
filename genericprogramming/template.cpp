#include<iostream>
using namespace std;
template<typename T>
int search(T arr[],int n,T key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	//int
	int a[]={1,2,3,4,5,6,7,8,9,0};
	int n=sizeof(a)/sizeof(int);
	int key=9;
	cout<<search(a,n,key)<<"\n";
	//double
	double b[]={1.2,3.0,4.5};
	cout<<search(b,3,3.0)<<"\n";
}
