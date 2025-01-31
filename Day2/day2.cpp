/*
 Variables Keywords Constant cout and cin objects endl manipulator.

    Data type : 
        1 : Primitive :
            1 : Integer : whole number (decimal point is not included) 4645
                    int 
                    short int 
                    long int
                    long long int
                    unsigned int

            2 : floating point type (decimal points are included) 4645.5464
                    float
                    double 
                    long double 

            3 : character type :
                    char : 'A' , 'a' , '1' , '@' , ' '

            4 : Boolean : 
                    bool :  true(1) and false(0)  

            5 : void type : 
                    void : used for function that do not return a value.        

        2 : Non primitive : 
            
            1 : Array : collection of simialar data type value.

            2 : pointer : store address of another variable.

            3 : Referance : 

            4 : Structure :

            5 : class :

            6 : Enumeration  :


        how to write a variable name 
                1 : var name can start with alphabets( small , captial )
                2 : always start with small letter
                3 : use camel case : myAge
                4 : my_age => snake case
                5 : name can not start with number
                6 : you can not use special symbols(char) except (_ underscore) 
                7 : can not use space in between var name
     */         


#include <iostream>
using namespace std;

int main() {

    // variable : container.

// int xyz : variable declaration
    int xyz ;

    xyz = 4 ;
    // = 421 value => initilization
    // int xyz = 24 ; variable declaration with initilization
    cout<< xyz <<endl; 

    // cout<<endl; 
    // end line "\n"

    float abc ; // variable declaration 
    abc = 3242.2344;

    cout<<abc;

    char abc123 = '4' ;

    cout<<"\n"<<abc123;


    return 0;
}