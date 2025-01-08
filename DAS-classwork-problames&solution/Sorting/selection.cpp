#include <iostream>
#include <ctime>
using namespace std;
int main(int argc, char** argv)
{
  int n,arr[100];
  clock_t t1,t2;
  t1 = clock();
  cout<<"How many numbers are entered?"<<endl;
  cin>>n;
  cout<<"Enter those numbers "<<n<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];

//main algorthim 
for (int i=0; i<n-1; i++){
    int small=i;
    for (int j=i+1; j<n; j++){
        if (arr[j]<arr[small]){
            small=j;
        }
      }
        if (small!=i){
            int temp = arr[small];
            arr[small] = arr[i];
            arr[i] = temp;
    }
}




  cout<<"After sorting the given number"<<endl;
  for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
  t2 = clock();
  cout<<"time takes : " <<(t2-t1)/CLOCKS_PER_SEC << "sec";
  return 0;
  
 
}