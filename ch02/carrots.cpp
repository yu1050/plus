// carrots.cpp -- food processing program
// uses and displays a variable

#include <iostream>

using namespace std;

int main() {


    int carrots;            // declare an integer variable
    char c;
    char c1 = 0x41;
    char c2 = 'A';
    char str[100];
    char *p = str;
    float f;
    bool b;

//    str[0] = 0x59;
//    str[1] = 0x55;
//    str[2] = ',';
//    str[3] = 'C';
//    str[4] = 'h';
    strcpy(str, "YU Charles");
    if (c1 == c2) {
        cout << " c1 == c2" << endl;
    }
    cout << str << endl;
    cout << str[2] << endl;

    cout << c1 << " : " << c2 << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(str) << endl;
    cout << sizeof(p) << endl;
    printf("%p \n", p);
    printf("%p \n", &str[4]);
    cout << "carrots sizeof() = " << sizeof(carrots) << endl;
    c = 60;
    cout << INT32_MAX;

    carrots = 25;            // assign a value to the variable
    cout << "I have ";
    cout << carrots;        // display the value of the variable
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;  // modify the variable
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    // cin.get();
    return 0;
}
