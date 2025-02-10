#include<iostream>
using namespace std ;

/*
 if statement.
 if...else ladder.

    > < <= >= == 

    if statements : true 
    syntax : 
        if ( condition ) 
        {
            // statements
        }
*/

int main(){ 
     
     // no  positive 
    int num ; // declare


    cout<< "Enter the value of num : ";
    cin>>num ; // value assign : if first time = initilization , assign

    if(num > 0)
    {
        cout<<"No is positive";
    }

    if(num < 0)
    {
        cout<<"No is negative";
    }

    if(num == 0)
    {
        cout<<"No. is neutral";
    }


    if(num > 0)
    {
        cout<<"No is positive";
    }

    /*
        line 20 
        line 23 num = 10;
        line 25 num > 0 true
        line 27 P(Positive);
        line 30 num < 0 false 
        line 35 num == 0 false
        line 41 num>0 true 
        line 43 P(Positive)
     */


    /*
        line 20 
        line 23 num = -423
        line 25 num > 0 (false)
        line 30 num < 0 false
        line 35 num == 0 true;
        line 37 no. is neutral
    */

}