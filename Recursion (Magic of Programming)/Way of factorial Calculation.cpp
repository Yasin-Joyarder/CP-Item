/*   Method 1:
input: n.
output: n factorial
formula: n*(n-1)!
*/

int factorial(int n){
  if(n==0) return 1;
  int res=n*factorial(n-1);
  return res;
}


/*   Method 2:
input: n.
output: n factorial
formula: (n+1)!/(n+1)

*/

int factorial(int n){
  //suppose the maximum element is 9

  if(n==9) return 362880;
  int res=factorial(n+1);
  return res/(n+1);
}
