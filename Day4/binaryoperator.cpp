/*
2 : Binary operator (2 operands)
            1 : Arithmetic opertors (+ , - , * , / , %)
            2 : logical operators (&& , || , !)
            3 : Assignment opertors ( = , += , -= , *= , /= , %=)
            4 : relational/conditional opertors (> , < >= , <= ,==)
            5 : bitwise opertors (~ , << , >> , & , |)
*/

#include<iostream>
using namespace std;
int main()
{
    // cout<<"=====Arithmetic opertors (+ , - , * , / , %)===="<<endl<<endl;
    // cout<<"Addition (+) : "<< 10 + 30<<endl ;
    // cout<<"Subtraction (-) : "<< 10 - 30<<endl ;
    // cout<<"Multiplication (*) : "<< 10 * 30<<endl ;
    // cout<<"Division (/) : "<< 10.0 / 30 <<endl ; // int/ int => int, float/ int => float , int/float = float
    // cout<<"Remainder (%) : "<< 10 % 30<<endl ;

    cout<<endl<<endl<<"Assignment opertors ( = , += , -= , *= , /= , %=)"<<endl<<endl;
    int num1 = 3546 ; // assignment operator (=)

    // num1 = num1 + 6345 ;
    // num1 += 6345;
    // cout<<num1;

    // num = num - 6345 ;
    // int num2 = 23;
    // num2 -= 6345; // num = num - 6345 => 23 - 6345 => - 6322
    // cout<<num2;

    // int num3 = 10 ;
    // num3 *= 6345 ; // num3 = num3 * 6345 => num3 = 10 * 6345 => 63450
    // cout<<num3;

    // // num = num / 7345 ;
    // float num4 = 7346.0;
    // num4 /= 5.1; // num4 = num4 / 5 => 7346 / 5 => int / int => 
    // cout<<num4;


    // num = num % 6345 ;
    int num5 = 345;
    // num5 %= 6345; // 345 % 6345
    num5 = 6345 % 345 ;
    cout<<num5;


}