#include <iostream>
#include <ctime>
using namespace std;
int main(int argc, char** argv)
{
	int n,index=-1,key,arr[100];
	clock_t t1,t2;
	t1 = clock();
	cout<<"How many numbers are entered?"<<endl;
	cin>>n;
	cout<<"Enter those numbers "<<n<<endl;
		for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter the number to search it"<<endl;
	cin>>key;
	for(int i=0;i<n;i++){
		if (arr[i] == key){
			index++;
			cout<<key<<" is found at postion of "<<i<<endl;
		}
	}
	if (index == -1){
		cout<<key<<" is not found in the list "<<endl;
	}
	
	t2 = clock();
	cout<<"time takes : "<<(t2-t1)/CLOCKS_PER_SEC<<"sec";
	return 0;
}