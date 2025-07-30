

#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i]; 
    }

    double average = (double)sum / n;  

    cout << "Sum of the elements: " << sum << endl;
    cout << "Average of the elements: " << average << endl;

    return 0;
}
/*
OUTPUT: 
Enter the number of elements: 5
Enter 5 elements:
44
55
66
77
88
Sum of the elements: 330
Average of the elements: 66
*/
