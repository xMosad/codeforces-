/*
 * Codeforces Round #639 (Div. 2) -- > B. Card Constructions
 * link                : https://codeforces.com/contest/1345/problem/B
 * accepted submission : https://codeforces.com/contest/1345/submission/79223285
 * by                  : Abdelrhman mosad
 * date                : 6 / 5 / 2020
*/
#include <stdio.h>
#include <stdlib.h>
/*             prototypes                 */
int fun(int n);

/*            global variabls             */
int c = 0 ; // a counter for how many pyramids can be built by the cards
int hold[26000]; //stor the number of cards needed to build a pyramid of hieght h

int main()
{
    /*                 taking the input                    */
    int test_cases = 0 ; //store number of test cases
    scanf("%i" ,&test_cases); //take the number of test_cases
    int temp = test_cases;
    int n[test_cases]; // create an array to store the number of cards of each test case
    int res[test_cases]; // create an array to store the number of pyramids can be built for each test cases
    int i = 0; // a counter for loops
     while(test_cases--) {
       // take number of cards for each case
       scanf("%i" ,&n[i]);

        /*                algorithm                    */
       c = 0 ; // intialize the counter to zero for each case
       //calling the fun
       res[i] = fun(n[i]);
       i++;
    }

    /*                 writing the output                    */
    int j = 0 ; //counter for looping
    for (j = 0 ; j < temp ; j++){
        printf("%i\n" , res[j]);
    }

}
/************************************************************************************************************
* Description : the function is to find the number of pyramids that can be built by number of cards it loops
                first to find the first pyramid maximum hight then calculate the remaining cards if they enough
                to make other pyramids the fun call itself (recursion)
* Parameters  : the number of cards
* Return type : int   ..  return the number of pyramids
************************************************************************************************************/
int fun(int n){
     int card = 0;
     int m_h = 0 ; // the maximum hight of the pyramid (not needed)
     int remain = 0; // the remaining cards after making the pyramid
     int h = 1 ; //to loop through levels of pyramid
     int j = 0 ; // counter for looping
     // because if n = 1 no pyramids can be made
     if (n > 1){
       while (card <= n){
           card = card + (h * 2 + (h - 1) * 1); // construct the pyramid level by level from top to bottom
           hold[j]= card ; // store the number of cards needed to build a pyramid of hieght h
           j++ ; // to go to the next item in array
           h++; //to go to the next level
         }
         m_h = h - 2 ; // max hieght
         remain = n - hold[j-2] ; // calculate the remaining cards
         c++ ;
     }
     // if there are cards calls the function again if the remain = 2 will increment c then return other wise will return
       if (remain > 2) { fun(remain);}
       else if (remain == 2){c++; return c ;}
       else {return c ; }

}
