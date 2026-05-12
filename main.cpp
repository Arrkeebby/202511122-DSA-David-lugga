#include <iostream>
#include <string>

using namespace std;

int main()
{
    long keyNumber=922962655;
    int phoneNumbers[3];
    int i= 0;

    //filling number
    do{
        cout<<"Enter number:";
        cin>>phoneNumbers[i];
        i++;
    } while(i < 3);

    //linear search
    //linear number
    for (int i=0; i < 3; i++){
        if (phoneNumbers[i] == keyNumber){
                cout<<"David number's found"<<endl;
                break;
            }

    }


    /*

    string name;
    char singleCharacter;
    float phoneNumber;

    cout << "david!" << endl;
    cin>>name;

    cout <<"David"<< endl;
    cin>>phoneNumber;
    cout<<endl;
    cout<<"hello<<"<<David<<"[3]"<<[3]<<endl;


    */

    return 0;
}
