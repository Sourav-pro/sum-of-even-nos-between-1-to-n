#include <iostream>
using namespace std;

int main() {
  int n,i,sum=0;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  for(i=2;i<=n;i+=2)
    sum=sum+i;
  cout<<"The sum is"<<": "<<sum<<endl;
}
