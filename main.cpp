#include<iostream>
#include<string.h>
#include<Windows.h>

using namespace std;

int main(){

    string msg;
    // char str[501];
    cout<<"Enter your secret message : ";
    getline(cin, msg);

    system("cls");
    cin.get();
    system("cls");

    for (int i = 0; i < msg.length(); i++)
    {
        cout<<"\b "<<msg[i];
        Sleep(100);
    }

    system("cls");
    // cout<<"Major GR\n";
    cin.get();


    return 0;
}