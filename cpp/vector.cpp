#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v; //intialised as zero not garbage
    cout<<"Size of vector is "<<v.size()<<endl;
    cout<<"capacity of vector is "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size of vector is "<<v.size()<<endl;
    cout<<"capacity of vector is "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size of vector is "<<v.size()<<endl;
    cout<<"capacity of vector is "<<v.capacity()<<endl;

    v.push_back(6);
    cout<<"Size of vector is "<<v.size()<<endl;
    cout<<"capacity of vector is "<<v.capacity()<<endl;
    //capacity became double

    v.push_back(8);
    cout<<"Size of vector is "<<v.size()<<endl;
    cout<<"capacity of vector is "<<v.capacity()<<endl;

    v.push_back(9);
    cout<<"Size of vector is "<<v.size()<<endl;
    cout<<"capacity of vector is "<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++) //function to find size
    
        cout<<v[i]<<" ";
        cout<<endl;
        
    for(int i=0;i<v.size();i++) //function to find size
    
        cout<<v.at(i)<<" ";
        cout<<endl;

        for(auto value:v)
            cout<<value<<" ";
            cout<<endl;

        v.pop_back();
        for(auto value:v)
            cout<<value<<" ";
            cout<<endl;

       cout<<"Front value :"<<v.front()<<" "<<"Last value :"<<v.back();

       cout<<endl;

       v.insert(v.begin(),2); //at 0 index 
       for(auto value:v)
        cout<<value<<" ";
        cout<<endl;

        v.insert(v.begin(),+2); //at 2 index 
       for(auto value:v)
        cout<<value<<" ";
        cout<<endl;

    cout<<"Size of vector is "<<v.size()<<endl;
    cout<<"capacity of vector is "<<v.capacity()<<endl;

     v.insert(v.begin()+4,3,11); //3 copies of 11
       for(auto value:v)
        cout<<value<<" ";
        cout<<endl;

    v.erase(v.begin()); // erase the element
    for(auto value:v)
        cout<<value<<" ";
        cout<<endl;

        v.erase(v.begin(),v.begin()+2); //exclusie of last element
        for(auto value:v)
        cout<<value<<" ";
        cout<<endl;

        v.erase(v.begin(),v.begin()+3);
        for(auto value:v)
        cout<<value<<" ";
        cout<<endl;

        vector<int>v1={1,3,5,7,2};
        for(auto value:v1)
        cout<<value<<" ";
        cout<<endl;
        

        vector<int>v2(3,5);//5 is 3 times
        for(auto value:v2)
        cout<<value<<" ";
        cout<<endl;

        //iterators

        vector<int>::iterator itr;
        for(auto itr=v.begin();itr!=v.end();itr++)
            cout<<*(itr)<<" "; //dereferencing the vector
            cout<<endl;

        //reverse the vector

        vector<int>::reverse_iterator rit;
        for(auto rit=v.rbegin();rit!=v.rend();++rit)
            cout<<*(rit)<<" ";
            cout<<endl;



    

    




}
