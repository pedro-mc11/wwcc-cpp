/*
 * Interactive Story Game - [Extraterrestrial Escape]
 * Author: [Pedro Molina C]
 * Date: [6-15-2025]
 *
 * ==== Project Features ==== 
 * Variables (3+ types): line 60,98,125
 * If/else statements: lines 110-118
 * Switch statement: lines 152 & 252 
 * For Loop: line 115
 * While Loop: line 92
 * Function w/ return: line 59
 * Void function: line 83
 * Function w/ params: line 97
 * Vector usage: line 48
 * Enum: line 34
 * File Reading: lines 84-95
 * File Writing: lines 98-122   
 * Modern Feature (auto): line 115
 * Modern Feature (range-for): line 115
 * ==========================
 */

#include <iostream>
#include <string>
#include <fstream>
#include <chrono>   
#include <thread> 
#include <format>   
#include <vector>

using namespace std;

enum menuChoice { A = 65, B = 66, C = 67, D = 68 };


int menu(); 
void title();
void gameSummaryReport(int points, int level, vector<string> &Trophies);
int scene1(vector<string> &Trophies);
int scene2(vector<string> &Trophies);
int scene3(vector<string> &Trophies);




int main() {
    vector<string> Trophies;
    
    title();
    cout << "\nChoose options from the menu to make in-game decisions and escape without being seen!" << endl;
    cout << "For every level you survive you will be awarded 10 points.\n" << endl;

    this_thread::sleep_for(chrono::seconds(6));
    scene1(Trophies);
    
    return 0;
}
int menu() {
    char userChoice;
    


    do {
        cout << "\nChoose from the options below (A-D)" << endl;
        cout << " _________________" << endl;
        cout << "|                 |" << endl;
        cout << "| [A] [B] [C] [D] |" << endl;
        cout << "|_________________|\n" << endl;
        
        cin >> userChoice;
        userChoice = toupper(userChoice);

        if (userChoice < 'A' || userChoice > 'D') {
            cout << "\nInvalid input. Please enter A, B, C, or D." << endl;
        }
        
    }while(userChoice < 'A' || userChoice > 'D');

    return userChoice;
    
}
void title() {
   string fileName = "title.txt";
    ifstream inFile(fileName);

    if (!inFile.is_open()) {
        cerr << "Error: Couldn't open '" << fileName << "'" << endl;
    }

    string line;
    while (getline(inFile, line)) {
        cout << line << endl;   
    }
    cout << endl;
}
void gameSummaryReport(int points, int level, vector<string> &Trophies) {
    string fileName = "gameSummary.txt";
    ofstream outputFile(fileName);

    if (!outputFile.is_open()) {
        cerr << "Error: Could't open '" << fileName << "' for writing." << endl;
        return; 
    }

    outputFile << "====Game Summary=====" << endl;
    outputFile << "You scored: " << points << " points" << endl;
    outputFile << "You made it to scene: " << level << endl;
    
    if (Trophies.empty()) {
        outputFile << "Your trophies: ";
        outputFile << "NONE" << endl;
    } else {
        outputFile << "Your trophies: " << endl;
        for (auto trophy : Trophies) {
        outputFile << "-" << trophy << endl;
    }
    }
    
    outputFile << "=====================" << endl;
    outputFile.close();
    cout << "\nCheck out the Game Summary for a summary of the game!" << endl;
}
int scene3(vector<string> &Trophies) {
    int  points = 20;
    int level = 3;

    cout << "                                 _                                          _         _" << endl;
    cout << "                                | |                                        (_)       | |" << endl;
    cout << "  ___ ___  _ __   __ _ _ __ __ _| |_ ___     _   _  ___  _   _   ___      ___ _ __   | |" << endl;
    cout << " / __/ _ \\| '_ \\ / _` | '__/ _` | __/ __|   | | | |/ _ \\| | | |   \\ \\ /\\ / / | '_ \\  |_|" << endl;
    cout << "| (_| (_) | | | | (_| | | | (_| | |_\\__ \\   | |_| | (_) | |_| |    \\ V  V /| | | | |  _" << endl;
    cout << " \\___\\___/|_| |_|\\__, |_|  \\__,_|\\__|___/    \\__, |\\___/ \\__,_|     \\_/\\_/ |_|_| |_| (_)" << endl;
    cout << "                  __/ |                       __/ |" << endl;
    cout << "                 |___/                       |___/" << endl;
    
    gameSummaryReport(points,level, Trophies);
    return 0;
}

int scene2(vector<string> &Trophies) {
    int points = 10;
    int level = 2;
    string trophy;

    cout << "\nAfter moving past the Alien, you decide to do more exploring. You come a cross what looks to be a puzzle with 3 buttons. A green button, a yellow button, and a red button. Which do you do?\n" << endl;

    cout << "[A] Press the green button\n";
    cout << "[B] Press the yellow button\n";
    cout << "[C] Press the red button\n";
    cout << "[D] Try to befriend an alien\n";

    switch(menu()) {
        case A:
            cout << "            .-\"\"\"\"-.       .-\"\"\"\"-." << endl;
            cout << "           /        \\     /        \\" << endl;
            cout << "          /_        _\\   /_        _\\" << endl;
            cout << "         // \\      / \\\\ // \\      / \\\\" << endl;
            cout << "         |\\__\\    /__/| |\\__\\    /__/|" << endl;
            cout << "          \\    ||    /   \\    ||    /" << endl;
            cout << "           \\        /     \\        /" << endl;
            cout << "            \\  __  /       \\  __  /" << endl;
            cout << "    .-\"\"\"\"-. '.__.'.-\"\"\"\"-. '.__.'.-\"\"\"\"-." << endl;
            cout << "   /        \\ |  |/        \\ |  |/        \\" << endl;
            cout << "  /_        _\\|  /_        _\\|  /_        _\\" << endl;
            cout << " // \\      / \\\\ // \\      / \\\\ // \\      / \\\\" << endl;
            cout << " |\\__\\    /__/| |\\__\\    /__/| |\\__\\    /__/|" << endl;
            cout << "  \\    ||    /   \\    ||    /   \\    ||    /" << endl;
            cout << "   \\        /     \\        /     \\        /" << endl;
            cout << "    \\  __  /       \\  __  /       \\  __  /" << endl;
            cout << "     '.__.'         '.__.'         '.__.'" << endl;
            cout << "      |  |           |  |           |  |" << endl;
            cout << "      |  |           |  |           |  |" << endl;
            cout << "\nThe green button obvously summons all nearby aliens! They eat you, you lose.";
            gameSummaryReport(points,level, Trophies);
            break;
        case B:
            cout << "              _.-^^---....,,---_" << endl;
            cout << "           _--                  --_" << endl;
            cout << "          <          BOOM!         >" << endl;
            cout << "           \\._                   _./" << endl;
            cout << "              ```--. . , ; .--'''" << endl;
            cout << "                    | |   |" << endl;
            cout << "                 .-=||  | |=-." << endl;
            cout << "                 `-=#$%&%$#=-'" << endl;
            cout << "                    | ;  :|" << endl;
            cout << "           _____.,-#%&$@%#&#~,._____" << endl;
            cout << "\nThe yellow button was the self destruct button. You lose." << endl;
            gameSummaryReport(points,level, Trophies);
            break;
        case C:
            cout << "          _____________" << endl;    
            cout << "       __/_|_|_|_|_|_|_\\__" << endl;
            cout << "      /                   \\" << endl;
            cout << "     /  ____               \\" << endl;
            cout << "    (  |    |               )" << endl;
            cout << "     \\ | () |()  ()  ()  ()/" << endl;
            cout << "      \\|____|_____________/" << endl;
            cout << "        \\_______________/" << endl;
            cout << "          \\___________/" << endl;
            cout << "            \\______/" << endl;
            cout << "              \\  /" << endl;
            cout << "              (__)" << endl;
            cout << "              /  \\" << endl;
            cout << "             /    \\" << endl;
            cout << "            /      \\" << endl;
            cout << "           /        \\" << endl;
            cout << "          /          \\" << endl;
            cout << "         /            \\" << endl;
            cout << "        /       O      \\" << endl;
            cout << "       /       /|\\      \\" << endl;
            cout << "      /________/_\\_______\\" << endl;
            cout << "\nThe red button controled the tractor beam so when the aliens weren't paying attention you beamed yourself back to Earth!" << endl;
        
            cout << "TRACTOR BEAM BUTTON added to trophies." << endl;
            trophy = "TRACTOR BEAM BUTTON";
            Trophies.push_back(trophy);
            points += 10;
            this_thread::sleep_for(chrono::seconds(3));
            scene3(Trophies);
            break;
        case D:
            cout << "                         O ." << endl;
            cout << "                       _/|\\_-O" << endl;
            cout << "                      ___|_______" << endl;
            cout << "                     /     |     \\" << endl;
            cout << "                    /      |      \\" << endl;
            cout << "                   #################" << endl;
            cout << "                  /.   .   |        \\" << endl;
            cout << "                 /  \\_/( ) |         \\" << endl;
            cout << "                /   ( ) |  |          \\" << endl;
            cout << "               /  \\  |_/   |           \\" << endl;
            cout << "              /____\\/|____ |____________\\" << endl;
            cout << "                |    |               |" << endl;
            cout << "                |   / \\              |" << endl;
            cout << "                |  /   \\             | " << endl;
            cout << "                 _/    /_" << endl;
            cout << "\nYou somehow do befriend an Alien who plays pingpong with you but never lets you leave. You lose." << endl;
            gameSummaryReport(points,level, Trophies);
            break;
    }
    return 0;
}
int scene1(vector<string> &Trophies) {
    int points = 0;
    int level = 1;
    string trophy;
    cout << "You wake up on an operating table in an empty Alien Lab, and can hear someone or something making their way to you. What do you do?\n" << endl;

    cout << "[A] You play dead\n";
    cout << "[B] You hide under the operating table\n";
    cout << "[C] You fight the Alien coming your way\n";
    cout << "[D] You try to convince the alien to spare your life\n";
    switch (menu()) {
        case A:
            cout << "o   o" << endl;
            cout << " \\_/" << endl;
            cout << "( Oo)                    \\|/" << endl;
            cout << "(_=-)  .===O-  ~~Z~A~P~~ -O-" << endl;
            cout << "/   \\_/U'                /|\\" << endl;
            cout << "||  |_/" << endl;
            cout << "\\\\  |" << endl;
            cout << "{K ||" << endl;
            cout << " | dd" << endl;
            cout << " | ||" << endl;
            cout << " (__\\\\" << endl;
            cout << "\nThe alien shoots you with their raygun to confirm that you are dead. You lose." << endl;
            gameSummaryReport(points,level, Trophies);
            break;
        case B:
            
            cout << "   ______________________________" << endl;
            cout << "  /     |                        \\" << endl;
            cout << " /______|_________________________\\" << endl;
            cout << " [________________________________]" << endl;
            cout << "    \\ \\  / /    _____    \\ \\  / /  " << endl;
            cout << "     \\ \\/ /    | . . |    \\ \\/ /" << endl;
            cout << "      \\/ /     \\_ - _/     \\ \\/" << endl;
            cout << "      /o/\\      /| |\\      /\\o\\" << endl;
            cout << "     / /\\ \\    / |_| \\    / /\\ \\" << endl;
            cout << "    lc/  \\_\\    _| |_    /_/  \\_\\" << endl;
            cout << "\nYou grab a scalpel and hide under the table and wait until the alien leaves!" << endl;
            cout << "SCALPEL added to trophies." << endl;
            trophy = "SCALPEL";
            Trophies.push_back(trophy);
            points += 10;
            this_thread::sleep_for(chrono::seconds(3));
            scene2(Trophies);
            break;
        case C:
            cout << "               o          o" << endl;
            cout << "                \\        /" << endl;
            cout << "                 \\-\"\"\"\"-/" << endl;
            cout << "                /        \\" << endl;
            cout << "               /  _      _\\" << endl;
            cout << "         ,--.--._/ \\    / \\\\" << endl;
            cout << "--------/ ,  \\___)__\\  /__/|" << endl;
            cout << "          /  /____)  ||    /" << endl;
            cout << "          \\_/(____)       /" << endl;
            cout << "--------\\     (__)\\  __  /" << endl;
            cout << "         `-----\"   '.__.'" << endl;
            cout << "                    |  |" << endl;
            cout << "                    |  |" << endl;
            cout << "\nYou caught the alien off guard and managed to knock him out cold before he could blast you with his raygun! You punched him so hard his Alien Antennae fall off so you put them on to blend in." << endl;
            cout << "ALIEN ANTENNAE added to trophies." << endl;
            trophy = "ALIEN ANTENNAE ";
            Trophies.push_back(trophy);
            points += 10;
            this_thread::sleep_for(chrono::seconds(3));
            scene2(Trophies);
            break;
        case D:
            cout << "              O                    O" << endl;
            cout << "               \\                  /" << endl;
            cout << "                \\                /" << endl;
            cout << "                 \\.__\"\"\"\"\"\"\"\"__./    " << endl;
            cout << "                 /              \\" << endl;
            cout << "                / __          __ \\ " << endl;
            cout << "               / /  \\        /  \\ \\" << endl;
            cout << "               | \\___\\      /___/ |" << endl;
            cout << "                \\       ||       /" << endl;
            cout << "                 \\              /" << endl;
            cout << "                  \\    ____    /" << endl;
            cout << "                   '.________.'" << endl;
            cout << "   ________         |        |         ________" << endl;
            cout << "  /______  \\________|________|________/ _______\\" << endl;
            cout << " /|       \\ \\                        / /       |\\" << endl;
            cout << "(\\|____   / /                        \\ \\   ____|/)" << endl;
            cout << "(\\_____) \\_/                          \\_/ (_____/)" << endl;
            cout << "(\\_____)                                  (_____/)" << endl;
            cout << "(\\_____)                                  (_____/)" << endl;
            cout << " \\_____)                                   (_____/" << endl;
            cout << "  |           _           _                    |" << endl;
            cout << "  |          | |         | |                   |" << endl;
            cout << "  |          | |__  _   _| |__    ___          |" << endl;
            cout << "  |          | '_ \\| | | | '_ \\    __|         |" << endl;
            cout << "  |          | | | | |_| | | | |  |            |" << endl;
            cout << "  |          |_| |_|\\__,_|_| |_|  *            |" << endl;
            cout << "  |                                            |" << endl;
            cout << "  |                                            |" << endl;
            cout << "  |                                            |" << endl;
            cout << "  |                                            |" << endl;
            cout << "  |____________________________________________|" << endl;
            cout << "           /       )          (       \\" << endl;
            cout << "          /       /            \\       \\" << endl;
            cout << "         / / / /\\ \\            / /\\ \\ \\ \\" << endl;
            cout << "        ( ( ( ( (  )          (  ) ) ) ) )" << endl;
            cout << "        '_'_'_'_'(_)          (_)'_'_'_'_'" << endl;        
            cout << "\nThe Alien doesn't understand english so...\n" << endl;

            this_thread::sleep_for(chrono::seconds(5));

            cout << "o   o" << endl;
            cout << " \\_/" << endl;
            cout << "( Oo)                    \\|/" << endl;
            cout << "(_=-)  .===O-  ~~Z~A~P~~ -O-" << endl;
            cout << "/   \\_/U'                /|\\" << endl;
            cout << "||  |_/" << endl;
            cout << "\\\\  |" << endl;
            cout << "{K ||" << endl;
            cout << " | dd" << endl;
            cout << " | ||" << endl;
            cout << " (__\\\\" << endl;
            cout << "\nThe alien shoots you with their raygun. You lose." << endl;
            gameSummaryReport(points,level, Trophies);
            break;
    }
    return 0;
}
