#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(24);
    vec.push_back(35);
    vec.push_back(45);
    cout<<"After pushback the size  is = "<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    
    



    return 0;
}