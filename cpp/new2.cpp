// #include<iostream>
// using namespace std;
// int main(void)
// {
//     int n;
//     cout<<"Enter the Value of N :";
//     cin>>n;
//cout<<"Square SERIES :";
//     cout<<"Using for loop -----------------------------\n";
//     for(int i=1;i<=n;i++)
//     {
//         cout<<i<<"^2 = "<<i*i<<"\n";
//     }
//     cout<<"Using while loop ----------------------------\n";
//     int j=1;
//     while(j<=n)
//     {
//         cout<<j<<"^2 = "<<j*j<<"\n";
//         j++;
//     }
//     cout<<"Using Do while loop --------------------------\n";
//     int k=1;
//     do
//     {
//         cout<<k<<"*2 = "<<k*k<<"\n";
//         k++;
//     }
//     while(k<=n);
// }


// #include<iostream>
// using namespace std;
// int main(void)
// {
//     int n;
//     cout<<"Enter the Value of N :";
//     cin>>n;
//     cout<<"CUBE SERIES :";
//     cout<<"Using for loop -----------------------------\n";
//     for(int i=1;i<=n;i++)
//     {
//         cout<<i<<"^3 = "<<i*i*i<<"\n";
//     }
//     cout<<"Using while loop ----------------------------\n";
//     int j=1;
//     while(j<=n)
//     {
//         cout<<j<<"^3 = "<<j*j*j<<"\n";
//         j++;
//     }
//     cout<<"Using Do while loop --------------------------\n";
//     int k=1;
//     do
//     {
//         cout<<k<<"*3 = "<<k*k*k<<"\n";
//         k++;
//     }
//     while(k<=n);
// }



// #include<iostream>
// using namespace std;
// int main(void)
// {
//     int n;
//     cout<<"Even or Odd between to N ";
//     cout<<"Enter the value for N :";
//     cin>>n;
//     cout<<"Using for loop-----------------------------\n";
//     cout<<"even\todd\n";
//     for(int i=0,j=1;i<n;i+=2,j+=2)
//     {
//         cout<<i<<"\t"<<j<<"\n";
//     }
//     cout<<"Using while loop ---------------------------\n";
//     cout<<"even\todd\n";
//     int c=0,d=1;
//     int a=0;
//     while(a<n/2)
//     {
//         cout<<c<<"\t"<<d<<"\n";
//         c+=2;
//         d+=2;
//         a++;
//     }
//     cout<<"Using do while loop ---------------------------\n";
//     cout<<"even\todd\n";
//     a=0;
//     c=0,d=1;
//     do
//     {
//         cout<<c<<"\t"<<d<<"\n";
//         c+=2;
//         d+=2;
//         a++;
//     }
//     while(a<n/2);
// }



// #include<iostream>
// using namespace std;
// int main(void)
// {
//     int n;
//     cout<<"Multiplication Table using for loop\n";
//     cout<<"Enter the Number :";
//     cin>>n;
//     for(int i=1;i<=10;i++)
//     {
//         cout<<n<<" * "<<i<<" = "<<n*i<<"\n";
//     }
//     cout<<"Multiplication Table using while loop\n";
//     int a=1;
//     while(a<=10)
//     {
//         cout<<n<<" * "<<a<<" = "<<n*a<<"\n";
//         a++;
//     }
//     cout<<"Multiplication Table using do while loop\n";
//     int b=0;
//     do
//     {
//         cout<<n<<" * "<<b<<" = "<<n*b<<"\n";
//         b++;
//     }
//     while(b<=10);
// }



// #include<iostream>
// using namespace std;
// int main(void)
// {
//     int n;
//     cout<<"Enter the value for N :";
//     cin>>n;
//     cout<<"Odd number series till N using for loop\n";
//     for(int i=1;i<=n;i+=2)
//     {
//         cout<<i;
//         if (i==n-1)
//         cout<<"";
//         else
//         cout<<",";
//     }
//     cout<<"\nOdd number series till N using while loop\n";
//     int a=1;
//     while(a<n)
//     {
//         cout<<a;
//         if (a==n-1)
//         cout<<"";
//         else
//         cout<<",";
//         a+=2;
//     }
//     cout<<"\nOdd number series till N using do while loop\n";
//     a=1;
//     do
//     {
//         cout<<a;
//         if (a==n-1)
//         cout<<"";
//         else
//         cout<<",";
//         a+=2;
//     }
//     while(a<n);
    
// }



// #include<iostream>
// using namespace std;
// int main(void)
// {
//     int n;
//     cout<<"Enter the value of N :";
//     cin>>n;
//     for(int i=1,j=5;i<=n/2;i++,j+=5)
//     {
//         cout<<i<<",";
//         cout<<j;
//         if (i==n)
//         cout<<"";
//         else
//         cout<<",";
//     }
// }


#include<iostream>
using namespace std;
int main()
{
	float w,h,bmi;
	cout<<"Enter weight(in kg): ";
	cin>>w;
	cout<<"Enter height(in meter): ";
	cin>>h;
	bmi=w/(h*h);
	cout<<"bmi = "<<bmi;
	cout<<endl<<"Category = ";
	
if(bmi<15)
		cout<<"Starvation";
	else if(bmi >= 15.1 && bmi <= 17.5)
		cout<<"Anorexic";
	else if(bmi >= 17.6 && bmi <= 18.5)
		cout<<"Underweight";
	else if(bmi>=18.6 && bmi<=24.9)
		cout<<"Ideal";
	else if(bmi >= 25 && bmi <= 25.9)
		cout<<"Overweight";
	else if(bmi >= 30 && bmi <= 30.9)
		cout<<"Obese";
	else
		cout<<"Morbidly obese";
	return 0;
}