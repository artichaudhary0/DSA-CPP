#include<iostream>
using namespace std;

/* 
    Operator : 
    what is operator ? 
        operators are the symbols which is used to 
        perform mathematical and logical operation. a + b , 1 - 2

    operands : these are the numbers or variable.

    Type of operator : (based on operands)
        1 :  Unary operator (single , only 1 operand)
            1 : increment (++)
                    1 : post increment
                    2 : pre increment
            2 : decrement (--)
                    1 : post decrement
                    2 : pre decremenet

        2 : Binary operator (2 operands)
            1 : Arithmetic opertors (+ , - , * , / , %)
            2 : logical operators (&& , || , !)
            3 : Assignment opertors ( = , += , -= , *= , /= , %=)
            4 : relational/conditional opertors (> , < >= , <= ,==)
            5 : bitwise opertors (~ , << , >> , & , |)

        3 : ternary operator(3 operands)
            condition ? state(true)   : state(fasle) ;



*/

int main()
{
    /*
    1 :  Unary operator (single , only 1 operand)
            1 : increment ++ => +1
                    1 : post increment num++
                    2 : pre increment ++num
                post : num++
                Step 1 : use operand  if available   
                Step 2 : increment

                pre :
                step 1 : increment
                step 2: use operand


             1 : decrement -- => -1
                    1 : post decrement num--
                    2 : pre decrement --num
                post : num--
                Step 1 : use operand  if available   
                Step 2 : decrement

                pre :
                step 1 : decrement
                step 2: use operand    
    */
    int num  = 10 ;   
    num ++ ; // avl => false  => 11
    cout<<num++<<endl; //  av => true => P(11) => 12
    cout<<num<<endl; // P(12)
    ++num ; // 13
    cout<<++num<<endl; // 14 P(14)
    cout<<num<<endl;// p(14)


    // 14
    num -- ; // 13
    cout<<num-- <<endl; // P(13) => 12 
    cout<<num<<endl; // P(12)
    --num ; // 11
    cout<< --num<<endl; // p(10) 
    cout<<num<<endl;// p(10)
    cout<< --num <<endl; // p(9)
    cout<<num <<endl;// p(9)
    cout<< --num <<endl; // p(8)
    cout<<num <<endl;// p(8)
    cout<< --num <<endl; // p(7)
    cout<<num<<endl;// p(7)
}