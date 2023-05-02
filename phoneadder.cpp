/* #include <iostream>
using namespace std;

class Phone{ 
    public: 
        string name; 
        string company;  
        int modelNum; 
        string modelName;
        Phone(string aName, string aCompany, int aModelNum, string aModelName){
            name = aName; 
            company = aCompany; 
            modelNum = aModelNum; 
            modelName = aModelName;
        }


};



int main()
{
    
    string a;
    string b; 
    int c; 
    string modelName;
    char e;
    
    cout << "What phone is that?"<< endl;
    cin >> modelName; 
    cout << "What is the name of the phone?" << endl; 
    cin >> a;
    cout << "What is the Company?" << endl;
    cin >> b; 
    
    cout << "What is the model number?" << endl; 
    cin >> c; 
    Phone phoned(a, b, c, phoned);
    cout << "Okay, we saved your phone. What do you want to know about it? Press c for company, m for model and n for model number." << endl; 
    cin >> e; 
    
    
    if(e == 'n'){
        cout << phoned.modelName; 
    }



    
    
    
    
    return 0;
}
*/ 
/*
#include <iostream>
using namespace std;

class Phone {
public:
    string name;
    string company;
    int modelNum;
    string modelName;

    Phone(string aName, string aCompany, int aModelNum, string aModelName) {
        name = aName;
        company = aCompany;
        modelNum = aModelNum;
        modelName = aModelName;
    }
};

int main() {
    string a;
    string b;
    int c;
    string modelName;
    char e;

    cout << "What phone is that?" << endl;
    cin >> modelName;

    cout << "What is the name of the phone?" << endl;
    cin >> a;

    cout << "What is the company?" << endl;
    cin >> b;

    cout << "What is the model number?" << endl;
    cin >> c;

    Phone phoned(a, b, c, modelName);

    cout << "Okay, we saved your phone. What do you want to know about it?" << endl;
    cout << "Press c for company, m for model, and n for model name." << endl;
    cin >> e;

    if (e == 'c') {
        cout << phoned.company;
    }
    else if (e == 'm') {
        cout << phoned.modelNum;
    }
    else if (e == 'n') {
        cout << phoned.modelName;
    }

    return 0;
}
*/ 

/*
#include <iostream>
using namespace std;

class Phone {
public:
    string name;
    string company;
    int modelNum;
    string modelName;

    Phone(string aName, string aCompany, int aModelNum, string aModelName) {
        name = aName;
        company = aCompany;
        modelNum = aModelNum;
        modelName = aModelName;
    }

    void printInfo(char choice) {
        if (choice == 'c') {
            cout << "Company: " << company << endl;
        } else if (choice == 'm') {
            cout << "Model: " << modelNum << endl;
        } else if (choice == 'n') {
            cout << "Model Name: " << modelName << endl;
        }
    }
};

int main() {
    char continueChoice = 'y';
    while (continueChoice == 'y') {
        string name;
        string company;
        int modelNum;
        string modelName;
        char choice;

        cout << "Enter phone name: ";
        cin >> name;

        cout << "Enter phone company: ";
        cin >> company;

        cout << "Enter phone model number: ";
        cin >> modelNum;

        cout << "Enter phone model name: ";
        cin >> modelName;

        Phone phoned(name, company, modelNum, modelName);

        cout << "Phone added! What do you want to know about it?" << endl;
        cout << "Press c for company, m for model, and n for model name." << endl;
        cin >> choice;

        phoned.printInfo(choice);

        cout << "Do you want to continue? (y/n): ";
        cin >> continueChoice;
    }

    return 0;
}
*/ 
#include <iostream>
#include <vector>
using namespace std;

class Phone {
public:
    string name;
    string company;
    int modelNum;
    string modelName;

    Phone(string aName, string aCompany, int aModelNum, string aModelName) {
        name = aName;
        company = aCompany;
        modelNum = aModelNum;
        modelName = aModelName;
    }

    void printInfo(char choice) {
        if (choice == 'c') {
            cout << "Company: " << company << endl;
        } else if (choice == 'm') {
            cout << "Model: " << modelNum << endl;
        } else if (choice == 'n') {
            cout << "Model Name: " << modelName << endl;
        }
    }
};

int main() {
    vector<Phone> phones;
    char continueChoice = 'y';
    while (continueChoice == 'y') {
        string name;
        string company;
        int modelNum;
        string modelName;
        char choice;

        cout << "Enter phone name: ";
        cin >> name;

        cout << "Enter phone company: ";
        cin >> company;

        cout << "Enter phone model number: ";
        cin >> modelNum;

        cout << "Enter phone model name: ";
        cin >> modelName;

        Phone phoned(name, company, modelNum, modelName);
        phones.push_back(phoned);

        bool validChoice = false;
        do {
            cout << "Phone added! What do you want to know about it?" << endl;
            cout << "Press c for company, m for model, and n for model name." << endl;
            cin >> choice;

            if (choice == 'c' || choice == 'm' || choice == 'n') {
                validChoice = true;
            } else {
                cout << "Invalid choice. Please try again." << endl;
            }
        } while (!validChoice);

        for (int i = 0; i < phones.size(); i++) {
            cout << "Phone " << i+1 << ":" << endl;
            phones[i].printInfo(choice);
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> continueChoice;
    }

    return 0;
}
