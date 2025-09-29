#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void traverse_array(int arr[],int n){
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    cout<<"The original array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void insert_element(int arr[],int n,int num,int pos){
    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}
void delete_element(int arr[],int *size,int ele){
    int pos=-1;
    for(int i=0;i<=*size;i++) {
        if(arr[i]==ele) {
            pos = i;
            break;
        }
    }
    if(pos!=-1) {
        for(int i=pos;i<=*size-1;i++) {
            arr[i]=arr[i+1];
        }
        (*size)--;
        for(int i=0;i<=*size;i++) {
            cout<<arr[i]<<" ";
        }
    } else {
        cout<<"Element not present";
    }
}

int main(){
    int n,num,pos,ele,size;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    size=n;
    cout<<"Enter the elements of array"<<endl;    
    traverse_array(arr,n);
    cout<<endl<<"Enter the number to be inserted"<<endl;
    cin>>num;
    cout<<"Enter the position at which you want to insert the element"<<endl;
    cin>>pos;
    insert_element(arr,n,num,pos);
    cout<<endl<<"Enter the element to be deleted"<<endl;
    cin>>ele;
    cout<<"Array after deletion is"<<endl;
    delete_element(arr,&size,ele);
    return 0;
}