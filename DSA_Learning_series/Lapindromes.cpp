#include <iostream>
#include <string>
#include<map>

using namespace std;
//it can be done just by maintaining a map of frequency and checking if the frequency is divisible by 2
int main()
{
    int n,flag;
    cin >> n;
    string a;
    for (int i = 0; i < n; i++)
    {
        map<char,int> m;
        cin>>a;
        int x = 0;
        int y = a.size()-1;
        while(y>x)
        {
            m[a[x]]++;
            m[a[y]]++;
            x++;
            y--;
        }
        for(auto x: m)
        {
            if(x.second % 2 == 0) flag = 1;
            else{
                flag = 0;
                break;
            }
        }
        if(flag == 1) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}