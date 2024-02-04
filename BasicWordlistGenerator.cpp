#include <iostream>
#include <fstream>
#include <string>  // i added those "just to be sure"
#include <cstring>
#include <vector>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
    ifstream myfile("wordlist.txt"); //opens file containing words to be combined
    if (myfile.is_open()) {

        int combinazioni;
        string sino;
        string sinoparola;
        string parola_aggiunta;

        cout << "How many words do you want to combine together? (from 2 to 12)" << endl;
        cin >> combinazioni;
        if (combinazioni > 2) {
            cout << "do you only want combinations made of " << combinazioni << " words or also made of lesser words? (s for yes or n for no)" << endl;
            cin >> sino;
        }
        cout << "do you want to add a custom word in front? (s for yes or n for no)" << endl;
        cin >> sinoparola;
        if (sinoparola == "s") {
            cout << "write" << endl;
            cin >> parola_aggiunta;
        }
        int dimesionearray;  // create an integer to store the array size for later
        string linea;        // create a string to temporary save the line
        vector<string> arraydiocan;   // create a dynamic array

        while (getline(myfile, linea))  // moves the line of text from the file to the string
        {
            arraydiocan.push_back(linea); // moves the string to the array while increasing it's size
        }
        myfile.close();


        ofstream myfile;   // creates an output file to write to
        myfile.open("wordlist_output.txt");

        cout << fixed;
        cout << setprecision(0);
        dimesionearray = arraydiocan.size();  // moves the size of the array to the variable

        if (combinazioni == 12)
        {
            goto dodici;
        }
        if (combinazioni == 11)
        {
            goto undici;
        }
        if (combinazioni == 10)
        {
            goto dieci;
        }
        if (combinazioni == 9)
        {
            goto nove;
        }
        if (combinazioni == 8)
        {
            goto otto;
        }
        if (combinazioni == 7)
        {
            goto sette;
        }
        if (combinazioni == 6)
        {
            goto sei;
        }
        if (combinazioni == 5)
        {
            goto cinque;
        }
        if (combinazioni == 4)
        {
            goto quattro;
        }
        if (combinazioni == 3)
        {
            goto tre;
        }
        if (combinazioni == 2)
        {
            goto due;
        }


    dodici:
        for (int i = 0; i < dimesionearray; i++) {  // it recursively combines each element of the array with all the elements contained in the array
            cout << "\r" << 100.0 / dimesionearray * i;
            for (int f = 0; f < dimesionearray; f++) {
                for (int g = 0; g < dimesionearray; g++) {
                    for (int h = 0; h < dimesionearray; h++) {
                        for (int j = 0; j < dimesionearray; j++) {
                            for (int k = 0; k < dimesionearray; k++) {
                                for (int l = 0; l < dimesionearray; l++) {
                                    for (int m = 0; m < dimesionearray; m++) {
                                        for (int n = 0; n < dimesionearray; n++) {
                                            for (int o = 0; o < dimesionearray; o++) {
                                                for (int p = 0; p < dimesionearray; p++) {
                                                    for (int q = 0; q < dimesionearray; q++) {
                                                        myfile << parola_aggiunta + arraydiocan[i] + arraydiocan[f] + arraydiocan[g] + arraydiocan[h] + arraydiocan[j] + arraydiocan[k] + arraydiocan[l] + arraydiocan[m] + arraydiocan[n] + arraydiocan[o] + arraydiocan[p] + arraydiocan[q] << endl;
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
        }
        cout << "\r";
        if (sino != "s") {
            goto fine;
        }
    undici:
        for (int i = 0; i < dimesionearray; i++) {  // it recursively combines each element of the array with all the elements contained in the array
            cout << "\r" << 100.0 / dimesionearray * i;
            for (int f = 0; f < dimesionearray; f++) {
                for (int g = 0; g < dimesionearray; g++) {
                    for (int h = 0; h < dimesionearray; h++) {
                        for (int j = 0; j < dimesionearray; j++) {
                            for (int k = 0; k < dimesionearray; k++) {
                                for (int l = 0; l < dimesionearray; l++) {
                                    for (int m = 0; m < dimesionearray; m++) {
                                        for (int n = 0; n < dimesionearray; n++) {
                                            for (int o = 0; o < dimesionearray; o++) {
                                                for (int p = 0; p < dimesionearray; p++) {
                                                    myfile << parola_aggiunta + arraydiocan[i] + arraydiocan[f] + arraydiocan[g] + arraydiocan[h] + arraydiocan[j] + arraydiocan[k] + arraydiocan[l] + arraydiocan[m] + arraydiocan[n] + arraydiocan[o] + arraydiocan[p] << endl;
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
        cout << "\r";
        if (sino != "s") {
            goto fine;
        }
    dieci:
        for (int i = 0; i < dimesionearray; i++) {  // it recursively combines each element of the array with all the elements contained in the array
            cout << "\r" << 100.0 / dimesionearray * i;
            for (int f = 0; f < dimesionearray; f++) {
                for (int g = 0; g < dimesionearray; g++) {
                    for (int h = 0; h < dimesionearray; h++) {
                        for (int j = 0; j < dimesionearray; j++) {
                            for (int k = 0; k < dimesionearray; k++) {
                                for (int l = 0; l < dimesionearray; l++) {
                                    for (int m = 0; m < dimesionearray; m++) {
                                        for (int n = 0; n < dimesionearray; n++) {
                                            for (int o = 0; o < dimesionearray; o++) {
                                                myfile << parola_aggiunta + arraydiocan[i] + arraydiocan[f] + arraydiocan[g] + arraydiocan[h] + arraydiocan[j] + arraydiocan[k] + arraydiocan[l] + arraydiocan[m] + arraydiocan[n] + arraydiocan[o] << endl;
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
        cout << "\r";
        if (sino != "s") {
            goto fine;
        }
    nove:
        for (int i = 0; i < dimesionearray; i++) {  // it recursively combines each element of the array with all the elements contained in the array
            cout << "\r" << 100.0 / dimesionearray * i;
            for (int f = 0; f < dimesionearray; f++) {
                for (int g = 0; g < dimesionearray; g++) {
                    for (int h = 0; h < dimesionearray; h++) {
                        for (int j = 0; j < dimesionearray; j++) {
                            for (int k = 0; k < dimesionearray; k++) {
                                for (int l = 0; l < dimesionearray; l++) {
                                    for (int m = 0; m < dimesionearray; m++) {
                                        for (int n = 0; n < dimesionearray; n++) {
                                            myfile << parola_aggiunta + arraydiocan[i] + arraydiocan[f] + arraydiocan[g] + arraydiocan[h] + arraydiocan[j] + arraydiocan[k] + arraydiocan[l] + arraydiocan[m] + arraydiocan[n] << endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << "\r";
        if (sino != "s") {
            goto fine;
        }
    otto:
        for (int i = 0; i < dimesionearray; i++) {  // it recursively combines each element of the array with all the elements contained in the array
            cout << "\r" << 100.0 / dimesionearray * i;
            for (int f = 0; f < dimesionearray; f++) {
                for (int g = 0; g < dimesionearray; g++) {
                    for (int h = 0; h < dimesionearray; h++) {
                        for (int j = 0; j < dimesionearray; j++) {
                            for (int k = 0; k < dimesionearray; k++) {
                                for (int l = 0; l < dimesionearray; l++) {
                                    for (int m = 0; m < dimesionearray; m++) {
                                        myfile << parola_aggiunta + arraydiocan[i] + arraydiocan[f] + arraydiocan[g] + arraydiocan[h] + arraydiocan[j] + arraydiocan[k] + arraydiocan[l] + arraydiocan[m] << endl;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << "\r";
        if (sino != "s") {
            goto fine;
        }
    sette:
        for (int i = 0; i < dimesionearray; i++) {  // it recursively combines each element of the array with all the elements contained in the array
            cout << "\r" << 100.0 / dimesionearray * i;
            for (int f = 0; f < dimesionearray; f++) {
                for (int g = 0; g < dimesionearray; g++) {
                    for (int h = 0; h < dimesionearray; h++) {
                        for (int j = 0; j < dimesionearray; j++) {
                            for (int k = 0; k < dimesionearray; k++) {
                                for (int l = 0; l < dimesionearray; l++) {
                                    myfile << parola_aggiunta + arraydiocan[i] + arraydiocan[f] + arraydiocan[g] + arraydiocan[h] + arraydiocan[j] + arraydiocan[k] + arraydiocan[l] << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << "\r";
        if (sino != "s") {
            goto fine;
        }
    sei:
        for (int i = 0; i < dimesionearray; i++) {  // it recursively combines each element of the array with all the elements contained in the array
            cout << "\r" << 100.0 / dimesionearray * i;
            for (int f = 0; f < dimesionearray; f++) {
                for (int g = 0; g < dimesionearray; g++) {
                    for (int h = 0; h < dimesionearray; h++) {
                        for (int j = 0; j < dimesionearray; j++) {
                            for (int k = 0; k < dimesionearray; k++) {
                                myfile << parola_aggiunta + arraydiocan[i] + arraydiocan[f] + arraydiocan[g] + arraydiocan[h] + arraydiocan[j] + arraydiocan[k] << endl;
                            }
                        }
                    }
                }
            }
        }
        cout << "\r";
        if (sino != "s") {
            goto fine;
        }
    cinque:
        for (int i = 0; i < dimesionearray; i++) {  // it recursively combines each element of the array with all the elements contained in the array
            cout << "\r" << 100.0 / dimesionearray * i;
            for (int f = 0; f < dimesionearray; f++) {
                for (int g = 0; g < dimesionearray; g++) {
                    for (int h = 0; h < dimesionearray; h++) {
                        for (int j = 0; j < dimesionearray; j++) {
                            myfile << parola_aggiunta + arraydiocan[i] + arraydiocan[f] + arraydiocan[g] + arraydiocan[h] + arraydiocan[j] << endl;
                        }
                    }
                }
            }
        }
        cout << "\r";
        if (sino != "s") {
            goto fine;
        }
    quattro:
        for (int i = 0; i < dimesionearray; i++) {  // it recursively combines each element of the array with all the elements contained in the array
            cout << "\r" << 100.0 / dimesionearray * i;
            for (int f = 0; f < dimesionearray; f++) {
                for (int g = 0; g < dimesionearray; g++) {
                    for (int h = 0; h < dimesionearray; h++) {
                        myfile << parola_aggiunta + arraydiocan[i] + arraydiocan[f] + arraydiocan[g] + arraydiocan[h] << endl;
                    }
                }
            }
        }
        cout << "\r";
        if (sino != "s") {
            goto fine;
        }
    tre:
        for (int i = 0; i < dimesionearray; i++) {  // it recursively combines each element of the array with all the elements contained in the array
            cout << "\r" << 100.0 / dimesionearray * i;
            for (int f = 0; f < dimesionearray; f++) {
                for (int g = 0; g < dimesionearray; g++) {
                    myfile << parola_aggiunta + arraydiocan[i] + arraydiocan[f] + arraydiocan[g] << endl;
                }
            }
        }
        cout << "\r";
        if (sino != "s") {
            goto fine;
        }
    due:
        for (int i = 0; i < dimesionearray; i++) {  // it recursively combines each element of the array with all the elements contained in the array
            cout << "\r" << 100.0 / dimesionearray * i;
            for (int f = 0; f < dimesionearray; f++) {
                myfile << parola_aggiunta + arraydiocan[i] + arraydiocan[f] << endl;
            }
        }
        cout << "\r";

    fine:
        myfile.close();
        cout << "\r" << 100;
    }
    return 0;
}
