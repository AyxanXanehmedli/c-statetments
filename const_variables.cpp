#include <iostream>
using namespace std;
int main() {
    int const const_variable = 15;
    //"const_variable"-in qiyməti dəyişməzdir , sabitdir
    const_variable = 21;
    //sabit dəyişənin qiymətini dəyişməyə çalışdığımız üçün kod "error" verəcək
    cout << const_variable;
    return 0 ;
    
}