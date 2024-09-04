//using stl(standard template library) to get started with dsa
//set of templetes and functions

#include<bits/stdc++.h>
using namespace std;

//  STL
// devided into  four parts
    // alogos
    // containers
    // functions
    // iterations
//

//Pairs (a part of utility library)
void Pairs(){
    pair<int, int> p = {1,3};
    
    cout <<p.first << " "<<p.second<<endl;

    //nested pairs
    pair<int, pair<int, int>> p1 = {1,{3,4}};

    cout<<p1.first <<" "<<p1.second.second<< " " << p1.second.first<<endl;

    pair<int, int> arr[] = {{1,2},{2,5},{5,1}};
    int num = (sizeof(arr)/sizeof(int))/2;

    cout<<num<<endl;
    for(int i = 0;i<num;i++){
        cout<<arr[i].first<< " "<<arr[i].second<<endl;
    }
}


//vectors(dynamic vector)
void Vectors(){

    vector<int> v0;     //creats empty container

    vector<int> v = {1,2,3,4,5};

    v0.push_back(1);         //inputs 1              {1}
    v0.emplace_back(2);      //dynamically inputs    {1,2}  same as push back but faster

    vector<pair<int, int>>vec;

    vec.push_back({1,2});       //syntax
    vec.emplace_back(1,2);      //syntax

    vector<int> v5(5,100);       //{100,100,100,100,100}
    vector<int> v1(5);          //{0,0,0,0,0}

    v.emplace_back(10);         //{1,2,3,4,5,1}

    vector<int> v3(v);          //copies the vector

    //accessing in vector is the same as array 
    cout<<v[0]<< " " <<v[4]<<endl;
    //or
    cout<<v.at(0)<<endl;
    //or
    //using iterator

    vector<int>::iterator itb = v.begin(); //points to the first memory locattion(address)

    cout<<*(itb)<< " ";                     // attaching *(variable) before the address gives the value in the address
    itb++;

    cout<<*(itb)<< " ";                     //points to the value in the memory
    itb = itb + 2;

    cout<<*(itb)<< " "<<endl;

    //used methods
    vector<int>::iterator ite = v.end();    //this points address right after last address 

    //not much used methods
    vector<int>::reverse_iterator iter = v.rend(); //points right before first address
    vector<int>::reverse_iterator iteb = v.rbegin();//points the last address

    cout<<"Entire vector : \n";
    for(vector<int>::iterator it = v.begin(); it != v.end();it++){
        cout<<*(it)<<" ";
    }

    //OR
    cout<<"\nother ways : \n";
    for(auto it1 = v.begin();it1!=v.end();it1++){      //datatype would be automatically assigned 
        cout<<*(it1)<<" ";
    }
    
    //OR using for each loop
    cout<<"\nusing each loop \n";
    for(auto it : v){ 
        cout << it << " ";
    }


    //deletion
    v.erase(v.begin()+1);             //(index of element)
    //multiple deletion
    v.erase(v.begin()+2,v.begin()+4); //(index of first,index of last+1(exculsive))


    //insertion
    v.insert(v.begin(),9); //inserting the value at the address   (address,value)
    v.insert(v.begin()+1,2,7); //inserting the same values         (address,numbers of elements,value)

    //inserting a vector inside a vector
    vector<int> vc(v);
    vector<int> copy(2,6);
    vc.insert(vc.begin(),copy.begin(),copy.end());

    cout<<"\nafter insertion and deletion vector: \n";
    for(auto it1 = v.begin();it1!=v.end();it1++){      //datatype would be automatically assigned 
        cout<<*(it1)<<" ";
    }

    cout<<"\nafter copying vectors in copy vactor vc: \n";
    for(auto it1 = vc.begin();it1!=vc.end();it1++){      //datatype would be automatically assigned 
        cout<<*(it1)<<" ";
    }

    //size
    cout<<"\nSize of vector v: "<<v.size()<<endl;
    cout<<"Last element : "<<v.back()<<" is removed"<<endl;
    v.pop_back();   //delets the last element
    
    vc.swap(v1); //swaps the vector

    v1.clear(); //erases the entire vector
    cout<<"v1 vector is "<<((v1.empty())?"empty":"not empty");

}

//starts list




int main(){
    //Pairs();
    Vectors();
    return 0;
}



