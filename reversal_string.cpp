#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "You entered: " << str << endl;

    string reversedStr;
    for (int i = str.length()-1; i>= 0; i--){
        reversedStr += str[i];
    }
    cout << "Reversed string: " << reversedStr << endl;
    return 0;
}
/*OUTPUT 
nter a string: symbiosis international 
You entered: symbiosis international 
Reversed string:  lanoitanretni sisoibmys
*/
