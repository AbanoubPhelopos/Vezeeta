
#ifndef INTERFACE_H_
#define INTERFACE_H_

#include <iostream>
#include <fstream>
#include <sstream>
#include <conio.h> //password
#include <string>
#include <algorithm>
#include <chrono> //delay
#include <thread> //delay
#include <ctime> //time
#include <windows.h> //sound
#include <mmsystem.h> //sound

using namespace std;

#define P_Path "P_Data.txt"
#define D_Path "D_Data.txt"
#define a_path "a_data.txt"
#define Hi "hi.wav"
#define Bye "bye.wav"
#define MAX_Session 10
#define Days 7
#define Max_Patient 100
#define Max_Doctor 100
#define Max_App 100

using namespace std;

#pragma comment(lib, "Winmm.lib") //sound

struct Patients
{
    string name;
    string age;
    string gender;
    string email;
    string pass;
};

struct Doctors
{
    string name;
    string location;
    string specialization;
    string cost;
    string email;
    string pass;
    bool time_table[Days][MAX_Session];
};

struct appointments {
    int patient{ -1 };//patient index
    int doctor{ -1 };//doc index
    int hour;
    string day;
    int d;
    int m;
    int y;
};

//sound
void sound(string);

//files
void Add_To_Patient_File(Patients[], string);
void Read_From_Patient_File(Patients[], string);
void Read_From_App_File(appointments[], string);
void Add_To_Doctor_File(Doctors[], string);
void Read_from_Doctor_File(Doctors[], string);
void Add_to_App_File(appointments[], string);


//system
void Vezeeta_System();
string encorypt(string& old);///
string Get_Pass();///
void localtime();///
void Apptime(string s);///
void VEZEETA();
void login();
void sign_up();
void D_Sign_Up();
void P_Sign_Up();
string email_check();
string gender_check();
string appStringO(int n);
void appStringI(int n, string app);

//patient
void P_home_page(int);
void P_Profile(int);
void P_Edit(int);
void display_specialization(int);
void set_app(int, int);
void display_doctors(int, int);
void my_doctor(int, int, int);
void my_doctor_search(int, int);
void find_doctor(int);
void time_search(int);
void P_appointment_details(int);
void P_View_App(int);
void P_Edit_App(int);
void P_delete_App(int);
void P_clear_App(int);

//doctor
void D_home_page(int);
void D_Profile(int);
void D_Edit(int);
void specialization_edit(int);
string spec_name(int);
void D_appointment_details(int);
void D_Add_available_time(int);
void D_Edit_available_time(int);
void D_Remove_available_time(int);
void D_View_Patient_with_time(int);

#endif // !INTERFACE_H_