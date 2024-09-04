//#include<iostream>

//pass by value
#include<bits/stdc++.h> //includes all the library
using namespace std;
void number(int num){
    num += 5;
    cout<<num<<endl;         //it does not change the real value it copies the real value and then change the copied value
    num += 5;           
    cout<<num<<endl;
    num += 5;
}

//pass by refrences
void number1(int &num){       //just attach the & sign
    num += 5;
    cout<<num<<endl;         //it changes the real value
    num += 5;           
    cout<<num<<endl;
    num += 5;

}


//exception only array
void number2(int arr[], int num){    //in arrays it always gets passed by refrences we dont have to put & value
    arr[0] +=100;                    //it changes the real value
    cout<<"In funtion : "<<arr[0]<<endl;
}

int main(){
    int num;
    cin>>num;

    cout<<"pass by values"<<endl;
    number(num);        
    cout<<num<<endl<<endl;            //prints the unchanged real value

    cout<<"pass by refrence"<<endl;
    number1(num);
    cout<<num<<endl;                 //prints the real changed value

    int arr[num];
    arr[0]=5;
    number2(arr, num);
    cout<<"In main function : "<<arr[0];
    
}