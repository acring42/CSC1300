/*********************************************************************
 * Title:   Program1.cpp                                             *
 * Author:  Austin Ring                                              *
 * Date:    September 21, 2020                                       *
 * Purpose: Program that asks questions to find out your personality *
 *********************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char response;
    
    do {
        // Starting values for the following traits in order of appearance:
        // introvert, extrovert, positive person, negative person, silly, serious, spontaneous, planner
        // Resets values before each test
        int intr = 0, extr = 0, pos = 0, neg = 0, silly = 0, serious = 0, spont = 0, plan = 0;
        char choice;
        
        // Personality Test banner
        cout << endl << endl;
        cout << setw(50) << setfill('-') << "" << endl;
        cout << setw(33) << setfill(' ') << "Personality Test" << endl;
        cout << setw(50) << setfill('-') << "" << endl;
        
        cout << "\nAnswer the following twelve questions to find\n";
        cout << "out your personality traits." << endl;
        cout << "\nPlease answer with the lowercase letter that\n";
        cout << "corresponds to your answers." << endl;

        // format of the Questions and Answers
        cout << "\nQuestion 1: How easy is it for you to make friends? " << endl;
        cout << setw(20) << setfill(' ') << "\nA. It takes a while for me to warm up to people." << endl;
        cout << setw(20) << setfill(' ') << "B. I'm too antisocial to make friends." << endl;
        cout << setw(20) << setfill(' ') << "C. I can connect well with others, so it is pretty easy to make friends." << endl;
        cout << setw(20) << setfill(' ') << "D. Almost every time I meet someone, we hit it off immediately and become great friends." << endl;
        cin >> choice;

        // this "while" loop valibates that the user input is a,b,c,or d.
        while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd') {
            cout << "\nInvalid Answer! Please try again.\n" << endl;
            cin >> choice;
        }
        
        /* User input either adds 1 or 3 to the personality trait's total points, which will be tallied up at the program.
           The reason for 3 points instead of 2 is avoid a tie between 2 personalities. 
           To balance this out, the 3 point option heavily leans toward that particular personality trait.
           A similar switch statement is used throughout */
         switch (choice) {
            case 'a': intr = ++intr;
                      break;
                    
            case 'b': intr += 3;
                      break;

            case 'c': extr = ++extr;
                      break;
                    
            case 'd': extr += 3;
                      break;
        }
        
        cout << "\nQuestion 2: You make a bad grade on a test. What is your reaction?" << endl;
        cout << setw(20) << setfill(' ') << "\nA. Move on and hope to do well on the next one." << endl;
        cout << setw(20) << setfill(' ') << "B. Understand you can do better and study hard for the re-take." << endl;
        cout << setw(20) << setfill(' ') << "C. Get mad at yourself for the next week." << endl;
        cout << setw(20) << setfill(' ') << "D. Yell at the teacher for giving you a bad grade." << endl;
        cin >> choice;

        while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd') {
            cout << "\nInvalid Answer! Please try again.\n" << endl;
            cin >> choice;
        }
        
        switch (choice) {
            case 'a': pos = ++pos;
                      break;
                    
            case 'b': pos += 3;
                      break;

            case 'c': neg = ++neg;
                      break;
                    
            case 'd': neg += 3;
                      break;
        }
        

        cout << "\nQuestion 3: When you hear an offensive joke, what is your response?" << endl;
        cout << setw(20) << setfill(' ') << "\nA. Chuckle a little bit." << endl;
        cout << setw(20) << setfill(' ') << "B. Laugh hysterically." << endl;
        cout << setw(20) << setfill(' ') << "C. Wince and let the person know they went too far." << endl;
        cout << setw(20) << setfill(' ') << "D. Yell at the person for being a terrible person." << endl;
        cin >> choice;

        while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd') {
            cout << "\nInvalid Answer! Please try again.\n" << endl;
            cin >> choice;
        }
        
        switch (choice) {
            case 'a': silly = ++silly;
                      break;
                
            case 'b': silly += 3;
                      break;

            case 'c': serious = ++serious;
                      break;
                
            case 'd': serious += 3;
                      break;
        }  
        

        cout << "\nQuestion 4: A friend calls you and asks you to meet them at their house, what do you do?" << endl;
        cout << setw(20) << setfill(' ') << "\nA. Say yes, and then ask questions once you get there." << endl;
        cout << setw(20) << setfill(' ') << "B. Say yes, and just go with the flow during the night." << endl;
        cout << setw(20) << setfill(' ') << "C. Ask them a few questions before deciding on going or not." << endl;
        cout << setw(20) << setfill(' ') << "D. Say no because you weren't given any heads up." << endl;
        cin >> choice;

        while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd') {
            cout << "\nInvalid Answer! Please try again.\n" << endl;
            cin >> choice;
        }
        
        switch (choice) {
            case 'a': spont = ++spont;
                      break;
                
            case 'b': spont += 3;
                      break;

            case 'c': plan = ++plan;
                      break;
                
            case 'd': plan += 3;
                      break;
        }

        cout << "\nQuestion 5: Someone from school invites you to a huge party, what do you do?" << endl;
        cout << setw(20) << setfill(' ') << "\nA. Kindly decline." << endl;
        cout << setw(20) << setfill(' ') << "B. Don't say anything and walk away." << endl;
        cout << setw(20) << setfill(' ') << "C. Accept the offer and go." << endl;
        cout << setw(20) << setfill(' ') << "D. Show up to the party with all your friends." << endl;
        cin >> choice;

        while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd') {
            cout << "\nInvalid Answer! Please try again.\n" << endl;
            cin >> choice;
        }
        
        switch (choice) {
            case 'a': intr = ++intr;
                      break;
                
            case 'b': intr += 3;
                      break;

            case 'c': extr = ++extr;
                      break;
                
            case 'd': extr += 3;
                      break;
        }

        cout << "\nQuestion 6: Is the glass half full or half empty?" << endl;
        cout << setw(20) << setfill(' ') << "\nA. Half full." << endl;
        cout << setw(20) << setfill(' ') << "B. At least I have something to drink. I'm so thirsty." << endl;
        cout << setw(10) << setfill(' ') << "C. Half empty." << endl;
        cout << setw(20) << setfill(' ') << "D. There isn't enough to drink, so it don't matter." << endl;
        cin >> choice;

        while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd') {
            cout << "\nInvalid Answer! Please try again.\n" << endl;
            cin >> choice;
        }
        
        switch (choice) {
            case 'a': pos = ++pos;
                      break;
                
            case 'b': pos += 3;
                      break;

            case 'c': neg = ++neg;
                      break;
                
            case 'd': neg += 3;
                      break;
        }

        cout << "\nQuestion 7: Someone starts tickling you, how do you react?" << endl;
        cout << setw(20) << setfill(' ') << "\nA. Laugh." << endl;
        cout << setw(20) << setfill(' ') << "B. Laugh really loud and tickle back." << endl;
        cout << setw(20) << setfill(' ') << "C. Tell them to stop." << endl;
        cout << setw(10) << setfill(' ') << "D. Fight them." << endl;
        cin >> choice;

        while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd') {
            cout << "\nInvalid Answer! Please try again.\n" << endl;
            cin >> choice;
        }
        
        switch (choice) {
            case 'a': silly = ++silly;
                      break;
                
            case 'b': silly += 3;
                      break;

            case 'c': serious = ++serious;
                      break;
                
            case 'd': serious += 3;
                      break;
        }

        cout << "\nQuestion 8: You are walking in a mall, and you see the nicest pair of shoes you've ever seen? What do you do?" << endl;
        cout << setw(20) << setfill(' ') << "\nA. Go inside a buy them." << endl;
        cout << setw(20) << setfill(' ') << "B. Go inside to buy those shoes and buy another pair while you are there." << endl;
        cout << setw(20) << setfill(' ') << "C. Go inside and check to see if they are on sale, then review your budget." << endl;
        cout << setw(20) << setfill(' ') << "D. Just keep walking and pretend to not see them just so to avoid spending money." << endl;
        cin >> choice;

        while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd') {
            cout << "\nInvalid Answer! Please try again.\n" << endl;
            cin >> choice;
        }
        
        switch (choice) {
            case 'a': spont = ++spont;
                      break;
                
            case 'b': spont += 3;
                      break;

            case 'c': plan = ++plan;
                      break;
                
            case 'd': plan += 3;
                      break;
        }

        cout << "\nQuestion 9: You are lost at school and you can't find your class. How do you find your class?" << endl;
        cout << setw(20) << setfill(' ') << "\nA. Ask a teacher for directions." << endl;
        cout << setw(20) << setfill(' ') << "B. Walk around the school until you find your class." << endl;
        cout << setw(20) << setfill(' ') << "C. Ask another student for directions." << endl;
        cout << setw(20) << setfill(' ') << "D. Walk into a random class and ask if you are in the right class." << endl;
        cin >> choice;

        while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd') {
            cout << "\nInvalid Answer! Please try again.\n" << endl;
            cin >> choice;
        }
        
        switch (choice) {
            case 'a': intr = ++intr;
                      break;
                
            case 'b': intr += 3;
                      break;

            case 'c': extr = ++extr;
                      break;
                
            case 'd': extr += 3;
                      break;
        }

        cout << "\nQuestion 10: You look at yourself in the mirror, what do you think?" << endl;
        cout << setw(20) << setfill(' ') << "\nA. I'm looking pretty good." << endl;
        cout << setw(20) << setfill(' ') << "B. Dang, I'm looking fantastic today!" << endl;
        cout << setw(20) << setfill(' ') << "C. I look ugly today." << endl;
        cout << setw(20) << setfill(' ') << "D. Eww, I look awful. I wanna puke!" << endl;
        cin >> choice;

        while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd') {
            cout << "\nInvalid Answer! Please try again.\n" << endl;
            cin >> choice;
        }
        
        switch (choice) {
            case 'a': pos = ++pos;
                      break;
                
            case 'b': pos += 3;
                      break;

            case 'c': neg = ++neg;
                      break;
                
            case 'd': neg += 3;
                      break;
        }

        cout << "\nQuestion 11: How do you act when you meet someone?" << endl;
        cout << setw(20) << setfill(' ') << "\nA. Tell them a quick joke." << endl;
        cout << setw(20) << setfill(' ') << "B. Play a joke on them." << endl;
        cout << setw(20) << setfill(' ') << "C. Just say your name with a straight face." << endl;
        cout << setw(20) << setfill(' ') << "D. Tell them to not waste your time." << endl;
        cin >> choice;

        while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd') {
            cout << "\nInvalid Answer! Please try again.\n" << endl;
            cin >> choice;
        }
        
        switch (choice) {
            case 'a': silly = ++silly;
                      break;
                
            case 'b': silly += 3;
                      break;

            case 'c': serious = ++serious;
                      break;
                
            case 'd': serious += 3;
                      break;
        }

        cout << "\nQuestion 12: When you are going to a restaurant, when do you decide on your order?" << endl;
        cout << setw(20) << setfill(' ') << "\nA. I choose my order after I look at the menu." << endl;
        cout << setw(20) << setfill(' ') << "B. I choose whatever the special of the day is." << endl;
        cout << setw(20) << setfill(' ') << "C. I think about my order on the drive there." << endl;
        cout << setw(20) << setfill(' ') << "D. I look up the menu online and choose my entire order before leaving my house." << endl;
        cin >> choice;

        while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd') {
            cout << "\nInvalid Answer! Please try again.\n" << endl;
            cin >> choice;
        }
        
        switch (choice) {
            case 'a': spont = ++spont;
                      break;
                
            case 'b': spont += 3;
                      break;

            case 'c': plan = ++plan;
                      break;
                
            case 'd': plan += 3;
                      break; 
        }

        // Results banner
        cout << setw(50) << setfill('-') << "" << endl;
        cout << setw(27) << setfill(' ') << "Results" << endl; 
        cout << setw(50) << setfill('-') << "" << endl;
        
        // these if else statements output whichever trait had the highest points
        if (intr > extr) 
            cout << "\nYou are an Introvert!" << endl;
        else 
            cout << "\nYou are an Extrovert!" << endl;

        if (pos > neg) 
            cout << "You are a positive person! :)" << endl;
        else
            cout << "You are a negative person! :(" << endl;

        if (silly > serious)
            cout << "You are a silly person!" << endl;
        else
            cout << "You are a serious person!" << endl;

        if (spont > plan)
            cout << "You are a spontaneous person!" << endl;
        else
            cout << "You are a planner!" << endl;
        
        // user inputs decides if the test will repeat
        cout << "Would you like to take the test again? (y/n)" <<endl;
        cin >> response;
        
    }while (response == 'y');
    
    return 0;
}