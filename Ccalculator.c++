#include <iostream>


using namespace std;
// namespace std;

// plus function
void plus_func(){
    int num1;
    int num2;
    int num3;
    string Anwser;

    cout << "num1: ";
    cin >> num1;
    cout << "num2: ";
    cin >> num2;
    cout << "Add another num[y/n]?: ";
    cin >> Anwser;

    if (Anwser == "n"){
        cout << num1 + num2;
    }
    else if (Anwser == "y"){
        cout << "num3: ";
        cin >> num3;

        cout << "= " << num1 + num2 + num3;
    }

}
// minus function
void minus_func(){
    int num1;
    int num2;
    int num3;

    string Anwser;

    cout << "num1: ";
    cin >> num1;
    cout << "num2: ";
    cin >> num2;
    cout << "Add another num[y/n]?: ";
    
    if (Anwser == "n"){
        cout << num1 - num2;
    }
    else if (Anwser == "y"){
        cout << "num3: ";
        cin >> num3;

        cout << "= " << num1 - num2 - num3;
    }
    
}
// multiplication function 
void multiply_func(){
    int num1;
    int num2;
    int num3;

    string Anwser;
    
    cout << "num1: ";
    cin >> num1;
    cout << "num2: ";
    cin >> num2;
    cout << "Add another num[y/n]?: ";
    cin >> Anwser;
    
    if (Anwser == "n"){
        cout << num1 * num2;
    }
    else if (Anwser == "y"){
        cout << "num3: ";
        cin >> num3;

        cout << "= " << num1 * num2 * num3;
    }

}
// devision function 
void devide_func(){
    int num1;
    int num2;
    int num3;

    string Anwser;

    cout << "num1: ";
    cin >> num1;
    cout << "num2: ";
    cin >> num2;
    cout << "Add another num[y/n]?: ";
    cin >> Anwser;
    
    if (Anwser == "n"){
        cout << num1 / num2;
    }
    else if (Anwser == "y"){
        cout << "num3: ";
        cin >> num3;

        cout << "= " << num1 / num2 / num3;
    }

}


void calculator(){
    int Operator;

    cout << "Welcome To C-alculator \n";


    cout << "Choose operator (plus(1), minus(2), multiply(3), devide(4)): ";
    cin >> Operator;

    if (Operator == 1){
        plus_func();
    }
    else if (Operator == 2){
        minus_func();
    }
    else if (Operator == 3){
        multiply_func();
    }
    else if (Operator == 4){
        devide_func();
    }
}


int main(){
    calculator();
}   

