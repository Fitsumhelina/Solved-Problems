#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;
int main(int argc, char** argv){
	int n,index=-1,arr[100];
	clock_t t1,t2;
	t1 = clock();
	cout<<"How many numbers are entered?"<<endl;
	cin>>n;
	cout<<"Enter those numbers "<<n<<endl;
		for(int i=0;i<n;i++)
		cin>>arr[i];
	for (int i=0;i <= n-2;i++){
		for (int j = i+1;j <= n-1; j++){
			if (arr[i]<arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout<<"After sorting the given number"<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<endl;
	t2 = clock();
	cout<<"tieme takes : " <<(t2-t1)/CLOCKS_PER_SEC<<"sec";
	return 0;
}