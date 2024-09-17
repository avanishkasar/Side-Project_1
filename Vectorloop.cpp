#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    vector<int> marks = { 85 , 90 , 99 , 97 , 60 };//start,stop,step
    cout << "BEFORE = " ;
    for (size_t i = 0; i < marks.size(); i++){
     cout << marks[i] << " " ;
    }
    cout << endl ;
    cout << "AFTER = " ;
    for (size_t i = 0; i < marks.size(); i++){
        marks[i] += 5 ;
        if (marks[i] > 100)
        {
         marks[i] = 100;
        }
        cout << marks[i] << " " ;
    }
    cout << endl;
    









}