#include<bits/stdc++.h>
#include <vector>
using namespace std;


int main(){

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    // Declaration in vector
    vector<pair<int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> v(5,100);
    vector<int> v(5);
    v.push_back(1);
    vector<int> v1(5,20);
    vector<int> v2(v1);
     // Access elements in vector
    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<< " ";

    it=it+2;
    cout<<*(it) <<" ";

    vector<int>:: iterator it= v.end;
    vector<int>:: iterator it=v.rend;
    vector<int>:: iterator it=v.rbegin();

    cout<< v[0] <<" " <<v.at(0);
    cout<< v.back() <<" ";

       for(vector<int>:: iterator it=v.begin(); it!=v.end();it++)
{
    cout<< *(it)<< " ";
}    
for(auto it= v.begin(); it!=v.end();it++){
    cout<< *(it)<< " ";
}
for(auto it :v ){
    cout<< it <<" ";
}
// erase one element 
v.erase(v.begin()+1);

//erase couple of element
v.erase(v.begin()+2,v.begin()+4);

//Insert function
vector<int>v(2,100);
vector<int>(v.begin(),300);
vector<int>(v.begin()+1,2,10);

vector<int> copy(2,50);
v.insert(v.begin(),copy.begin(),copy.end());

//Number of elemnts in vector
cout<< v.size();
 
// It pops of the last element
v.pop_back();

//Swap vector
v1.swap(v2);

// Erase every thing from the vector
v.clear();

cout<< v.empty();

return 0;

}