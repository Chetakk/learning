#include <iostream> 
using namespace std; 
class room 
{ 
 public: 
int length,width,height; 
void init() 
{ 
 length=0; 
 width=0; 
} 
}; 
class wash:public room 
{ 
public: 
int whitewashingarea() 
{ 
 return length*width; 
} 
}; 
class cost:public wash 
{ 
public: 
int whitewashing_cost() 
{ 
 int area=whitewashingarea(); 
 return area*15; 
} 
int floorcost() 
{ 
 int mosaic_cost=length*width*100; 
 int cement_cost=length*width*55; 
 return mosaic_cost+cement_cost; 
} 
}; 
int main() 
{ 
 cost obj; 
 obj.init(); 
 cout<<"Enter length: "; 
 cin>>obj.length; 
 cout<<"Enter width: "; 
 cin>>obj.width; 
 int total_whitewash_cost=obj.whitewashing_cost(); 
 int total_flooring_cost=obj.floorcost(); 
 cout<<"Cost of whitewashing:₹ " <<total_whitewash_cost<<endl; 
 cout<<"Cost of flooring:₹ " <<total_flooring_cost<<endl; 
}