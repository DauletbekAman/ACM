#include <iostream>
#include<vector>
using namespace std; 
int reverse(int a)
{
int remainder =0;
int revdn = 0;
while (a!=0)
     { 
     remainder=a%10 ; 
     revdn= revdn*10 +remainder; 
     a/=10 ; 
     }
     return revdn;
}
int main(){
   int a, b, c;
   vector<int> d;
   cin >>a;
   for(int i =0; i < a; i++)
   {
   	cin >> b >> c;
   	d.push_back(reverse(reverse(b)+reverse(c)));
   }
   for(int i = 0; i < d.size(); i++)
   {
   	cout << d[i]<<endl;
   }




 }