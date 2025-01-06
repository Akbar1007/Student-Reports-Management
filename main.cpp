#include <iostream>
#include <string>
using namespace std;


//int inputData(arr) {
//    
//}


int main()
{
    //cout << "First, enter student names and scores:" << inputData(arr) << endl;
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

    cout << "\nStudent Data:\n";
    for (int i = 0; i < num_students; i++) {
        cout << "Name: " << names[i] << ", Score: " << scores[i] << endl;
    }

    delete[] names;
    delete[] scores;

    return 0;

    
}
