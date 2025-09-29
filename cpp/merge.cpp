#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    int i=0,j=0;
    int n=v1.size();
    int m=v2.size();
    while(i<n && j<m){
        if(v1[i]<v2[j])
        {
            v3.push_back(v1[i]);
            i++;
        }
        else
        {
            v3.push_back(v2[j]);
            j++;
        }

    }



    return 0;
}