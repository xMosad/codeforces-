/*
 * Codeforces Round #638 (Div. 2) -- > A. Phoenix and Balance
 * link                : https://codeforces.com/contest/1348/problem/A
 * accepted submission : https://codeforces.com/contest/1348/submission/79122980
 * by                  : Abdelrhman mosad
 * date                : 5 / 5 / 2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*         global variables              */
int test_cases ; // number of test cases

int main()
{
       /*                              input                        */
        // take the number of test cases from the user
        scanf("%i" ,&test_cases);
        // create an array to store number of coins always even number
        int array [test_cases] ;
        // a countre for loops
        int i = 0 ;
        // to take the number of coins for each case
        for(i = 0 ; i < test_cases ; i++){
            scanf("%i" ,& array[i]);
        }

        /*                              algorithm                       */
         int j = 1 ;
         int n = 0 ; // number of coins
         int sum1 = 0 ; // sum of pile 1
         int sum2 = 0 ; // sum of pile 2
         int a = 0 ; // the minimum difference

        for(i = 0 ; i < test_cases ; i++){
            j = 1 ;
            sum1 = 0 ;
            sum2 = 0 ;
            a = 0 ;
            n = array[i] ;
            for (j = 1 ; j < (n/2) ; j++){
                sum1 = sum1 + pow(2 , j) ;
            }
            sum1 = sum1 + pow (2 , n);

            for (j = 1 ; j <= n ; j++){
                sum2 = sum2 + pow(2 , j) ;
            }
            a = sum1 - (sum2 -sum1);

            /*                             output                       */
            printf("%i\n" , a);
        }


    return 0;
}
