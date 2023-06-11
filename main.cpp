#include <iostream>
#include <conio.h>

using namespace std;

int CalculateScore(char Answer, int Score)
{

    if (Answer == 'a' || Answer == 'A')
    {
        Score = Score + 1;
    }
    else if (Answer == 'b' || Answer == 'B')
    {
        Score = Score + 0;
    }
    else if (Answer == 'c' || Answer == 'C')
    {
        Score = Score - 1;
    }
    else
    {
        cout << "Invalid Answer" << endl;
        system("pause");
    }

    return Score;
}

int main()
{
    system("cls"); // This will clear the screen (works on windows)

    int Score = 0; // This variable will keep track of the user score

    char Answer; // This variable will store the user's answer

    // This is the welcome message and instructions
    cout << "Welcome !" << endl;
    cout << "This app will show you your carbon footprint" << endl;

    cout << "\nIn order to calculate your carbon footprint, we will ask you a few questions \nPlease answer them honestly as this will decide your carbon footprint" << endl;
    cout << "\nIf you are ready, press any key to continue" << endl;
    getch();

    system("cls");

    cout << "1.	How do you travel to nearby areas ? \n a.	Walk / Cycle\n b.	Bus\n c.	Car / Bike" << endl;
    cout << ">>";
    cin >> Answer;
    Score = CalculateScore(Answer, Score);

    system("cls");

    cout << "2.	How many trees have you planted till now ?\n a.	10\n b.	None\n c.	Cut Trees " << endl;
    cout << ">>";
    cin >> Answer;
    Score = CalculateScore(Answer, Score);

    system("cls");

    cout << " 3.	How often do you use public transportation instead of private vehicles?\n a. Frequently\n b. Occasionally\n c. Rarely or never" << endl;
    cout << ">>";
    cin >> Answer;
    Score = CalculateScore(Answer, Score);

    system("cls");

    cout << "4.	How often do you participate in community clean-up initiatives?\n a. Regularly\n b. Occasionally\n c. Rarely or never" << endl;
    cout << ">>";
    cin >> Answer;
    Score = CalculateScore(Answer, Score);

    system("cls");

    cout << "5.	Do you use energy-efficient appliances and light bulbs in your home?\n a. Yes, always\n b. Sometimes\n c. No, never" << endl;
    cout << ">>";
    cin >> Answer;

    Score = CalculateScore(Answer, Score);

    system("cls");

    cout << "6.	How often do you reduce, reuse, or recycle items in your daily life?\n a. Frequently\n b. Occasionally\n c. Rarely or never" << endl;
    cout << ">>";
    cin >> Answer;
    Score = CalculateScore(Answer, Score);

    system("cls");

    cout << "7.	How much water do you consume on a daily basis?\n a. Conserving and using minimal water\n b. Moderate water consumption\n c. High water consumption" << endl;
    cout << ">>";
    cin >> Answer;
    Score = CalculateScore(Answer, Score);

    system("cls");

    cout << "8.	How often do you purchase locally sourced or organic products?\n a. Frequently\n b. Occasionally\n c. Rarely or never" << endl;
    cout << ">>";
    cin >> Answer;
    Score = CalculateScore(Answer, Score);

    system("cls");

    cout << "9.	How often do you engage in activities that help conserve energy at home (e.g., turning off lights when not in use, using energy-saving settings on devices)?\n a. Always\n b. Sometimes\n c. Rarely or never" << endl;
    cout << ">>";
    cin >> Answer;
    Score = CalculateScore(Answer, Score);

    system("cls");

    cout << "10.	How often do you consciously avoid single-use plastic items (e.g., plastic bags, straws, water bottles)?\n a. Always\n b. Sometimes\n c. Rarely or never" << endl;
    cout << ">>";
    cin >> Answer;
    Score = CalculateScore(Answer, Score);

    system("cls");

    cout << "Your score is " << Score << endl;

    cout << "Press any key to view your footprints" << endl;
    getch();

    if (Score >= 7)
    {
        system(".\\silver_footprints.png");
    }

    else if (Score < 7)
    {
        system(".\\black_footprints.png");
    }

    return 0;
}