#include<bits/stdc++.h>
using namespace std;

void JumpSearch(int array[],int arraySize,int key)
{
	int interval = sqrt(arraySize);
	int previous = 0;
	while(array[min(interval,arraySize)-1] < key)
	{
		previous = interval;
		interval +=sqrt(arraySize);
		if(previous >= arraySize)
		 	break;
		 
	}
		 while(array[previous] < key)
		 {
		 	previous++;
		 	if(previous == min(interval,arraySize))
		 	  break;
		 }
		 if(array[previous] == key)
		  cout<<"key found in "<<previous<<"th position";
		else
		cout<<"key not found";
		 
	}


int main()
{
	int array []= {10,20,30,40,50,60,70,80,90,100,144, 233, 377, 610,1500,1600};
	int key = 1500;
	int arraySize = sizeof(array)/sizeof(array[0]);
	JumpSearch(array,arraySize,key);
}
