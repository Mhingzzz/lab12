// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main() {
    srand(time(0));

    string grade[9] = {"A","B+","B","C+","C","D+","D","F","W"};
    cout << "Press Enter 3 times to reveal your future.";
    int i = 0;
    while (i < 3)
    {
        cin.get();
        i++;
    }
    cout <<"You will get "<<grade[rand()%10] << " in this 261102." ;
    return 0;
}

