#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main(){
    // CREATE MAP
unordered_map<string,int> m;

// using map things will be in ordered type

// INSERTION

//1st method
pair<string,int> p=make_pair("babbar",3);
m.insert(p);
// 2nd method
pair<string,int>  pair2("love",2);
m.insert(pair2);
// 3rd method
m["mera"]=1;
// updation
m["mera"]=2;

// SEARCHING
cout<<m["mera"]<<endl;
cout<<m.at("babbar")<<endl;
//show error 
//cout<<m.at("unknown")<<endl;
// output is zero (cause new entry created correspond to zero)
cout<<m["unknown"]<<endl;
// now value will be zero
cout<<m.at("unknown")<<endl;

// SIZE
cout<<m.size()<<endl;

//TO CHECK PRESENCE
// if absent value will be 0
cout<<m.count("bro")<<endl;
// if present value will be 1
cout<<m.count("babbar")<<endl;

// ERASE FUNCTION
m.erase("babbar");
cout<<m.size()<<endl;


// ITERATION(PRINT WHOLE MAP)

// first method
for(auto i:m){
    cout<<i.first<<":"<<" "<<i.second<<endl;
} cout<<endl;

// second method
unordered_map<string,int> :: iterator it=m.begin();
while(it!=m.end()){
    cout<<it->first<<" "<<it->second<<endl;
    it++;
}

}