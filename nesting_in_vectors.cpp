
#include <iostream>
#include <bits\stdc++.h>
using namespace std;

void printvec(vector < pair<int , int >> & v){

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    

}

int main(){

    // Vector of a paricular type 

    vector < pair<int , int >> v = {{1,2} , {2,3}};

    printvec(v);

    v.push_back({3 , 4});
    v.push_back(make_pair(7 , 8));

    printvec(v);

    



 

    
return 0;
}