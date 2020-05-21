#include<iostream>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int result=0;
        cin>>temp;
        while(temp)
        {
            result = result * 10 + (temp % 10);
            temp /= 10;
        }
        cout<<result<<"\n";
    }
    return 0;
}