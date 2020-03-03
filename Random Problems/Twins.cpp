#include <iostream>
#include <vector>
#include <algorithm> 
#include <numeric>

using namespace std;



int main()
{
    vector<int> ary;
    int n,x;
    int tsum = 0 ,msum = 0;
    int output = 0;

    cin >> n;
   // cout << n << endl;


    for(int i = 0; i < n ; i++)
    {
        cin >> x;
        ary.push_back(x); 
    }

    tsum = accumulate(ary.begin(),ary.end(),0);
    sort(ary.begin(),ary.end());

    while(msum <= tsum)
    {
            msum += ary[n-1];
            tsum -= ary[n-1];
            n--;
            ary.pop_back();
            output++;
    }

    cout << output << endl;

}