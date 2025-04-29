#include <iostream>
#include <cstring>
#include <windows.h> // Include this for Sleep()
using namespace std;

class record
{
    int clas, roll;
    char name[20];
    char contact[15];

public:
    record()
    {
        clas = 0;
        roll = 0;
        strcpy(name, "NO data");
        strcpy(contact, "NO data");
    }

    void datainput()
    {
        cout << endl;
        cout << "Roll no : ";
        cin >> roll;
        cout << "Class   : ";
        cin >> clas;
        cout << "Name    : ";
        cin.ignore();
        cin.getline(name, 20);
        cout << "Contact : ";
        cin.getline(contact, 15);
    }

    void dataoutput()
    {
        cout << endl
             << "\tRoll no : " << roll << endl
             << "\tClass   : " << clas << endl
             << "\tName    : " << name << endl
             << "\tContact : " << contact << endl;
    }

    void recordbyclass(int c)
    {
        if (clas == c)
        {
            dataoutput();
        }
    }

    void recordbyroll(int r)
    {
        if (roll == r)
        {
            dataoutput();
        }
    }

    void recordbyContact(const char *c)
    {
        if (strcmp(contact, c) == 0)
        {
            dataoutput();
        }
    }

    void recordbyclass_roll(int c, int r)
    {
        if (clas == c && roll == r)
        {
            dataoutput();
        }
    }

    void deletedata()
    {
        roll = 0;
        clas = 0;
        strcpy(name, "NO data");
        strcpy(contact, "NO data");
    }

    bool cheakdata()
    {
        return (roll == 0 && clas == 0 && strcmp(name, "NO data") == 0 && strcmp(contact, "NO data") == 0);
    }
    
    ~record()
    {
    	system("cls");
    	cout<<"Deleting all data"<<endl;
    	Sleep(700);    	
    	for(int i=0;i<5;i++)
    	{
    		Sleep(500);
    		cout<<"\t."<<endl;
		}
		cout<<endl<<"All data deleted and exiting the program";
	}
};

int main()
{
    int n, input, i;
    cout << "Enter total student: ";
    cin >> n;
    record *s = new record[n];

    while (true)
    {
        cout << endl
             << "1) Add all data *if there is data of anyone, it will be replaced*" << endl
             << "2) Add data of one" << endl
             << "3) Print all data" << endl
             << "4) Print specific data" << endl
             << "5) Delete all data" << endl
             << "6) Delete data of one" << endl
             << "7) Edit data" << endl
             << "8) Edit specific data" << endl
             << "9) Exit program" << endl
             << endl;
        cin >> input;

        switch (input)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                s[i].datainput();
            }
            system("cls"); // Clear screen after inputting data
            break;

        case 2:
            i = 0;
            while (true)
            {
                if (s[i].cheakdata())
                {
                    s[i].datainput();
                    system("cls"); // Clear screen after inputting data
                    goto x;
                }
                i++;
                if (i == n)
                    goto y;
            }
        y:
            cout << "All student data already added" << endl
                 << endl;
            Sleep(3000); // Pause for 3 seconds
            system("cls");
        x:
            break;

        case 3:
            for (i = 0; i < n; i++)
            {
                s[i].dataoutput();
            }
            break;

        case 4:
            cout << "1) BY class" << endl
                 << "2) BY roll no" << endl
                 << "3) BY class and roll" << endl
                 << "4) BY contact" << endl;
            cin >> input;
            int clas, roll;
            char contact[15];
            switch (input)
            {
            case 1:
                cout << "Enter class: ";
                cin >> clas;
                for (i = 0; i < n; i++)
                {
                    s[i].recordbyclass(clas);
                }
                Sleep(3000); // Pause for 3 seconds
                system("cls");
                break;

            case 2:
                cout << "Enter roll: ";
                cin >> roll;
                for (i = 0; i < n; i++)
                {
                    s[i].recordbyroll(roll);
                }
                Sleep(3000); // Pause for 3 seconds
                system("cls");
                break;

            case 3:
                cout << "Enter class: ";
                cin >> clas;
                cout << "Enter roll: ";
                cin >> roll;
                for (i = 0; i < n; i++)
                {
                    s[i].recordbyclass_roll(clas, roll);
                }
                Sleep(3000); // Pause for 3 seconds
                system("cls");
                break;

            case 4:
                cout << "Enter contact: ";
                cin >> contact;
                for (i = 0; i < n; i++)
                {
                    s[i].recordbyContact(contact);
                }
                Sleep(3000); // Pause for 3 seconds
                system("cls");
                break;
            default:
                break;
            }
            break;

        case 5:
            for (i = 0; i < n; i++)
            {
                cout << i + 1 << ")" << endl;
                s[i].dataoutput();
                s[i].deletedata();
                cout << "...Deleting..." << endl;
            }
            Sleep(3000); // Pause for 3 seconds
            system("cls");
            break;

        case 6:
            for (i = 0; i < n; i++)
            {
                cout << i + 1 << ")" << endl;
                s[i].dataoutput();
            }
            cout << "Enter which data do you want to delete: ";
            cin >> input;
            s[input - 1].deletedata();
            cout << "...Deleting..." << endl;
            Sleep(3000); // Pause for 3 seconds
            system("cls");
            break;

        case 7:
            for (i = 0; i < n; i++)
            {
                cout << i + 1 << ")" << endl;
                s[i].dataoutput();
            }
            cout << "Enter which data do you want to edit: ";
            cin >> input;
            s[input - 1].dataoutput();
            s[input - 1].datainput();
            system("cls"); // Clear screen after editing
            break;

        case 8:
            cout << "1) BY class" << endl
                 << "2) BY roll no" << endl
                 << "3) BY class and roll" << endl
                 << "4) BY contact" << endl;
            cin >> input;
            switch (input)
            {
            case 1:
                cout << "Enter class: ";
                cin >> clas;
                for (i = 0; i < n; i++)
                {
                    cout << i + 1 << ")" << endl;
                    s[i].recordbyclass(clas);
                    cout << endl
                         << endl;
                }
                break;

            case 2:
                cout << "Enter roll: ";
                cin >> roll;
                for (i = 0; i < n; i++)
                {
                    cout << i + 1 << ")" << endl;
                    s[i].recordbyroll(roll);
                }
                break;

            case 3:
                cout << "Enter class: ";
                cin >> clas;
                cout << "Enter roll: ";
                cin >> roll;
                for (i = 0; i < n; i++)
                {
                    cout << i + 1 << ")" << endl;
                    s[i].recordbyclass_roll(clas, roll);
                }
                break;

            case 4:
                cout << "Enter contact: ";
                cin >> contact;
                for (i = 0; i < n; i++)
                {
                    cout << i + 1 << ")" << endl;
                    s[i].recordbyContact(contact);
                }
                break;
            default:
                break;
            }
            cout << "Enter which data do you want to edit: ";
            cin >> input;
            s[input - 1].dataoutput();
            s[input - 1].datainput();
            break;

        case 9:
            goto z;
            break;

        default:
            break;
        }
    }
z:
	delete s;
    return 0;
}

