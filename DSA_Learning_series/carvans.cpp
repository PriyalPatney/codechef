#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
    int n,temp,n1;
    cin>>n;
    for(int i=0; i<n;i++)
    {
       int max = INT_MAX;
       int result = 0;
        cin>>n1;
        for(int j=0; j<n1; j++)
        {
            cin>>temp;
            if(temp <= max)
            {
                result++;
                max = temp;
            }
        }
       cout<<result<<"\n"; 
    }

    return 0;
}