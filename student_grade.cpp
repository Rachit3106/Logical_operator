/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Type marks out of 100:";
    cin >> marks;
    if(marks>=90 && marks<100){
        cout << "Grade:A";
    }
    else if(marks>=80 && marks<90){
        cout << "Grade:B";
    }
     else if(marks>=70 && marks<80){
        cout << "Grade:C";
    }
     else if(marks>=60 && marks<70){
        cout << "Grade:D";
    }
     else if(marks>=50 && marks<60){
        cout << "Grade:E";
    }
     else {
        cout << "Grade:F";
    }
}
/*
Output:-
Type marks out of 100:87
Grade:B
*/