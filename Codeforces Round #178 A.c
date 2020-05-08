/*
 * Codeforces Round #178 (Div. 2) -- > A. Shaass and Oskols
 * link                : https://codeforces.com/contest/294/problem/A
 * accepted submission : https://codeforces.com/contest/294/submission/79329668
 * by                  : Abdelrhman mosad
 * date                : 8 / 5 / 2020
*/

int main(void) {
    /*                 taking the input                    */

    int n = 0 ; // the number of wires
    // take the number of the wires
    scanf("%i" , &n);
    int birds_on_each_line[n]; // create an array of n item
    int i = 0 ; // a counter for all for loops in the code

    // the for loop is to take the number of birds on each wire
    for (i = 0 ; i < n ; i++){scanf("%i" ,&birds_on_each_line[i] );}

    int m = 0 ; // the number of shoots
    scanf("%i" ,&m); // take the m value from the user

    int x[m]  ; // an array of m item to take all the x values
    int y[m]  ; // an array of m item to take all the y values

    //looping to scan all the x and y values
    for (i = 0 ; i<m ; i++){
        scanf("%i %i" , &x[i] , &y[i]);
    }

    /*                algorithm                    */
    //looping to process the effect of each shoot on the birds on each wire
    for(i = 0 ; i < m ; i++){
        int line = x[i] - 1 ;
        if (line == 0){
            birds_on_each_line[line + 1] += (birds_on_each_line[line] - y[i]) ;
            birds_on_each_line[line] = 0 ;
        }
        else if (line == (n - 1) ){
            birds_on_each_line[line - 1] +=  (y[i] -1) ;
            birds_on_each_line[line] = 0 ;
        }
        else {
            birds_on_each_line[line - 1] +=  (y[i] -1) ;
            birds_on_each_line[line + 1] +=  (birds_on_each_line[line] - y[i]) ;
            birds_on_each_line[line] = 0 ;
        }
    }

    /*                 writing the output                    */

    //looping to print the birds on each lines after the shots
     for (i = 0 ; i<n ; i++){
        printf("%i\n" , birds_on_each_line[i]);
    }


}

