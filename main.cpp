#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void Display(int num_students, string* names, int* scores) {
    cout << "\nStudent Data:\n";
    for (int i = 0; i < num_students; i++) {
        if (!names[i].empty()) {
            names[i][0] = toupper(names[i][0]);
        }
        cout << "Name: " << names[i] << ", Score: " << scores[i] << endl;
    }
}

int main() {
    int num_students;
    cout << "How many student records you want to enter: ";
    cin >> num_students;

    string* names = new string[num_students];
    int* scores = new int[num_students];

    for (int i = 0; i < num_students; i++) {
        cout << "Enter name for student " << (i + 1) << ": ";
        cin >> names[i];
        cout << "Enter score for student " << (i + 1) << ": ";
        cin >> scores[i];
    }

    Display(num_students, names, scores);

    delete[] names;
    delete[] scores;

    return 0;
}
