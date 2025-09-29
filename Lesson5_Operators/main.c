#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //Basics of Arithmetic Operators
    //---------------------------------------------
    int x,y,sum,sub,multi,mod,div;

    x=13;
    y=3;

    sum=x+y;
    sub=x-y;
    multi=x*y;
    div=x/y;
    mod=x%y;

    printf("Sum: %d\n",sum);
    printf("Substraction: %d\n",sub);
    printf("Multiplication: %d\n",multi);
    printf("Division: %d\n",div);
    printf("Mode: %d\n",mod);//mod, the remainder of a number divided by another number
    //------------------------------------------------------------
    */

    //INCREMENT, DECREMENT OPERATORS

    /*int myNumber;
    myNumber=7;
    printf("%d\n",myNumber);

    myNumber++;  //myNumber=myNumber+1;-> actually doing this

    printf("myNumber++: %d\n",myNumber);

    ++myNumber;
    printf("++myNumber: %d\n",myNumber);*/

    /*//another example--------------------------------------

    int myNumber = 5;

    // Postfix (myNumber++) -> önce 5 kullanılır, sonra 6 olur
    printf("myNumber++ sonucu: %d\n", myNumber++);
    printf("myNumber su an: %d\n\n", myNumber);    // artık 6

    // Prefix (++myNumber) -> önce 6 -> 7 yapılır, sonra 7 kullanılır
    printf("++myNumber sonucu: %d\n", ++myNumber);
    printf("myNumber su an: %d\n", myNumber);      // artık 7*/

    //-------------------------------------------
    int x = 5;
    int y;

    // Postfix: önce 5 kullanılır, sonra x=6 olur
    y = x++ + 3;
    printf("y = x++ + 3  --> y: %d, x: %d\n", y, x);

    // Prefix: önce x 6'dan 7'ye çıkarılır, sonra 7 kullanılır
    y = ++x + 3;
    printf("y = ++x + 3  --> y: %d, x: %d\n", y, x);
    //-------------------------------------------------
    /*int myNumber;
    myNumber=7;
    printf("%d\n",myNumber);

    myNumber--;  //myNumber=myNumber+1;-> actually doing this

    printf("myNumber--: %d\n",myNumber);

    ++myNumber;
    printf("--myNumber: %d\n",myNumber);*/




    return 0;
}
