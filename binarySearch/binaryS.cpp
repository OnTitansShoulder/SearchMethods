#include "binaryS.h"

/*
	Input: size of the number list;
		the number need to be found;
		sorted list of numbers.
	Output: The index of the number in the list.
*/
int main(){
	int n, target;
	int * list = new int[n];
	cin >> n >> target;
	for(int i = 0 ; i < n ; i++){
		cin >> list[i];
	}
	
	int index = binarySearch(target, list, 0, n-1);
	cout << index << endl;
	return 0;	
}

int binarySearch(int target, int* list, int start, int end){
	int mid = start/2 + end/2;
	if(start == end)
		return -1;
	if(list[mid] == target)
		return mid;
	else if(list[mid] < target){
		return binarySearch(target, list, mid+1, end);
	}
	else if(list[mid] > target){
		return binarySearch(target, list, start, mid-1);
	}
}
