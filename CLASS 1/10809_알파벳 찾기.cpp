#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;

    int arr[26];

    fill_n(arr,26,-1);

    for (int i = 0; i < s.length(); i++)
    {
        if (arr[s[i]-'a']==-1)
        {
            arr[s[i]-'a']=i;
        }    
    }
    for (int i = 0; i < 26; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
 
    return 0;
}