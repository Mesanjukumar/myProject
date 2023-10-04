#include<iostream>
using namespace std;
int main(){

/* give condition ya phir given problem ture hai phir false uslo jaane
   ke liye hum if-else condition ka use kerte hai*/

//    int a;
//    cout<<"enter the value of a=";
//    cin>>a;

//    if(a>0){
//     cout<<"a is positive"<<endl;
//    }
//    else{
//     cout<<"a is negative";
//    }

// ************************************************************** ye star ye show kerte hain ki upar wala program vahi tak tha
// int a,b;
// cin>> a >> b; // cin--- enter, tab, space ko read nahi kerta hai

// cout<<"value of a and b is="<<a<<" "<<b<<endl;

// ***************************************************************
// int a;
//  a=cin.get();  // --> isa use hum tab, enter, aur space ki value ko input mein le sakte hain

// cout<<"value of a is:"<< a <<endl;

int a;
cout<<"enter the value of a:";
cin>>a;

if(a>0){
    cout<<"a is positive"<<endl;
}
else{
    if(a<0){
        cout<<"a is negative"<<endl;
    }
    else{
        cout<<"a is zero";
    }
}

}