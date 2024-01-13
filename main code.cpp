#include <iostream>
#include <algorithm>
using namespace std;

// Function to display a table
void afficherTableau(int tableau[], int taille) {
    for (int i = 0; i < taille; ++i) {
        cout << tableau[i] << " ";
    }
    cout << endl;
}

// Function for sorting an array of integers
void trierTableau(int tableau[], int taille) {
    sort(tableau, tableau + taille);
}

int main() {
    int taille;

    // Ask user for table size
    cout << "Enter table size : ";
    cin >> taille;

    // Create an array of user-specified size
    int tableau[taille];

    // Ask the user to enter table elements
    cout << "Enter table elements :" << endl;
    for (int i = 0; i < taille; ++i) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
    }

    // Call the function to sort the table
    trierTableau(tableau, taille);

    // Display sorted table
    cout << "the sorted table is : ";
    afficherTableau(tableau, taille);

    return 0;
}

