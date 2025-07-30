//Antarleen Chand
// 24070123018
int main() {
    int n, target;
    bool found = false;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> target;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Element " << target << " found at position " << i + 1 << "." << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Element " << target << " not found in the array." << endl;

    return 0;
}

/*
OUTPUT:
Enter the number of elements: 6
Enter 6 elements:
78 21 11 7 96 35
Enter the element to search for: 21
Element 21 found at position 2.
*/
