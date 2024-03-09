

// Q1.a
//  #include<stdio.h>
//  int main (void)
//  {
//      int n;
//      printf("Multiplication Table \n");
//      printf("Enter the Number :");
//      scanf("%d",&n);
//      for(int i=1;i<=10;i++)
//      {
//          printf("%d * %d = %d\n",n,i,i*n);
//      }
//  }

// Q1.b
// #include <stdio.h>
// int main(void)
// {
//     int k = 1;
//     for (int i = 1; i < 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", k++);
//         }
//         printf("\n");
//     }
// }

// Q1.c
// #include<stdio.h>
// int main(void)
// {
//     for(int i=1;i<=5;i++)
//     {
//         for (int j=5;j>=i;j--)
//         {
//             printf(" ");
//         }
//         for (int j=1;j<i;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// Q1.d
// #include <stdio.h>
// int main(void)
// {
//     float n,sum;
//     printf("Enter the number of terms :");
//     scanf("%f",&n);
//     for(float i=1.0;i<=n;i++)
//     {
//         sum+=1.0/i;
//     }
//     printf("%f",sum);
// }

// Q1.e
//  #include <stdio.h>
//  int main(void)
//  {
//      int sum;
//      sum = 0;
//      for (int i = 100; i <= 200; i++)
//      {
//          if (i % 9 == 0)
//          {
//              sum += i;
//          }
//      }
//      printf("Sum of multiple of 9 from 100 to 200 %d", sum);
//  }

// 1.f
//  #include <stdio.h>
//  #include <math.h>
//  int main(void)
//  {
//      long int n, m, bin, dec=0;
//      printf("Enter a binary number :");
//      scanf("%d", &bin);
//      n = 0;
//      n = sizeof(bin);

//     for (int i = 0; i <= n; i++)
//     {
//         m=bin%10;
//         bin/=10;
//         dec += m*pow(2, i);

//     }
//      printf("%d ",dec);
// }

// Q1.g
#include<stdio.h>
int main(void)
{
    int a,b,c=1,m;
    printf("Enter two values : ");
    scanf("%d%d",&a,&b);
    for(int i=2;i<=a/2;i++)
    {
        if ((a%i==0) && (b%i==0))
        {
            c*=i;
            m=i;
        }
    }
    printf("Hcf of %d and %d is :%d",a,b,m);
}

// Q2.a
// #include <stdio.h>
// int main(void)
// {   int size;
//     printf("Enter the number of Elements :");
//     scanf("%d",&size);
//     char arr[size];
//     for(int i=0;i<size;i++)
//     {
//         scanf("%s",&arr[i]);
//     }
//     char ar[10];
//     int a;
//     a=sizeof(arr)/sizeof(char);
//     for (int i = 0; i < a; i++)
//     {
//         ar[i] = arr[i];
//     }
//     printf("dulplicate array :%s\n",ar);
// }

// Q2.b
// #include <stdio.h>
// int main(void)
// {
//     int size,size2;
//     printf("Enter the number of Elements you want to enter :");
//     scanf("%d", &size);
//     int arr[size];
//     int ar[size][size],count,ar2[size*2],ava=0;
//     printf("Enter the Number :");
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0;i<size;i++)
//     {
//         count=0;
//         for(int j=0;j<size;j++)
//         {
//             if(arr[j]==ar[j][0])
//             {
//                 ava=1;
//             }
//         }
//         if (ava!=1)
//         {
//             for(int j=0;j<size;j++)
//             {
//                 if(ar[i]==ar[j])
//                 count++;
//             }
//             ar[i][0]=arr[i];
//             ar[i][1]=count;
//         }
//     }
//     printf("Numbers\tFrquency\n");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d\t\t%d\n",ar[i][0],ar[i][1]);
//     }    
// }
 
//2.c
// #include<stdio.h>
// int main(void)
// {
//     int size,a[10],even[10],odd[10],e=0,o=0;
//     printf("Enter the number of values you want to Enter");
//     scanf("%d",&size);
//     printf("Enter the values :");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<size;i++)
//     {
//         if(a[i]%2==0)
//         {
//             even[e]=a[i];
//             e++;
//         }
//         else
//         {
//             odd[o]=a[i];
//             o++;
//         }
//     }
//     printf("Even number :");
//     for(int i=0;i<e;i++)
//     {
//         printf("%d ",even[i]);
//     }
//     printf("\nOdd Numbers :");
//     for(int i=0;i<o;i++)
//     {
//         printf("%d ",odd[i]);
//     }
// }

//Q2.4
// #include<stdio.h>
// int main(void)
// {
//     int size;
//     printf("Enter the size of the Matrix : ");
//     scanf("%d",&size);
//     int mat1[size][size],mat2[size][size],rmat[size][size];
//     printf("FOR MATRIX 1 :\n");
//     for(int i=0;i<size;i++)
//     {
//         for(int j=0;j<size;j++)
//         {
//             printf("Enter value of Row %d and Coloumn %d :",i+1,j+1);
//             scanf("%d",&mat1[i][j]);
//         }
//     }
//     printf("FOR MATRIX 2 :\n");
//     for(int i=0;i<size;i++)
//     {
//         for(int j=0;j<size;j++)
//         {
//             printf("Enter value of Row %d and Coloumn %d :",i+1,j+1);
//             scanf("%d",&mat2[i][j]);
//         }
//     }
//     for (int i=0;i<size;i++)
//     {
//         for(int j=0;j<size;j++)
//         {
//             rmat[i][j]=mat1[i][j]*mat2[i][j];
//         }
//     }
//     printf("Resultant MATRIX :\n");
//     for (int i=0;i<size;i++)
//     {
//         for(int j=0;j<size;j++)
//         {
//             printf(" %d ",rmat[i][j]);
//         }
//         printf("\n");
//     }
// }

// 3.a
//  #include <stdio.h>
//  #include <math.h>
// struct time
// {
//     int hours;
//     int minutes;
//     int seconds;
// };

// void main()
// {
//     struct time first,second,result;
//     printf("Input the time in HH:MM:SS format :");
//     scanf("%d%d%d",&first.hours,&first.minutes,&first.seconds);
//     printf("Input the Second time in HH:MM:SS format :");
//     scanf("%d%d%d",&second.hours,&second.minutes,&second.seconds);
//     result.seconds=first.seconds+second.seconds;
//     result.minutes=first.minutes+second.minutes+result.seconds/60;
//     result.hours=first.hours+second.hours+result.minutes/60;

//     result.seconds %= 60;
//     result.minutes %= 60;
//     result.hours %= 24;
    
//     printf("The time is %d:%d:%d",result.hours,result.minutes,result.seconds);

// }

// 3.b

// #include<stdio.h>

// struct car
// {
//     int id;
//     char model[10];
//     int rr;
//     int days;
// };

// int main(void)
// {
//     struct car car1,car2,car3,days;
//     printf("Input the first Car ID :");
//     scanf("%d",&car1.id);
//     printf("Input the first Car model :");
//     scanf("%s",&car1.model);
//     printf("Input the first Car rental rate :");
//     scanf("%d",&car1.rr);
//     printf("Enter the first car rental days :");
//     scanf("%d",&car1.days);
//     printf("Input the second Car ID :");
//     scanf("%d",&car2.id);
//     printf("Input the second Car model :");
//     scanf("%s",&car2.model);
//     printf("Input the second Car rental rate :");
//     scanf("%d",&car2.rr);
//     printf("Enter the second car rental days :");
//     scanf("%d",&car2.days);
//     printf("Input the third Car ID :");
//     scanf("%d",&car3.id);
//     printf("Input the third Car model :");
//     scanf("%s",&car3.model);
//     printf("Input the third Car rental rate :");
//     scanf("%d",&car3.rr);
//     printf("Enter the third car rental days :");
//     scanf("%d",&car3.days);

//     printf("|Car ID\t|Car Model\t|Car Rental Rate\t|Car Rental Days\t|Total Payable RENT\n");
//     printf("   %d\t   %s\t\t   %d\t\t\t\t   %d\t\t\t    %d rs ONLY \n",car1.id,car1.model,car1.rr,car1.days,car1.rr*car1.days);
//     printf("   %d\t   %s\t\t   %d\t\t\t\t   %d\t\t\t    %d rs ONLY \n",car2.id,car2.model,car2.rr,car2.days,car2.rr*car2.days);
//     printf("   %d\t   %s\t\t   %d\t\t\t\t   %d\t\t\t    %d rs ONLY \n",car3.id,car3.model,car3.rr,car3.days,car3.rr*car3.days);

// }

// 3.c

// #include <stdio.h>
// struct emp
// {
//     int id;
//     char name[50];
//     int salary;
// };

// int main(void)
// {
//     struct emp emp1, emp2, emp3;
//     printf("Enter the three ID :");
//     scanf("%d%d%d", &emp1.id, &emp2.id, &emp3.id);
//     printf("Enter the three Names :");
//     scanf("%s%s%s", &emp1.name, &emp2.name, &emp3.name);
//     printf("Enter the Three salary :");
//     scanf("%d%d%d", &emp1.salary, &emp2.salary, &emp3.salary);

//     printf("\tID\tName\tSalary\n");
//     printf("\t%d\t%s\t%d\n",emp1.id,emp1.name,emp1.salary);
//     printf("\t%d\t%s\t%d\n",emp2.id,emp2.name,emp2.salary);
//     printf("\t%d\t%s\t%d\n",emp3.id,emp3.name,emp3.salary);
//     if ((emp1.salary > emp2.salary) && (emp1.salary > emp2.salary))
//     {
//         printf("%s has the Highest Salary", emp1.name);
//     }
//     else if ((emp2.salary > emp1.salary) && (emp2.salary > emp3.salary))
//     {
//         printf("%s has the Highest Salary", emp2.name);
//     }
//     else
//     {
//         printf("%s has the Highest Salary", emp3.name);
//     }
// } 


//4.a
// #include<stdio.h>
// int main(void)
// {
//     int a,b;
//     int *x=&a,*y=&b;
//     printf("Enter two Values : ");
//     scanf("%d%d",x,y);
//     if(*x>*y)
//     {
//         printf("%d is maximum",*x);
//     }
//     else
//     {
//         printf("%d is maximaum",*y);
//     }
// }

//4.b
// #include<stdio.h>
// int main(void)
// {
//     char str1[20],str2[20],str3[9];
//     char *a=&str1,*b=&str2,*c=&str3;
//     printf("Enter two different strings :");
//     scanf("%s%s",a,b);
//     int x=0,y=0;
//     while(*(a+x)!="\0")
//     {
//         *(c+x)=*(x+a);
//         x++;
//     }
//     while(*(b+y)!="\0")
//     {
//         *(c+x)=*(y+b);
//         x++;
//         y++;
//     }
// }