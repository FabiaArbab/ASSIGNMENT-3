#include<iostream>
using namespace std;
int main() {
    char alpha;
    cout<<"enter alphabet: ";
    cin>>alpha;
        if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u') {
            cout<<"---lowercase vowel---";
        }
        else if (alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U') {
            cout<<"---uppercase vowel---";
        }
        if (alpha >= 'A' && alpha <= 'Z' && alpha != 'A' && alpha != 'E' && alpha != 'I' && alpha != 'O' && alpha != 'U') {
            cout<<"---uppercase consonant---";
        }
        else if (alpha >= 'a' && alpha <= 'z' && alpha != 'a' && alpha != 'e' && alpha != 'i' && alpha != 'o' && alpha != 'u') {
            cout<<"---lowercase consonant---";
        }
        else {
            cout<<"---not an alphabet---";
        }
    return 0;
}