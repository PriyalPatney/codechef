#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int fact1(int n)
{
    int result = 0;
    for(int i = 5; n/i >= 1; i *= 5)
    {
        result += n/i;
    }
    return result;
}

//following approatch is not efficient as we only need to know the number of 0's so it can be directly calculated by counting the number of
// 5's , 25's, 125's...... and output this number. 
//...................................................
//mul is done by storing the number in reveerse order as mul takes place (right -> left)
//Eg. 2019 * 10..... result = {9,1,0,2}; n = 10;
// vector<int> multiply(vector<int> result, int n)
// {
//     int carry = 0;
//     int number;
//     for(int i = 0; i<result.size()/2;i++)
//     {
//         number = result[i] * n + carry;
//         carry = number/10;
//         result[i] = number %10;
//     }
//     while(carry)
//     {
//         result.push_back(carry % 10);
//         carry = carry /10;
//     }
//     return result;
// }

//finding the factorial for large integer 10^9
// vector<int> fact1(int n)
// {
//     vector<int> result;
//     result.push_back(1);
//     int i = 2;
//     while(i<=n)
//     {
//         result = multiply(result, i);
//         i++;
//     }
//     return result;
// }

int main()
{
    int n,temp;
    // vector<int> number;
    cin>>n;
    for(int i=0 ; i<n; i++)
    {
    int cnt=0;
        cin>>temp;
        cout<<fact1(temp)<<"\n";
    }
    return 0;
}