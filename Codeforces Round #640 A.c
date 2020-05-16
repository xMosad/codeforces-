/*
 * Codeforces Round #178 (Div. 2) -- > A. Shaass and Oskols
 * link                : https://codeforces.com/contest/294/problem/A
 * accepted submission : https://codeforces.com/contest/294/submission/79329668
 * by                  : Abdelrhman mosad
 * date                : 8 / 5 / 2020
*/

int main(void) {
    /*                 taking the input                    */

    int t = 0 ; // the number of test cases
    // take the number of test cases
    scanf("%i" , &t);
    int number[t] ;
    int i = 0 ;


    for(i = 0 ; i < t ; i++){
        scanf("%i" , &number[i]);
    }
    for(i = 0 ; i < t ; i++){
        int n = 0 ;
        int n5 = number[i] / 10000 ;
        int n4 = (number[i]%10000) / 1000 ;
        int n3 = ((number[i]%10000) % 1000) / 100 ;
        int n2 = (((number[i]%10000) % 1000) % 100) /10 ;
        int n1 = (((number[i]%10000) % 1000) % 100) %10 ;
        if ( n5){n++; }
        if ( n4){n++ ;}
        if ( n3){n++;}
        if ( n2){n++;}
        if ( n1){n++;}

        printf("\n%i\n" , n);
        if ( n5){printf("%i " , n5*10000); }
        if ( n4){printf("%i " , n4*1000);}
        if ( n3){printf("%i " , n3*100);}
        if ( n2){printf("%i " , n2*10);}
        if ( n1){printf("%i " , n1);}


    }



}

