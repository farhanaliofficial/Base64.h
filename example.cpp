#include "base64.h"
#include <iostream>

//string already included in base64.h so you don't need to include it.
//GitHub: @farhanaliofficial

using namespace std;

int main()
{
    string input = "Hello, World!";
    string encoded = base64_encode(input);
    cout << "Encoded: " << encoded << endl;
    string decoded = base64_decode(encoded);
    cout << "Decoded: " << decoded << endl;
    return 0;
}
