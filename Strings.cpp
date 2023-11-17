#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int input() {
    string str;
    getline(cin, str); // User input will be echoed in the comment.
    cout << str << endl; // Output: User input

    cout << str[1]; // Output: Character at index 1 of the input string.
    return 0;
}

int addstring() {
    string s1 = "Compu";
    string s2 = "ter";
    cout << s1 + s2 << endl; // Output: "Computer" (concatenation)
    s1 = s1 + s2; // s1 is updated.
    cout << s1; // Output: "Computer"
    return 0;
}

int erase() {
    string s = "Computer";
    s.erase(2, 4); // Characters erased: "mpu"
    cout << s; // Output: "Coter"
    return 0;
}

int find() {
    string s = "Computer";
    cout << s.find("put") << endl; // Output: 2 (index where "put" starts)
    s.insert(0, "New "); // String after insertion: "New Computer"
    cout << s << endl; // Output: "New Computer"
    cout << s.size() << endl; // Output: 12 (length of the string)
    
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << endl; // Output: Each character on a new line
    }

    string s1 = s.substr(4, 6); // Substring: "Compu"
    cout << s1 << endl; // Output: "Compu"

    string s2 = "1234";
    int a = stoi(s2);
    cout << a + 2 << endl; // Output: 1236 (integer addition)

    int b = 1234;
    cout << to_string(b) + "5" << endl; // Output: "12345" (string concatenation)

    string d = "hgjashlgjioghuoa";
    sort(d.begin(), d.end());
    cout << d; // Output: Sorted string "aeggghhhiijjloosu"
    return 0;
}

int lowertouppercase() {
    string a = "jashgsahfgASDo";
    
    // Convert lowercase characters to uppercase.
    for (int i = 0; i <= a.size(); i++) {
        if (a[i] >= 'a' and a[i] <= 'z')
            a[i] = a[i] - 32;
    }
    cout << a << endl; // Output: "JASHGSAHFGASDO" (uppercase)

    // Convert uppercase characters to lowercase.
    for (int i = 0; i <= a.size(); i++) {
        if (a[i] >= 'A' and a[i] <= 'Z')
            a[i] = a[i] + 32;
    }
    cout << a << endl; // Output: "jashgsahfgasdo" (lowercase)

    transform(a.begin(), a.end(), a.begin(),::toupper);
    cout << a << endl; // Output: "JASHGSAHFGASDO" (uppercase)

    transform(a.begin(), a.end(), a.begin(),::tolower);
    cout << a << endl; // Output: "jashgsahfgasdo" (lowercase)
    return 0;
}

int sort() {
    string s="246878462317";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s; // Output: "877864664322" (sorted in descending order)
    return 0;
}

int main() {
    int button;
    cin >> button;
    switch (button) {
        case 1:
            input();
            break;
        case 2:
            addstring();
            break;
        case 3:
            erase();
            break;
        case 4:
            find();
            break;
        case 5:
            lowertouppercase();
            break;
        case 6:
            sort();
            break;
        default:
            cout << "Enter a number between 1 to 6"; // Prompt for valid input.
            break;
    }
    return 0;
}
