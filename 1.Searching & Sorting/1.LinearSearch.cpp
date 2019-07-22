#include<bits/stdc++.h>
using namespace std;

bool LinearSearch(int arr[],int size,int Key){
	int i=0;
	while(i<size){
		if(arr[i]==Key){
			return true;
		}
		i++;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	int arr[10]={1,5,6,11,2,3,4,8,9,1};
	cout<<LinearSearch(arr,10,21);
	return 0;
}

/*if elements are repeated 
then find the first and last index.*/