#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long int> a;
    long long int temp;
    long long int max = 0;
    for(int i=0; i<n;i++)
    {
        cin>>temp;
       a.push_back(temp); 
    }
    sort(a.begin(),a.end());
    for(int i=0; i<n;i++)
    {
        max < a[i] * (a.size() - i) ? max = a[i] * (a.size() - i) : max = max; 
    }
    cout<<max<<"\n";
    return 0;
}