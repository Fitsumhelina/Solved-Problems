#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;
int main(int argc, char** argv)
{
	int n,index = -1,key,arr[100];
	clock_t t1,t2;
	t1 = clock();
	cout<<"How many numbers are entered?"<<endl;
	cin>>n;
	int left =0,right =n-1;
	cout<<"Enter those numbers "<<n<<endl;
		for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter the number to search it"<<endl;
	cin>>key;
	while(left <= right){
		int mid = (left + right)/2;
		if(arr[mid] == key){
			index ++;
			cout<<key<<"found at the index of"<< mid<<endl;
			getch();
		}
		else if(arr[mid] < key){
			left = mid +1;
		}
		else
			right = mid -1;
	}
	if (index == -1){
		cout<<key<<" is not found in the list "<<endl;
	}
	t2 = clock();
	cout<<(t2-t1)/CLOCKS_PER_SEC;
	
	return 0;
}