#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string a, string b)
{

    // Your code here
    if (a.size() != b.size())
        return false;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a == b)
        return true;
    else
        return false;
}

int main(){
    string a,b;
    cin>>a>>b;
    cout<<isAnagram(a,b)<<endl;
}
