#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> segments = {    // TRUTH TABLE
    /*  |A| B| C| D| E| F| G|  */  
        {1, 1, 1, 1, 1, 1, 0}, // 0
        {0, 1, 1, 0, 0, 0, 0}, // 1
        {1, 1, 0, 1, 1, 0, 1}, // 2
        {1, 1, 1, 1, 0, 0, 1}, // 3
        {0, 1, 1, 0, 0, 1, 1}, // 4
        {1, 0, 1, 1, 0, 1, 1}, // 5
        {1, 0, 1, 1, 1, 1, 1}, // 6
        {1, 1, 1, 0, 0, 0, 0}, // 7
        {1, 1, 1, 1, 1, 1, 1}, // 8
        {1, 1, 1, 1, 0, 1, 1}  // 9
    };

void SevenSegment(int num) {
    string horizontal = " ###\n";
    string vertikal = "#   ";
    int i = 0;

   for (int i = 1; i <= 5; i++){
    {
        cout << "               ";
            if(i == 1){
                if(segments[num][0] == 1) {cout << horizontal;}
                else{cout << "\n";}
            }
            if(i == 2){
                if(segments[num][5] == 1) {cout << vertikal;}
                else{cout << "    ";}
                if(segments[num][1] == 1) {cout << vertikal << "\n";}
                else{cout << "\n";}
            }
            if(i == 3){
                if(segments[num][6] == 1) {cout << horizontal;}
                else {cout << "\n";}
            }
            if(i == 4){
                if(segments[num][4] == 1) {cout << vertikal;}
                else{cout << "    ";}
                if(segments[num][2] == 1) {cout << vertikal << "\n";}
                else{cout << "\n";}
            }
            if(i == 5){
                if(segments[num][3] == 1) {cout << horizontal;}
                else {cout << "\n";}
            }
        
    }
  }
}

void displaySevenSegmentTable(int num) {
    cout << "==============TRUTH TABLE============\n";
    cout << "Decimal | A | B | C | D | E | F | G |\n";
    cout << "-------------------------------------\n";
    cout << setw(7) << num << " | ";

    for (int i = 0; i < 7; ++i) {
        cout << setw(1) << segments[num][i] << " | ";
    }
    cout << endl;
    
    
}

int main() {
    int inputNumber; 

    cout << "Masukkan angka Desimal 1 DIGIT: ";
    cin >> inputNumber;

    if (inputNumber >= 0 && inputNumber <= 9) {
        displaySevenSegmentTable(inputNumber);
        cout << "-------------------------------------\n";
        cout << "=====================================\n\n";
        cout << "============SEVEN SEGMENT============\n";
        SevenSegment(inputNumber);
        cout << "=====================================\n";
    } else {
        cout << "Angka anda tidak sesuai ketentuan.\n";
    }

    return 0;
}


/*
    A
F       B
    G
E       C
    D

    0
5       1
    6
4       2
    3    
*/