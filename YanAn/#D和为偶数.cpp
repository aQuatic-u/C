#include<bits/stdc++.h>
using namespace std;
double K,n,ans,maxn_most,maxn_second; // K 为偶数的个数
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i ++)
    {
        cin >> ans;
        if (ans / 2 - floor(ans/2) == 0) // 是偶数
        {
            K ++;
            if (maxn_most < ans) {
/*                cout << "maxn_most 更替 " << ans << " \n";*/
                maxn_most = ans;
            }
            else if (maxn_second < ans && ans < maxn_most){
                
                maxn_second = ans;
            }
        }
    }
    if (K == 0){
        cout << "-1";
    }
    else
        printf("%.0lf",maxn_second + maxn_most);

    return 0;
}