#include<bits/stdc++.h>
using namespace std;

void BinarySearch(int array[],int arraySize,int key)
{
	int left =0,right=arraySize-1,mid,flag = 0;
	while(left <= right)
	{
		mid = left +(right-left)/2; //To stop overflow and array out of bounds exception
		
		if(array[mid] == key)
		{
			cout<<" key found in "<<mid<<"th position";
			flag = 1;
			break;
		}
		else if(array[mid] < key)
		 left=mid+1;
		 else
		   right = mid-1;
		  
	}
	if(!flag)
	cout<<"key not found!!";
}

int RecursiveBinarySearch(int array[],int low,int high,int key)
{
	mid = (low+(high-low))/2;
	if(array[mid] == key)
	  return mid;
	else if(key<array[mid])
	   return(array,low,mid-1,key);
	else if(key>a[mid])
	return(array,mid+1,high,key)
	else
	    return -1;
	  
}

int main()
{
	int array []  = {10,20,30,40,50,60,70};
	int arraySize = sizeof(array)/sizeof(array[0]);
	int key =70;
	BinarySearch(array,arraySize,key);
	//low = 0,high = arraySize-1   int keyPostion = BinaraySearch(array,low,high,key);
}
