#include <bits/stdc++.h>
using namespace std;


int dp[101][101][101];


int lis(int arr1[], int arr2[], int arr3[], int n , int m , int k)
{
    for(int i=0; i<=n; i++)
	{
        for(int j=0; j<=m; j++)
		{
            for(int k1=0; k1 <= k; k1++)
			{
                if(i==0 || j==0 || k1==0)
                    dp[i][j][k1] = 0;
                else if(arr1[i-1] == arr2[j-1] && arr2[j-1] == arr3[k1-1])
                    dp[i][j][k1] = 1 + dp[i-1][j-1][k1-1];
                else
                    dp[i][j][k1] = max(max(dp[i-1][j][k1], dp[i][j-1][k1]), dp[i][j][k1-1]);
            }
        }
    }
    return dp[n][m][k];
}
 
int main()
{
    int n;
    int m;
	int k;
	
    cin >> n >> m >> k;
    
    int arr1[n];
    int arr2[m];
    int arr3[k];
    
    for(int i=0; i<n; i++)
    {
    	cin >> arr1[i];
	}
	
    for(int i=0; i<m; i++)
    {
    	cin >> arr2[i];	
	}
	
    for(int i=0; i<k; i++)
    {
    	cin >> arr3[i];
	}
 
	cout << lis(arr1 , arr2 , arr3 , n , m ,k);
    return 0;
}
