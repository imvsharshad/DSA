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

int main() {
    cout << "Enter a number: ";
    int input;
    cin >> input;
    // pattern1(input);
    // pattern2(input);
    // pattern3(input);
    // pattern4(input);
    pattern5(input);
}