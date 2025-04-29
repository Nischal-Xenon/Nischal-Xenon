#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int answer, answerinput;
int q1, q2, ans[4], j, mark = 0;
char symbol, a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o'};

void randomAnswer(int correctAnswer, int range);
void add();
void subtract();
void multiply();

int main() {
    srand(time(0));
    cout << "MCQ" << endl << "Choose the correct answer:\t\t[15*1=15]" << endl;
    for (int i = 0; i < 15; i++) 
	{
        switch (i) 
		{
            case 0:	case 1:	case 2:	case 3:	case 4:	
                add();
                symbol = '+';
                break;
            case 5:	case 6:	case 7:	case 8:	case 9:	
                subtract();
                symbol = '-';
                break;
            case 10: case 11: case 12: case 13: case 14:	
                multiply();
                symbol = '*';
                break;
            default:
                break;
        }
        cout << a[i] << ". " << q1 << symbol << q2 << " = " << endl;
        answer = ans[0];
        random_shuffle(ans, ans + 4);
        j = 1;
        for (int k = 0; k < 4; k++) {
            cout << "\t" << j << ". " << ans[k] << endl;
            j++;
        }
        cout<<"Enter answer:  ";
        x:
        cin >> answerinput;
        if (answerinput < 5 && answerinput > 0) 
		{
            if (answer == ans[answerinput - 1])
                mark++;
            cout << endl << endl;
        } else {
            cout << "Please enter value between 1-4: ";
            goto x;
        }
    }
    cout << "You got:" << endl
         << "\t\t\t  ****" << endl;
         if(mark<=10)
			cout<< "\t\t\t * " << mark << "  *" << endl;
         else
        	cout<< "\t\t\t * " << mark << " *" << endl;
    	cout<< "\t\t\t*------*" << endl
         << "\t\t\t * " << 15 << " *" << endl
         << "\t\t\t  ****" << endl;
    return 0;
}

void randomAnswer(int correctAnswer, int range) {
    for (int i = 1; i < 4; i++) {
        int randomAnswer;
        do {
            randomAnswer = rand() % range;
        } while (randomAnswer == correctAnswer);
        ans[i] = randomAnswer;
    }
}

void add() {
    q1 = rand() % 500;
    q2 = rand() % 500;
    ans[0] = q1 + q2;
    randomAnswer(ans[0], 1000);
}

void subtract() {
    q1 = rand() % 500;
    q2 = rand() % 500;
    ans[0] = q1 - q2;
    randomAnswer(ans[0], 500);
}

void multiply() {
    q1 = rand() % 30;
    q2 = rand() % 30;
    ans[0] = q1 * q2;
    randomAnswer(ans[0], 900); 
}

