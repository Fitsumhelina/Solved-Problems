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
for (int i=1; i<n; i++){
    for (int j=i; j>0; j--){
        if (arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
        }
        else{
            break;
        }
          
    }
}




  cout<<"After sorting the given number"<<endl;
  for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
  t2 = clock();
  cout<<"time takes : " <<(t2-t1)/CLOCKS_PER_SEC << "sec";
  return 0;
  
 
}