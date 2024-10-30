/*
Patterns: Nested loops
Step 1: count the number of lines for outer loops
Step 2: count the number of columns and connect them somehow to the rows
Step 3: print them inside the inner for loop
Step 4: observe symmetry(optional)
*/
#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (n-i)+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int test;
    cout<<"Enter number of test cases: "<<endl;
    cin>>test;
    for(int x = 0; x < test; x++){
        int n;
        cout<<"Enter the number: "<<endl;
        cin>>n;
        pattern1(n);
        pattern2(n);
        pattern3(n);
        pattern4(n);
        pattern5(n);
    }
}