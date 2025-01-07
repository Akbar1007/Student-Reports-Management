#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void Display(int n, string* names, int* scores) {
    cout << "\nStudent Information:\n";
    for (int i = 0; i < n; i++) {
        if (!names[i].empty()) {
            names[i][0] = toupper(names[i][0]);
        }
        cout << "Name: " << names[i] << ", Score: " << scores[i] << endl;
    }
}

void Average(int n, int* scores) {
    int total = 0;
    int average = 0;
    for (int i = 0; i < n; i++) {
        total += scores[i];
    }
    average = total / n;

    cout << "\nThe average score is: " << average << endl;
}

// check

void TopScore(int n, int* scores) {
    int highest_score = 0;
    for (int i = 0; i < n; i++) {
        if (highest_score < scores[i]) {
            highest_score = scores[i];
        }
    }
    cout << "The highest score is: " << highest_score << endl;
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
    };

    Display(num_students, names, scores);
    Average(num_students, scores);
    TopScore(num_students, scores);
    // Check_Pass(num_students, scores);


    delete[] names;
    delete[] scores;

    return 0;
}


