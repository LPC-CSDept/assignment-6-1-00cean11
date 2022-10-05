#include <iostream>
#include <cmath>
using namespace std;
int inputValid(int b, int c);
void getListprime(int start, int final);
int main (){
    int start, final;
    int i, j;
    do {
        cout << "Enter range [from, to]\n";
        cin >> start >> final;
    } while (inputValid(start, final));
    getListprime (start, final);
}
int inputValid(int b, int c){
    if (b >= c || b < 2 || c < 0){
        return 1;
    } else {
        return 0;
    }
}
void getListprime(int start, int final){
    int i, j;
    for (i = start; i <= final; i++){
        if (i == 0 || i == 1){
            continue;
        }
        for (j = 2; j <= (i / 2); j++){
            if (i % j == 0){
                break;
            }
        }
        if (j > (i / 2)){
            cout << "prime number :" << i << endl;
        }
    }
}