/*           
    relational/conditional opertors (> , < >= , <= ,==)
    logical operators (&& , || , !)
 */

#include<iostream>
using namespace std;

int main()
{
        // relational / conditional opertors (> , < >= , <= ,==) 
          /*
            0 = false
            1 = true
            > , < = greater then , less than
            == equals to LHS == RHS
            >= (>  ==) <= greater then equals to , less then equals to
           */  
        //   int result = 10 >= 0; /// false 10 ==0   10>0true
        //   int result2 = 10 <= 0; /// false 10 ==0   10<0false

        //   int result3 = 10 >= 10 ; // false 10 > 10   10 == 10 true  


        //   cout<<result3;





        /* 
            || 
            OR => (||)

            Truth table : 
            A  B  C
            1  1  1
            1  0  1
            0  1  1
            0  0  0


            int result1 = 10 > 10 ; // false
            int result2 = 10 == 10 ; // true
            int result3 = result1 || result2; // false || true
            int result4 = result2 || result1; // true || false

            int result5 = result3 || result4; // 1 || 1 => true || true => true
            int result6 = result1 || result1 ; // 0 || 0 > false || false => false

            cout<< result6;       
        */

       /*
          && 
          AND (&&)

          TRUTH TABLE :
          A  B  C
          1  1  1
          1  0  0
          0  1  0
          0  0  0

          int result1 = 10 > 10 ; // false
          int result2 = 10 == 10 ; // true
          int result3 = result1 && result2; // false && true = false 
          int result4 = result2 && result1; // true && false = false

          int result5 = result3 && result4; // 0 && 0 =>   fasle => fasle
          int result6 = result2 && result2 ; // 1 && 1 > true && true => true

          cout<<result3;
        */

        


        /*
        !
        NOT (!)

        true => false
        false => true
        
         */
       
        int result1 = 10 > 10 ; // false
        int result2 = 10 == 10 ; // true
        int result3 = result1 && result2; // false && true = false 
        int result4 = result2 && result1; // true && false = false

        int result5 = result3 && result4; // 0 && 0 =>   false => false
        int result6 = result2 && result2 ; // 1 && 1 > true && true => true

        
        int num = 0; 
        // every no. from positive infinity to negative infinty is true except 0 , 0 is considered as false.
        cout<<!num;
        










}

