#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<bits/stdc++.h>


using namespace std;


int efficientJanitor(float arr[], int n){
    float max_w=3.00;
    sort(arr,arr+n);
    int l=0;
    int r=n-1;
    int count=0;
    while(l<=r){
        if(l==r){
            count+=1;
            break;
        }
        if(arr[l]+arr[r]<=max_w){
            l+=1;
            r-=1;
            count+=1;
        }
        else{
            r-=1;
            count+=1;
        }
    }
    return count;
}


int main(){

    int n;
    cin>>n;
    float weights[n];
    cout<<"Type the weights as space seperated"<<endl;
    for(int i=0;i<n;i++){
        cin>>weights[i];
    }
    float result=efficientJanitor(weights,n);
    cout<<result<<endl;
    return 0;

}