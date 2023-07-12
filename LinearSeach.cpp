/******************************************************************************
                                    LinearSearch
******************************************************************************/

#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key)
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
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter the element: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key;
	cout<<"\nEnter the key to serach the element into the array: ";
	cin>>key;
	cout<<"The index of element is: "<<linearSearch(arr,n,key);
	return 0;
}
