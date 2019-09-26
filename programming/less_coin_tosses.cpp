#include <iostream>

using namespace std;

long long f( long long n ){
  /* GCC exclusive
  long long k = __builtin_popcountll( n );
   */
  // Naive way
  long long k = 0;
  for( int i = 0; i < 64; ++ i )
    if( n & (1LL << i) ) ++ k;
  return (1LL << k); // 2^k
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  long long n;
  cin >> n;
  cout << f( n ) << '\n';
  return 0;
}
