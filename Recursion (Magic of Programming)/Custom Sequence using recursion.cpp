/*Suppose we want to get some sequences where the 
  ith number is the sum of the (i-1)th number and (i/2)th number.
  Most importantly, the base case of that number sequence is 
  1,2
*/
#include<bits/stdc++.h>
using namespace std;

/*Method :
input: n.
output: nth custom number
formula: (n-1)th number +(n/2)th number.

*/

int emti(int n){
  if(n==0) return 1;
  return emti(n-1)+emti(n/2);
}
int main() 
{
  for(int i=0;i<10;i++){
    cout << emti(i) << " " ;
  }cout << '\n';
    return 0;
}

//Output of this program is 1 2 4 6 10 14 20 26 36 46 
