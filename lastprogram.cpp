#include <iostream>
using namespace std;

int main(){
    string name;
    cout << "Enter your name : ";
    cin >> name;
    cout << "Hello," << " " << name << "!" << " " << "How we can help you?" << endl;

    int a,b;
    int sum, dif, mul, div;
    int choice;
    cout << "Enter your choice : ";
    cin >> choice;
    switch (choice) {
        case 1:
        cout << "Enter your value : ";
        cin >> a;
        cout << "Enter your second value : ";
        cin >> b;
        sum = a + b;
        cout << "The sum is : " << sum;
        break;
        case 2:
        cout << "Enter your value : ";
        cin >> a;
        cout << "Enter your second value : ";
        cin >> b;
        dif = a - b;
        cout << "The difference is : " << dif;
        break;
        case 3:
        cout << "Enter your value : ";
        cin >> a;
        cout << "Enter your second value : ";
        cin >> b;
        mul = a * b;
        cout << "The multiply is : " << mul;
        break;
        case 4 :
        cout << "Enter your value : ";
        cin >> a;
        cout << "Enter your second value : ";
        cin >> b;
        div = a / b;
        cout << "The divide is : " << div;
        break;
        default:
        cout << "Invalid option. Try again!";
        return 0;
    }
}