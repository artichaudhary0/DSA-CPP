#include<iostream>
using namespace std ;

/*
    if - else statements : true 
    syntax : 
        if ( condition ) 
        {
            // statements
        }
*/

int main(){ 
     
     // no  positive 
    // int num = -10;

    // if(num > 0)
    // {
    //     cout<<"No is positive"<<endl;
    // }else{
    //     cout<<"No is negative"<<endl;
    // }
    /*
        line 13 
        line 16 : num = -10
        line 18 : num > 0 false 
        line 21 : else
        line 22 : P (Negative)
    */


    // int age = -15 ; 
    // if(age > 0 && age < 18)
    // {
    //     cout<<"vote not allow";
    // }else{
    //     cout<<"vote allow";
    // }

    /*
    
    line : 33 age = -15
    line 34 : -15 > 0 && -15 < 18 : false && true : false
    line 37 : else
    line 38 : P(vote allow)
     */


    /*
    line 33 : age = 15
    line 35 : age>18 true
    line 38 : else 
    line 39 : P(vote not allow)
    */

    // elseif : if-else ladder
    /*
        syntax :
        if(cond 1)
        {
            statement 
        }else if(cond 2)
        {
            // statment
        }else if(cond 3)
        {
            // statement
        }else{
            // statement
        }
     */

    int age = 119; 

    /*
        age < 0 invalid 
        age > 120 invalid
        db54t7u56 : invalid
        age == 0 invalid

        age > 0 && age < 18 not ele for vote
        age >=18  && age <=120 "eleg for vote"
     */

    if(age < 0 )
    {
        cout<<"invalid age";
    }else if(age>120){
        cout<<"invalid age";
    }else if( age == 0)
    {
        cout<<"invalid age";
    }else if(age > 0 && age < 18)
    {
        cout<<"not ele for vote";
    }else if(age >=18  && age <=120)
    {
        cout<<"eleg for vote";
    }else{
        cout<<"Enter age is not valid";
    }

    /*

    line 76 : age = 119 ; 
    line  88 : age < 0 ; false 
    line 91 : age >120 false
    line 93 : age == 0 false
    line 96 : age > 0 && age < 18 false
    line 99 if(age >=18  && age <=120) true
    line 101 : P (Eleg for vote)
    exit

    line 76 : age = 15 ; 
    line  88 : age < 0 ; false 
    line 91 : age >120 false
    line 93 : age == 0 false
    line 96 : age > 0 && age < 18 true
    line 98 : P("not ele for vote") 
    exit
    */










}