#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<iomanip>
  char op;
using namespace std;

void sum() 
   {
     
    int sum = 0;
    int n;
    int numberitems;
    cout << "Enter number of items: \n";
    cin >> numberitems;

    for(int i=0;i<numberitems;i++)
    {
        cout<< "Enter number "<<i<<":\n\n" ;
        cin>>n; 
        sum+=n;
    }
    cout<<"sum is: "<< sum<<endl<<endl;
    
    }
void diff()
    {
     int diff;
     int n1,n2;
     cout<<"enter two numbers to find their difference:\n\n";
     cout<<"enter first number:";
     cin>>n1;
     cout<<"\nenter second number:";
     cin>>n2;
     diff=n1-n2;
     cout<<"\ndifference is:"<<diff<<endl<<endl;
     }
     
void pro()
    
    {
     int pro=1;
     int n;
     int numberitems;
     cout<<"enter number of items:\n";
     cin>>numberitems;
     for(int i=0;i<=numberitems;i++)
     {
             cout<<"\nenter item "<<i<<":";
             cin>>n;
             pro*=n;
     }
             
     cout<<"product is:"<<pro<<endl<<endl;    
     }
       
 void div()
     {
      int div;
      int n1;
      int n2;
      cout<<"enter 2 numbers to find their quotient\n\n";
      cout<<"enter numerator:";
      cin>>n1;
      cout<<"\nenter denominator:";
      cin>>n2;
      div=n1/n2;
      cout<<"\nquotient is:"<<div<<endl<<endl;
      }      

void power()
     {     
     long int p;
     int res=1,n; 
     cout<<"enter number:";
     cin>>n;
     cout<<"\nenter power:";
     cin>>p;
     for(int i=1;i<=p;i++)
     {
      res=n*res;
     }
      cout<<n<<"\n power "<<p<<" is :"<<res<<endl;
     } 
       
void sq()
     {
     float s;
     int n;
     cout<<"enter number to find its square root:";
     cin>>n;
     s=sqrt(n);
     cout<<"\nsquare root of "<<n<<" is :"<<s<<endl;
     }
 void fact()
     {
      long int f=1;
      int c=1,n;
      cout<<"enter number to find its factorial:";
      cin>>n;
      while(c<=n)
      {
                 f=f*c;
                 c+=1;
      }     
                 cout<<"\nfactorial of "<<n<<" is :"<<f<<endl;     
      }
void expo()
     {
          long double res=1,p; 
     double e=2.718281828;     
     cout<<"enter power of exponential function:";
     cin>>p;
     for(int i=1;i<=p;i++)
     {
      res=e*res;
     }
      cout<<" e^ "<<p<<" is :"<<res<<endl;
           
           }

