#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;
const int mxN = 12;
const int mxM = 1e4 + 2;

int dp[mxN][mxM];
int a[mxN];

int main(){
 int n , m;
 cin >> n >> m ;
 
 for ( int i = 0 ; i < n ; i++ ){
  cin >> a[i];
 }
 
 for ( int i = 0 ; i <= n ; i++ )
  for(int j = 0; j <= m; ++j)
   dp[i][j] = oo;
 dp[0][0] = 0;
 
 for ( int i = 1 ; i <= n ; i++ ){
  for ( int j = 0 ; j <= m ; j++ ){
   for ( int k = 0 ; k * k <= j ; k++ ){
    dp[i][j]= min(dp[i][j], dp [ i - 1 ][ j - k*k ] + ( a[ i- 1 ] - k) * ( a[ i - 1 ] - k)) ;
   }
  }
 }
 if(dp[n][m] == oo) 
  dp[n][m] = -1;
 cout << dp[ n ][ m ];
}
