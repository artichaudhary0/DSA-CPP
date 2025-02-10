#include<iostream>
using namespace std ;

int main(){ 

    int num1 , num2 ,num3 ;

    cout<<"Enter num1 : ";
    cin>>num1; 

    cout<<"Enter num2 : ";
    cin>>num2; 

    cout<<"Enter num3 : ";
    cin>>num3; 

    // if(num1 > num2)
    // {
    //     cout<<"Num1 is greater then num2 by value : "<<num1 - num2;
    // }else{
    //     cout<<"Num2 is greater then num1 by value : "<<num2 - num1;
    // }


    
    if(num1 > num2) // true n1 is greater n2
    {
        if(num1 > num3)
        {
            cout<<"N1 is greater then n3,n2";
        }else{
            cout<<"N3 is greater then n1,n2";
        }
        
    }else{ // true n2 is greater n1
        if(num2 > num3)
        {
            cout<<"N2 is greater then n3,n1";
        }else{
            cout<<"N3 is greater then n1,n2";
        }
    }
    
    /*
         line 26 false 1 > 1
         line 35 
         line 36 1 > 1 false
         line 39 cout<<"N3 is greater then n1,n2";
    
    */


    if((num1 == num2) && (num1 == num3))
    {
        cout<<"All values are equal ";
    }else{
        if(num1 > num2) // true n1 is greater n2
    {
        if(num1 > num3)
        {
            cout<<"N1 is greater then n3,n2";
        }else{
            cout<<"N3 is greater then n1,n2";
        }
        
    }else{ // true n2 is greater n1
        if(num2 > num3)
        {
            cout<<"N2 is greater then n3,n1";
        }else{
            cout<<"N3 is greater then n1,n2";
        }
        }
    }    
}