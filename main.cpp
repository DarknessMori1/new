#include <iostream>
#include <fstream>
using namespace std;

void writeToFile (const string file_name){
    ofstream outFile(file_name);
    if(!outFile. is_open()){
        cerr << "File open error";
        return;
    }
    outFile << "abc" << endl;
    outFile << 42  << endl;
    outFile << 3.14  << endl;
    outFile << boolalpha << true << endl;
    outFile << hex << 42 << endl;
    //outFile << bin << 42 << endl;
    outFile << dec << 42 << endl;
   
}

void readFromFile(const string file_name){
    ifstream inFile(file_name);
    if (!inFile. is_open()){
        cerr << "File not open";
        return;
    }
    cout << "содержимое" << endl;
    string line;
    while (getline(inFile, line)){
        cout<<line<<endl;
    }
}

int main(){
    writeToFile("abc.txt");
    readFromFile ("abc.txt");

}