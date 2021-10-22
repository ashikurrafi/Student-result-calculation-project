#include<iostream>
#include<string>
#include<fstream>
#include<Windows.h>

using namespace std;

struct student_database
{
    string name = "\0";
    int roll = 0;
    double marks_of_bangla_1st_paper = 0;
    double marks_of_bangla_2nd_paper = 0;
    double marks_of_english_1st_paper = 0;
    double marks_of_english_2nd_paper = 0;
    double marks_of_physics_1st_paper = 0;
    double marks_of_physics_2nd_paper = 0;
    double marks_of_chemistry_1st_paper = 0;
    double marks_of_chemistry_2nd_paper = 0;
    double marks_of_math_1st_paper = 0;
    double marks_of_math_2nd_paper = 0;
    double marks_of_biology_1st_paper = 0;
    double marks_of_biology_2nd_paper = 0;
    double marks_of_ICT = 0;
    int optional_subject = 0;
    double total_gpa = 0;
};

void introduction();
void main_menu();
void add_data();
void show_specific_data(int);
void show_all();
void show_result(int);
void delete_data(int);
void change_data(int);
string grade_calculation(double);
double gpa_calculation(string);
void wrong_input_management_system(double);
void failing_system(double);

int main()
{
    system("color a");
    int menu;
    system("cls");
    introduction();
    do
    {
        system("cls");
        system("color e");
        cout << endl;
        cout << endl;
        cout << "\t====================STUDENT REPORT CARD MANEGEMENT SYSTEM====================" << endl;
        cout << endl;
        cout << "\t\t\t\t1. MAIN MENU";
        cout << endl;
        cout << endl;
        cout << "\t\t\t\t2. EXIT";
        cout << endl;
        cout << endl;
        cout << "\t\tEnter choice : ";
        cin >> menu;
        system("cls");
        switch (menu)
        {
        case 1:
            main_menu();
            break;
        case 2:
        {
            cout << "\t\t     THANK YOU FOR USING THIS SOFTWARE" << endl;
            cout << endl;
            cout << endl;
            cout << "\t   Project Created by" << endl;
            cout << endl;
            cout << "\t\t\t Ashikur Rafi" << endl;
            cout << "\t\t\t CSE - 91" << endl;
            cout << "\t\t\t Department of Computer Science and Engineering" << endl;
            cout << "\t\t\t Dhaka Commerce College" << endl;
            cout << endl;
            cout << endl;
            cout << "\t\t\t\t\t\t Submitted to : " << endl;
            cout << "\t\t\t\t\t\t Md. Sabbir Ahmed" << endl;
            cout << "\t\t\t\t\t\t Lecturer" << endl;
            cout << "\t\t\t\t\t\t Department of Computer Science and Engineering" << endl;
            cout << "\t\t\t\t\t\t Dhaka Commerce College" << endl;
            cout << endl;
            cout << endl;
        }
        break;
        default:
        {
            cout << "\t\t     THANK YOU FOR USING THIS SOFTWARE" << endl;
            cout << endl;
            cout << endl;
            cout << "\t   Project Created by" << endl;
            cout << endl;
            cout << "\t\t\t Ashikur Rafi" << endl;
            cout << "\t\t\t CSE - 91" << endl;
            cout << "\t\t\t Department of Computer Science and Engineering" << endl;
            cout << "\t\t\t Dhaka Commerce College" << endl;
            cout << endl;
            cout << endl;
            cout << "\t\t\t\t\t\t Submitted to : " << endl;
            cout << "\t\t\t\t\t\t Md. Sabbir Ahmed" << endl;
            cout << "\t\t\t\t\t\t Lecturer" << endl;
            cout << "\t\t\t\t\t\t Department of Computer Science and Engineering" << endl;
            cout << "\t\t\t\t\t\t Dhaka Commerce College" << endl;
            cout << endl;
            cout << endl;
        }
        break;
        }
    } while (menu != 2);
    return 0;
}

void introduction()
{
    cout << endl;
    cout << endl;
    cout << endl;
    Sleep(50);
    cout << "\t\t\t\t * * *  *****  *      ****   ***    ***   *****   " << endl;
    Sleep(50);
    cout << "\t\t\t\t * * *  *      *     *      *   *  * * *  *        " << endl;
    Sleep(50);
    cout << "\t\t\t\t * * *  *****  *     *      *   *  * * *  *****    " << endl;
    Sleep(50);
    cout << "\t\t\t\t * * *  *      *     *      *   *  * * *  *         " << endl;
    Sleep(50);
    cout << "\t\t\t\t  ***   *****  *****  ****   ***   * * *  *****     " << endl;
    Sleep(50);
    cout << endl;
    cout << "\t\t\t\t  =============================================" << endl;
    Sleep(50);
    cout << "\t\t\t\t   WELCOME TO STUDENT REPORT MANEGEMENT SYSTEM" << endl;
    Sleep(50);
    cout << "\t\t\t\t  =============================================" << endl;
    Sleep(50);
    cout << "\t\t\t\t\t  press enter to continue...";
    cin.get();
}

void main_menu()
{
    system("color e");
    int choice;
    cout << "\t\t\t\t=================MAIN MENU================" << endl;
    cout << endl;
    cout << endl;
    Sleep(100);
    cout << "\t\t\t\t1. CREATE STUDENT REPORT CARD" << endl;
    cout << endl;
    cout << endl;
    Sleep(100);
    cout << "\t\t\t\t2. VIEW ALL STUDENTs REPORT CARD" << endl;
    cout << endl;
    cout << endl;
    Sleep(100);
    cout << "\t\t\t\t3. VIEW A SINGLE STUDENT REPORT CARD" << endl;
    cout << endl;
    cout << endl;
    Sleep(100);
    cout << "\t\t\t\t4. MODIFY REPORT CARD" << endl;
    cout << endl;
    cout << endl;
    Sleep(100);
    cout << "\t\t\t\t5. RESULT" << endl;
    cout << endl;
    cout << endl;
    Sleep(100);
    cout << "\t\t\t\t6. DELETE RECORD" << endl;
    cout << endl;
    cout << endl;
    Sleep(100);
    cout << "\t\t\t\t7. EXIT" << endl;
    cout << endl;
    cout << endl;
    Sleep(100);
    cout << "\t\t\t\t==============================" << endl;
    Sleep(100);
    cout << "\t\t\t\t ENTER CHOICE <1-6> : ";
    Sleep(100);
    cin >> choice;
    cout << endl;
    switch (choice)
    {
    case 1:
    {
        system("color b");
        add_data();
    }
    break;
    case 2:
        show_all();
        break;
    case 3:
    {
        int n;
        cout << "Enter student roll : ";
        cin >> n;
        show_specific_data(n);
        system("cls");
        main_menu();
    }
    break;
    case 4:
    {
        int n;
        cout << "Enter student roll : ";
        cin >> n;
        change_data(n);
        system("cls");
        main_menu();
    }
    break;
    case 5:
    {
        int n;
        cout << "Enter student roll : ";
        cin >> n;
        show_result(n);
        system("cls");
        main_menu();
    }
    break;
    case 6:
    {
        int n;
        cout << "Enter student roll : ";
        cin >> n;
        delete_data(n);
        system("cls");
        main_menu();
    }
    break;
    case 7:
    {
        system("cls");
        cout << "\t\t     THANK YOU FOR USING THIS SOFTWARE" << endl;
        cout << endl;
        cout << endl;
        cout << "\t   Project Created by" << endl;
        cout << endl;
        cout << "\t\t\t Ashikur Rafi" << endl;
        cout << "\t\t\t CSE - 91" << endl;
        cout << "\t\t\t Department of Computer Science and Engineering" << endl;
        cout << "\t\t\t Dhaka Commerce College" << endl;
        cout << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t Submitted to : " << endl;
        cout << "\t\t\t\t\t\t Md. Sabbir Ahmed" << endl;
        cout << "\t\t\t\t\t\t Lecturer" << endl;
        cout << "\t\t\t\t\t\t Department of Computer Science and Engineering" << endl;
        cout << "\t\t\t\t\t\t Dhaka Commerce College" << endl;
        cout << endl;
        cout << endl;
        Sleep(2000);
        exit(0);
    }
    break;
    default:
    {
        system("cls");
        main_menu();
    }
    break;
    }
}

void add_data()
{
    system("cls");
    student_database object;
    ofstream myfile;
    myfile.open("data.txt", ios::app | ios::binary);
    if (myfile.fail())
    {
        cout << "THE FILE COULD NOT BE OPEN...press enter key";
        cin.ignore();
        cin.get();
    }
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t=======CREATING REPORT CARD========";
    cout << endl;
    cout << endl;
    cout << "Enter name : ";
    cin.ignore();
    getline(cin, object.name);
    cout << "Enter roll : ";
    cin >> object.roll;
    cout << "Optional subject : " << endl;
    cout << "1. Math" << endl;
    cout << "2. Biology" << endl;
    cout << "Enter choice : ";
    cin >> object.optional_subject;
    switch (object.optional_subject)
    {
    case 1:
    {
        cout << "Enter marks of Bangla 1st paper : ";
        cin >> object.marks_of_bangla_1st_paper;
        wrong_input_management_system(object.marks_of_bangla_1st_paper);
        failing_system(object.marks_of_bangla_1st_paper);
        cout << "Enter marks of bangla 2nd paper : ";
        cin >> object.marks_of_bangla_2nd_paper;
        wrong_input_management_system(object.marks_of_bangla_2nd_paper);
        failing_system(object.marks_of_bangla_2nd_paper);
        cout << "Enter marks of English 1st paper : ";
        cin >> object.marks_of_english_1st_paper;
        wrong_input_management_system(object.marks_of_english_1st_paper);
        failing_system(object.marks_of_english_1st_paper);
        cout << "Enter marks of English 2nd paper : ";
        cin >> object.marks_of_english_2nd_paper;
        wrong_input_management_system(object.marks_of_english_2nd_paper);
        failing_system(object.marks_of_english_2nd_paper);
        cout << "Enter marks of Physics 1st paper : ";
        cin >> object.marks_of_physics_1st_paper;
        wrong_input_management_system(object.marks_of_physics_1st_paper);
        failing_system(object.marks_of_physics_1st_paper);
        cout << "Enter marks of Physics 2nd paper : ";
        cin >> object.marks_of_physics_2nd_paper;
        wrong_input_management_system(object.marks_of_physics_2nd_paper);
        failing_system(object.marks_of_physics_2nd_paper);
        cout << "Enter marks of Chemistry 1st paper : ";
        cin >> object.marks_of_chemistry_1st_paper;
        wrong_input_management_system(object.marks_of_chemistry_1st_paper);
        failing_system(object.marks_of_chemistry_1st_paper);
        cout << "Enter marks of Chemistry 2nd paper : ";
        cin >> object.marks_of_chemistry_2nd_paper;
        wrong_input_management_system(object.marks_of_chemistry_2nd_paper);
        failing_system(object.marks_of_chemistry_2nd_paper);
        cout << "Enter marks of Mathematics 1st paper : ";
        cin >> object.marks_of_math_1st_paper;
        wrong_input_management_system(object.marks_of_math_1st_paper);
        failing_system(object.marks_of_math_1st_paper);
        cout << "Enter marks of Mathematics 2nd paper : ";
        cin >> object.marks_of_math_2nd_paper;
        wrong_input_management_system(object.marks_of_math_2nd_paper);
        failing_system(object.marks_of_math_2nd_paper);
        cout << "Enter marks of Biology 1st paper : ";
        cin >> object.marks_of_biology_1st_paper;
        wrong_input_management_system(object.marks_of_biology_1st_paper);
        failing_system(object.marks_of_biology_1st_paper);
        cout << "Enter marks of Biology 2nd paper : ";
        cin >> object.marks_of_biology_2nd_paper;
        wrong_input_management_system(object.marks_of_biology_2nd_paper);
        failing_system(object.marks_of_biology_2nd_paper);
        cout << "Enter marks of ICT : ";
        cin >> object.marks_of_ICT;
        wrong_input_management_system(object.marks_of_ICT);
        failing_system(object.marks_of_ICT);
    }
    break;
    case 2:
    {
        cout << "Enter marks of Bangla 1st paper : ";
        cin >> object.marks_of_bangla_1st_paper;
        wrong_input_management_system(object.marks_of_bangla_1st_paper);
        cout << "Enter marks of bangla 2nd paper : ";
        cin >> object.marks_of_bangla_2nd_paper;
        wrong_input_management_system(object.marks_of_bangla_2nd_paper);
        cout << "Enter marks of English 1st paper : ";
        cin >> object.marks_of_english_1st_paper;
        wrong_input_management_system(object.marks_of_english_1st_paper);
        cout << "Enter marks of English 2nd paper : ";
        cin >> object.marks_of_english_2nd_paper;
        wrong_input_management_system(object.marks_of_english_2nd_paper);
        cout << "Enter marks of Physics 1st paper : ";
        cin >> object.marks_of_physics_1st_paper;
        wrong_input_management_system(object.marks_of_physics_1st_paper);
        cout << "Enter marks of Physics 2nd paper : ";
        cin >> object.marks_of_physics_2nd_paper;
        wrong_input_management_system(object.marks_of_physics_2nd_paper);
        cout << "Enter marks of Chemistry 1st paper : ";
        cin >> object.marks_of_chemistry_1st_paper;
        wrong_input_management_system(object.marks_of_chemistry_1st_paper);
        cout << "Enter marks of Chemistry 2nd paper : ";
        cin >> object.marks_of_chemistry_2nd_paper;
        wrong_input_management_system(object.marks_of_chemistry_2nd_paper);
        cout << "Enter marks of Mathematics 1st paper : ";
        cin >> object.marks_of_math_1st_paper;
        wrong_input_management_system(object.marks_of_math_1st_paper);
        cout << "Enter marks of Mathematics 2nd paper : ";
        cin >> object.marks_of_math_2nd_paper;
        wrong_input_management_system(object.marks_of_math_2nd_paper);
        cout << "Enter marks of Biology 1st paper : ";
        cin >> object.marks_of_biology_1st_paper;
        wrong_input_management_system(object.marks_of_biology_1st_paper);
        cout << "Enter marks of Biology 2nd paper : ";
        cin >> object.marks_of_biology_2nd_paper;
        wrong_input_management_system(object.marks_of_biology_2nd_paper);
        cout << "Enter marks of ICT : ";
        cin >> object.marks_of_ICT;
        wrong_input_management_system(object.marks_of_ICT);
    }
    break;
    default:
    {
        cout << "===== WRONG INPUT =====" << endl;
        cout << "===== Enter data again =====" << endl;
        Sleep(500);
        add_data();
    }
    break;
    }
    myfile.write(reinterpret_cast<char*>(&object), sizeof(student_database));
    myfile.close();
    cout << endl;
    cout << "\t\t\t\tDATA SAVED SUCCESSFULLY" << endl;
    cout << endl;
    cout << "press any key to continue...";
    cin.get();
    system("cls");
    main_menu();
}

void show_specific_data(int n)
{
    system("cls");
    system("color a");
    student_database object;
    ifstream myfile;
    myfile.open("data.txt", ios::app | ios::binary);
    if (myfile.fail())
    {
        cout << "THE FILE COULD NOT BE OPENED...";
        cin.ignore();
        cin.get();
    }
    bool equality = false;
    cout << "\t\t\t\t==========VIEW A SINGLE STUDENT REPORT==========";
    cout << endl;
    cout << endl;
    while (myfile.read(reinterpret_cast<char*>(&object), sizeof(student_database)))
    {
        if (object.roll == n)
        {
            cout << "\t\t\t\tSTUDENT NAME : " << object.name << endl;
            cout << "\t\t\t\tSTUDENT ROLL NUMBER : " << object.roll << endl;
            cout << "\t\t\t\tMarks of Bangla 1st paper : " << object.marks_of_bangla_1st_paper << endl;
            cout << "\t\t\t\tMarks of Bangla 2nd paper : " << object.marks_of_bangla_2nd_paper << endl;
            cout << "\t\t\t\tMarks of English 1st paper : " << object.marks_of_english_1st_paper << endl;
            cout << "\t\t\t\tMarks of English 2nd paper : " << object.marks_of_english_2nd_paper << endl;
            cout << "\t\t\t\tMarks of Physics 1st paper : " << object.marks_of_physics_1st_paper << endl;
            cout << "\t\t\t\tMarks of Physics 2nd paper : " << object.marks_of_physics_2nd_paper << endl;
            cout << "\t\t\t\tMarks of Chemistry 1st paper : " << object.marks_of_chemistry_1st_paper << endl;
            cout << "\t\t\t\tMarks of Chemistry 2nd paper : " << object.marks_of_chemistry_2nd_paper << endl;
            cout << "\t\t\t\tMarks of Math 1st paper : " << object.marks_of_math_1st_paper << endl;
            cout << "\t\t\t\tMarks of Math 2nd paper : " << object.marks_of_math_2nd_paper << endl;
            cout << "\t\t\t\tMarks of Biology 1st paper : " << object.marks_of_biology_1st_paper << endl;
            cout << "\t\t\t\tMarks of Biology 2nd paper : " << object.marks_of_biology_2nd_paper << endl;
            cout << "\t\t\t\tMarks of ICT : " << object.marks_of_ICT << endl;
            cout << "\t\t\t\t================================================" << endl;
            equality = true;
        }
    }
    myfile.close();
    if (equality == false)
    {
        cout << "\t\t\t\tRECORD NOT FOUND..." << endl;
    }
    cout << endl;
    cout << "press any key to continue...";
    cin.ignore();
    cin.get();
    system("cls");
    main_menu();
}

void show_all()
{
    system("cls");
    student_database object;
    ifstream myfile;
    bool check = false;
    myfile.open("data.txt", ios::app | ios::binary);
    if (myfile.fail())
    {
        cout << "THE FILE COULD NOT BE OPENED.....press enter key...";
        cin.ignore();
        cin.get();
    }
    cout << endl;
    cout << endl;
    cout << "\t\t\t\tALL STUDENTS DATA" << endl;
    cout << "==================================================================================" << endl;
    while (myfile.read(reinterpret_cast<char*>(&object), sizeof(student_database)))
    {
        cout << "\t\t\t\tSTUDENT NAME : " << object.name << endl;
        cout << "\t\t\t\tSTUDENT ROLL NUMBER : " << object.roll << endl;
        cout << endl;
        cout << "=================================================================================" << endl;
        check = true;
    }
    myfile.close();
    if (check == false)
    {
        cout << "\t\t\t\tNO RECORD FOUND..." << endl;
        cout << endl;
    }
    cout << "Press enter to continue ...";
    cin.ignore();
    cin.get();
    system("cls");
    main_menu();
}

void show_result(int n)
{
    system("cls");
    student_database object;
    ifstream myfile;
    myfile.open("data.txt", ios::app | ios::binary);
    if (myfile.fail())
    {
        cout << "THE FILE COULD NOT BE OPENED..." << endl;
        cin.ignore();
        cin.get();
    }
    bool eq = false;
    cout << "\t\t\t\t===========VIEW A SINGLE STUDENT RESULT==========";
    cout << endl;
    cout << endl;
    while (myfile.read(reinterpret_cast<char*>(&object), sizeof(student_database)))
    {
        if (object.roll == n)
        {
            if (object.optional_subject == 1)

            {
                cout << "\t\t\t\tSTUDENT NAME : " << object.name << endl;
                std::cout << "\t\t\t\tSTUDENT ROLL NUMBER : " << object.roll << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of Bangla 1st paper : " << object.marks_of_bangla_1st_paper << endl;
                string result_bangla_1st = grade_calculation(object.marks_of_bangla_1st_paper);
                double gpa_bangla_1st = gpa_calculation(result_bangla_1st);
                cout << "\t\t\t\tGrade in Bangla 1st paper : " << result_bangla_1st << endl;
                cout << "\t\t\t\tGPA in Bangla 1st paper : " << gpa_bangla_1st << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of Bangla 2nd paper : " << object.marks_of_bangla_2nd_paper << endl;
                string result_bangla_2nd = grade_calculation(object.marks_of_bangla_2nd_paper);
                double gpa_bangla_2nd = gpa_calculation(result_bangla_2nd);
                cout << "\t\t\t\tGrade in Bangla 2nd paper : " << result_bangla_2nd << endl;
                cout << "\t\t\t\tGPA in Bangla 2nd paper : " << gpa_bangla_2nd << endl;
                cout << endl;

                double bangla_avarage_gpa = (gpa_bangla_1st + gpa_bangla_2nd) / 2;
                cout << "\t\t\t\tAverage GPA in Bangla : " << bangla_avarage_gpa;
                cout << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of English 1st paper : " << object.marks_of_english_1st_paper << endl;
                string result_english_1st = grade_calculation(object.marks_of_english_1st_paper);
                double gpa_english_1st = gpa_calculation(result_english_1st);
                cout << "\t\t\t\tGrade in English 1st paper : " << result_english_1st << endl;
                cout << "\t\t\t\tGPA in English 1st paper : " << gpa_english_1st << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of English 2nd paper : " << object.marks_of_english_2nd_paper << endl;
                string result_english_2nd = grade_calculation(object.marks_of_english_2nd_paper);
                double gpa_english_2nd = gpa_calculation(result_english_2nd);
                cout << "\t\t\t\tGrade in English 2nd paper : " << result_english_2nd << endl;
                cout << "\t\t\t\tGPA in English 2nd paper : " << gpa_english_2nd << endl;
                cout << endl;

                double english_avarage_gpa = (gpa_english_1st + gpa_english_2nd) / 2;
                cout << "\t\t\t\tAverage GPA in English : " << english_avarage_gpa;
                cout << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of Physics 1st paper : " << object.marks_of_physics_1st_paper << endl;
                string result_physics_1st = grade_calculation(object.marks_of_physics_1st_paper);
                double gpa_physics_1st = gpa_calculation(result_physics_1st);
                cout << "\t\t\t\tGrade in Physics 1st paper : " << result_physics_1st << endl;
                cout << "\t\t\t\tGPA in Physics 1st paper : " << gpa_physics_1st << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of Physics 2nd paper : " << object.marks_of_physics_2nd_paper << endl;
                string result_physics_2nd = grade_calculation(object.marks_of_physics_2nd_paper);
                double gpa_physics_2nd = gpa_calculation(result_physics_2nd);
                cout << "\t\t\t\tGrade in Physics 2nd paper : " << result_physics_2nd << endl;
                cout << "\t\t\t\tGPA in Physics 2nd paper : " << gpa_physics_2nd << endl;
                cout << endl;

                double physics_avarage_gpa = (gpa_physics_1st + gpa_physics_2nd) / 2;
                cout << "\t\t\t\tAverage GPA in Physics : " << physics_avarage_gpa;
                cout << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of Chemistry 1st paper : " << object.marks_of_chemistry_1st_paper << endl;
                string result_chemistry_1st = grade_calculation(object.marks_of_chemistry_1st_paper);
                double gpa_chemistry_1st = gpa_calculation(result_chemistry_1st);
                cout << "\t\t\t\tGrade in Chemistry 1st paper : " << result_chemistry_1st << endl;
                cout << "\t\t\t\tGPA in Chemistry 1st paper : " << gpa_chemistry_1st << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of Chemistry 2nd paper : " << object.marks_of_chemistry_2nd_paper << endl;
                string result_chemistry_2nd = grade_calculation(object.marks_of_chemistry_2nd_paper);
                double gpa_chemistry_2nd = gpa_calculation(result_chemistry_2nd);
                cout << "\t\t\t\tGrade in Chemistry 2nd paper : " << result_chemistry_2nd << endl;
                cout << "\t\t\t\tGPA in Chemistry 2nd paper : " << gpa_chemistry_2nd << endl;
                cout << endl;

                double chemistry_avarage_gpa = (gpa_chemistry_1st + gpa_chemistry_2nd) / 2;
                cout << "\t\t\t\tAverage GPA in Chemistry : " << chemistry_avarage_gpa;
                cout << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of Math 1st paper : " << object.marks_of_math_1st_paper << endl;
                string result_math_1st = grade_calculation(object.marks_of_math_1st_paper);
                double gpa_math_1st = gpa_calculation(result_math_1st);
                cout << "\t\t\t\tGrade in Math 1st paper : " << result_math_1st << endl;
                cout << "\t\t\t\tGPA in Math 1st paper : " << gpa_math_1st << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of Math 2nd paper : " << object.marks_of_math_2nd_paper << endl;
                string result_math_2nd = grade_calculation(object.marks_of_math_2nd_paper);
                double gpa_math_2nd = gpa_calculation(result_math_2nd);
                cout << "\t\t\t\tGrade in Math 2nd paper : " << result_math_2nd << endl;
                cout << "\t\t\t\tGPA in Math 2nd paper : " << gpa_math_2nd << endl;
                cout << endl;

                double math_avarage_gpa = (gpa_math_1st + gpa_math_2nd) / 2;
                cout << "\t\t\t\tAverage GPA in Math : " << math_avarage_gpa;
                cout << endl;
                cout << endl;

                double math_cal;
                if (math_avarage_gpa >= 3 && math_avarage_gpa <= 5)
                {
                    math_cal = math_avarage_gpa - 2;
                }
                else
                {
                    math_cal = math_avarage_gpa;
                }

                cout << "\t\t\t\tMarks of Biology 1st paper : " << object.marks_of_biology_1st_paper << endl;
                string result_biology_1st = grade_calculation(object.marks_of_biology_1st_paper);
                double gpa_biology_1st = gpa_calculation(result_biology_1st);
                cout << "\t\t\t\tGrade in Biology 1st paper : " << result_biology_1st << endl;
                cout << "\t\t\t\tGPA in Biology 1st paper : " << gpa_biology_1st << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of Biology 2nd paper : " << object.marks_of_biology_2nd_paper << endl;
                string result_biology_2nd = grade_calculation(object.marks_of_biology_2nd_paper);
                double gpa_biology_2nd = gpa_calculation(result_biology_2nd);
                cout << "\t\t\t\tGrade in Biology 2nd paper : " << result_biology_2nd << endl;
                cout << "\t\t\t\tGPA in Biology 2nd paper : " << gpa_biology_2nd << endl;
                cout << endl;

                double biology_avarage_gpa = (gpa_biology_1st + gpa_biology_2nd) / 2;
                cout << "\t\t\t\tAverage GPA in Biology : " << biology_avarage_gpa;
                cout << endl;
                cout << endl;

                std::cout << "\t\t\t\tMarks of ICT : " << object.marks_of_ICT << endl;
                string result_ICT = grade_calculation(object.marks_of_ICT);
                double gpa_ICT = gpa_calculation(result_ICT);
                cout << "\t\t\t\tGrade in ICT : " << result_ICT << endl;
                cout << "\t\t\t\tGPA in ICT : " << gpa_ICT << endl;
                cout << endl;
                cout << endl;

                double gpa;
                gpa = (bangla_avarage_gpa + english_avarage_gpa + physics_avarage_gpa + chemistry_avarage_gpa + math_cal + biology_avarage_gpa + gpa_ICT) / 6;

                if (gpa >= 5)
                {
                    object.total_gpa = 5.00;
                }
                else
                {
                    object.total_gpa = gpa;
                }

                std::cout << "\t\t\t\tTotal GPA : " << object.total_gpa << endl;
                std::cout << "\t\t\t\t==================================================" << endl;
            }
            else
            {
                cout << "\t\t\t\tSTUDENT NAME : " << object.name << endl;
                std::cout << "\t\t\t\tSTUDENT ROLL NUMBER : " << object.roll << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of Bangla 1st paper : " << object.marks_of_bangla_1st_paper << endl;
                string result_bangla_1st = grade_calculation(object.marks_of_bangla_1st_paper);
                double gpa_bangla_1st = gpa_calculation(result_bangla_1st);
                cout << "\t\t\t\tGrade in Bangla 1st paper : " << result_bangla_1st << endl;
                cout << "\t\t\t\tGPA in Bangla 1st paper : " << gpa_bangla_1st << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of Bangla 2nd paper : " << object.marks_of_bangla_2nd_paper << endl;
                string result_bangla_2nd = grade_calculation(object.marks_of_bangla_2nd_paper);
                double gpa_bangla_2nd = gpa_calculation(result_bangla_2nd);
                cout << "\t\t\t\tGrade in Bangla 2nd paper : " << result_bangla_2nd << endl;
                cout << "\t\t\t\tGPA in Bangla 2nd paper : " << gpa_bangla_2nd << endl;
                cout << endl;

                double bangla_avarage_gpa = (gpa_bangla_1st + gpa_bangla_2nd) / 2;
                cout << "\t\t\t\tAverage GPA in Bangla : " << bangla_avarage_gpa;
                cout << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of English 1st paper : " << object.marks_of_english_1st_paper << endl;
                string result_english_1st = grade_calculation(object.marks_of_english_1st_paper);
                double gpa_english_1st = gpa_calculation(result_english_1st);
                cout << "\t\t\t\tGrade in English 1st paper : " << result_english_1st << endl;
                cout << "\t\t\t\tGPA in English 1st paper : " << gpa_english_1st << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of English 2nd paper : " << object.marks_of_english_2nd_paper << endl;
                string result_english_2nd = grade_calculation(object.marks_of_english_2nd_paper);
                double gpa_english_2nd = gpa_calculation(result_english_2nd);
                cout << "\t\t\t\tGrade in English 2nd paper : " << result_english_2nd << endl;
                cout << "\t\t\t\tGPA in English 2nd paper : " << gpa_english_2nd << endl;
                cout << endl;

                double english_avarage_gpa = (gpa_english_1st + gpa_english_2nd) / 2;
                cout << "\t\t\t\tAverage GPA in English : " << english_avarage_gpa;
                cout << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of Physics 1st paper : " << object.marks_of_physics_1st_paper << endl;
                string result_physics_1st = grade_calculation(object.marks_of_physics_1st_paper);
                double gpa_physics_1st = gpa_calculation(result_physics_1st);
                cout << "\t\t\t\tGrade in Physics 1st paper : " << result_physics_1st << endl;
                cout << "\t\t\t\tGPA in Physics 1st paper : " << gpa_physics_1st << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of Physics 2nd paper : " << object.marks_of_physics_2nd_paper << endl;
                string result_physics_2nd = grade_calculation(object.marks_of_physics_2nd_paper);
                double gpa_physics_2nd = gpa_calculation(result_physics_2nd);
                cout << "\t\t\t\tGrade in Physics 2nd paper : " << result_physics_2nd << endl;
                cout << "\t\t\t\tGPA in Physics 2nd paper : " << gpa_physics_2nd << endl;
                cout << endl;

                double physics_avarage_gpa = (gpa_physics_1st + gpa_physics_2nd) / 2;
                cout << "\t\t\t\tAverage GPA in Physics : " << physics_avarage_gpa;
                cout << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of Chemistry 1st paper : " << object.marks_of_chemistry_1st_paper << endl;
                string result_chemistry_1st = grade_calculation(object.marks_of_chemistry_1st_paper);
                double gpa_chemistry_1st = gpa_calculation(result_chemistry_1st);
                cout << "\t\t\t\tGrade in Chemistry 1st paper : " << result_chemistry_1st << endl;
                cout << "\t\t\t\tGPA in Chemistry 1st paper : " << gpa_chemistry_1st << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of Chemistry 2nd paper : " << object.marks_of_chemistry_2nd_paper << endl;
                string result_chemistry_2nd = grade_calculation(object.marks_of_chemistry_2nd_paper);
                double gpa_chemistry_2nd = gpa_calculation(result_chemistry_2nd);
                cout << "\t\t\t\tGrade in Chemistry 2nd paper : " << result_chemistry_2nd << endl;
                cout << "\t\t\t\tGPA in Chemistry 2nd paper : " << gpa_chemistry_2nd << endl;
                cout << endl;

                double chemistry_avarage_gpa = (gpa_chemistry_1st + gpa_chemistry_2nd) / 2;
                cout << "\t\t\t\tAverage GPA in Chemistry : " << chemistry_avarage_gpa;
                cout << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of Biology 1st paper : " << object.marks_of_biology_1st_paper << endl;
                string result_biology_1st = grade_calculation(object.marks_of_biology_1st_paper);
                double gpa_biology_1st = gpa_calculation(result_biology_1st);
                cout << "\t\t\t\tGrade in Biology 1st paper : " << result_biology_1st << endl;
                cout << "\t\t\t\tGPA in Biology 1st paper : " << gpa_biology_1st << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of Biology 2nd paper : " << object.marks_of_biology_2nd_paper << endl;
                string result_biology_2nd = grade_calculation(object.marks_of_biology_2nd_paper);
                double gpa_biology_2nd = gpa_calculation(result_biology_2nd);
                cout << "\t\t\t\tGrade in Biology 2nd paper : " << result_biology_2nd << endl;
                cout << "\t\t\t\tGPA in Biology 2nd paper : " << gpa_biology_2nd << endl;
                cout << endl;

                double biology_avarage_gpa = (gpa_biology_1st + gpa_biology_2nd) / 2;
                cout << "\t\t\t\tAverage GPA in Biology : " << biology_avarage_gpa;
                cout << endl;
                cout << endl;

                double bio_cal;
                if (biology_avarage_gpa >= 3 && biology_avarage_gpa <= 5)
                {
                    bio_cal = biology_avarage_gpa - 2;
                }
                else
                {
                    bio_cal = biology_avarage_gpa;
                }

                cout << "\t\t\t\tMarks of Math 1st paper : " << object.marks_of_math_1st_paper << endl;
                string result_math_1st = grade_calculation(object.marks_of_math_1st_paper);
                double gpa_math_1st = gpa_calculation(result_math_1st);
                cout << "\t\t\t\tGrade in Math 1st paper : " << result_math_1st << endl;
                cout << "\t\t\t\tGPA in Math 1st paper : " << gpa_math_1st << endl;
                cout << endl;

                cout << "\t\t\t\tMarks of Math 2nd paper : " << object.marks_of_math_2nd_paper << endl;
                string result_math_2nd = grade_calculation(object.marks_of_math_2nd_paper);
                double gpa_math_2nd = gpa_calculation(result_math_2nd);
                cout << "\t\t\t\tGrade in Math 2nd paper : " << result_math_2nd << endl;
                cout << "\t\t\t\tGPA in Math 2nd paper : " << gpa_math_2nd << endl;
                cout << endl;

                double math_avarage_gpa = (gpa_math_1st + gpa_math_2nd) / 2;
                cout << "\t\t\t\tAverage GPA in Math : " << math_avarage_gpa;
                cout << endl;
                cout << endl;

                std::cout << "\t\t\t\tMarks of ICT : " << object.marks_of_ICT << endl;
                string result_ICT = grade_calculation(object.marks_of_ICT);
                double gpa_ICT = gpa_calculation(result_ICT);
                cout << "\t\t\t\tGrade in ICT : " << result_ICT << endl;
                cout << "\t\t\t\tGPA in ICT : " << gpa_ICT << endl;
                cout << endl;
                cout << endl;

                double gpa;
                gpa = (bangla_avarage_gpa + english_avarage_gpa + physics_avarage_gpa + chemistry_avarage_gpa + bio_cal + biology_avarage_gpa + gpa_ICT) / 6;

                if (gpa >= 5)
                {
                    object.total_gpa = 5.00;
                }
                else
                {
                    object.total_gpa = gpa;
                }

                std::cout << "\t\t\t\tTotal GPA : " << object.total_gpa << endl;
                std::cout << "\t\t\t\t==================================================" << endl;
            }
            eq = true;
        }
    }
    myfile.close();
    if (eq == false)
    {
        cout << "\t\t\t\tRECORD NOT FOUND..." << endl;
        cout << endl;
    }
    cout << "press any key to continue...";
    cin.ignore();
    cin.get();
    system("cls");
    main_menu();
}

void delete_data(int n)
{
    system("color 4");
    char del;
    system("cls");
    cout << "Do you really want to delete this record (Y/N) : ";
    cin >> del;
    system("color e");
    if (del == 'y' || del == 'Y')
    {
        system("cls");
        student_database object;
        ifstream myfile;
        myfile.open("data.txt", ios::binary);
        if (!myfile)
        {
            cout << "THE FILE COULD NOT BE OPENED..." << endl;
            cin.ignore();
            cin.get();
        }
        ofstream outfile;
        outfile.open("data_2.txt", ios::binary);
        myfile.seekg(0, ios::beg);
        cout << "\t\t\t\t===========DELETE A REPORT CARD==========\n\n";
        while (myfile.read(reinterpret_cast<char*>(&object), sizeof(student_database)))
        {
            if (object.roll != n)
            {
                outfile.write(reinterpret_cast<char*>(&object), sizeof(student_database));
            }
        }
        myfile.close();
        outfile.close();
        remove("data.txt");
        int i = rename("data_2.txt", "data.txt");
        cout << endl;
        cout << "\t\t\t\tRECORD SUCCESSFULLY DELETED" << endl;
        cout << "press any key to continue...";
        cin.ignore();
        cin.get();
        system("cls");
        main_menu();
    }
    else
    {
        cout << "===== Data not deleted =====" << endl;
        cout << "press any key to continue...";
        cin.ignore();
        cin.get();
        system("cls");
        main_menu();
    }
    system("cls");
    main_menu();
}

void change_data(int n)
{
    cout << "===== Do you really want to change information (Y/N) : ";
    char change;
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        system("cls");
        student_database object;
        fstream myfile;
        myfile.open("data.txt", ios::binary | ios::in | ios::out);
        if (myfile.fail())
        {
            cout << "THE FILE COULD NOT BE OPENED..." << endl;
            cin.ignore();
            cin.get();
        }
        bool checker = false;
        cout << "\t\t\t\t==========MODIFY A REPORT CARD==========";
        cout << endl;
        cout << endl;
        while (!myfile.eof() && checker == false)
        {
            myfile.read(reinterpret_cast<char*>(&object), sizeof(student_database));
            if (object.roll == n)
            {
                cout << "\t\t\t\tSTUDENT NAME : " << object.name << endl;
                cout << "\t\t\t\tSTUDENT ROLL NUMBER : " << object.roll << endl;
                cout << "\t\t\t\tMarks of Bangla 1st paper : " << object.marks_of_bangla_1st_paper << endl;
                cout << "\t\t\t\tMarks of Bangla 2nd paper : " << object.marks_of_bangla_2nd_paper << endl;
                cout << "\t\t\t\tMarks of English 1st paper : " << object.marks_of_english_1st_paper << endl;
                cout << "\t\t\t\tMarks of English 2nd paper : " << object.marks_of_english_2nd_paper << endl;
                cout << "\t\t\t\tMarks of Physics 1st paper : " << object.marks_of_physics_1st_paper << endl;
                cout << "\t\t\t\tMarks of Physics 2nd paper : " << object.marks_of_physics_2nd_paper << endl;
                cout << "\t\t\t\tMarks of Chemistry 1st paper : " << object.marks_of_chemistry_1st_paper << endl;
                cout << "\t\t\t\tMarks of Chemistry 2nd paper : " << object.marks_of_chemistry_2nd_paper << endl;
                cout << "\t\t\t\tMarks of Math 1st paper : " << object.marks_of_math_1st_paper << endl;
                cout << "\t\t\t\tMarks of Math 2nd paper : " << object.marks_of_math_2nd_paper << endl;
                cout << "\t\t\t\tMarks of Biology 1st paper : " << object.marks_of_biology_1st_paper << endl;
                cout << "\t\t\t\tMarks of Biology 2nd paper : " << object.marks_of_biology_2nd_paper << endl;
                cout << "\t\t\t\tMarks of ICT : " << object.marks_of_ICT << endl;
                cout << "=============================================" << endl;
                cout << "\t\tENTER THE NEW INFORMATION" << endl;
                cout << "=============================================" << endl;
                cout << "Enter name :";
                cin.ignore();
                getline(std::cin, object.name);
                cout << "Enter roll : ";
                cin >> object.roll;
                cout << "Enter marks of Bangla 1st paper : ";
                cin >> object.marks_of_bangla_1st_paper;
                cout << "Enter marks of Bangla 2nd paper : ";
                cin >> object.marks_of_bangla_2nd_paper;
                cout << "Enter marks of English 1st paper : ";
                cin >> object.marks_of_english_1st_paper;
                cout << "Enter marks of English 2nd paper : ";
                cin >> object.marks_of_english_2nd_paper;
                cout << "Enter marks of Physics 1st paper : ";
                cin >> object.marks_of_physics_1st_paper;
                cout << "Enter marks of Physics 2nd paper : ";
                cin >> object.marks_of_physics_2nd_paper;
                cout << "Enter marks of Chemistry 1st paper : ";
                cin >> object.marks_of_chemistry_1st_paper;
                cout << "Enter marks of Chemistry 2nd paper : ";
                cin >> object.marks_of_chemistry_2nd_paper;
                cout << "Enter marks of Math 1st paper : ";
                cin >> object.marks_of_math_1st_paper;
                cout << "Enter marks of Math 2nd paper : ";
                cin >> object.marks_of_math_2nd_paper;
                cout << "Enter marks of Biology 1st paper : ";
                cin >> object.marks_of_biology_1st_paper;
                cout << "Enter marks of Biology 2nd paper : ";
                cin >> object.marks_of_biology_2nd_paper;
                cout << "Enter marks of ICT : ";
                cin >> object.marks_of_ICT;
                int pos = (-1) * static_cast<int>(sizeof(student_database));
                myfile.seekp(pos, ios::cur);
                myfile.write(reinterpret_cast<char*>(&object), sizeof(student_database));
                cout << endl;
                cout << "\t\t\t\tTHE FILE IS SUCCESSFULLY updated" << endl;
                checker = true;
            }
        }
        myfile.close();
        if (checker == false)
        {
            cout << "\t\t\t\tRECORD NOT FOUND" << endl;
            cout << endl;
            cout << endl;
        }
        cout << "press any key to continue...";
        cin.ignore();
        cin.get();
        system("cls");
        main_menu();
    }
    else
    {
        cout << "===== Data not changed =====";
        Sleep(500);
    }
    system("cls");
    main_menu();
}

string grade_calculation(double x)
{
    if (x >= 80 && x <= 100)
    {
        return "A+";
    }
    else if (x >= 70 && x <= 79)
    {
        return "A";
    }
    else if (x >= 60 && x <= 69)
    {
        return "A-";
    }
    else if (x >= 50 && x <= 59)
    {
        return "B";
    }
    else if (x >= 40 && x <= 49)
    {
        return "C";
    }
    else if (x >= 33 && x <= 39)
    {
        return "D";
    }
    else
    {
        return "F";
    }
}

double gpa_calculation(string y)
{
    if (y == "A+")
    {
        return 5.00;
    }
    else if (y == "A")
    {
        return 4.00;
    }
    else if (y == "A-")
    {
        return 3.50;
    }
    else if (y == "B")
    {
        return 3.00;
    }
    else if (y == "C")
    {
        return 2.00;
    }
    else if (y == "D")
    {
        return 1.00;
    }
    else
    {
        return 0.00;
    }
}

void wrong_input_management_system(double deb)
{
    if (deb >= 0 && deb <= 100)
    {
        cin.ignore();
    }
    else
    {
        cout << "===== WRONG INPUT =====";
        Sleep(500);
        add_data();
    }
}

void failing_system(double fail)
{
    if (fail >= 0 && fail <= 32)
    {
        cout << endl;
        cout << endl;
        cout << " Failed ";
        cout << endl;
        cout << endl;
        Sleep(500);
        system("cls");
        main_menu();
    }

}