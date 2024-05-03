#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("item.txt");
    char name[20];
    int cost;
    cin>>name;
    cin>>cost;
    fout<<name;
    fout<<cost;
    fout.close();

    ifstream fin("item.txt");
    char name1[20];
    int price;
    fin>>name1;
    fin>>price;
    cout<<name1;
    cout<<price;
    fout.close();

}