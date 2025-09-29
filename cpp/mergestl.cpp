#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
     cout << "Enter first array ";
    vector<int>v1;
    int value;
    while(true){
        cin >> value;
        if(value ==-1){
            break;
        }
    v1.push_back(value);
        
    }
    
     cout << "Enter second array ";
    vector<int>v2;
    
    while(true){
        cin >> value;
        if(value ==-1){
            break;
        
        }
    v2.push_back(value);
        
    }

  int n=v1.size();
  int m=v2.size();

  vector<int>v3(n+m);
  
  merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
  for(auto value:v3)
  cout<<value<<" ";
}