#include <iostream>

using namespace std;

void main()
{
    // Take user input as a string instead of a number 
    string userinput;

    cout << "Input a number: "; 
    cin >> userinput;

    // The nested if loops of hell ... 
    if (userinput == "1") {
        cout << "One";
    }
    
    else {
        if (userinput == "2") {
            cout << "Two";
        }

        else {
            if (userinput == "3") {
                cout << "Three";
            }

            else {
                if (userinput == "4") {
                    cout << "Four";
                }

                else {
                    if (userinput == "5") {
                        cout << "Five";
                    }

                    else {
                        if (userinput == "6") {
                            cout << "Six";
                        }

                        else {
                            if (userinput == "7") {
                                cout << "Seven";
                            }

                            else {
                                if (userinput == "8") {
                                    cout << "Eight";
                                }

                                else {
                                    if (userinput == "9") {
                                        cout << "Nine";
                                    }

                                    else {
                                        if (userinput == "10") {
                                            cout << "Ten";
                                        }

                                        else {
                                            cout << "Nope";
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

