

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
    for (char n: arr3) {
        cout << "N: " << n << endl;
        
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
    //  write the code to find out how many items are in a list
    int counter = 0;
    for (char n : arr3) {
        counter += 1;
    }
    cout << "Counter = " << counter << endl;
    // we made the for loop do as many loops as there were items so the counter increased by 1 each time.

    // questionn 1: What are the different ways of initalising an array in C++.
    int re5[] = {3,4,2,4,6,3,2,4,5,3,2,4,5,3,2,4};
    int re1[10];
    int re[10] = {1,2,3,4,5,6,7,8,9,10};
    
    // Q2: What is the syntax of a single dimensional array
    int numbers[4];


}
