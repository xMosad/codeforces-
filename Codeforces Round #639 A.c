/*
 * Codeforces Round #639 (Div. 2) -- > A. Puzzle Pieces
 * link                : https://codeforces.com/contest/1345/problem/A
 * accepted submission : https://codeforces.com/contest/1345/submission/79184213
 * by                  : Abdelrhman mosad
 * date                : 6 / 5 / 2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int test_cases ; // number of test cases

int main()
{
    /*                 taking the input                    */
    // take the number of test cases
    scanf("%i" ,&test_cases);
    int temp = test_cases ;
    int arr[test_cases] ; //array to store the result of test_cases items
    int n[test_cases]  ; //array to store rows of test_cases items
    int m[test_cases] ; //array to store columns of test_cases items

    int i = 0 ; // a countrer for loops

    //deceremnt test cases each time to check all the inputs until there are none
    while(test_cases--) {
       scanf("%i %i" , &n[i] , &m[i]);

       /*                algorithm                    */
       // the combination is only valid if the rows = 1 or coloumns = 1 or rows = coloumns = 2
       //if the condition met will store in the array 1 otherwise will store zero
        if ((n[i] == 1 )){
         arr[i] = 1;
        }
        else if (m[i] == 1 ){
         arr[i] = 1;
        }
        else if ((n[i] == 2 ) && (m[i] == 2)){
        arr[i] = 1;
        }
        else {
           arr[i] = 0;
        }

      i++;

    }

    /*                 writing the output                    */
    int j = 0 ; // acounter for the loop
    // a loop to check all the arr[] items to print yes or no 
    for ( j = 0 ; j < temp ; j++){
        if (arr[j] == 1 ){printf("yes\n");}
        else if (arr[j] == 0 ){printf("no\n");}
        }

    return 0;
}
