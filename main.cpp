#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& grades) {
    int n = grades.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (grades[j] > grades[j + 1]) {
                swap(grades[j], grades[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> grades(7);
    cout << "Introduce 7 calificaciones: " << endl;
    for (int i = 0; i < 7; i++) {
        cin >> grades[i];
    }

    bubbleSort(grades);

    cout << "Calificaciones ordenadas: ";
    for (int grade : grades) {
        cout << grade << " ";
    }
    cout << endl;

    cout << "Calificación más baja: " << grades[0] << endl;
    cout << "Calificación más alta: " << grades[6] << endl;

    return 0;
}
