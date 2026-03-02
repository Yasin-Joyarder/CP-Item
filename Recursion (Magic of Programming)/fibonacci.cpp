/*Method :
input: n.
output: nth fibonacci number
formula: (n-1)+(n-2).

*/
int fib(int n){
  if(n==0) return 0;
  if(n==1) return 1;
  return fib(n-1)+fib(n-2);
}

int main() 
{
  int n;
  cin >> n;
  n--;
  cout << fib(n) << "\n";
    return 0;
}
