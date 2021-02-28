//Kevin Raddatz
//CS210
//Project 1

#include <iostream>
using namespace std; 

//printClock() does most of the work here. Determines whether it is AM or PM, Uses IF/Else statements to correctly format any 
//Input, as well as printing the formatted clock to the screen. 

void printClock(int currentHour, int currentMin, int currentSec, int currentHourTF ) { //printClock() prints the clock to the specifications
    cout << "**************************\t**************************" << endl;
    cout << "*     12-Hour Clock      *\t*     24-Hour Clock      *" << endl;
    if (currentHour < 10 && currentMin < 10 && currentSec < 10) { //Conditionals added to add in extra Zero for formatting purposes
        cout << "*     0" << currentHour << ": 0" << currentMin << ": 0" << currentSec << " "; //1
  
        if (currentHourTF > 11) { //Determines whether it is AM or PM and prints accordingly 
            cout << "PM      * \t";
            cout << "*     0" << currentHourTF << ": 0" << currentMin << ": 0" << currentSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;
        }
        else {
            cout << "AM      *\t";
            cout << "*     0" << currentHourTF << ": 0" << currentMin << ": 0" << currentSec << "         *" << endl; 
            cout << "**************************\t**************************" << endl;
            
        }//The Above block of code is reused for the rest of the cascaded If/Else statements to format any combination
    }
    else if (currentHour < 10 && currentMin < 10) {
        cout << "*     0" << currentHour << ": 0" << currentMin << ": " << currentSec << " ";//2

        if (currentHourTF > 11) { 
            cout << "PM      * \t";
            cout << "*     0" << currentHourTF << ": 0" << currentMin << ": " << currentSec <<"         *" << endl;
            cout << "**************************\t**************************" << endl;
        }
        else {
            cout << "AM      *\t";
            cout << "*     0" << currentHourTF << ": 0" << currentMin << ": " << currentSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;

        }
    }


    else if (currentHour < 10 && currentSec < 10) {
        cout << "*     0" << currentHour << ": " << currentMin << ": 0" << currentSec << " ";

        if (currentHourTF > 11) { 
            cout << "PM      * \t";
            cout << "*     0" << currentHourTF << ": " << currentMin << ": 0" << currentSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;
        }
        else {
            cout << "AM      *\t";
            cout << "*     0" << currentHourTF << ": " << currentMin << ": 0" << currentSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;

        }
    }

    else if (currentMin < 10 && currentSec < 10) {
        cout << "*     " << currentHour << ": 0" << currentMin << ": 0" << currentSec << " ";

        if (currentHourTF > 11) { 
            cout << "PM      * \t";
            cout << "*     " << currentHourTF << ": 0" << currentMin << ": 0" << currentSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;
        }
        else {
            cout << "AM      *\t";
            cout << "*     " << currentHourTF << ": 0" << currentMin << ": 0" << currentSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;

        }
    }
    else if (currentHour < 10 && currentMin >= 10 && currentSec >= 10) {
        cout << "*     0" << currentHour << ": 0" << currentMin << ": 0" << currentSec << " ";

        if (currentHourTF > 11) { 
            cout << "PM      * \t";
            cout << "*     0" << currentHourTF << ": " << currentMin << ": " << currentSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;
        }
        else {
            cout << "AM      *\t";
            cout << "*     0" << currentHourTF << ": " << currentMin << ": " << currentSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;

        }
    }

    else if (currentHour >= 10 && currentMin < 10 && currentSec >= 10) {
        cout << "*     0" << currentHour << ": 0" << currentMin << ": 0" << currentSec << " ";

        if (currentHourTF > 11) { 
            cout << "PM      * \t";
            cout << "*     " << currentHourTF << ": 0" << currentMin << ": " << currentSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;
        }
        else {
            cout << "AM      *\t";
            cout << "*     " << currentHourTF << ": 0" << currentMin << ": " << currentSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;

        }
    }

    else if (currentHour >= 10 && currentMin >= 10 && currentSec < 10) {
        cout << "*     " << currentHour << ": " << currentMin << ": 0" << currentSec << " ";

        if (currentHourTF > 11) { 
            cout << "PM      * \t";
            cout << "*     " << currentHourTF << ": " << currentMin << ": 0" << currentSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;
        }
        else {
            cout << "AM      *\t";
            cout << "*     " << currentHourTF << ": " << currentMin << ": 0" << currentSec << "         *" << endl;
            cout << "**************************\t**************************" << endl;

        }
    }
}



    
    
void printMenu() { //printMenu() prints the user menu to the screen to the specified format
    cout << endl; 
    cout << "**************************" << endl; 
    cout << "* 1 - Add One Hour       *" << endl; 
    cout << endl; 
    cout << "* 2 - Add One Minute     *" << endl;
    cout << endl;
    cout << "* 3 - Add One Second     *" << endl;
    cout << endl;
    cout << "* 4 - Exit Program       *" << endl;
    cout << "**************************" << endl;
    cout << endl; 
}


int addHour(int currentHour) {//Add Hour to 12 Hr Clock, returns Integer 
    currentHour = currentHour + 1; 
    if (currentHour > 12) {//Wraps Back around to minimum value 
        currentHour = 1; 
    }  
    return currentHour; 
}

int addHourTF(int currentHourTF) { //Adds Hour to the 24 Hr Clock, returns integer
    currentHourTF += 1; 
    if (currentHourTF > 23) { //Wraps Back around to Zero
        currentHourTF = 0; 
    }
    return currentHourTF; 
}

int addMinute(int currentMin) {//Adds Minute to both clocks, returns integer
    currentMin += 1; 
    if (currentMin > 59) {
        currentMin = 0; 
    }
    return currentMin; 
}

int addSecond(int currentSec) {//Adds second to both clock, returns integer
    currentSec += 1; 
    if (currentSec > 59) {
        currentSec = 0; 
    }
    return currentSec; 

}
int main()
{
    int menuInput = 0; //Initializing variables with default values for clock
    int currentHour = 1; 
    int currentMin = 0; 
    int currentSec = 0; 
    int currentHourTF = 1; 

    while (menuInput != 4){ //While loop checks each time that the exit key is not pressed

        printClock(currentHour, currentMin, currentSec, currentHourTF);//Printing of clock
        printMenu();//Printing of Menu
        cin >> menuInput;//User Input

        switch (menuInput) {//Switch Statement will use the user's input to determine which function to call

        case 1:
            currentHour = addHour(currentHour);
            currentHourTF = addHourTF(currentHourTF);
            break;
        case 2:
            currentMin = addMinute(currentMin);
            break;
        case 3:
            currentSec = addSecond(currentSec);
            break;

        }  
    }
    return (0); 
}

