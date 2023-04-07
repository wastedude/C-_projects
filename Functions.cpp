#include<iostream>
using namespace std;

int menu();
int login_demo();
int patterns();

int main()
{
    menu();
    return 0;








}

int menu()
{
    int ans;
    cout << "\tMENU\n1.Creating Patterns\n2.Login Demo\n3.Terminate the program\n";
    cout <<"Select the task you would like to continue with: ";
    cin >> ans;
    switch (ans)
    {
    case 1:
        patterns();
        break;
    case 2:
        login_demo();
        break;
    case 3:
        break;
    default:
        cout << "INVALID ENTRY\n";
    }
    return 0;
}
int login_demo()
{
    string username;
    int pin;

    cout << "enter your username: ";
    cin >> username;
    cout << "Enter your pin: ";
    cin >> pin;

    if (username == "Student"&& pin == 1234)
        cout << "Welcome Student\n Login successful\n";
    else if(username != "Student"|| pin != 1234)
    {
        cout <<"Either your pin or username is incorrect\n";
        for(int i=3;i<3;i--)
        {
            cout << "You have "<<i<<" trials left.";
            cout << "Enter your username: ";
            cin >> username;
            cout << "Enter your pin: ";
            cin >> pin;

            if (username == "Student"&& pin == 1234)
                cout << "Welcome Student\n Login successful\n";
        }

    }
    menu();
    return 0;
}
int patterns()
{
    cout << "wtf";
    menu();
    return 0;
}
