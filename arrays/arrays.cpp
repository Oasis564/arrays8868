

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
    for (int n: arr3) {
        cout << n << endl;
    }

}
