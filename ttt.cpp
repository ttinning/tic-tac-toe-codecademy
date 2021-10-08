#include <iostream>
#include "ttt_functions.hpp"

using namespace std;

int main() {

    draw();
    while(1) {
        input();
        draw();
        if(win() == 'X') {
            cout << "X wins!";
            break;
        } else if (win() == 'O') {
            cout << "O wins!";
            break;
        }
        togglePlayer();
    }

}