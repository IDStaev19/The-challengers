#include <iostream>
#include <iomanip>
#include <string>

#include "frontend.h"

using namespace std;

void printMenuHeading(int option)
{
    cout << "      ______________________________________________________________________________________________" << endl;
    cout << "     |  __________________________________________________________________________________________  |" << endl;

    cout << "     | |             _   _ _     _                     _   _                _ _                   | |\n";
    cout << "     | |            | | | (_)___| |_ ___  _ __ _   _  | |_(_)_ __ ___   ___| (_)_ __   ___        | |\n";
    cout << "     | |            | |_| | / __| __/ _ \\| '__| | | | | __| | '_ ` _ \\ / _ \\ | | '_ \\ / _ \\       | |\n";
    cout << "     | |            |  _  | \\__ \\ || (_) | |  | |_| | | |_| | | | | | |  __/ | | | | |  __/       | |\n";
    cout << "     | |            |_| |_|_|___/\\__\\___/|_|   \\__, |  \\__|_|_| |_| |_|\\___|_|_|_| |_|\\___|       | |\n";
    cout << "     | |                                       |___/                                              | |\n";
    cout << "     | |                                                                                          | |" << endl;
    cout << "     | |                                                                                          | |" << endl;


    printMenuOptions(option);
    for (int i = 2; i < 6; i++)
    {
        cout << "     | |                                                                                          | |" << endl;

    }

    cout << "     | |__________________________________________________________________________________________| |" << endl;
    cout << "     |______________________________________________________________________________________________|" << endl;


}

void printMenuOptions(int option, string arrow)
{


    cout << setw(30);
    cout << "     | |                           _______________________________________                        | |" << endl;
    cout << "     | |                          |  ___________________________________  |                       | |" << endl;
    cout << setw(47);

    cout << "  | |                          | |          ";
    if (option == 1)cout << "=>";
    else cout << "  ";
    cout << " All Events            | |                       | |\n";
    cout << "     | |                          | |___________________________________| |                       | |" << endl;
    cout << "     | |                          |_______________________________________|                       | |" << endl;




    cout << setw(30);
    cout << "     | |                           _______________________________________                        | |" << endl;
    cout << "     | |                          |  ___________________________________  |                       | |" << endl;


    cout << "     | |                          | |         ";

    if (option == 2)cout << "=>";
    else cout << "  ";
    cout << " Add an event           | |                       | |\n";
    cout << "     | |                          | |___________________________________| |                       | |" << endl;
    cout << "     | |                          |_______________________________________|                       | |" << endl;


    //krai na ADD AN EVENT




    //nachalo na DELETE AN EVENT

    cout << setw(30);
    cout << "     | |                           _______________________________________                        | |" << endl;
    cout << "     | |                          |  ___________________________________  |                       | |" << endl;
    cout << "     | |                          | |       ";
    if (option == 3)cout << "=>";
    else cout << "  ";
    cout << " Delete an event          | |                       | |\n";

    cout << "     | |                          | |___________________________________| |                       | |" << endl;
    cout << "     | |                          |_______________________________________|                       | |" << endl;


    // krai na DELETE AN EVENT




    // nachalo na QUIZ
    cout << setw(30);
    cout << "     | |                           _______________________________________                        | |" << endl;
    cout << "     | |                          |  ___________________________________  |                       | |" << endl;
    cout << "     | |                          | |             ";

    if (option == 4)cout << "=>";
    else cout << "  ";
    cout << " Quiz               | |                       | |\n";

    cout << "     | |                          | |___________________________________| |                       | |" << endl;
    cout << "     | |                          |_______________________________________|                       | |" << endl;
    // krai na QUIZ



    // nachalo na EXIT

    cout << setw(30);
    cout << "     | |                           _______________________________________                        | |" << endl;
    cout << "     | |                          |  ___________________________________  |                       | |" << endl;
    cout << "     | |                          | |             ";
    if (option == 5)cout << "=>";
    else cout << "  ";
    cout << " Exit               | |                       | |\n";
    cout << "     | |                          | |___________________________________| |                       | |" << endl;
    cout << "     | |                          |_______________________________________|                       | |" << endl;
}

void printMenu(int option)
{

    printMenuHeading(option);

}
