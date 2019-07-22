#include <bits/stdc++.h>
using namespace std;
bool BinarySearchRecursive(int [],int,int,int);
bool BinarySearchIterative(int [],int,int,int);
int main(int argc, char const *argv[])
{
	//Binary Search Always works on sorted array
	int arr[]={4,5,6,7,8,9};
	cout<<BinarySearchRecursive(arr,0,6-1,7)<<endl;
	cout<<BinarySearchIterative(arr,0,6-1,7)<<endl;
	return 0;
}
/********************************************/
bool BinarySearchRecursive(int arr[],int start,int end,int Key){

if(end>=start){
	int mid=start+(end-start)/2;
	if(arr[mid]==Key){
		return true;
	}
	if(arr[mid]>Key){
		return BinarySearchRecursive(arr,start,mid-1,Key);
	}
	else{
		return BinarySearchRecursive(arr,mid+1,end,Key);
	}
}
return false;
}
/**************************************/
bool BinarySearchIterative(int arr[],int start,int end,int Key){
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==Key){
			return mid;
		}
		if(arr[mid]<Key){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return -1;
}