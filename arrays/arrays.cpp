

#include <iostream>

using namespace std;

int main()
{
    string arr = "Hello";
    string arr1[] = { "Hi", "Hello", "Hey", "Good morning ", "How’s it going?", "Nice to see you ", "What’s up?", "Howdy ", "It's a pleasure to meet you", "Afternoon " };
    cout << arr1[0,9];
    char arr2[] = { 'o', 'e', 'h', 'j', 'r', 'y', 'a', 's', 'b', 'c' };
    // restricted to ten  items
    char arr3[10] = { 'o', 'e', 'h', 'j', 'r', 'y', 'a', 's', 'b', 'c'};
    // a non limited array is not fixed while a limited array with that number in the square brackets determiens its fixed amount.
    for (int n: arr3) {
        cout << n << endl;
    }
    // array initialisation 
    int a[10];
    int total = 0;
    // write a for loop to store an item at index
    for (int i = 1; i <= 10; i++) {
        total = total + i;
        cout << "Enter the item for index: " << i << endl;
        cin >> a[i];
    }
    for (int i = 1; i < 10; i++) {
        cout << "The items in the array are: " << a[i] << endl;
    }
}
