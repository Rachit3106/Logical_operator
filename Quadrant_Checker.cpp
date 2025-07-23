/*
Name:- Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout << "Enter x and y coordinates: ";
    cin >> x >> y;
    if(x>0 && y>0){
        cout << "Point is in Quadrant I";
    }
    else if(x<0 && y>0){
        cout << "Point is in Quadrant II";
    }
    else if(x<0 && y<0){
        cout << "Point is in Quadrant III";
    }
    else if(x>0 && y<0){
        cout << "Point is in Quadrant IV";
    }
    else if(x==0 && y!=0){
        cout << "Point is on Y-axis";
    }
    else if(y==0 && x!=0){
        cout << "Point is on X-axis";
    }
    else{
        cout << "Point is at the origin";
    }
}
/*
Ouput:-
1)Enter x and y coordinates: -1 0
Point is on X-axis
2)Enter x and y coordinates: -1 -1
Point is in Quadrant III
3)Enter x and y coordinates: 1 1
Point is in Quadrant I
4)Enter x and y coordinates: -1 1
Point is in Quadrant II
5)Enter x and y coordinates: 1 -1
Point is in Quadrant IV
6)Enter x and y coordinates: 0 1
Point is on Y-axis
*/