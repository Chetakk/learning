#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(void)
{
    string s1="6484534684896543";
    
    sort(s1.begin(),s1.end(),greater<int>());
    cout<<s1;
}