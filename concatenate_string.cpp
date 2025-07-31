#include <iostream>
#include <string>
using namespace std;

int main() {

    char str1[50], str2[50];
    string result;

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    result = string(str1)+string(str2);

    cout << "The full string is: " << result << endl;

    return 0;
}
/*OUTPUT
Enter the first string: problem
Enter the second string: child
The full string is: problemchild
*/
