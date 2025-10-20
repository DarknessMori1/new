#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void SS_Basic(){
    stringstream ss;
    int number = 42;
    double Pi = 3.14;
    string text = "hello world";
    ss << "Число: " << number << ", Pi: " << Pi << ", Текст: "<< text;
    string result = ss.str();
    cout << "\nРезультат:  " << result << endl;

    stringstream ss2 (result);
    string word;
    cout <<"\nРазбор по словам: "<< endl;
    while (ss2 >> word){
        cout<<"Cлово: " << word << endl;
    }
}

int main(){
    SS_Basic();
    return 0;
}
