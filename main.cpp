#include <iostream>
using namespace std;
int main() {
 int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n-i+1){
      cout<<j;
      j=j+1;
    }
    int star=i-1;
    while(star){
      cout<<"*";
      star=star-1;
    }
     int star1=i-1;
    while(star1){
      cout<<"*";
      star1=star1-1;
    }
     int j2=n-i+1;
    while(j2){
      cout<<j2;
      j2=j2-1;
    }
    cout<<endl;
    i=i+1;
  }
}