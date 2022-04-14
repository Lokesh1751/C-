#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <string> // file to include string functions
#include <algorithm> // file to include sort function
using namespace std;
int main(){
    string s="abcacbade";
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
    char ans='a';
    int maxf=0;
    for(int i=0;i<26;i++){
        if(freq[i]>=maxf){
            maxf=freq[i];
            ans=i+'a';
        }
    }
    cout<<maxf<<" "<<ans<<endl;
}