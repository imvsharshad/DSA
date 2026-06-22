#include <iostream>
using namespace std;

void pattern1(int n) {
    for ( int i = 0; i < n; i++ ){
        for ( int j = 1; j <= n; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    // OUTPUT:
    //      1 2 3 4
    //      1 2 3 4
    //      1 2 3 4
    //      1 2 3 4 
}


void pattern2(int n) {
    for ( int i = 0; i < n; i++ ){
        char ch = 'A';
        for ( int j = 0; j < n; j++){
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
    // OUTPUT:
    //      A B C D
    //      A B C D
    //      A B C D
    //      A B C D 
}


void pattern3(int n) {
    int num = 1;
    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < n; j++){
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
    // OUTPUT:
    //      1 2 3
    //      4 5 6
    //      7 8 9
}

void pattern4(int n) {
    char ch = 'A';
    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < n; j++){
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
    // OUTPUT:
    //      A B C
    //      D E F
    //      G H I
}

void pattern5(int n){
    for( int i = 0; i < n; i++ ){
        for ( int j = 0; j < i + 1; j++ ){
            cout << "*" << " ";
        }
        cout << endl;
    }
    // OUTPUT:
    //      * 
    //      * * 
    //      * * * 
}

void pattern6(int n){
    for( int i = 1; i <=n; i++){
        for ( int j = 0; j < i; j++ ){
            cout << i << " ";
        }
        cout << endl;
    }
    // OUTPUT:
    //      1
    //      2 2
    //      3 3 3
}


void pattern7(int n){
    char ch = 'A';
    for( int i = 0; i < n; i++ ){
        for (int j = 0; j <= i; j++ ) {
            cout << ch << " ";
        }
        ch += 1;
        cout << endl;
    }
    // OUTPUT: 
    //      A 
    //      B B 
    //      C C C 
}

void pattern8(int n){
    for( int i = 1; i <=n; i++){
        for ( int j = 0; j < i; j++ ){
            cout << j+1 << " ";
        }
        cout << endl;
    }
    // OUTPUT:
    //      1
    //      1 2
    //      1 2 3
}

void pattern9(int n){
    for (int i = 1; i <= n; i++){
        for ( int j = i; j > 0; j-- ){
            cout << j << " ";
        }
        cout << endl;
    }
    // OUTPUT:
    //      1
    //      2 1
    //      3 2 1
}

void pattern10(int n){
    int num = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
    // OUTPUT:
    //      1
    //      2 3
    //      4 5 6
}

void pattern11(int n){
    for (int i = 0; i < n; i++){
        // spaces
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        //numbers
        for (int j = 0; j < n - i; j++){
            cout << i+1;
        }
        cout << endl;
    }
    // OUTPUT:
    //      1 1 1
    //        2 2
    //          3

    // If you are revising this, then try the same pattern with alphabets.
}

void pattern12(int n){
    for(int i = 0; i < n; i++){
        //spaces
        for(int j = n-1; j > i; j-- ){
            cout << " ";
        }

        //numbers
        for(int j = 0; j < i + 1; j++){
            cout << j+1;
        }

        //numbers
        for (int j = i; j > 0; j--) {
            cout << j;
        }
        cout << endl;


        // OUTPUT:
        //        1
        //       121
        //      12312  
        //     1234123
    }
}

void pattern13(int n){
    for(int i = 0; i < n; i++){
        // spaces
        for(int j = 0; j < n -i-1; j++){
            cout << " ";
        }

        // stars
        cout << "*";
        
        // spaces
        if ( i != 0 ){
            for(int j = 0; j < (2*i-1); j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // Above code will give the output :
        //              *
        //             * *
        //            *   *
        //           *     *

    for ( int i = n - 1; i > 0; i--){
        // spaces
        for( int j = n - 1; j >= i; j--){
            cout << " ";
        }

        // stars
        cout << "*";

        // spaces
        if ( i != 1 ) {
            for ( int j = 0; j < 2*i-3; j++) {
                cout << " ";
            }

            // starts
            cout << "*";
        }
        cout << endl;
        // Above code will give the output :
        //           *   *
        //            * *
        //             *
    }
    // FINAL OUTPUT:
    //                *
    //               * *
    //              *   *
    //             *     *
    //            *       *
    //             *     *
    //              *   *
    //               * *
    //                *

}

void pattern14(int n){
    // Butterfly Pattern

    // top half
    for (int i = 0; i < n; i++){
        // stars
        for ( int j = 0; j <= i; j++){
            cout << "*";
        }

        // spaces
        for ( int j = n - 1; j > i; j-- ){
            cout << " ";
        }

        // spaces
        for ( int j = n - 1; j > i; j--){
            cout << " ";
        }

        // stars
        for ( int j = 0; j <=i; j++ ){
            cout << "*";
        }


        cout << endl;
    }

    // bottom half
    for ( int i = 0; i < n; i++ ){
        // stars
        for( int j = n; j > i; j--){
            cout << "*";
        }

        //spaces
        for( int j = 0; j < i; j++){
            cout << " ";
        }

        // spaces
        for( int j = 0; j < i; j++){
            cout << " ";
        }

        // stars
        for( int j = n; j > i; j--){
            cout << "*";
        }
        cout << endl;
    }

    //   OUTPUT:
    //          *      *
    //          **    **
    //          ***  ***
    //          ********
    //          ********
    //          ***  ***
    //          **    **
    //          *      *
}

int main() {
    cout << "Enter a number: ";
    int input;
    cin >> input;
    // pattern1(input);
    // pattern2(input);
    // pattern3(input);
    // pattern4(input);
    // pattern5(input);
    // pattern6(input);
    // pattern7(input);
    // pattern8(input);
    // pattern9(input);
    // pattern10(input);
    // pattern11(input);
    // pattern12(input);
    // pattern13(input);  // Hollow Diamond Pattern
    pattern14(input);

}