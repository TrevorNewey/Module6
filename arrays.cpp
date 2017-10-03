#include <iostream>
using namespace std;
const int SIZE = 3;
int main() {
    //Arrays must be the same type.
    int age[SIZE]; //you do this with the constant so you don't have to change it everywhere

    //take input
    for (int i = 0; i < SIZE; ++i) {                //DOn't say <=size. always just use < or >
        cout << "Enter your age" <<endl;
        cin >> age[i];
    }
    for (int j = 0; j < SIZE; ++j) {
        cout <<"age "<< j << " is "<<age[j] << endl;
    }
    cout << "DONE!"<<endl;
    return 0;
}