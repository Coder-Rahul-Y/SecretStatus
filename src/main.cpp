#include<SFML/Audio.hpp>
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


    //audio
    sf::SoundBuffer buf1, buf2, buf3;
    buf1.loadFromFile("assets/sound1.wav");
    buf2.loadFromFile("assets/sound2.ogg");
    buf3.loadFromFile("assets/sound3.wav");
    sf::Sound snd[3];
    snd[0].setBuffer(buf1);
    snd[1].setBuffer(buf2);
    snd[2].setBuffer(buf3);



    for (int i = 0; i < msg.length(); i++)
    {
        cout<<"\b "<<msg[i];

        int j = rand()%3;
        snd[j].play();
        if (msg[i]==' ') Sleep(30);

        Sleep(50);
    }

    system("cls");
    // cout<<"Major GR\n";
    cin.get();


    return 0;
}