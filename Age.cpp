#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin>>n;
  int years = n/365;
  int ramaindays= n%365;
  int months = ramaindays/30;
  int days= ramaindays%30;
  cout<<years<<" "<<"years"<<endl;
  cout<<months<<" "<<"months"<<endl;
  cout<<days<<" "<<"days" <<endl;
  return 0;
}