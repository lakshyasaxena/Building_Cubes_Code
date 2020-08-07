#include <bits/stdc++.h>
#include "special_attributes.h"
#include "special_functions.h"
#include "LAKSHYA_STANDARD_ALGORITHM_OF_TEST_CASES.h"

//*********************************************************************************************************************************

#define three_D_cube _3dc
#define message_box msb
#define message_box_2 msb2
#define message mm
#define object_of_main_menu1 omm1
#define object_type_one_menu otom
#define visual_display v_d
#define unique_names_of_identifiers unoi
#define set_of_containers sofc
#define set_of_initializers sofi
#define set_of_all_attributes sofaa
#define status_of_three_D_cube s_3dc
#define status_two_of_three_D_cube s2_3dc
#define original_three_D_cube o3dc
#define custom_data_type cdt
#define stored_initializer si
#define free_integer fi

//*********************************************************************************************************************************

using namespace std;
using namespace lakshya_standard_algorithm_of_test_cases;
using namespace special_attributes;
using namespace special_functions;
typedef long long ll;
typedef long l;

//*********************************************************************************************************************************

class Three_D_objects
{
private:
    fstream f1;
    vector <vector <vector <pair<ll,string>>>> cube;
    vector <vector <vector <pair<ll,string>>>> custom;
    vector <vector <tuple<short,int,int,string>>> initializer;
    vector <string> object_names;
    vector <vector <ll>> integers;
    ll test_size=1;
    ll query_size=1;
    string file_name;
public:
    bool test_print_status=false;
    bool query_print_status=false;
    void build(short index);
    void build_integers(short index);
    void set_data1(vector <vector <pair<ll,string>>> v1) { cube.push_back(v1); }
    void set_data2(vector <vector <pair<ll,string>>> v2) { custom.push_back(v2); }
    void set_object_name(string name) { object_names.push_back(name); }
    void set_initializer(vector <tuple<short,int,int,string>> v3) { initializer.push_back(v3); }
    void set_test_size(ll k) { test_size=k; }
    int get_cube_size() { return cube.size(); }
    ll get_test_size() { return test_size; }
    void set_query_size(ll k) { query_size=k; }
    ll get_query_size() { return query_size; }
    void show_data();
    void header();
    void object_display();
    void mm(short ch);
    void set_file_name(string str) { file_name=str; }
    void destroy_integers() { integers.clear(); }
    void set_text_format() { file_name+=".txt"; }
    void set_docu_format() { file_name+=".doc"; }
    void build_file() { f1.open(file_name,ios::out); }
    void close_file() { f1.close(); }
    Three_D_objects()         //  constructor
    {
        test_size=1; query_size=1;
        test_print_status=false;
        query_print_status=false;
        file_name="";
    }
};

//*********************************************************************************************************************************

class main_menu
{
private:
    static string choice;  // type (class variable)  of main_class
public:
    void welcome();
    void header();
    void menu();
    void message_box();
    void message_box_2();
    void undo();
    void repos();
    void jump_to_main();
    void message(short);
    friend void function_of_object_one();
    friend void function_of_object_two();
    static void set_choice();
    static void set_dafault_choice_exe();
    main_menu() // default constructor
    {}
    ~main_menu()  // default deconstructor
    {}
};
string main_menu::choice="default_choice_404";  // type (class variable)  of main_class
void main_menu::set_choice()
{   string str;   cin>>str;    choice=str; }
void main_menu::set_dafault_choice_exe()
{ choice="exe";}

//*********************************************************************************************************************************

class object_type_one_menu:public main_menu  //parent of object_one , child of main_menu
{
public:
    void object_display(short);            //  function overloading
    void object_display(short,string&);     //  function overloading
    void object_display(short,string&,ll&);  //  function overloading
    void object_display(short,string&,ll&,vector <string>&);      //  function overloading
    void object_display(short,string&,ll&,vector <string>&,short&,vector <pair<short,string>>&);      //  function overloading
    void object_display(vector<tuple<bool,short,short,string>>&,short&);        // function overloading
    void object_display(class object_one&); //////////////////////////////////////////////////////////////////////////////////////
    void otom_phase00();          // for phase zero state zero
    void otom_phase01(string&);    // for phase zero state one
    void otom_phase02(string&);    // for phase zero state two
    void otom_phase13(string&,ll&);  // for phase one state three
    void otom_phase14_1(string&,ll&);  // for phase one state four part1
    void otom_phase14_2(short); //note: (not referenced because use to destroy initializers)  // for phase one state four part2
    void otom_phase14_3(vector <string>&); // for phase one state four part3
    void otom_phase15_1(string&,ll&,vector <string>&);  // for phase one state five part 1
    void otom_phase16_1(string &str,ll &t,vector <string> &v1,short&,vector <pair<short,string>>&);      // for phase one state six part 1
    void otom_phase27_1(vector <tuple<bool,short,short,string>>&,short&);                  // for phase two state seven part one
};

//*********************************************************************************************************************************

class object_one:public otom // child class of object_type_one_menu and grand child of main_menu (MULTIPLE INHERITANCE)
{
private:
    string name_of_object="";
    string state="state0";
    ll test_cases=1;   //default set to one
    short no_of_initializers=0;
    short no_of_containers=1;
    short no_of_attribute_for_custom=1;
    short index_of_custom_data_type=-1;
    string custom_structure="";
    vector <pair <short,string>> set_of_initializers;    // short_name -> sofi
    vector <string> unique_names_of_identifiers;         // short_name -> unoi
    vector <string> set_of_containers;                   // short_name -> sofc
    vector <pair <short,string>> containers;
    vector <pair<short,string>> print_containers;
    vector <tuple<bool,short,short,string>> set_of_all_attributes;  // short_name -> sofaa
    vector <vector <pair <short,string>>> three_D_cube;             // short_name -> _3dc
    vector <vector <bool>> status_of_three_D_cube;                  // short_name -> s_3dc
    vector <vector <string>> status_two_of_three_D_cube;            // short name -> s2_3dc;
    vector <vector <pair<ll,string>>> original_three_D_cube;        // short name -> o3dc;
    vector <pair<ll,string>> dummy_o3dc;
    vector <vector <pair<ll,string>>> dummy2_o3dc;
    vector <vector <pair<ll,string>>> custom_data_type;             // short name -> cdt
    vector <tuple<short,int,int,string>> stored_initializer;        // short name -> si
    ll free_integer=0;                                              // short name -> fi

public:
    vector <vector <pair<ll,string>>> cube_structure() { return o3dc; }                     // function to give 3d cube to 3d object
    vector <vector <pair<ll,string>>> custom_data_structure() { return cdt; }               // function to give custom data to 3d object
    string give_object_name() { return name_of_object; }                                    // function to give object's name
    vector <tuple<short,int,int,string>> initializer_data() { return stored_initializer; }  // function to give back initializer details
    ll give_test_size() { return test_cases; }                                              // function to return test case size
    short incrementer=0;
    string choice1="";
    bool type_test_size=true;
    bool check_the_test_case_range02(string&);                 // for phase zero state two
    bool check_the_initializers_choice_range13(string&);       // for phase one state three
    bool check_if_identifier_exist();                          // for phase one state three (general use)
    bool valid_length_of_initializers14();                     // for phase one state four
    void delete_all_initializers15();                          //for phase one state five
    string type_of_container16(short);                         // for phase one state six
    short count_nth_container16(string&);                      //for phase one state six
    void get_correct_print_container16(pair<short,string>&);   //for phase one state six
    void  build_set_of_all_attributes207();                    // for phase two state zero_seven (message and build)
    bool check_the_attribute_choice_range27(string&);          // for phase two state seven
    bool check_availability_of_attribute27(short&);            // for phase two state seven
    void object_display_in_phase_two27();                      // for phase two state seven
    void object_display_in_phase_three308();                   // for phase three state eight
    void object_display_in_phase_three38();                    // for phase three state eight
    void reset_three_dimensional_object27();                   // for phase two state seven
    void delete_all_containers();                              // phase and state yet to be decided ..........................................
    void name_the_object00();                                  // for phase zero state zero
    void main_controller();
    object_one()                                               // constructor
    {
        name_of_object="";
        test_cases=1;
        state="state0";
        choice1="";
        no_of_initializers=0;
        no_of_containers=1;
        incrementer=0;
        no_of_attribute_for_custom=1;
        custom_structure="";
        index_of_custom_data_type=-1;
        type_test_size=true;
    }
};

//*********************************************************************************************************************************

void function_of_object_one(); // friend function of class main menu
void function_of_object_two(); // friend function of class main menu

//*********************************************************************************************************************************

int main()
{
  srand(time(NULL));
  short initial_fg_color = getfgcolor();
  short initial_bg_color = getbgcolor();
  sfc(ww);
  main_menu object_of_main_menu1;
  // for setting font color        use sfc( color_name ) function
  // for setting background color  use sbg( color_name ) function
  /*
  colors available are:
  black,        -->> bb
  dark_blue,    -->> db
  dark_green,   -->> dg
  dark_cyan,    -->> dc
  dark_red,     -->> dr
  dark_magenta, -->> dm
  dark_yellow,  -->> dy
  light_gray,   -->> lgg
  dark_gray,    -->> dgg
  light_blue,   -->> lb
  light_green,  -->> lg
  light_cyan,   -->> lc
  light_red,    -->> lr
  light_magenta,-->> lm
  light_yellow, -->> lyobject_of_main_menu1
  white         -->> ww
  */
  // for arranging the coordinates use gxy( x_coordinates, y_coordinates  )  function
  omm1.welcome();
  omm1.menu();
  return 0;
}

//*********************************************************************************************************************************

void main_menu::welcome()
{
  sfc(ww);gxy(5,5);
  cout<<"WELCOME TO ";sfc(lm);printf("BUILDING CUBES");sfc(ww);printf(" (version 1.1)\n\n\n");
  sfc(lc);cout<<"  You are advised to Maximize your screen to have complete display\n\n\n";sfc(ww);
  cout<<"     Press ";  sbc(dr);sfc(lr); cout<<" ENTER ";sbc(bb);sfc(ww); cout<<" to continue"; getch(); system("CLS");
}

//*********************************************************************************************************************************

void main_menu::header()
{
    gxy(0,0);sbc(dm);
    printf(" BUILDING  CUBES    ");sfc(dgg); printf("Version (1.1)                     ");sfc(ww);
    printf("Type ");sfc(lr);printf("exe");sfc(ww);printf(" and ");sfc(lr);printf("ENTER");sfc(ww);printf(" to");sbc(dr);printf(" Exit");sbc(bb); printf("\n\n  ");
}

//*********************************************************************************************************************************

void main_menu::menu()
{
    while(1)
    {
    header();
    printf("MAIN MENU\n\n");
    printf("1. OBJECT TYPE TEST CASES");printf("     ");sbc(dr);sfc(ww);printf("press ");sfc(lr);printf("1");sfc(ww);printf(" and ");sfc(lr);printf("ENTER");sfc(ww);printf(" \n");sbc(bb);sfc(ww);
    printf("\n2. QUERIES TYPE TEST CASES");printf("    ");sbc(dr);sfc(ww);printf("press ");sfc(lr);printf("2");sfc(ww);printf(" and ");sfc(lr);printf("ENTER");sfc(ww);printf(" \n");sbc(bb);sfc(ww);
    printf("\n3.(NEW USER) Learn how to create TEST CASES in this software ");sbc(dr);sfc(ww);printf("press ");sfc(lr);printf("3");sfc(ww);printf(" and ");sfc(lr);printf("ENTER");sfc(ww);printf(" \n");sbc(bb);sfc(ww);
    msb();mm(1);
    set_choice();
    if(choice=="1")
    {
        function_of_object_one();
        system("cls");
    }
    else if(choice=="2")
    {
        function_of_object_two();
        system("cls");
    }
    else if(choice=="3")
    {
        cout<<"IN Progress, Still working"; getch();
        system("cls");
    }
    else if(choice=="exe")
    {
        break;
    }
    else
    {
        mm(2);
    }
    if(choice=="exe")
    {
        break;
    }
    }
}

//*********************************************************************************************************************************

void main_menu::msb()
{
    gxy(0,20);sbc(dr); printf("MESSAGE BOX\n\n");sbc(bb);
}

//*********************************************************************************************************************************

void main_menu::msb2()
{
    gxy(0,25);sbc(dr);printf("MESSAGE BOX");sbc(bb);
}

//*********************************************************************************************************************************

void main_menu::undo()
{
    gxy(54,1); printf("Type ");sfc(lr);printf("und");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf(" to ");sbc(lgg);printf("UNDO");sbc(bb);
}

//*********************************************************************************************************************************

 void main_menu::repos()
 {
    gxy(0,4);sfc(lc);printf("\n     COMMANDS\n");sfc(ww);
    printf(" Type the corresponding key and ");sbc(dr);printf("ENTER");sbc(bb);printf(" to ");sfc(lc);printf("add ATTRIBUTE into your object\n\n");sfc(ww);
    printf(" Type ");sfc(lr);printf("rep");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf(" to ");sfc(lc);printf("Reposition the ATTRIBUTES");sfc(ww);printf("\n\n");
    printf(" Type ");sfc(lr);printf("nex");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf(" to ");sfc(lc);printf("Move in next Line");sfc(ww);printf("\n");
 }

//*********************************************************************************************************************************

void main_menu::jump_to_main()
{
    gxy(1,1); printf("Type ");sfc(lr);printf("min");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf(" to go back to MAIN MENU");
}

//*********************************************************************************************************************************

void main_menu::mm(short ch)
{
    switch (ch)
    {
    case 0:
        {
            gxy(5,26);printf("ENTER YOUR CHOICE ->   "); break;
        }
    case 1:
        {
            gxy(5,22);printf("ENTER YOUR CHOICE ->   "); break;
        }
    case 2:
        {
            gxy(5,23);printf("Please enter a valid choice, now  press ");sbc(dr);printf("ENTER");sbc(bb);printf(" key");
            getch(); system("cls"); break;
        }
    case 3:
        {
            gxy(5,21);printf("You are in PHASE ZERO");printf(". Give a name to your object"); break;
        }
    case 4:
        {
            gxy(5,7);printf("Name your object -> "); break;
        }
    case 5:
        {
            gxy(5,22);printf("Nothing to undo in phase zero");
            gxy(5,23);printf("Press ");sbc(dr);printf("ENTER");sbc(bb);printf(" to continue"); break;
        }
    case 6:
        {
            gxy(5,22);printf("Please provide a smaller name of object");
            gxy(5,23);printf("Press ");sbc(dr);printf("ENTER");sbc(bb);printf(" to continue"); break;
        }
     case 7:
        {
            gxy(0,7);printf("Do you want to create multiple copies of your object");
            printf("\n\n  ");
            printf("If YES then type ");sfc(lr);printf("yes");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);
            printf("\n\n  ");
            printf("If  NO then type  ");sfc(lr);printf("no");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb); break;
        }
     case 8:
        {
            gxy(1,8);printf("How many copies would you like to create"); break;
        }
     case 9:
        {
            gxy(2,22);printf("Only valid integers in range [1 - 1000000] are possible"); break;
        }
     case 10:
        {
            gxy(1,7);printf("Insert ");sfc(ly);printf("INITIALIZERS");sfc(ww);printf(" into your object");
            gxy(1,9);printf("You can add from range [0 to 10] ");sfc(ly);printf("INITIALIZERS");sfc(ww);
            gxy(1,11);sfc(lr);printf("NOTE: ");sfc(ly);printf("INITIALIZERS");sfc(ww);printf(" can be only of INTEGER TYPE");
            gxy(1,13);printf("How many ");sfc(ly);printf("INITIALIZERS");sfc(ww);printf(" would you like to add ?"); break;
        }
     case 11:
        {
            gxy(2,22);printf("You can add ");sfc(ly);printf("INITIALIZERS");sfc(ww);printf(" in range of [0 - 10] "); break;
        }
     case 12:
        {
            gxy(1,6);printf("Give unique names to your ");sfc(ly);printf("INITIALIZERS");sfc(ww);
            gxy(1,7);sfc(lr);printf("NOTE: ");sfc(ww);printf("Length of names should be less then 5 character"); break;
        }
     case 13:
        {
            gxy(2,22);printf("The name of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" has to be less then 5 characters");
            gxy(5,23);printf("Press ");sbc(dr);printf("ENTER");sbc(bb);printf(" to continue"); break;
        }
     case 14:
        {
            gxy(2,22);printf("This name of IDENTIFIER has been already used, try a different name");
            gxy(5,23);printf("Press ");sbc(dr);printf("ENTER");sbc(bb);printf(" to continue"); break;
        }
     case 15:
        {
            gxy(1,7);printf("Insert ");sfc(lg);printf("CONTAINERS");sfc(ww);printf(" into your object");
            gxy(1,9);printf("You can add from range [1 to 10] ");sfc(lg);printf("CONTAINERS");sfc(ww);
            gxy(1,11);printf("How many ");sfc(lg);printf("CONTAINERS");sfc(ww);printf(" would you like to add ?"); break;
        }
    case 16:
        {
            gxy(2,22);printf("You can add ");sfc(lg);printf("CONTAINERS");sfc(ww);printf(" in range of [1 - 10] "); break;
        }
    case 17:
        {
            gxy(1,5);printf("Type the corresponding key and ");sbc(dr);printf("ENTER");sbc(bb);printf(" to add ");sfc(lg);printf("CONTAINER");sfc(ww);
            gxy(1,6);printf("List of ");sfc(lg);printf("CONTAINERS\n");sfc(ww);
            printf("1. INTEGER ->");printf("  type ");sfc(lr);printf("1");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf("\n");
            printf("2. REAL    ->");printf("  type ");sfc(lr);printf("2");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf("\n");
            printf("3. ARRAY   ->");printf("  type ");sfc(lr);printf("3");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf("\n");
            printf("4. STRING  ->");printf("  type ");sfc(lr);printf("4");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf("\n");
            printf("5. MATRIX  ->");printf("  type ");sfc(lr);printf("5");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf("\n");
            printf("6. TREE    ->");printf("  type ");sfc(lr);printf("6");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf("\n");
            printf("7. GRAPH   ->");printf("  type ");sfc(lr);printf("7");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf("\n");
            printf("8. CUSTOM_data_type -> ");printf("  type ");sfc(lr);printf("8");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf("\n"); break;
        }
    case 18:
        {
            gxy(2,21);printf("Add ");sfc(lg);printf("CONTAINERS");sfc(ww);printf(" by typing the keys in range [1 - 7] "); break;
        }
    case 19:
        {
            gxy(3,3);sfc(lc);printf("Bravo");sfc(ww);gxy(3,4);printf("You have successfully completed ");sbc(dy);printf("PHASE ONE");sbc(bb);printf(" and ");
            sbc(dy);printf("PHASE TWO");sbc(bb);
            gxy(3,6);printf("Now you are moving towards ");sbc(dy);printf("PHASE THREE");sbc(bb);
            gxy(3,8);printf("In this phase you have to arrange positions of attributes in your object");
            gxy(3,10);printf("You are advised to ");sfc(lc);printf("MAXIMIZE");sfc(ww);printf(" you screen to have complete display");
            gxy(3,12);printf("Press ");sbc(dr);printf("ENTER");sbc(bb);printf(" to continue..."); break;
        }
    case 20:
        {
            gxy(3,3);sfc(lc);printf("Nice");sfc(ww);gxy(3,4);printf("You have successfully completed ");sbc(dy);printf("PHASE ONE");sbc(bb);
            gxy(3,6);printf("Now you are moving towards ");sbc(dy);printf("PHASE TWO");sbc(bb);
            gxy(3,8);printf("In this phase you have to add attributes in your object");
            gxy(3,9);printf("You may add two types of attributes\n\n");
            sfc(ly);printf("INITILIZERS");sfc(ww);printf(" -> These are used to provide values to data types like\n");sfc(lc);
            printf("               (size of ARRAY[])\n");
            printf("               (size of MATRIX[][])\n");
            printf("               (size of STRING{})\n");
            printf("               (nodes in TREE())\n");
            printf("               (nodes in GRAPH())\n\n");sfc(ww);
            sfc(lg);printf("CONTAINERS");sfc(ww);printf(" -> These are set of primitive data types\n");
            printf("\n");printf("Press ");sbc(dr);printf("ENTER");sbc(bb);printf(" to continue..."); break;
        }
    case 21:
        {
            gxy(5,27);printf("Please enter a valid choice, now  press ");sbc(dr);printf("ENTER");sbc(bb);printf(" key");
            getch(); break;
        }
    case 22:
        {
            gxy(0,27);printf("This ATTRIBUTE is already inserted, now press ");sbc(dr);printf("ENTER");sbc(bb);printf(" key");
            getch(); break;
        }
     case 23:
        {
            gxy(0,27);printf("You must add at least one ATTRIBUTE to move into next line, now press ");sbc(dr);printf("ENTER");sbc(bb);printf(" key");
            getch(); break;
        }
     case 24:
        {
            printf("\n  What type of integer would you like to create ?\n");
            printf("\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create -> RANDOM NUMBER");
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create -> ODD NUMBER");
            printf("\n  ");sfc(lr);printf("press 3");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create -> EVEN NUMBER");
            printf("\n  ");sfc(lr);printf("press 4");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create -> PRIME NUMBER");
            printf("\n  ");sfc(lr);printf("press 5");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create -> NON PRIME NUMBER");
            printf("\n  ");sfc(lr);printf("press 6");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create -> INCREMENTED NUMBER");
            printf("\n  ");sfc(lr);printf("press 7");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create -> Nth FIBONACCI NUMBER");
            printf("\n  ");sfc(lr);printf("press 8");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create -> GET_ALL_UNIQUE_RANDOM NUMBERS");
            printf("\n\n  Type your choice  -> "); break;
        }
     case 25:
        {
            printf("\n\n   Enter the ");sfc(ly);printf("Minimum");sfc(ww);printf(" value and then ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (-10 to the power 18) to (10 to the power 18)");
            printf("\n\n  Minimum value ->  "); break;
        }
     case 26:
        {
            printf("\n\n   Enter the ");sfc(ly);printf("Maximum");sfc(ww);printf(" value and then ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (-10 to the power 18) to (10 to the power 18)");
            printf("\n\n  Maximum value ->  "); break;
        }
     case 27:
        {
            printf("\n\n   Enter the ");sfc(ly);printf("Minimum");sfc(ww);printf(" value and then ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (2) to (10 to the power 7)");
            printf("\n\n  Minimum value ->  "); break;
        }
     case 28:
        {
            printf("\n\n   Enter the ");sfc(ly);printf("Maximum");sfc(ww);printf(" value and then ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (2) to (10 to the power 7)");
            printf("\n\n  Maximum value ->  "); break;
        }
     case 29:
        {
            printf("\n\n   Enter the ");sfc(ly);printf("Minimum");sfc(ww);printf(" value and then ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (1) to (10 to the power 12)");
            printf("\n\n  Minimum value ->  ");break;
        }
     case 30:
        {
            printf("\n\n   Enter the ");sfc(ly);printf("Maximum");sfc(ww);printf(" value and then ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (1) to (10 to the power 12)");
            printf("\n\n  Maximum value ->  "); break;
        }
     case 31:
        {
            printf("\n\n   Enter the ");sfc(ly);printf("Starting");sfc(ww);printf(" value and then ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (-10 to the power 18) to (10 to the power 18)");
            printf("\n\n  Maximum value ->  ");  break;
        }
     case 32:
        {
            printf("\n\n   Enter the ");sfc(ly);printf("Increment");sfc(ww);printf(" value and then ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (-10 to the power 18) to (10 to the power 18)");
            printf("\n\n  Increment value ->  ");  break;
        }
     case 33:
        {
            printf("\n\n   Enter the ");sfc(ly);printf("Minimum");sfc(ww);printf(" value and then ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (1) to (93)");
            printf("\n\n  Minimum value ->  ");break;
        }
     case 34:
        {
            printf("\n\n   Enter the ");sfc(ly);printf("Maximum");sfc(ww);printf(" value and then ");sbc(dr);printf(" ENTER ");sbc(bb);\
            printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (1) to (93)");
            printf("\n\n  Maximum value ->  "); break;
        }
     case 35:
        {
            printf("\n  What type of integer would you like to insert ?\n");
            printf("\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to insert -> RANDOM NUMBER");
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to insert -> ODD NUMBER");
            printf("\n  ");sfc(lr);printf("press 3");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to insert -> EVEN NUMBER");
            printf("\n  ");sfc(lr);printf("press 4");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to insert -> PRIME NUMBER");
            printf("\n  ");sfc(lr);printf("press 5");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to insert -> NON PRIME NUMBER");
            printf("\n  ");sfc(lr);printf("press 6");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to insert -> INCREMENTED NUMBER");
            printf("\n  ");sfc(lr);printf("press 7");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to insert -> Nth FIBONACCI NUMBER");
            printf("\n\n  Type your choice  -> "); break;
        }
     case 36:
        {
            printf("\n\n    Enter a valid choice");
            printf("\n\n    Now press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to continue"); break;
        }
     case 37:
        {
            printf("\n\n   Please check the range and enter a valid Integer");
            printf("\n\n   Now press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to continue"); break;
        }
     case 38:
        {
            printf("\n\n   Maximum value must be greater then Minimum value");
            printf("\n\n   press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to change"); break;
        }
     case 39:
        {
            printf("\n\n  No odd Integer exist in the given range");
            printf("\n\n To change Maximum value, press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww); break;
        }
     case 40:
        {
            printf("\n\n  No even Integer exist in the given range");
            printf("\n\n To change Maximum value, press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww); break;
        }
     case 41:
        {
            printf("\n\n   No Prime Integers exist in the given range.");
            printf("\n\n   press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to change the maximum value"); break;
        }
     case 42:
        {
            printf("\n\n   No Non_Prime Integer exist in the given range.");
            printf("\n\n   press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to change the maximum value"); break;
        }
     case 43:
        {
            printf("\n\n   Set the precision for your REAL NUMBER...");
            printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("\n   (You can set form range [0 to 100])\n");
            printf("\n   Enter the precision ->  ");break;
        }
     case 44:
        {
            printf("\n\n   Note -> (Max_value - Min_value) should be >=1 ");
            printf("\n\n   press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to change"); break;
        }
     case 45:
        {
            printf("\n  What type of ARRAY would you like to create ?\n");
            printf("\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create -> ARRAY OF INTEGER");
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create -> ARRAY OF REAL");
            printf("\n  ");sfc(lr);printf("press 3");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create -> ARRAY OF STRING");
            printf("\n  ");sfc(lr);printf("press 4");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create -> ARRAY OF PERMUTATION");
            printf("\n  ");sfc(lr);printf("press 5");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create -> ARRAY OF UNIQUE NUMBER");
            printf("\n\n  Type your choice  -> "); break;
        }
     case 46:
        {
            printf("\n\n    What type of string you want to create ?");
            printf("\n\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);printf(" ENTER ");sbc(bb);printf(" to create ");sfc(ly);printf("DEFAULT STRING");sfc(ww);printf(" (user defined)");
            printf("\n\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);printf(" ENTER ");sbc(bb);printf(" to create ");sfc(lg);printf("INPUT   STRING");sfc(ww);printf(" (computer generated)");
            printf("\n\n   Enter your choice ->  ");  break;
        }
     case 47:
        {
            printf("\n\n  Type the Default String and then press ");sbc(dr);printf("ENTER");sbc(bb);
            sfc(lr);printf("\n  NOTE: ");sfc(ww);printf("Do not include spaces in your string");
            printf("\n\n  Type your string  ->  "); break;
        }
     case 48:
        {
            printf("\n\n  Type the Input String and then press ");sbc(dr);printf("ENTER");sbc(bb);
            sfc(lr);printf("\n  NOTE: ");sfc(ww);printf("Do not include spaces in your string");
            printf("\n\n  Type your string  ->  "); break;
        }
     case 49:
        {
            printf("\n\n  What type of STRING you want to create ?\n");
            sfc(lr);printf("\n  press 1");sfc(ww);printf(" and ");sbc(dr);printf(" ENTER ");sbc(bb);printf(" to create -> ");sfc(ly);printf("RANDOM STRING");
            sfc(lr);printf("\n  press 2");sfc(ww);printf(" and ");sbc(dr);printf(" ENTER ");sbc(bb);printf(" to create -> ");sfc(ly);printf("SORTED ASSENDING STRING");
            sfc(lr);printf("\n  press 3");sfc(ww);printf(" and ");sbc(dr);printf(" ENTER ");sbc(bb);printf(" to create -> ");sfc(ly);printf("SORTED DESCENDING STRING");
            sfc(lr);printf("\n  press 4");sfc(ww);printf(" and ");sbc(dr);printf(" ENTER ");sbc(bb);printf(" to create -> ");sfc(ly);printf("PALINDROMIC STRING");sfc(ww);
            printf("\n\n  Enter your choice ->  "); break;
        }
     case 50:
        {
            printf("\n\n  Select a valid mode of create\n");
            sfc(lr);printf("\n  press 1");sfc(ww);printf(" and ");sbc(dr);printf(" ENTER ");sbc(bb);printf(" to generate -> ");sfc(ly);printf(" REPEATED   SYMBOL STRING");
            sfc(lr);printf("\n  press 2");sfc(ww);printf(" and ");sbc(dr);printf(" ENTER ");sbc(bb);printf(" to generate -> ");sfc(ly);printf(" ALL UNIQUE SYMBOL STRING");sfc(ww);
            printf("\n\n Enter your choice -> ");  break;
        }
     case 51:
        {
            printf("\n\n Enter the size of STRING and then press ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (1) to (10 to the power 6)");
            printf("\n\n SIZE ->  "); break;
        }
     case 52:
        {
            printf("\n\n  You can add following Attributes\n");
            printf("\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to add -> INTEGER");
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to add -> REAL");
            printf("\n  ");sfc(lr);printf("press 3");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to add -> STRING");
            printf("\n  ");sfc(lr);printf("press 4");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to add -> PERMUTATION");
            printf("\n  ");sfc(lr);printf("press 5");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to add -> UNIQUE NUMBER");
            printf("\n  ");sfc(lr);printf("press 6");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to add -> SPACE");
            printf("\n\n  Type your choice  -> "); break;
        }
     case 53:
        {
            printf("\n  Select a valid order for this column of your ");sfc(lg);printf("CUSTOM_{}\n");sfc(ww);
            printf("\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to apply -> RANDOMLY ARRANGED");
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to apply -> SORTED ASCENDING");
            printf("\n  ");sfc(lr);printf("press 3");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to apply -> SORTED DESCENDING");
            printf("\n  Enter your choice ->  "); break;
        }
     case 54:
        {
            printf("\n\n  Select a valid ");sfc(lm);printf("ORDER");sfc(ww);printf(" for your ");sfc(lg);printf("ARRAY[]\n");sfc(ww);
            printf("\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to apply -> RANDOMLY ARRANGED");
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to apply -> SORTED ASCENDING");
            printf("\n  ");sfc(lr);printf("press 3");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to apply -> SORTED DESCENDING");
            printf("\n\n  Enter your choice ->  "); break;
        }
     case 55:
        {
            printf("\n\n  Select a valid ");sfc(lm);printf("Print Format");sfc(ww);printf(" for your");sfc(lg);printf(" ARRAY[] \n");sfc(ww);
            printf("\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to select -> Space Separated ");
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to select -> Line  Separated");
            printf("\n\n  Type your choice  -> "); break;
        }
     case 56:
        {
            printf("\n\n  Enter the Size of your ");sfc(lg);printf("ARRAY[]");sfc(ww);printf(" and then press ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (1) to (10 to the power 6)");
            printf("\n\n  If you want to choose an ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" then type ");sfc(lm);printf("int");sfc(ww);printf(" and ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n\n  Type your choice ->  "); break;
        }
     case 57:
        {
            printf("\n\n  Type  the  ");sfc(ly);printf("INITIALIZER");sfc(ww);printf("  name  and  ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);
            printf("\n  To cancel this feature type ");sfc(lm);printf("cl");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);
            printf("\n\n  Type your choice ->  "); break;
        }
     case 58:
        {
            printf("\n\n   Please type a valid choice");
            printf("\n\n   Now press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to continue");  break;
        }
     case 59:
        {
            printf("\n\n  Oops, you have not defined any ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" yet, you can not use this feature.");
            printf("\n\n   Now press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to continue"); break;
        }
     case 60:
        {
            printf("\n  What type of MATRIX would you like to create ?\n");
            printf("\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create -> MATRIX OF INTEGER");
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create -> MATRIX OF REAL");
            printf("\n  ");sfc(lr);printf("press 3");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create -> MATRIX OF STRING");
            printf("\n  ");sfc(lr);printf("press 4");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create -> MATRIX OF PERMUTATION");
            printf("\n  ");sfc(lr);printf("press 5");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create -> MATRIX OF UNIQUE NUMBER");
            printf("\n\n  Type your choice  -> "); break;
        }
     case 61:
        {
            printf("\n\n  Enter the Number of Rows for your ");sfc(lg);printf("MATRIX[]");sfc(ww);printf(" and then press ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (1) to (10 to the power 6)");
            printf("\n\n  If you want to choose an ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" then type ");sfc(lm);printf("int");sfc(ww);printf(" and ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n\n  Type your choice ->  "); break;
        }
     case 62:
        {
            printf("\n\n  Enter the Number of Columns for your ");sfc(lg);printf("MATRIX[]");sfc(ww);printf(" and then press ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (1) to (10 to the power 6)");
            printf("\n\n  If you want to choose an ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" then type ");sfc(lm);printf("int");sfc(ww);printf(" and ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n\n  Type your choice ->  "); break;
        }
     case 63:
        {
            printf("\n\n  Select a valid ");sfc(lm);printf("COLUMN ORDER");sfc(ww);printf(" for your ");sfc(lg);printf("MATRIX[][]\n");sfc(ww);
            printf("\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to apply -> COLUMN WISE RANDOMLY ARRANGED");
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to apply -> COLUMN WISE SORTED ASCENDING");
            printf("\n  ");sfc(lr);printf("press 3");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to apply -> COLUMN WISE SORTED DESCENDING");
            printf("\n\n  Enter your choice ->  "); break;
        }
     case 64:
        {
            printf("\n\n  Select a valid ");sfc(lm);printf("ROW ORDER");sfc(ww);printf(" for your ");sfc(lg);printf("MATRIX[][]\n");sfc(ww);
            printf("\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to apply -> ROW WISE RANDOMLY ARRANGED");
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to apply -> ROW WISE SORTED ASCENDING");
            printf("\n  ");sfc(lr);printf("press 3");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to apply -> ROW WISE SORTED DESCENDING");
            printf("\n\n  Enter your choice ->  "); break;
        }
     case 65:
        {
            printf("\n\n  You are only allowed to create 1000000 Number of Cells in your ");sfc(lg);printf("Matrix[][]");sfc(ww);printf(" at a time.");
            printf("\n\n  However, as per the details of Rows and Columns of your ");sfc(lg);printf("Matrix[][]");sfc(ww);
            printf("Number of cells is = ");  break;
        }
     case 66:
        {
            printf("\n\n  So you are advised to reduce the Number of Columns from your ");sfc(lg);printf("Matrix[][]");sfc(ww);
            sfc(lr);printf("\n  Note: ");sfc(ww);printf("Number of cells = Rows*Columns");
            printf("\n\n   Now press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to change Number of Columns");  break;
        }
     case 67:
        {
            printf("\n\n  Enter the number of Attributes you want to insert and then press ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (1) to (20)");
            printf("\n\n  Type your choice ->  "); break;
        }
     case 68:
        {
            printf("\n\n  Type the String and then press ");sbc(dr);printf("ENTER");sbc(bb);
            sfc(lr);printf("\n  NOTE: ");sfc(ww);printf("Do not include spaces in your string");
            printf("\n        ");printf("Range : Length must be less then 20 characters");
            printf("\n\n  Type your string  ->  "); break;
        }
     case 69:
        {
            printf("\n\n  Enter the number of Rows you want to create in your ");sfc(lg);printf("CUSTOM_{}");sfc(ww);printf(" and then press ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (1) to (10 to the power 6)");
            printf("\n\n  If you want to choose an ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" then type ");sfc(lm);printf("int");sfc(ww);printf(" and ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n\n  Type your choice ->  "); break;
        }
     case 70:
        {
            printf("\n\n Enter the size of Palindromic STRING and then press ");sbc(dr);printf(" ENTER ");sbc(bb);
            printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (1) to ("); break;
        }
     case 71:
        {
            printf("\n\n  Type the String and then press ");sbc(dr);printf("ENTER");sbc(bb);
            sfc(lr);printf("\n  NOTE: ");sfc(ww);printf("Do not include spaces in your string");
            printf("\n        ");printf("Range : Length must be less then 20 characters");
            printf("\n\n  Tip:");sfc(lg);printf("If you want that your GRAPH must have all unique WEIGHTS over Edges, then   you must provide STRING which has large number of permutations");
            printf("\n  And if you want that your GRAPH must have some repeated WEIGHTS over EDGES,     then you must provide STRING which has fewer number of permutations");
            sfc(ww);printf("\n\n  Enter the STRING -> "); break;
        }
     case 72:
        {
            printf("\n\n  Tip:");sfc(lg);printf("If you want that your GRAPH must have all unique WEIGHTS over Edges, then   you must provide a large range between minimum and maximum value");
            printf("\n  And if you want that your GRAPH must have some repeated WEIGHTS over EDGES,     then you must provide small range between minimum and maximum value\n");sfc(ww); break;
        }
     case 73:
        {
            printf("\n\n  Tip:");sfc(lg);printf("If you want that your TREE must have all unique WEIGHTS over Edges, then    you must provide a large range between minimum and maximum value");
            printf("\n  And if you want that your TREE must have some repeated WEIGHTS over EDGES,    then you must provide small range between minimum and maximum value\n");sfc(ww); break;
        }
     case 74:
        {
            printf("\n\n  Type the String and then press ");sbc(dr);printf("ENTER");sbc(bb);
            sfc(lr);printf("\n  NOTE: ");sfc(ww);printf("Do not include spaces in your string");
            printf("\n        ");printf("Range : Length must be less then 20 characters");
            printf("\n\n  Tip:");sfc(lg);printf("If you want that your TREE  must have all unique WEIGHTS over Edges, then   you must provide STRING which has large number of permutations");
            printf("\n  And if you want that your GRAPH must have some repeated WEIGHTS over EDGES,     then you must provide STRING which has fewer number of permutations");
            sfc(ww);printf("\n\n  Enter the STRING -> "); break;
        }
     case 75:
        {
            printf("\n\n   In Perfect Binary Tree, number of nodes must be odd");
            printf("\n  You are requested to add odd number of nodes");
            printf("\n\n   Now press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to continue"); break;
        }
     case 76:
        {
            printf("\n\n  Do you want to use any ");sfc(lm);printf("STRING");sfc(ww);printf(" to represent connection between Nodes and         WEIGHTS");
            printf("\n\n  Fox example:  1 ");sfc(lm);printf("->");sfc(ww);printf(" 2");sfc(lm);printf(" cost ");sfc(ww);printf("10");
            printf("\n  In this example node One is connected with node Two and cost to travel the      edge is Ten which is represented by STRING [");sfc(lm);printf("cost");sfc(ww);printf("]");
            printf("\n\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to enabled this feature ");
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to disabled this feature ");
            printf("\n\n  Enter your choice  -> ");break;
        }
     case 77:
        {
            printf("\n\n  Enter your STRING "); sfc(lr);printf("\n Note: ");sfc(ww);printf("Do not include space in your STRING");
            printf("\n\n  Type your String  ->  "); break;
        }
     case 78:
        {
            printf("\n\n  Do you want to add any ");sfc(lm);printf("STRING");sfc(ww);printf(" to represent connections between Nodes");
            printf("\n\n  Fox example:  1 ");sfc(lm);printf("->");sfc(ww);printf(" 2");
            printf("\n  In this example node One is connected with node Two via STRING [");sfc(lm);printf("->");sfc(ww);printf("]");
            printf("\n\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to enabled this feature ");
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to disabled this feature ");
            printf("\n\n  Enter your choice  -> "); break;
        }
     case 79:
        {
            printf("\n\n  What type of ");sfc(lg);printf("TREE");sfc(ww);printf(" you want to create ?");
            printf("\n\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create");sfc(lm);printf("  ROOTED BINARY TREE");sfc(ww);
            sfc(lc);printf("\n  In rooted binary tree, every node has at most two children\n");sfc(ww);;
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create");sfc(lm);printf(" FULL BINARY TREE ");sfc(ww);
            sfc(lc);printf("\n  In full binary tree every node other than the leaves has two children.\n");sfc(ww);
            printf("\n  ");sfc(lr);printf("press 3");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create");sfc(lm);printf(" PERFECT BINARY TREE ");sfc(ww);
            sfc(lc);printf("\n  In perfect binary tree every internal node has exactly two child nodes and      all the leaf nodes are at the same level\n");sfc(ww);
            printf("\n  ");sfc(lr);printf("press 4");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create");sfc(lm);printf(" BINARY SEARCH  TREE ");sfc(ww);
            sfc(lc);printf("\n  In binary search tree, internal nodes each store a key greater than all the     keys in the node's left subtree and less than those in its right subtree.\n");sfc(ww);
            printf("\n\n  Enter your choice  -> "); break;
        }
     case 80:
        {
            printf("\n\n  What type of ");sfc(lg);printf("GRAPH");sfc(ww);printf(" you want to create ?");
            printf("\n\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create UNDIRECTED GRAPH ");
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to create DIRECTED GRAPH ");
            printf("\n\n  Enter your choice  -> "); break;
        }
     case 81:
        {
            printf("\n\n  Enter the number of nodes in your ");sfc(lg);printf("TREE");sfc(ww);
            sfc(lr);printf("\n Note: ");sfc(ww);printf("Range -> (2) to (10 to the power 5)");
            printf("\n\n  Enter your choice  -> "); break;
        }
     case 82:
        {
            printf("\n\n  Enter the number of nodes in your ");sfc(lg);printf("TREE");sfc(ww);
            sfc(lr);printf("\n Note: ");sfc(ww);printf("Range -> (2) to (10 to the power 5)");
            sfc(lg);printf("\n\n  Make sure that number of nodes are odd");sfc(ww);
            printf("\n\n  Enter your choice  -> "); break;
        }
     case 83:
        {
            printf("\n\n  Enter the number of nodes in your ");sfc(lg);printf("TREE");sfc(ww);
            sfc(lr);printf("\n\n Note: ");sfc(ww);printf("Number of nodes in Perfect Binary Tree must be equal to                   [(2 to the power x) -1], where x can have value from 2 to 16");
            printf("\n\n  For your convenience  we have provided set of number of nodes which are         possible in this range");
            printf("\n\n  Nodes = ");sfc(lc);printf("{ 3, 7, 15, 31, 63, 127, 255, 511, 1021, 2047, 4095, 8191, 16383,       32767, 65535 } ");sfc(ww);
            printf("\n\n  Enter your choice  -> ");break;
        }
     case 84:
        {
            printf("\n\n  Enter the number of nodes in your ");sfc(lg);printf("GRAPH");sfc(ww);
            sfc(lr);printf("\n Note: ");sfc(ww);printf("Range -> (2) to (10 to the power 5)");
            printf("\n\n  Enter your choice  -> "); break;
        }
     case 85:
        {
            printf("\n\n  The range of this ");sfc(ly);printf("Initializer");sfc(ww);printf(" does not matches with your edge range");
            printf("\n  You can not select this ");sfc(ly);printf("Initializer");sfc(ww);
            printf("\n\n  Press ");sbc(dr);printf("Enter");sbc(bb);printf(" to continue..."); break;
        }
     case 86:
        {
            printf("\n\n  Enter the starting index of the node");
            sfc(lr);printf("\n Note: ");sfc(ww);printf("Range -> (-10 to the power 9) to (10 to the power 9)");
            sfc(lg);printf("\n\n  We recommend you to choose index 0 or above to avoid negative indexing in       your TREE");sfc(ww);
            printf("\n\n  Enter your choice  -> "); break;
        }
     case 87:
        {
            printf("\n\n  Enter the starting index of the node");
            sfc(lr);printf("\n Note: ");sfc(ww);printf("Range -> (-10 to the power 9) to (10 to the power 9)");
            sfc(lg);printf("\n\n  We recommend you to choose index 0 or above to avoid negative indexing in your Graph");sfc(ww);
            printf("\n\n  Enter your choice  -> "); break;
        }
     case 88:
        {
            printf("\n\n  Do you want to give WEIGHT to your EDGES ");
            printf("\n\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to include the WEIGHT of EDGES ");
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to disable the WEIGHT of EDGES ");
            printf("\n\n  Enter your choice  -> "); break;
        }
     case 89:
        {
            printf("\n\n  What type of WEIGHT you want to add ");
            printf("\n\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to add INTEGER ");
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to add REAL ");
            printf("\n  ");sfc(lr);printf("press 3");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to add STRING ");
            printf("\n  ");sfc(lr);printf("press 4");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to add PERMUTATION ");
            printf("\n\n  Enter your choice  -> "); break;
        }
    }
}


//**********************************************************************************************************************************
//**********************************************************************************************************************************


void function_of_object_one()
{
    string choice;
    main_menu dummy_obj;
    object_one o1;
    Three_D_objects obj1;
    o1.main_controller();
    if(o1.choice1=="min") { return; }
    if(o1.choice1=="exe") { main_menu::set_dafault_choice_exe(); return;}
    obj1.set_data1(o1.cube_structure());
    obj1.set_data2(o1.custom_data_structure());
    obj1.set_object_name(o1.give_object_name());
    obj1.set_initializer(o1.initializer_data());
    obj1.set_test_size(o1.give_test_size());
    obj1.mm(1);getch();
    string choice4;
    while(1)          //  do you want to include test value in TEST File
    {
        system("cls"); dummy_obj.header();dummy_obj.jump_to_main();obj1.object_display();obj1.mm(2); cin>>choice4;
        if(choice4=="min"||choice4=="exe"||choice4=="yes"||choice4=="no") { break; }
        else { obj1.mm(0);getch(); }
    }
    if(choice4=="min") { return; }
    if(choice4=="exe") { main_menu::set_dafault_choice_exe(); return;}
    while(1)     //  Build the Test File
    {
        system("cls");obj1.mm(10);string name;cin>>name;
        obj1.set_file_name(name);
        while(1)  //  Set File Format
        {
            system("cls"); obj1.mm(11); cin>>choice;
            if(choice=="1") { obj1.set_text_format();break; }
            if(choice=="2") { obj1.set_docu_format();break; }
            else { obj1.mm(0);getch(); }
        }
        obj1.mm(3);getch();obj1.mm(4);
        obj1.build_integers(0);
        if(choice4=="yes") { obj1.test_print_status=true; }
        obj1.build_file();
        ll t=obj1.get_test_size();
        while(t--)
        {
            obj1.build(0);
        }
        obj1.destroy_integers();
        obj1.close_file();
        string choice2;
        while(1)
        {
            system("cls"); obj1.mm(5); cin>>choice2;
            if(choice2=="1"||choice2=="2"||choice2=="3") { break; }
            else { obj1.mm(0);getch(); }
        }
        if(choice2=="1") { continue; }
        if(choice2=="2") { break; }
        if(choice2=="3") { main_menu::set_dafault_choice_exe(); break;}
    }
    //obj1.show_data();
}

//*********************************************************************************************************************************

void function_of_object_two()
{
    string choice,choice3; short ch;
    Three_D_objects obj1;
    main_menu dummy_obj;
    while(1)    // How many Objects you want to create
    {
        system("cls"); dummy_obj.header();dummy_obj.jump_to_main(); obj1.mm(6); cin>>choice;
        if(choice=="min") { return; }
        if(choice=="exe") { main_menu::set_dafault_choice_exe(); return;}
        bool check=valid_pos_neg_integer(choice);
        if(check==false) { obj1.mm(0);getch();continue; }
        ch=string_to_integer_converter(choice);
        if(ch<1 || ch>10) { obj1.mm(0);getch();continue; }
        break;
    }
    //********************************************************************************************************************************
    for(short itr=0;itr<ch;itr++)  // define each of your Objects
    {
        system("cls"); printf("\n\n\n  Object No. : ");sfc(lc);cout<<(itr+1);sfc(ww);
        printf("\n\n  Press ");sbc(dr);printf("ENTER");sbc(bb);printf(" to define this ");sfc(ly);printf("Object");sfc(ww);getch();
        object_one o1;
        o1.type_test_size=false;
        o1.main_controller();
        if(o1.choice1=="min") { return; }
        if(o1.choice1=="exe") { main_menu::set_dafault_choice_exe(); return;}
        obj1.set_data1(o1.cube_structure());
        obj1.set_data2(o1.custom_data_structure());
        obj1.set_object_name(o1.give_object_name());
        obj1.set_initializer(o1.initializer_data());
        obj1.mm(1);getch();
    }
    //********************************************************************************************************************************
     while(1)                // How many Queries does test case have
    {
        system("cls"); dummy_obj.header();dummy_obj.jump_to_main();obj1.object_display();obj1.mm(7); cin>>choice;
        if(choice=="min") { return; }
        if(choice=="exe") { main_menu::set_dafault_choice_exe(); return;}
        bool check=valid_pos_neg_integer(choice);
        if(check==false) { obj1.mm(0);getch();continue; }
        ch=string_to_integer_converter(choice);
        if(ch<1 || ch>100000) { obj1.mm(0);getch();continue; }
        obj1.set_query_size(ch); break;
    }
    //********************************************************************************************************************************
    string choice4;
     while(1)                 // do you want to include Query value in Test File
    {
        system("cls"); dummy_obj.header();dummy_obj.jump_to_main();obj1.object_display();obj1.mm(8); cin>>choice4;
        if(choice4=="min"||choice4=="exe"||choice4=="yes"||choice4=="no") { break; }
        else { obj1.mm(0);getch(); }
    }
    if(choice4=="min") { return; }
    if(choice4=="exe") { main_menu::set_dafault_choice_exe(); return;}
    //********************************************************************************************************************************
    while(1)  // Arrangement of objects
    {
        system("cls"); dummy_obj.header();dummy_obj.jump_to_main();obj1.object_display();obj1.mm(9); cin>>choice3;
        if(choice3=="min"||choice3=="exe"||choice3=="1"||choice3=="2") { break; }
        else { obj1.mm(0);getch(); }
    }
    if(choice3=="min") { return; }
    if(choice3=="exe") { main_menu::set_dafault_choice_exe(); return;}
    //********************************************************************************************************************************
    if(choice3=="1")  // Sequential Arrangement of Objects
    {
        while(1)
        {
            system("cls");obj1.mm(10);string name;cin>>name;
            obj1.set_file_name(name);
            //*************************************************************************************************************************
            while(1)  //  Set File Format
            {
                system("cls"); obj1.mm(11); cin>>choice;
                if(choice=="1") { obj1.set_text_format();break; }
                if(choice=="2") { obj1.set_docu_format();break; }
                else { obj1.mm(0);getch(); }
            }
            //*************************************************************************************************************************
            obj1.mm(3);getch();obj1.mm(4);
            if(choice4=="yes") { obj1.query_print_status=true; }
            obj1.build_file();
            int t=obj1.get_query_size(); int start=-1;
            while(t--)
            {
                int index=(++start)%obj1.get_cube_size();
                obj1.build_integers(index);
                obj1.build(index);
                obj1.destroy_integers();
            }
            obj1.close_file();
            string choice2;
            while(1)
            {
                system("cls"); obj1.mm(5); cin>>choice2;
                if(choice2=="1"||choice2=="2"||choice2=="3") { break; }
                else { obj1.mm(0);getch(); }
            }
            if(choice2=="1") { continue; }
            if(choice2=="2") { break; }
            if(choice2=="3") { main_menu::set_dafault_choice_exe(); break;}
        }
    }
    //********************************************************************************************************************************
    else             // Randomized Arrangement of Objects
    {
        while(1)
        {
            system("cls");obj1.mm(10);string name;cin>>name;
            obj1.set_file_name(name);
            //*************************************************************************************************************************
            while(1)  //  Set File Format
            {
                system("cls"); obj1.mm(11); cin>>choice;
                if(choice=="1") { obj1.set_text_format();break; }
                if(choice=="2") { obj1.set_docu_format();break; }
                else { obj1.mm(0);getch(); }
            }
            //*************************************************************************************************************************
            system("cls"); obj1.mm(3);getch();obj1.mm(4);
            if(choice4=="yes") { obj1.query_print_status=true; }
            obj1.build_file();
            ll t=obj1.get_query_size();
            while(t--)
            {
                int index=rand()%obj1.get_cube_size();
                obj1.build_integers(index);
                obj1.build(index);
                obj1.destroy_integers();
            }
            obj1.close_file();
            string choice2;
            while(1)
            {
                system("cls"); obj1.mm(5); cin>>choice2;
                if(choice2=="1"||choice2=="2"||choice2=="3") { break; }
                else { obj1.mm(0);getch(); }
            }
            if(choice2=="1") { continue; }
            if(choice2=="2") { break; }
            if(choice2=="3") { main_menu::set_dafault_choice_exe(); break;}
        }
    }
    //obj1.show_data();
}

//**********************************************************************************************************************************
//**********************************************************************************************************************************


void otom::object_display(short ch)
{
    switch(ch)
    {
    case 0:
        {
            gxy(60,4); printf("Empty Object"); gxy(59,5);printf("[            ]"); break;
        }
    }
}

//*********************************************************************************************************************************

void otom::object_display(short ch,string &str)
{
    switch(ch)
    {
    case 1:
        {
            gxy(60,4); cout<<str<<"\n"; gxy(59,5);printf("[          ]"); break;
        }
    }
}

//*********************************************************************************************************************************

void otom::object_display(short ch,string &str,ll &t)
{
    switch(ch)
    {
    case 3:
        {
            gxy(60,4); cout<<str<<"\n"; gxy(59,5);printf("[ T = ");cout<<t;printf(" ]"); break;
        }
    }
}

//*********************************************************************************************************************************

void otom::object_display(short ch,string &name_of_object,ll &test_case_size,vector <string> &v1)    // overloaded function
{
    switch(ch)
    {
    case 4:
        {
            gxy(60,4); cout<<name_of_object<<"\n";
            gxy(59,5);printf("[ T = ");cout<<test_case_size;printf(" ]");
            gxy(60,7);sfc(ly);printf("INITIALIZERS");sfc(ww);
            if(v1.size()==1) { gxy(58,8);printf("(no initializers)");return;}
            short set_y_axis=7;
            for(short i=1;i<v1.size();i++) { gxy(61,++set_y_axis);cout<<v1[i]; }
        }
    }
}

//*********************************************************************************************************************************

void otom::object_display(short ch,string &str,ll &t,vector <string> &v1,short &n,vector <pair<short,string>> &v2)
{
    switch(ch)
    {
    case 5:
        {
            gxy(60,4); cout<<str<<"\n";
            gxy(59,5);printf("[ T = ");cout<<t;printf(" ]");
            gxy(60,7);sfc(ly);printf("INITIALIZERS");sfc(ww);
            short set_y_axis=7;
            if(n==0)
            {
                gxy(58,8);printf("(no initializers)"); set_y_axis+=2;
            }
            else
            {
                for(short i=1;i<=n;i++)
                    {
                        gxy(61,++set_y_axis);cout<<v1[i];
                    }
                set_y_axis++;
            }
            gxy(60,++set_y_axis);sfc(lg);printf("CONTAINERS");sfc(ww);
            for(short i=0;i<v2.size();i++)
            {
                gxy(61,++set_y_axis);cout<<(i+1);printf("-> ");cout<<v2[i].second;
            }
        }
    }
}

//*********************************************************************************************************************************

void otom::object_display(vector <tuple<bool,short,short,string>> &v1,short& n)
{
    gxy(7,13);sfc(ly);printf("INITIALIZERS");sfc(ww); if(n==0) { gxy(4,14);printf("(no initializers)"); }
    short set_x_axis=1;
    short set_y_axis=14;
    for(short i=0;i<n;i++)
    {
        if(get<0>(v1[i])==true) continue;
        gxy(set_x_axis,++set_y_axis);printf("Press ");sfc(lr);cout<<get<2>(v1[i]);sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf(" to add ");sfc(ly);cout<<get<3>(v1[i])<<"\n";sfc(ww);
    }
    set_x_axis=38;
    set_y_axis=14;
    gxy(48,13);sfc(lg);printf("CONTAINERS");sfc(ww);
    for(short i=n;i<v1.size();i++)
    {
        if(get<0>(v1[i])==true) continue;
        gxy(set_x_axis,++set_y_axis);printf("Press ");sfc(lr);cout<<get<2>(v1[i]);sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf(" to add ");sfc(lg);cout<<get<3>(v1[i])<<"\n";sfc(ww);
    }
}

//*********************************************************************************************************************************

void otom::otom_phase00()
{
    header();msb();mm(3);undo();jump_to_main();object_display(0);
    gxy(2,3);sbc(dy);printf("PHASE ZERO");sbc(bb);printf("-> Creating an Empty Object");mm(4); mm(1);
}

//*********************************************************************************************************************************

void otom::otom_phase01(string &str)
{
    header();msb();undo();jump_to_main();object_display(1,str);
    gxy(2,3);sbc(dy);printf("PHASE ZERO");sbc(bb);printf("-> Creating an Empty Object");mm(7);mm(1);
}

//*********************************************************************************************************************************

void otom::otom_phase02(string &str)
{
    header();msb();undo();jump_to_main();object_display(1,str);
    gxy(2,3);sbc(dy);printf("PHASE ZERO");sbc(bb);printf("-> Creating an Empty Object");mm(8);mm(1);
}

//*********************************************************************************************************************************

void otom::otom_phase13(string &str,ll &t)
{
    header();msb();undo();jump_to_main();object_display(3,str,t);
    gxy(2,3);sbc(dy);printf("PHASE ONE");sbc(bb);printf("-> Adding ATTRIBUTES in Object");mm(10);mm(1);
}

//*********************************************************************************************************************************

void otom::otom_phase14_1(string &str,ll &t)
{
    header();msb();undo();jump_to_main();object_display(3,str,t);
    gxy(2,3);sbc(dy);printf("PHASE ONE");sbc(bb);printf("-> Adding ATTRIBUTES in Object");mm(12);
}

//*********************************************************************************************************************************

void otom::otom_phase14_2(short copy_of_no_of_initilizers)
{
    int si=8;  //  si stands for starting_index
    int sn=0; // sn stands for starting_number
    while(copy_of_no_of_initilizers--)
    {
        sn++; gxy(1,++si);if(sn==10) {gxy(0,si);}cout<<sn;printf(" ->");
    }
}

//*********************************************************************************************************************************

void otom::otom_phase14_3(vector <string> &str)
{
    if(str.size()==1) return;
    short si=8;  //  si stands for starting_index
    for(short i=1;i<str.size();i++) { gxy(6,++si);cout<<str[i]; }
}

//*********************************************************************************************************************************

void otom::otom_phase15_1(string &str,ll &t,vector <string> &v1)
{
    header();msb();undo();jump_to_main();object_display(4,str,t,v1);
    gxy(2,3);sbc(dy);printf("PHASE ONE");sbc(bb);printf("-> Adding ATTRIBUTES in Object");mm(15);mm(1);
}

//*********************************************************************************************************************************

void otom::otom_phase16_1(string &str,ll &t,vector <string> &v1,short &n,vector <pair<short,string>> &v2)
{
    header();msb();undo();jump_to_main();object_display(5,str,t,v1,n,v2);
    gxy(2,3);sbc(dy);printf("PHASE ONE");sbc(bb);printf("-> Adding ATTRIBUTES in Object");mm(17);mm(18);
}

//*********************************************************************************************************************************

void otom::otom_phase27_1(vector<tuple<bool,short,short,string>> &v1,short &n)
{
    header();jump_to_main();repos();object_display(v1,n);
    gxy(2,3);sbc(dy);printf("PHASE THREE");sbc(bb);printf("-> Positioning of ATTRIBUTES in Object");msb2();
}

//*********************************************************************************************************************************

bool object_one::check_the_test_case_range02(string &temp)
{
    if(temp.size()>7)
        return false;
    bool check=all_integers(temp);
    return check;
}

//*********************************************************************************************************************************

bool object_one::check_the_initializers_choice_range13(string &temp)
{
     if(temp.size()>2)
        return false;
    bool check=all_integers(temp);
    return check;
}

//*********************************************************************************************************************************

void object_one::name_the_object00()
{
    name_of_object=choice1; unoi.push_back(choice1);
    if(type_test_size==false) { state="state03_message";return; }
    state="state1";
}

//*********************************************************************************************************************************

bool object_one::check_if_identifier_exist()  //general use
{
    for(short i=0;i<unoi.size();i++) { if(choice1==unoi[i]) return false; }
    return true;
}

//*********************************************************************************************************************************

bool object_one::valid_length_of_initializers14()
{
    if(choice1.size()>5) return false;
    return true;
}

//*********************************************************************************************************************************

void object_one::delete_all_initializers15()
{
    sofi.clear();
    while(unoi.size()!=1) { unoi.pop_back(); }
    no_of_initializers=0;
}

//*********************************************************************************************************************************

string object_one::type_of_container16(short ch)
{
    switch(ch)
    {
        case 1: {return "i";}
        case 2: {return "r";}
        case 3: {return "a";}
        case 4: {return "s";}
        case 5: {return "m";}
        case 6: {return "t";}
        case 7: {return "g";}
        case 8: {return "c";}
    }
    return "";// for exception handling
}

//*********************************************************************************************************************************

short object_one::count_nth_container16(string &str)
{
    short countt=0;
    for(short i=0;i<sofc.size();i++) { if(str==sofc[i]) countt++; }
    return countt;
}

//*********************************************************************************************************************************

void object_one::get_correct_print_container16(pair<short,string> &p1)
{
    string str="",&temp=p1.second,number=positive_number_to_string(p1.first);
    if(temp=="i") { str+="INTEGER_"; str+=number; }
    if(temp=="r") { str+="REAL_"; str+=number; str+=".()"; }
    if(temp=="a") { str+="ARRAY_"; str+=number; str+="[]"; }
    if(temp=="s") { str+="STRING_"; str+=number; str+="()"; }
    if(temp=="m") { str+="MATRIX_"; str+=number; str+="[][]"; }
    if(temp=="t") { str+="TREE_"; str+=number; str+="()()"; }
    if(temp=="g") { str+="GRAPH_"; str+=number; str+="()()";}
    if(temp=="c") { str+="CUSTOM_"; str+=number; str+="{}"; }
    temp=str;
}

//*********************************************************************************************************************************

void object_one::build_set_of_all_attributes207()
{
    incrementer=0; short incrementer2=0;
    for(short i=0;i<sofi.size();i++) { sofaa.push_back(make_tuple(false,--incrementer2,++incrementer,sofi[i].second)); }
    for(short i=0;i<containers.size();i++) { sofaa.push_back(make_tuple(false,containers[i].first,++incrementer,print_containers[i].second)); }
}

//*********************************************************************************************************************************

bool object_one::check_the_attribute_choice_range27(string &temp)
{
     if(temp.size()>3)
        return false;
    bool check=all_integers(temp);
    return check;
}

//*********************************************************************************************************************************

bool object_one::check_availability_of_attribute27(short& temp)
{
    if(get<0>(sofaa[temp-1])==true) return false;
    return true;
}

//*********************************************************************************************************************************

void object_one::reset_three_dimensional_object27()
{
    _3dc.clear();
    for(short i=0;i<sofaa.size();i++) { get<0>(sofaa[i])=false; }
}

//*********************************************************************************************************************************

void object_one::object_display_in_phase_two27()
{
    gxy(0,28); sfc(lc);cout<<name_of_object;sfc(ww);
    if(test_cases==0){ cout<<" (no copies) \n"; }
    else { printf(" (T=");cout<<test_cases<<")\n"; }
    if(test_cases!=0) {printf("T\n");}
    for(short i=0;i<_3dc.size();i++)
    {
        for(short j=0;j<_3dc[i].size();j++)
        {
            if(_3dc[i][j].first<0) sfc(ly);
            else if(_3dc[i][j].first>0) sfc(lg);
            cout<<_3dc[i][j].second<<" ";sfc(ww);
        }
        if(i==(_3dc.size()-1)) break;
        cout<<"\n";
    }
    string s1="Acurrent_pointer";s1[0]-=38;
    sfc(lr);cout<<s1;sfc(ww);
}

//*********************************************************************************************************************************

void object_one::object_display_in_phase_three308()
{
    gxy(0,5); printf("This is the structure of your object\n");
    sfc(lc);cout<<name_of_object;sfc(ww);
    if(test_cases==0){ cout<<" (no copies) \n"; }
    else { printf(" (T=");cout<<test_cases<<" copies)\n"; }
    if(test_cases!=0) {printf("T\n");}
    for(short i=0;i<_3dc.size();i++)
    {
        for(short j=0;j<_3dc[i].size();j++)
        {
            if(_3dc[i][j].first<0) sfc(ly);
            else if(_3dc[i][j].first>0) sfc(lg);
            cout<<_3dc[i][j].second<<" ";sfc(ww);
        }
        printf("\n");
    }sbc(dr);
    printf("\n\nMESSAGE BOX\n");sbc(bb);
    printf("You have successfully completed the three phases\n");
    printf("Now you are just one final phase away to generate your test cases\n");
    printf("\n\n  Type ");sfc(lr);printf("rep");sfc(ww);
    printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf(" to reposition your object");
    printf("\n\n  Type ");sfc(lg);printf("con");sfc(ww);
    printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf(" to continue...");
    printf("\n\nEnter your choice ->  ");
}

//*********************************************************************************************************************************

void object_one::object_display_in_phase_three38()
{
    gxy(2,3);sbc(dy);printf("PHASE FOUR");sbc(bb);printf("-> Giving Values to ATTRIBUTES");
    gxy(0,5);printf("This is the structure of your object\n");
    sfc(lc);cout<<name_of_object;sfc(ww);
    if(test_cases==0){ cout<<" (no copies) \n"; }
    else { printf(" (T=");cout<<test_cases<<" copies)\n"; }
    if(test_cases!=0) {printf("T\n");}
    for(short i=0;i<_3dc.size();i++)
    {
        for(short j=0;j<_3dc[i].size();j++)
        {
            if(_3dc[i][j].first<0) sfc(ly);
            else if(_3dc[i][j].first>0) sfc(lg);
            cout<<_3dc[i][j].second<<" ";sfc(ww);
        }
        printf("\n");
    }
}

//*********************************************************************************************************************************

void object_one::delete_all_containers()     ////phase and state yet to be decided.................................................................................
{
    for(short i=0;i<containers.size();i++) { sofaa.pop_back(); }
    containers.clear();
    print_containers.clear();
    sofc.clear();
    no_of_containers=1;
}

//*********************************************************************************************************************************
//*********************************************************************************************************************************


void object_one::main_controller()    // main controller function
{
    while(1)
    {
        // state 0
        if(state=="state0")  // name the object
        {
            system("cls"); otom_phase00(); cin>>choice1;
            if(choice1=="min") break;
            else if(choice1=="und") {mm(5);getch();}
            else if(choice1=="exe") { break; }
            else if(choice1.size()>10) {system("cls");otom_phase00();mm(6);getch();continue;}
            else { name_the_object00(); }
        }

        // state1
        if(state=="state1")   // does it have test cases
        {
            system("cls"); otom_phase01(name_of_object); cin>>choice1;
            if(choice1=="min") break;
            else if(choice1=="und") { unoi.pop_back(); state="state0"; continue; }
            else if(choice1=="exe") { break; }
            else if(choice1=="yes") { state="state2"; }
            else if(choice1=="no") { state="state03_message"; }
            else { system("cls"); otom_phase01(name_of_object); mm(2); }
        }

        // state 2
        if(state=="state2")     // if yes, how many
        {
            system("cls"); otom_phase02(name_of_object); cin>>choice1;
            if(choice1=="min") break;
            else if(choice1=="und") { state="state1"; continue; }
            else if(choice1=="exe") { break; }
            else
            {
                bool check=check_the_test_case_range02(choice1);
                if(check==false) { system("cls"); otom_phase02(name_of_object); mm(9);mm(2); continue; }
                ll int_checker=string_to_integer_converter(choice1);
                if(int_checker<=0||int_checker>1000000) { system("cls"); otom_phase02(name_of_object); mm(9);mm(2); continue; }
                else { test_cases=string_to_integer_converter(choice1); state="state03_message"; }
            }
        }

        // state 03_message
        if(state=="state03_message")
        {
            system("cls"); mm(20);getch(); state="state3";
        }

        // phase 1 starts from here
        // state 3                           how many initializers does it have
        if(state=="state3")
        {
            system("cls"); otom_phase13(name_of_object,test_cases); cin>>choice1;
            if(choice1=="min") break;
            else if(choice1=="und") { state="state1"; test_cases=0; continue; }
            else if(choice1=="exe") { break; }
            else
            {
                bool check=check_the_initializers_choice_range13(choice1);
                if(check==false) { system("cls"); otom_phase13(name_of_object,test_cases); mm(11);mm(2); continue; }
                ll int_checker=string_to_integer_converter(choice1);
                if(int_checker>10) { system("cls"); otom_phase13(name_of_object,test_cases); mm(11);mm(2); continue; }
                else { no_of_initializers=string_to_integer_converter(choice1); state="state4"; }

              }
        }

        //state4;                         // name the initializers
        if(state=="state4")
        {
            incrementer=0;
            for(short i=1;i<=no_of_initializers;i++)
            {
                system("cls");
                otom_phase14_1(name_of_object,test_cases);
                otom_phase14_2(no_of_initializers);
                otom_phase14_3(unoi);mm(1);
                cin>>choice1;
                if(choice1=="min") break;
                else if(choice1=="exe") { break; }
                else if(choice1=="und")
                {
                    if(i==1) break;
                    else { unoi.pop_back();sofi.pop_back();++incrementer;i-=2;continue; }
                }
                else
                {
                    bool check=valid_length_of_initializers14();
                    if(check==false) { mm(13);getch();--i;continue; }
                    check=check_if_identifier_exist(); // general for all
                    if(check==false) { mm(14);getch();--i;continue; }
                    unoi.push_back(choice1);
                    sofi.push_back(make_pair(--incrementer,choice1));
                }
            }
            if(choice1=="min") break;
            else if(choice1=="und")
            {
                state="state3"; continue;
            }
            else if(choice1=="exe") { break; }
            state="state5";
        }

        // state 5                how many containers dose it have
        if(state=="state5")
        {
            system("cls"); otom_phase15_1(name_of_object,test_cases,unoi); cin>>choice1;
            if(choice1=="min") break;
            else if(choice1=="und") { delete_all_initializers15(); state="state4";continue; }
            else if(choice1=="exe") { break; }
            else
            {
                bool check=check_the_initializers_choice_range13(choice1);  // same functionality, so using this function
                if(check==false) { system("cls"); otom_phase15_1(name_of_object,test_cases,unoi); mm(16);mm(2); continue; }
                ll int_checker=string_to_integer_converter(choice1);
                if(int_checker<=0 || int_checker>10)
                {
                    system("cls"); otom_phase15_1(name_of_object,test_cases,unoi); mm(16);mm(2); continue;
                }
                else
                {
                    no_of_containers=string_to_integer_converter(choice1); state="state6";
                }
            }
        }

        // state 6                   type of containers
        if(state=="state6")
        {

            for(short i=1;i<=no_of_containers;i++)
            {
                system("cls"); otom_phase16_1(name_of_object,test_cases,unoi,no_of_initializers,print_containers);mm(1); cin>>choice1;
                if(choice1=="min") break;
                else if(choice1=="und")
                {
                    if(i==1) { break; }
                    else
                    {
                        containers.pop_back(); print_containers.pop_back(); sofc.pop_back();i-=2; continue;
                    }
                }
                else if(choice1=="exe") { break; }
                else
                {
                    bool check=check_the_initializers_choice_range13(choice1);   // same functionality so using this function again
                    if(check==false)
                        {
                            system("cls"); otom_phase16_1(name_of_object,test_cases,unoi,no_of_initializers,print_containers); mm(2);--i; continue;
                        }
                    ll int_checker=string_to_integer_converter(choice1);
                    if(int_checker<=0 || int_checker>=9)
                        {
                            system("cls"); otom_phase16_1(name_of_object,test_cases,unoi,no_of_initializers,print_containers); mm(2);--i; continue;
                        }
                    else
                        {
                            string name_of_container=type_of_container16(int_checker);
                            sofc.push_back(name_of_container);
                            short nth_number_of_container=count_nth_container16(name_of_container);
                            containers.push_back(make_pair(int_checker,name_of_container));
                            pair <short,string> p1;
                            p1=make_pair(nth_number_of_container,name_of_container);
                            get_correct_print_container16(p1);
                            print_containers.push_back(p1);
                        }
                 }
            }
            if(choice1=="min") break;
            else if(choice1=="und") { state="state5";continue; }
            else if(choice1=="exe") { break; }
            state="state07";
        }

        // state 07 message and build
        if(state=="state07")
        {
            system("cls"); mm(19); getch(); build_set_of_all_attributes207(); state="state7";
        }

        // phase 2 state 7                positioning of attributes
        if(state=="state7")
        {
            short elements=sofaa.size();
            vector <pair<short,string>> null_object;
            null_object.push_back(make_pair(0,""));
            _3dc.push_back(null_object);
            while(true)
            {
                vector <pair<short,string>> dummy_3dc;
                while(true)
                {
                    if(elements==0) break;
                    system("cls");
                    otom_phase27_1(sofaa,no_of_initializers);
                    object_display_in_phase_two27();mm(0);
                    cin>>choice1;
                    if(choice1=="min") break;
                    else if(choice1=="exe") break;
                    else if(choice1=="rep") break;
                    else if(choice1=="nex")
                    {
                        if(dummy_3dc.size()==0) { mm(23);continue; }
                        else
                        {
                            _3dc.push_back(null_object); break;
                        }
                    }
                    else
                    {
                        bool check=check_the_attribute_choice_range27(choice1);
                        if(check==false) { mm(21);continue; }
                        short int_checker=string_to_integer_converter(choice1);
                        if(int_checker<=0||int_checker>sofaa.size())  { mm(21);continue; }
                        check=check_availability_of_attribute27(int_checker);
                        if(check==false) { mm(22);continue; }
                        dummy_3dc.push_back(make_pair(get<1>(sofaa[int_checker-1]),get<3>(sofaa[int_checker-1])));
                        get<0>(sofaa[int_checker-1])=true;
                        --elements;  _3dc.pop_back();  _3dc.push_back(dummy_3dc);
                    }
                }
                if(elements==0) {state="state08";break; }
                if(choice1=="min") break;
                else if(choice1=="exe") break;
                else if(choice1=="rep") { reset_three_dimensional_object27();break; }
            }
            if(choice1=="min") break;
            else if(choice1=="exe") break;
        }

        // phase 3 state 08                 giving values to object
        if(state=="state08")
        {
            system("cls"); header();jump_to_main(); object_display_in_phase_three308(); cin>>choice1;
            if(choice1=="min" || choice1=="exe") break;
            if(choice1=="con")
            {
                state="state8";
                for(short i=0;i<_3dc.size();i++)
                {
                    vector <bool> vv;
                    for(short j=0;j<_3dc[i].size();j++)
                    {
                        vector <string> vv2; vv.push_back(false);
                        short ch=_3dc[i][j].first;
                        switch(ch)
                        {
                            case 1:  // INTEGER
                                {
                                    vv2.push_back("~");vv2.push_back("~");vv2.push_back("~"); break;
                                }
                            case 2:  // REAL
                                {
                                     vv2.push_back("~");vv2.push_back("~");vv2.push_back("~"); break;
                                }
                            case 3:  //  ARRAY
                                {
                                     vv2.push_back("~");vv2.push_back("~");vv2.push_back("~");
                                     vv2.push_back("~");vv2.push_back("~");vv2.push_back("~");vv2.push_back("~"); break;
                                }
                            case 4:  //  STRING
                                {
                                    vv2.push_back("~");vv2.push_back("~");vv2.push_back("~");vv2.push_back("~");vv2.push_back("~"); break;
                                }
                            case 5:  //  MATRIX
                                {
                                    vv2.push_back("~");vv2.push_back("~");vv2.push_back("~");vv2.push_back("~");vv2.push_back("~");
                                    vv2.push_back("~");vv2.push_back("~");vv2.push_back("~"); break;
                                }
                            case 6:  //  TREE
                                {
                                    vv2.push_back("~"); vv2.push_back("~"); vv2.push_back("~"); vv2.push_back("~"); vv2.push_back("~");
                                    vv2.push_back("~"); vv2.push_back("~");vv2.push_back("~");vv2.push_back("~");vv2.push_back("~");
                                    vv2.push_back("~"); break;
                                }
                            case 7:  //  GRAPH
                                {
                                    vv2.push_back("~");vv2.push_back("~");vv2.push_back("~");vv2.push_back("~");vv2.push_back("~");
                                    vv2.push_back("~");vv2.push_back("~"); vv2.push_back("~");vv2.push_back("~"); vv2.push_back("~");
                                    vv2.push_back("~");break;
                                }
                            case 8:  // CUSTOM DATA TYPE
                                {
                                    vv2.push_back("~");vv2.push_back("~"); break;
                                }
                            default:  //  INITIALIZERS
                                {
                                    vv2.push_back("~");vv2.push_back("~");
                                }
                            }
                            s2_3dc.push_back(vv2);
                        }
                        s_3dc.push_back(vv);
                    }
                    continue;
            }
            if(choice1=="rep") { state="state7"; reset_three_dimensional_object27(); }
            else  {  printf("\nEnter a valid choice, now press ");sbc(dr);printf("ENTER");sbc(bb);printf(" to continue");getch();  }
        }

        // state 8
        if(state=="state8")             //  DEFINE FOLLOWING VALUES OF ATTRIBUTES
        {
            system("cls"); header();jump_to_main(); object_display_in_phase_three38();
            printf("\n\nDEFINE FOLLOWING VALUES OF ATTRIBUTES\n\n");
            short start=0;
            for(short i=0;i<_3dc.size();i++)
            {   int tr=0;
                for(short j=0;j<_3dc[i].size();j++)
                {
                    if(s_3dc[i][j]==true)
                    {
                        cout<<(++start)<<". ";printf(" Attribute values saved for ");
                        if(_3dc[i][j].first<0) { sfc(ly);cout<<_3dc[i][j].second<<" \n";sfc(ww); }
                        else { sfc(lg);cout<<_3dc[i][j].second<<" \n";sfc(ww); }
                        if((i==_3dc.size()-1)&&(j==_3dc[i].size()-1)) { state="state9"; break; }
                        continue;
                    }
                    short ch=_3dc[i][j].first;printf("\n\n\n");
                    switch(ch)
                    {
                    case 1:    // INTEGER CLASS
                        {
                            cout<<"  "<<(++start)<<". ";
                            sfc(lg);cout<<_3dc[i][j].second;sfc(lc);cout<<" [CLASS INTEGER]";sfc(ww);
                            string integer_choice;
                            if(s2_3dc[start-1][0]=="~")
                            {
                                mm(24); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1" || choice1=="2" || choice1=="3" || choice1=="4" || choice1=="5" || choice1=="6" || choice1=="7" || choice1=="8")
                                {
                                    integer_choice=choice1;
                                    s2_3dc[start-1][0]=integer_choice;
                                    short store=string_to_integer_converter(choice1);
                                    dummy_o3dc.push_back(make_pair(1,"int"));
                                    dummy_o3dc.push_back(make_pair(store,integer_choice)); break;
                                }
                                mm(36); getch(); break;
                            }
                            else { integer_choice=s2_3dc[start-1][0]; }
                            if(integer_choice=="1")
                            {
                                printf("\n\n  Enter following details for");sfc(lm);printf("  [RANDOM NUMBER] ");sfc(ww);
                                if(s2_3dc[start-1][1]=="~")
                                {
                                    mm(25); string min_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1); min_value=choice1;
                                    s2_3dc[start-1][1]=min_value;
                                    dummy_o3dc.push_back(make_pair(store,min_value)); break;
                                }
                                if(s2_3dc[start-1][2]=="~")
                                {
                                    mm(26); string max_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1);
                                    ll store2=string_to_integer_converter(s2_3dc[start-1][1]);
                                    if(store1<store2) { mm(38); getch();break; }
                                    max_value=choice1; s2_3dc[start-1][2]=max_value;
                                    dummy_o3dc.push_back(make_pair(store1,max_value));
                                    dummy2_o3dc.push_back(dummy_o3dc);
                                    dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                }
                            }
                            else if(integer_choice=="2")
                            {
                                printf("\n\n  Enter following details for");sfc(lm);printf("  [ODD NUMBER] ");sfc(ww);
                                if(s2_3dc[start-1][1]=="~")
                                {
                                    mm(25); string min_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    min_value=choice1; s2_3dc[start-1][1]=min_value;
                                    dummy_o3dc.push_back(make_pair(store,min_value));  break;
                                }
                                if(s2_3dc[start-1][2]=="~")
                                {
                                    mm(26); string max_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1);
                                    ll store2=string_to_integer_converter(s2_3dc[start-1][1]);
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_odd_exist(store2,store1);
                                    if(check==false) { mm(39); getch();break; }
                                    max_value=choice1; s2_3dc[start-1][2]=max_value;
                                    dummy_o3dc.push_back(make_pair(store1,max_value));
                                    dummy2_o3dc.push_back(dummy_o3dc);
                                    dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                }
                            }
                             else if(integer_choice=="3")
                            {
                                printf("\n\n  Enter following details for");sfc(lm);printf("  [EVEN NUMBER] ");sfc(ww);
                                if(s2_3dc[start-1][1]=="~")
                                {
                                    mm(25); string min_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    min_value=choice1; s2_3dc[start-1][1]=min_value;
                                    dummy_o3dc.push_back(make_pair(store,min_value));  break;
                                }
                                if(s2_3dc[start-1][2]=="~")
                                {
                                    mm(26); string max_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1);
                                    ll store2=string_to_integer_converter(s2_3dc[start-1][1]);
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_even_exist(store2,store1);
                                    if(check==false) { mm(40); getch();break; }
                                    max_value=choice1; s2_3dc[start-1][2]=max_value;
                                    dummy_o3dc.push_back(make_pair(store1,max_value));
                                    dummy2_o3dc.push_back(dummy_o3dc);
                                    dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                }
                            }
                             else if(integer_choice=="4")
                            {
                                printf("\n\n  Enter following details for");sfc(lm);printf("  [PRIME NUMBER] ");sfc(ww);
                                if(s2_3dc[start-1][1]=="~")
                                {
                                    mm(27); string min_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<2 || store>10000000) { mm(37); getch();break; }
                                    min_value=choice1; s2_3dc[start-1][1]=min_value;
                                    dummy_o3dc.push_back(make_pair(store,min_value));  break;
                                }
                                if(s2_3dc[start-1][2]=="~")
                                {
                                    mm(28); string max_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1);
                                    ll store2=string_to_integer_converter(s2_3dc[start-1][1]);
                                    if(store1<2 || store1>10000000) { mm(37); getch();break; }
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_prime_exist(store2,store1);
                                    if(check==false) { mm(41); getch();break; }
                                    max_value=choice1; s2_3dc[start-1][2]=max_value;
                                    dummy_o3dc.push_back(make_pair(store1,max_value));
                                    dummy_o3dc.push_back(make_pair(test_cases,"<-size"));
                                    dummy_o3dc.push_back(make_pair(0,"<-current_pointer"));
                                    dummy_o3dc.push_back(make_pair(0,"<-index"));
                                    dummy2_o3dc.push_back(dummy_o3dc);
                                    dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                }
                            }
                             else if(integer_choice=="5")
                            {
                                printf("\n\n  Enter following details for");sfc(lm);printf("  [NON PRIME NUMBER] ");sfc(ww);
                                if(s2_3dc[start-1][1]=="~")
                                {
                                    mm(29); string min_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>1000000000000) { mm(37); getch();break; }
                                    min_value=choice1; s2_3dc[start-1][1]=min_value;
                                    dummy_o3dc.push_back(make_pair(store,min_value));  break;
                                }
                                if(s2_3dc[start-1][2]=="~")
                                {
                                    mm(30);string max_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1);
                                    ll store2=string_to_integer_converter(s2_3dc[start-1][1]);
                                    if(store1<1 || store1>1000000000000) { mm(37); getch();break; }
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_non_prime_exist(store2,store1);
                                    if(check==false) { mm(42); getch();break; }
                                    max_value=choice1; s2_3dc[start-1][2]=max_value;
                                    dummy_o3dc.push_back(make_pair(store1,max_value));
                                    dummy2_o3dc.push_back(dummy_o3dc);
                                    dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                }
                            }
                             else if(integer_choice=="6")
                            {
                                printf("\n\n  Enter following details for");sfc(lm);printf("  [INCREMENTED NUMBER] ");sfc(ww);
                                if(s2_3dc[start-1][1]=="~")
                                {
                                    mm(31); string starting_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    starting_value=choice1; s2_3dc[start-1][1]=starting_value;
                                    dummy_o3dc.push_back(make_pair(store,starting_value)); break;
                                }
                                if(s2_3dc[start-1][2]=="~")
                                {
                                    mm(32);string increment_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1); increment_value=choice1; s2_3dc[start-1][2]=increment_value;
                                    dummy_o3dc.push_back(make_pair(store,increment_value));
                                    dummy_o3dc.push_back(make_pair(0,"store"));
                                    dummy2_o3dc.push_back(dummy_o3dc);
                                    dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                }
                            }
                             else if(integer_choice=="7")
                            {
                                printf("\n\n  Enter following details for");sfc(lm);printf("  [Nth FIBONACCI NUMBER] ");sfc(ww);
                                if(s2_3dc[start-1][1]=="~")
                                {
                                    mm(33); string min_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>93) { mm(37); getch();break; }
                                    min_value=choice1; s2_3dc[start-1][1]=min_value;
                                    dummy_o3dc.push_back(make_pair(store,min_value));  break;
                                }
                                if(s2_3dc[start-1][2]=="~")
                                {
                                    mm(34); string max_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1);
                                    ll store2=string_to_integer_converter(s2_3dc[start-1][1]);
                                    if(store1<1 || store1>93) { mm(37); getch();break; }
                                    if(store1<store2) { mm(38); getch();break; }
                                    max_value=choice1; s2_3dc[start-1][2]=max_value;
                                    dummy_o3dc.push_back(make_pair(store1,max_value));
                                    dummy_o3dc.push_back(make_pair(test_cases,"<-size"));
                                    dummy_o3dc.push_back(make_pair(0,"<-current_pointer"));
                                    dummy_o3dc.push_back(make_pair(0,"<-index"));
                                    dummy2_o3dc.push_back(dummy_o3dc);
                                    dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                }
                            }
                             else if(integer_choice=="8")
                            {
                                printf("\n\n  Enter following details for");sfc(lm);printf("  [GET-ALL-UNIQUE-RANDOM NUMBER] ");sfc(ww);
                                if(s2_3dc[start-1][1]=="~")
                                {
                                    mm(25); string min_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    min_value=choice1; s2_3dc[start-1][1]=min_value;
                                    dummy_o3dc.push_back(make_pair(store,min_value));  break;
                                }
                                if(s2_3dc[start-1][2]=="~")
                                {
                                    mm(26); string max_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1);
                                    ll store2=string_to_integer_converter(s2_3dc[start-1][1]);
                                    if(store1<store2) { mm(38); getch();break; }
                                    if(test_cases>(store1-store2+1))
                                    {
                                           cout<<"\n\n  You wish to create "<<test_cases<<" No. of Test Cases.";
                                           cout<<"\n  However, only "<<(store1-store2+1)<<" Unique No. exist in range provided by you.";
                                           printf("\n\n  You are advised to enlarge your range");
                                           printf("\n\n   press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to change Maximum value"); getch();break;
                                    }
                                    max_value=choice1; s2_3dc[start-1][2]=max_value;
                                    dummy_o3dc.push_back(make_pair(store1,max_value));
                                    dummy_o3dc.push_back(make_pair(test_cases,"<-size"));
                                    dummy_o3dc.push_back(make_pair(0,"<-current_pointer"));
                                    dummy_o3dc.push_back(make_pair(0,"<-index"));
                                    dummy2_o3dc.push_back(dummy_o3dc);
                                    dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                }
                            }
                            else
                            {
                                printf("\nPLEASE ENTER A VALID CHOICE\nNow press ");sbc(dr);printf(" ENTER ");sbc(bb);printf(" to continue");
                                s2_3dc[start-1][0]="~";getch();
                            }
                            sbc(bb);sfc(ww);
                            break;
                        }

                    case 2:    // REAL CLASS
                        {
                            cout<<"  "<<(++start)<<". ";
                            sfc(lg);cout<<_3dc[i][j].second;sfc(lc);cout<<" [CLASS REAL]";sfc(ww);
                            if(s2_3dc[start-1][0]=="~")
                                {
                                    mm(43); string precision; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<0 || store>100) { mm(37); getch();break; }
                                    precision=choice1; s2_3dc[start-1][0]=precision;
                                    dummy_o3dc.push_back(make_pair(2,"rel"));
                                    dummy_o3dc.push_back(make_pair(store,precision));  break;
                                }
                            if(s2_3dc[start-1][1]=="~")
                                {
                                    mm(25); string min_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    min_value=choice1; s2_3dc[start-1][1]=min_value;
                                    dummy_o3dc.push_back(make_pair(store,min_value));  break;
                                }
                            if(s2_3dc[start-1][2]=="~")
                                {
                                    mm(26); string max_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1);
                                    ll store2=string_to_integer_converter(s2_3dc[start-1][1]);
                                    if(store1==store2) { mm(44); getch();break; }//  ( Note -> Max_value-Min_value >=1 )
                                    if(store1<store2) { mm(38); getch();break; }
                                    max_value=choice1; s2_3dc[start-1][2]=max_value;
                                    dummy_o3dc.push_back(make_pair(store1,max_value));
                                    dummy2_o3dc.push_back(dummy_o3dc);
                                    dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                }
                        }

                    case 3:    // ARRAY CLASS
                        {
                            cout<<"  "<<(++start)<<". ";
                            sfc(lg);cout<<_3dc[i][j].second;sfc(lc);cout<<" [CLASS ARRAY]";sfc(ww);
                            if(s2_3dc[start-1][0]=="order")   //  set order in Array
                            {
                                mm(54); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1" || choice1=="2" || choice1=="3")
                                {
                                    short store=string_to_integer_converter(choice1);
                                    dummy_o3dc.push_back(make_pair(store,choice1));
                                    dummy2_o3dc.push_back(dummy_o3dc);
                                    dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                }
                                mm(36); getch(); break;
                            }
                            if(s2_3dc[start-1][0]=="print")   // set print format in Array
                            {
                                mm(55); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1" || choice1=="2")
                                {
                                    s2_3dc[start-1][0]="order";
                                    short store=string_to_integer_converter(choice1);
                                    dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                }
                                mm(36); getch(); break;
                            }
                            if(s2_3dc[start-1][0]=="printt")   // set print format for default string in Array
                            {
                                mm(55); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1" || choice1=="2")
                                {
                                    short store=string_to_integer_converter(choice1);
                                    dummy_o3dc.push_back(make_pair(store,choice1));
                                    dummy2_o3dc.push_back(dummy_o3dc);
                                    dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                }
                                mm(36); getch(); break;
                            }
                            if(s2_3dc[start-1][0]=="~")       // set type of Array
                            {
                                mm(45); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1" || choice1=="2" || choice1=="3" || choice1=="4" || choice1=="5")
                                {
                                    s2_3dc[start-1][0]=choice1;
                                    short store=string_to_integer_converter(choice1);
                                    dummy_o3dc.push_back(make_pair(3,"arr"));
                                    dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                }
                                mm(36); getch(); break;
                            }
                            if(s2_3dc[start-1][0]=="1")       // set type of Array of  Integer
                            {
                                if(s2_3dc[start-1][1]=="~")  // type of integer
                                {
                                    mm(35); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    if(choice1=="1" || choice1=="2" || choice1=="3" || choice1=="4" || choice1=="5" || choice1=="6" || choice1=="7")
                                    {
                                        s2_3dc[start-1][1]=choice1;
                                        short store=string_to_integer_converter(choice1);
                                        dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                    }
                                    mm(36); getch(); break;
                                }
                                if(s2_3dc[start-1][1]=="1"&&s2_3dc[start-1][2]=="~")  // min value for random number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [RANDOM NUMBERS] ");sfc(ww);
                                    mm(25); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1); s2_3dc[start-1][2]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                }
                                if(s2_3dc[start-1][1]=="2"&&s2_3dc[start-1][2]=="~")  // min value for odd number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [ODD NUMBERS] ");sfc(ww);
                                    mm(25); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1); s2_3dc[start-1][2]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][1]=="3"&&s2_3dc[start-1][2]=="~")  // min value for even number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [EVEN NUMBERS] ");sfc(ww);
                                    mm(25); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1); s2_3dc[start-1][2]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][1]=="4"&&s2_3dc[start-1][2]=="~")  // min value for prime number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [PRIME NUMBERS] ");sfc(ww);
                                    mm(27); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<2 || store>10000000) { mm(37); getch();break; }
                                    s2_3dc[start-1][2]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][1]=="5"&&s2_3dc[start-1][2]=="~")  // min value for non prime number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [Non Prime Numbers] ");sfc(ww);
                                    mm(29); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>1000000000000) { mm(37); getch();break; }
                                    s2_3dc[start-1][2]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][1]=="6"&&s2_3dc[start-1][2]=="~")  // starting value for incremented number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [Incremented Numbers] ");sfc(ww);
                                    mm(31); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    s2_3dc[start-1][2]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                }
                                if(s2_3dc[start-1][1]=="7"&&s2_3dc[start-1][2]=="~")  // min value for Nth Fibonacci number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [FIBONACCI NUMBERS] ");sfc(ww);
                                    mm(33); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>93) { mm(37); getch();break; }
                                    s2_3dc[start-1][2]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][1]=="1"&&s2_3dc[start-1][3]=="~")  // max value for random number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [RANDOM NUMBERS] ");sfc(ww);
                                    mm(26);  cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[3].first;
                                    if(store1<store2) { mm(38); getch();break; }
                                    s2_3dc[start-1][3]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1)); break;
                                }
                                if(s2_3dc[start-1][1]=="2"&&s2_3dc[start-1][3]=="~")  // max value for odd number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [ODD NUMBERS] ");sfc(ww);
                                    mm(26); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[3].first;
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_odd_exist(store2,store1);
                                    if(check==false) { mm(39); getch();break; }
                                    s2_3dc[start-1][3]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1)); break;
                                }
                                if(s2_3dc[start-1][1]=="3"&&s2_3dc[start-1][3]=="~")  // max value for even number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [EVEN NUMBERS] ");sfc(ww);
                                    mm(26); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[3].first;
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_even_exist(store2,store1);
                                    if(check==false) { mm(40); getch();break; }
                                    s2_3dc[start-1][3]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1)); break;
                                }
                                if(s2_3dc[start-1][1]=="4"&&s2_3dc[start-1][3]=="~")  // max value for prime number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [PRIME NUMBERS] ");sfc(ww);
                                    mm(28); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[3].first;
                                    if(store1<2 || store1>10000000) { mm(37); getch();break; }
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_prime_exist(store2,store1);
                                    if(check==false) { mm(41); getch();break; }
                                    s2_3dc[start-1][3]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1)); break;
                                }
                                if(s2_3dc[start-1][1]=="5"&&s2_3dc[start-1][3]=="~")  // max value for non prime number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [NON PRIME NUMBERS] ");sfc(ww);
                                    mm(30); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[3].first;
                                    if(store1<1 || store1>1000000000000) { mm(37); getch();break; }
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_non_prime_exist(store2,store1);
                                    if(check==false) { mm(42); getch();break; }
                                    s2_3dc[start-1][3]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1)); break;
                                }
                                if(s2_3dc[start-1][1]=="6"&&s2_3dc[start-1][3]=="~")  // incremented value for incremented number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [INCREMENTED NUMBERS] ");sfc(ww);
                                    mm(32); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1); s2_3dc[start-1][3]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                }
                                if(s2_3dc[start-1][1]=="7"&&s2_3dc[start-1][3]=="~")  // max value for Nth Fibonacci number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [Nth FIBONACCI NUMBERS] ");sfc(ww);
                                    mm(34); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[3].first;
                                    if(store1<1 || store1>93) { mm(37); getch();break; }
                                    if(store1<store2) { mm(38); getch();break; }
                                    s2_3dc[start-1][3]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1)); break;
                                }
                                if(s2_3dc[start-1][4]=="~~")  // size of array through initializer
                                {
                                    printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                        cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                    }
                                    mm(57); cin>>choice1;
                                    if(choice1=="cl") { s2_3dc[start-1][4]="~";break; }
                                    else if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool flag=false;
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        if(get<3>(si[itrr])==choice1)
                                        {
                                            flag=true; s2_3dc[start-1][4]=choice1; dummy_o3dc.push_back(make_pair(get<0>(si[itrr]),choice1)); s2_3dc[start-1][0]="print"; break;
                                        }
                                    }
                                    if(flag==false) { mm(58); getch();break; }
                                    break;
                                }
                                if(s2_3dc[start-1][4]=="~")  // size of array
                                {
                                    mm(56); cin>>choice1;
                                    if(choice1=="int")
                                    {
                                        if(si.size()==0) { mm(59); getch();break; }
                                        else { s2_3dc[start-1][4]="~~"; break; }
                                    }
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>1000000) { mm(37); getch();break; }
                                    s2_3dc[start-1][4]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1)); s2_3dc[start-1][0]="print"; break;
                                }
                            }
                            if(s2_3dc[start-1][0]=="2")       // Array of  Real
                            {
                                printf("\n  Enter following details for");sfc(lm);printf(" [REAL NUMBERS] ");sfc(ww);
                                if(s2_3dc[start-1][1]=="~")   // set precision
                                {
                                    mm(43); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<0 || store>100) { mm(37); getch();break; }
                                    s2_3dc[start-1][1]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][2]=="~")  // set minimum value
                                {
                                    mm(25); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    s2_3dc[start-1][2]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][3]=="~")  // set maximum value
                                {
                                    mm(26); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[3].first;
                                    if(store1==store2) { mm(44); getch();break; }//  ( Note -> Max_value-Min_value >=1 )
                                    if(store1<store2) { mm(38); getch();break; }
                                    s2_3dc[start-1][3]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1)); break;
                                }
                                if(s2_3dc[start-1][4]=="~~")  // set size of Array through initializer
                                {
                                    printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                        cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                    }
                                    mm(57); cin>>choice1;
                                    if(choice1=="cl") { s2_3dc[start-1][4]="~";break; }
                                    else if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool flag=false;
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        if(get<3>(si[itrr])==choice1)
                                        {
                                            flag=true; s2_3dc[start-1][4]=choice1; dummy_o3dc.push_back(make_pair(get<0>(si[itrr]),choice1)); s2_3dc[start-1][0]="print"; break;
                                       }
                                    }
                                    if(flag==false) { mm(58); getch();break; }
                                    break;
                                }
                                if(s2_3dc[start-1][4]=="~")  // set size of Array
                                {
                                    mm(56); cin>>choice1;
                                    if(choice1=="int")
                                    {
                                        if(si.size()==0) { mm(59); getch();break; }
                                        else { s2_3dc[start-1][4]="~~"; break; }
                                    }
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>1000000) { mm(37); getch();break; }
                                    s2_3dc[start-1][4]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1)); s2_3dc[start-1][0]="print"; break;
                                }
                            }
                            if(s2_3dc[start-1][0]=="3")       // Array of  String
                            {
                                if(s2_3dc[start-1][1]=="~")  // type of string
                                {
                                    mm(46); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    if(choice1=="1" || choice1=="2")
                                    {
                                        short store=string_to_integer_converter(choice1); s2_3dc[start-1][1]=choice1;
                                        dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                    }
                                    mm(36); getch(); break;
                                }
                                if(s2_3dc[start-1][1]=="1")    // Default String
                                {
                                    if(s2_3dc[start-1][2]=="~") //  store the default String
                                    {
                                        mm(47); string def_string; cin>>def_string; s2_3dc[start-1][2]=def_string;
                                        dummy_o3dc.push_back(make_pair(4,def_string)); break;
                                    }
                                    if(s2_3dc[start-1][4]=="~~")  // set size of Array through initializer
                                    {
                                        printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                        for(short itrr=0;itrr<si.size();itrr++)
                                        {
                                            printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                            cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                        }
                                        mm(57); cin>>choice1;
                                        if(choice1=="cl") { s2_3dc[start-1][4]="~";break; }
                                        else if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        bool flag=false;
                                        for(short itrr=0;itrr<si.size();itrr++)
                                        {
                                            if(get<3>(si[itrr])==choice1)
                                            {
                                                flag=true; s2_3dc[start-1][4]=choice1; dummy_o3dc.push_back(make_pair(get<0>(si[itrr]),choice1)); s2_3dc[start-1][0]="printt"; break;
                                            }
                                        }
                                        if(flag==false) { mm(58); getch();break; }
                                        break;
                                    }
                                    if(s2_3dc[start-1][4]=="~") //  set size of ARRAY
                                    {
                                        mm(56); cin>>choice1;
                                        if(choice1=="int")
                                        {
                                            if(si.size()==0) { mm(59); getch();break; }
                                            else { s2_3dc[start-1][4]="~~"; break; }
                                        }
                                        if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        bool check=valid_pos_neg_integer(choice1);
                                        if(check==false) { mm(37); getch();break; }
                                        ll store=string_to_integer_converter(choice1);
                                        if(store<1 || store>1000000) { mm(37); getch();break; }
                                        s2_3dc[start-1][4]=choice1;
                                        dummy_o3dc.push_back(make_pair(store,choice1)); s2_3dc[start-1][0]="printt"; break;
                                    }
                                }
                                else                           // Input String
                                {
                                    if(s2_3dc[start-1][2]=="~")  // store input string
                                    {
                                        mm(48); string in_string;cin>>in_string; s2_3dc[start-1][2]=in_string;
                                        dummy_o3dc.push_back(make_pair(4,in_string)); break;
                                    }
                                    if(s2_3dc[start-1][3]=="~")  // type of string
                                    {
                                        mm(49); cin>>choice1;
                                        if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        if(choice1=="1" || choice1=="2" || choice1=="3" || choice1=="4")
                                        {
                                            short store=string_to_integer_converter(choice1);
                                            s2_3dc[start-1][3]=choice1;
                                            dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                        }
                                        mm(36); getch(); break;
                                    }
                                    if(s2_3dc[start-1][5]=="~")  // mode of string
                                    {
                                        mm(50); cin>>choice1;
                                        if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        if(choice1=="1" || choice1=="2")
                                        {
                                            short store=string_to_integer_converter(choice1); s2_3dc[start-1][5]=choice1;
                                            dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                        }
                                        mm(36); getch(); break;
                                    }
                                    if(s2_3dc[start-1][6]=="~")  // size of string
                                    {
                                        if(s2_3dc[start-1][5]=="1")    // Repetition allowed in symbols
                                        {
                                            mm(51); cin>>choice1;
                                            if(choice1=="min") break;
                                            else if(choice1=="exe") break;
                                            bool check=valid_pos_neg_integer(choice1);
                                            if(check==false) { mm(37); getch();break; }
                                            ll store=string_to_integer_converter(choice1);
                                            if(store<1 || store>1000000) { mm(37); getch();break; }
                                            s2_3dc[start-1][6]=choice1;
                                            dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                        }
                                        else        // No repetition allowed in symbols
                                        {
                                            if(s2_3dc[start-1][3]=="4")    // palindromic
                                            {
                                                mm(70);sfc(lm);cout<<(2*s2_3dc[start-1][2].size()); sfc(ww);printf(")\n\n SIZE ->  "); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                bool check=valid_pos_neg_integer(choice1);
                                                if(check==false) { mm(37); getch();break; }
                                                ll store=string_to_integer_converter(choice1);
                                                if(store<1 || store>(2*s2_3dc[start-1][2].size())) { mm(37); getch();break; }
                                                s2_3dc[start-1][6]=choice1;
                                                dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                            }
                                            else   //  Ordinary
                                            {
                                                mm(70);sfc(lm);cout<<s2_3dc[start-1][2].size();sfc(ww); printf(")\n\n SIZE ->  "); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                bool check=valid_pos_neg_integer(choice1);
                                                if(check==false) { mm(37); getch();break; }
                                                ll store=string_to_integer_converter(choice1);
                                                if(store<1 || store>s2_3dc[start-1][2].size())
                                                { mm(37); getch();break; }
                                                s2_3dc[start-1][6]=choice1;
                                                dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                            }
                                        }
                                    }
                                    if(s2_3dc[start-1][4]=="~~")  // size of array through initializer
                                    {
                                        printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                        for(short itrr=0;itrr<si.size();itrr++)
                                        {
                                            printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                            cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                        }
                                        mm(57); cin>>choice1;
                                        if(choice1=="cl") { s2_3dc[start-1][4]="~";break; }
                                        else if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        bool flag=false;
                                        for(short itrr=0;itrr<si.size();itrr++)
                                        {
                                            if(get<3>(si[itrr])==choice1)
                                            {
                                                flag=true; s2_3dc[start-1][4]=choice1; dummy_o3dc.push_back(make_pair(get<0>(si[itrr]),choice1)); s2_3dc[start-1][0]="print"; break;
                                            }
                                        }
                                        if(flag==false) { mm(58); getch();break; }
                                        break;
                                    }
                                    if(s2_3dc[start-1][4]=="~")  // size of array
                                    {
                                        mm(56); cin>>choice1;
                                        if(choice1=="int")
                                        {
                                            if(si.size()==0) { mm(59); getch();break; }
                                            else { s2_3dc[start-1][4]="~~"; break; }
                                        }
                                        if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        bool check=valid_pos_neg_integer(choice1);
                                        if(check==false) { mm(37); getch();break; }
                                        ll store=string_to_integer_converter(choice1);
                                        if(store<1 || store>1000000) { mm(37); getch();break; }
                                        s2_3dc[start-1][4]=choice1;
                                        dummy_o3dc.push_back(make_pair(store,choice1)); s2_3dc[start-1][0]="print"; break;
                                    }
                                }
                            }
                            if(s2_3dc[start-1][0]=="4")       // prepare for Permutations
                            {
                                dummy_o3dc.push_back(make_pair(1,"~")); // for storing permutation string    (index 2)
                                dummy_o3dc.push_back(make_pair(1,"~")); // for storing Size of array         (index 3)
                                dummy_o3dc.push_back(make_pair(1,"~")); // for storing print format of array (index 4)
                                dummy_o3dc.push_back(make_pair(1,"~")); // for storing order of array        (index 5)
                                s2_3dc[start-1][0]="ready_for_permutation"; break;
                            }
                            if(s2_3dc[start-1][0]=="ready_for_permutation")    // Array of Permutation
                            {
                                printf("\n  Enter following details for");sfc(lm);printf(" [PERMUTATIONS] ");sfc(ww);
                                if(s2_3dc[start-1][4]=="~~")  // set size of Array through initializer
                                {
                                    printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                        cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                    }
                                    mm(57); cin>>choice1;
                                    if(choice1=="cl") { s2_3dc[start-1][4]="~";break; }
                                    else if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool flag=false;
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        if(get<3>(si[itrr])==choice1)
                                        {
                                            flag=true; s2_3dc[start-1][4]=choice1;
                                            dummy_o3dc[3].first=get<0>(si[itrr]); dummy_o3dc[3].second=choice1; break;
                                       }
                                    }
                                    if(flag==false) { mm(58); getch();break; }
                                    break;
                                }
                                if(s2_3dc[start-1][4]=="~")  // set size of Array
                                {
                                    mm(56); cin>>choice1;
                                    if(choice1=="int")
                                    {
                                        if(si.size()==0) { mm(59); getch();break; }
                                        else { s2_3dc[start-1][4]="~~"; break; }
                                    }
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>1000000) { mm(37); getch();break; }
                                    s2_3dc[start-1][4]=choice1;
                                    dummy_o3dc[3].first=store;dummy_o3dc[3].second=choice1; break;
                                }
                                if(dummy_o3dc[2].second=="~")  // store string for permutation
                                {
                                    mm(68); string in_string; cin>>in_string;
                                    if(in_string.size()>19) { mm(37); getch();break; }
                                    ll store1=count_no_of_permutations(in_string);
                                    if(dummy_o3dc[3].first<0)
                                    {
                                        short indexx=abs(dummy_o3dc[3].first)-1;
                                        ll store2=get<2>(si[indexx]);
                                        if(store1<store2)
                                        {
                                            cout<<"\n\n    Only "<<store1<<" number of permutations are possible of your string.";
                                            cout<<"\n    However, you want to create ";sfc(lg);printf("ARRAY[]");sfc(ww);printf(" of size ");cout<<store2;printf(" as per your ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" size");
                                            sfc(ly);printf("\n  INITIALIZER : ");cout<<get<3>(si[indexx]);sfc(ww);printf(" Range -> [ ");cout<<get<1>(si[indexx])<<" - "<<get<2>(si[indexx])<<" ]";                                                    cout<<"\n\n    So you are advised to change your string which have at least "<<store2<<" number of permutations.";
                                            printf("\n\n    Now press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to continue"); getch(); break;
                                        }
                                    }
                                    else
                                    {
                                        ll store2=dummy_o3dc[3].first;
                                        if(store1<store2)
                                        {
                                            cout<<"\n\n    Only "<<store1<<" number of permutations are possible of your string.";
                                            cout<<"\n    However, you want to create ";sfc(lg);printf("ARRAY[]");sfc(ww);printf(" of size ");cout<<store2;
                                            cout<<"\n\n    So you are advised to change your string which have at least "<<store2<<" number of permutations.";
                                            printf("\n\n    Now press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to continue"); getch(); break;
                                        }
                                    }
                                            dummy_o3dc[2].second=in_string;
                                            dummy_o3dc[2].first=4; break;
                                }
                                if(dummy_o3dc[4].second=="~")  // store  print style of array
                                {
                                    mm(55); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    if(choice1=="1" || choice1=="2")
                                    {
                                        short store=string_to_integer_converter(choice1);
                                        dummy_o3dc[4].first=store; dummy_o3dc[4].second=choice1; break;
                                    }
                                    mm(36); getch(); break;
                                }
                                if(dummy_o3dc[5].second=="~")  // store  order of array
                                {
                                    mm(54); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    if(choice1=="1" || choice1=="2" || choice1=="3")
                                    {
                                        short store=string_to_integer_converter(choice1);
                                        dummy_o3dc[5].first=store; dummy_o3dc[5].second=choice1;
                                        dummy2_o3dc.push_back(dummy_o3dc);
                                        dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                    }
                                    mm(36); getch(); break;
                                }
                            }
                            if(s2_3dc[start-1][0]=="5")                       // prepare for unique number
                            {
                                dummy_o3dc.push_back(make_pair(1,"~"));  // for storing minimum value    (index 2)
                                dummy_o3dc.push_back(make_pair(1,"~"));  // for storing maximum value    (index 3)
                                dummy_o3dc.push_back(make_pair(1,"~"));  // for storing size of array    (index 4)
                                dummy_o3dc.push_back(make_pair(1,"~"));  // for storing print format     (index 5)
                                dummy_o3dc.push_back(make_pair(1,"~"));  // for storing order            (index 6)
                                s2_3dc[start-1][0]="ready_for_unique"; break;
                            }
                            if(s2_3dc[start-1][0]=="ready_for_unique")        // Array of Unique Numbers
                            {
                                printf("\n  Enter following details for");sfc(lm);printf(" [UNIQUE NUMBERS] ");sfc(ww);
                                if(s2_3dc[start-1][4]=="~~")   // set size of Array through initializer
                                {
                                    printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                        cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                    }
                                    mm(57); cin>>choice1;
                                    if(choice1=="cl") { s2_3dc[start-1][4]="~";break; }
                                    else if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool flag=false;
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        if(get<3>(si[itrr])==choice1)
                                        {
                                            flag=true; s2_3dc[start-1][4]=choice1;
                                            dummy_o3dc[4].first=get<0>(si[itrr]); dummy_o3dc[4].second=choice1; break;
                                       }
                                    }
                                    if(flag==false) { mm(58); getch();break; }
                                    break;
                                }
                                if(s2_3dc[start-1][4]=="~")   // set size of Array
                                {
                                    mm(56); cin>>choice1;
                                    if(choice1=="int")
                                    {
                                        if(si.size()==0) { mm(59); getch();break; }
                                        else { s2_3dc[start-1][4]="~~"; break; }
                                    }
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>1000000) { mm(37); getch();break; }
                                    s2_3dc[start-1][4]=choice1;
                                    dummy_o3dc[4].first=store;dummy_o3dc[4].second=choice1; break;
                                }
                                if(dummy_o3dc[2].second=="~")  // set minimum value
                                {
                                    mm(25); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    dummy_o3dc[2].first=store;dummy_o3dc[2].second=choice1; break;
                                }
                                if(dummy_o3dc[3].second=="~")  // set maximum value
                                {
                                    mm(26); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1);
                                    ll store2=dummy_o3dc[2].first;
                                    if(store1<store2) { mm(38); getch();break; }
                                    if(dummy_o3dc[4].first<0)
                                    {
                                        short indexx=abs(dummy_o3dc[4].first)-1;
                                        ll maxi=get<2>(si[indexx]);
                                        if(maxi>(store1-store2+1))
                                        {
                                            cout<<"\n\n  You wish to create "<<maxi<<" Size of ";sfc(lg);printf("ARRAY[]");sfc(ww);cout<<" at Maximum as per your ";sfc(ly);printf("INITIALIZER");sfc(ww);printf(" size.");
                                            sfc(ly);printf("\n  INITIALIZER : ");cout<<get<3>(si[indexx]);sfc(ww);printf(" Range -> [ ");cout<<get<1>(si[indexx])<<" - "<<get<2>(si[indexx])<<" ]";
                                            cout<<"\n  However, only "<<(store1-store2+1)<<" Unique No. exists in range provided by you.";
                                            printf("\n\n  You are advised to enlarge your range");
                                            printf("\n\n   press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to change Maximum value"); getch();break;
                                        }
                                    }
                                    else
                                    {
                                    if(dummy_o3dc[4].first>(store1-store2+1))
                                    {
                                        cout<<"\n\n  You wish to create "<<dummy_o3dc[4].first<<" Size of ";sfc(lg);printf("ARRAY[]");sfc(ww);
                                        cout<<"\n  However, only "<<(store1-store2+1)<<" Unique No. exists in range provided by you.";
                                        printf("\n\n  You are advised to enlarge your range");
                                        printf("\n\n   press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to change Maximum value"); getch();break;
                                    }
                                    }
                                    dummy_o3dc[3].first=store1;dummy_o3dc[3].second=choice1; break;
                                }
                                if(dummy_o3dc[5].second=="~")  // set print format
                                {
                                    mm(55); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    if(choice1=="1" || choice1=="2")
                                    {
                                        short store=string_to_integer_converter(choice1);
                                        dummy_o3dc[5].first=store; dummy_o3dc[5].second=choice1; break;
                                    }
                                    mm(36); getch(); break;
                                }
                                if(dummy_o3dc[6].second=="~")  // set order
                                {
                                    mm(54); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    if(choice1=="1" || choice1=="2" || choice1=="3")
                                    {
                                        short store=string_to_integer_converter(choice1);
                                        dummy_o3dc[6].first=store; dummy_o3dc[6].second=choice1;
                                        dummy2_o3dc.push_back(dummy_o3dc);
                                        dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                    }
                                    mm(36); getch(); break;
                                }
                            }
                        }

                    case 4:    // STRING CLASS
                        {
                            cout<<"  "<<(++start)<<". ";
                            sfc(lg);cout<<_3dc[i][j].second;sfc(lc);cout<<" [CLASS STRING]";sfc(ww);
                            string type_of_string;
                            if(s2_3dc[start-1][0]=="~")
                            {
                                mm(46);cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1" || choice1=="2")
                                {
                                    type_of_string=choice1;
                                    short store=string_to_integer_converter(choice1); s2_3dc[start-1][0]=type_of_string;
                                    dummy_o3dc.push_back(make_pair(4,"str"));
                                    dummy_o3dc.push_back(make_pair(store,type_of_string));  break;
                                }
                                mm(36); getch(); break;
                            }
                            type_of_string=s2_3dc[start-1][0];
                            if(type_of_string=="1")
                            {
                                mm(47); string def_string; cin>>def_string; s2_3dc[start-1][1]=def_string;
                                dummy_o3dc.push_back(make_pair(4,def_string));
                                dummy2_o3dc.push_back(dummy_o3dc);
                                dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                            }
                            if(type_of_string=="2")
                            {
                                string in_string;
                                if(s2_3dc[start-1][1]=="~")
                                {
                                    mm(48); cin>>in_string; s2_3dc[start-1][1]=in_string;
                                    dummy_o3dc.push_back(make_pair(4,in_string)); break;
                                }
                                in_string=s2_3dc[start-1][1]; string input_string_type;
                                if(s2_3dc[start-1][2]=="~")
                                {
                                    string input_string_type; mm(49); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    if(choice1=="1" || choice1=="2" || choice1=="3" || choice1=="4")
                                    {
                                        input_string_type=choice1; short store=string_to_integer_converter(choice1);
                                        s2_3dc[start-1][2]=input_string_type;
                                        dummy_o3dc.push_back(make_pair(store,input_string_type));  break;
                                    }
                                    mm(36); getch(); break;
                                }
                                input_string_type=s2_3dc[start-1][2]; string input_string_mode;
                                if(s2_3dc[start-1][3]=="~")
                                {
                                    mm(50); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    if(choice1=="1" || choice1=="2")
                                    {
                                        input_string_mode=choice1; short store=string_to_integer_converter(choice1); s2_3dc[start-1][3]=input_string_mode;
                                        dummy_o3dc.push_back(make_pair(store,input_string_mode));  break;
                                    }
                                    mm(36); getch(); break;
                                }
                                input_string_mode=s2_3dc[start-1][3];
                                string input_string_size;
                                if(s2_3dc[start-1][4]=="~")
                                {
                                    if(s2_3dc[start-1][3]=="1")    // Repetition allowed in symbols
                                    {
                                        mm(51); cin>>choice1;
                                        if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        bool check=valid_pos_neg_integer(choice1);
                                        if(check==false) { mm(37); getch();break; }
                                        ll store=string_to_integer_converter(choice1);
                                        if(store<1 || store>1000000) { mm(37); getch();break; }
                                        input_string_size=choice1; s2_3dc[start-1][4]=input_string_size;
                                        dummy_o3dc.push_back(make_pair(store,input_string_size));
                                        dummy2_o3dc.push_back(dummy_o3dc);
                                        dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                    }
                                    else        // No repetition allowed in symbols
                                    {
                                        if(s2_3dc[start-1][2]=="4")    // palindromic
                                        {
                                            mm(70);sfc(lm);cout<<(2*s2_3dc[start-1][1].size());sfc(ww); printf(")\n\n SIZE ->  "); cin>>choice1;
                                            if(choice1=="min") break;
                                            else if(choice1=="exe") break;
                                            bool check=valid_pos_neg_integer(choice1);
                                            if(check==false) { mm(37); getch();break; }
                                            ll store=string_to_integer_converter(choice1);
                                            if(store<1 || store>(2*s2_3dc[start-1][1].size())) { mm(37); getch();break; }
                                            input_string_size=choice1; s2_3dc[start-1][4]=input_string_size;
                                            dummy_o3dc.push_back(make_pair(store,input_string_size));
                                            dummy2_o3dc.push_back(dummy_o3dc);
                                            dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                        }
                                        else   //  Ordinary
                                        {
                                            mm(70);sfc(lm);cout<<s2_3dc[start-1][1].size();sfc(ww); printf(")\n\n SIZE ->  "); cin>>choice1;
                                            if(choice1=="min") break;
                                            else if(choice1=="exe") break;
                                            bool check=valid_pos_neg_integer(choice1);
                                            if(check==false) { mm(37); getch();break; }
                                            ll store=string_to_integer_converter(choice1);
                                            if(store<1 || store>s2_3dc[start-1][1].size()) { mm(37); getch();break; }
                                            input_string_size=choice1; s2_3dc[start-1][4]=input_string_size;
                                            dummy_o3dc.push_back(make_pair(store,input_string_size));
                                            dummy2_o3dc.push_back(dummy_o3dc);
                                            dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                        }
                                    }
                                }
                            }
                            break;
                        }

                    case 5:    // MATRIX CLASS
                        {
                            cout<<"  "<<(++start)<<". ";
                            sfc(lg);cout<<_3dc[i][j].second;sfc(lc);cout<<" [CLASS MATRIX]";sfc(ww);
                            if(s2_3dc[start-1][0]=="order2")   //  set order2 in Matrix
                            {
                                mm(63); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1" || choice1=="2" || choice1=="3")
                                {
                                    short store=string_to_integer_converter(choice1);
                                    dummy_o3dc.push_back(make_pair(store,choice1));
                                    dummy2_o3dc.push_back(dummy_o3dc);
                                    dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                }
                                mm(36); getch(); break;
                            }
                            if(s2_3dc[start-1][0]=="order1")   //  set order in Matrix
                            {
                                mm(64); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1" || choice1=="2" || choice1=="3")
                                {
                                    short store=string_to_integer_converter(choice1);
                                    dummy_o3dc.push_back(make_pair(store,choice1));
                                    s2_3dc[start-1][0]="order2"; break;
                                }
                                mm(36); getch(); break;
                            }
                            if(s2_3dc[start-1][0]=="~")       // set type of Matrix
                            {
                                mm(60); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1" || choice1=="2" || choice1=="3" || choice1=="4" || choice1=="5")
                                {
                                    s2_3dc[start-1][0]=choice1;
                                    short store=string_to_integer_converter(choice1);
                                    dummy_o3dc.push_back(make_pair(5,"mat"));
                                    dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                }
                                mm(36); getch(); break;
                            }
                            if(s2_3dc[start-1][0]=="1")       // matrix of Integer
                            {
                                if(s2_3dc[start-1][1]=="~")  // type of integer
                                {
                                    mm(35);cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    if(choice1=="1" || choice1=="2" || choice1=="3" || choice1=="4" || choice1=="5" || choice1=="6" || choice1=="7")
                                    {
                                        s2_3dc[start-1][1]=choice1;
                                        short store=string_to_integer_converter(choice1);
                                        dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                    }
                                    mm(36); getch(); break;
                                }
                                if(s2_3dc[start-1][1]=="1"&&s2_3dc[start-1][2]=="~")  // min value for random number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [RANDOM NUMBERS] ");sfc(ww);
                                    mm(25); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1); s2_3dc[start-1][2]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                }
                                if(s2_3dc[start-1][1]=="2"&&s2_3dc[start-1][2]=="~")  // min value for odd number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [ODD NUMBERS] ");sfc(ww);
                                    mm(25); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1); s2_3dc[start-1][2]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][1]=="3"&&s2_3dc[start-1][2]=="~")  // min value for even number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [EVEN NUMBERS] ");sfc(ww);
                                    mm(25); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1); s2_3dc[start-1][2]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][1]=="4"&&s2_3dc[start-1][2]=="~")  // min value for prime number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [PRIME NUMBERS] ");sfc(ww);
                                    mm(27); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<2 || store>10000000) { mm(37); getch();break; }
                                    s2_3dc[start-1][2]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][1]=="5"&&s2_3dc[start-1][2]=="~")  // min value for non prime number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [Non Prime Numbers] ");sfc(ww);
                                    mm(29); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>1000000000000) { mm(37); getch();break; }
                                    s2_3dc[start-1][2]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][1]=="6"&&s2_3dc[start-1][2]=="~")  // starting value for incremented number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [Incremented Numbers] ");sfc(ww);
                                    mm(31); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    s2_3dc[start-1][2]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                }
                                if(s2_3dc[start-1][1]=="7"&&s2_3dc[start-1][2]=="~")  // min value for Nth Fibonacci number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [FIBONACCI NUMBERS] ");sfc(ww);
                                    mm(33); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>93) { mm(37); getch();break; }
                                    s2_3dc[start-1][2]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][1]=="1"&&s2_3dc[start-1][3]=="~")  // max value for random number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [RANDOM NUMBERS] ");sfc(ww);
                                    mm(26);  cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[3].first;
                                    if(store1<store2) { mm(38); getch();break; }
                                    s2_3dc[start-1][3]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1)); break;
                                }
                                if(s2_3dc[start-1][1]=="2"&&s2_3dc[start-1][3]=="~")  // max value for odd number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [ODD NUMBERS] ");sfc(ww);
                                    mm(26); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[3].first;
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_odd_exist(store2,store1);
                                    if(check==false) { mm(39); getch();break; }
                                    s2_3dc[start-1][3]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1)); break;
                                }
                                if(s2_3dc[start-1][1]=="3"&&s2_3dc[start-1][3]=="~")  // max value for even number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [EVEN NUMBERS] ");sfc(ww);
                                    mm(26); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[3].first;
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_even_exist(store2,store1);
                                    if(check==false) { mm(40); getch();break; }
                                    s2_3dc[start-1][3]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1)); break;
                                }
                                if(s2_3dc[start-1][1]=="4"&&s2_3dc[start-1][3]=="~")  // max value for prime number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [PRIME NUMBERS] ");sfc(ww);
                                    mm(28); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[3].first;
                                    if(store1<2 || store1>10000000) { mm(37); getch();break; }
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_prime_exist(store2,store1);
                                    if(check==false) { mm(41); getch();break; }
                                    s2_3dc[start-1][3]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1)); break;
                                }
                                if(s2_3dc[start-1][1]=="5"&&s2_3dc[start-1][3]=="~")  // max value for non prime number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [NON PRIME NUMBERS] ");sfc(ww);
                                    mm(30); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[3].first;
                                    if(store1<1 || store1>1000000000000) { mm(37); getch();break; }
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_non_prime_exist(store2,store1);
                                    if(check==false) { mm(42); getch();break; }
                                    s2_3dc[start-1][3]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1)); break;
                                }
                                if(s2_3dc[start-1][1]=="6"&&s2_3dc[start-1][3]=="~")  // increment value for incremented number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [INCREMENTED NUMBERS] ");sfc(ww);
                                    mm(32); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1); s2_3dc[start-1][3]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                }
                                if(s2_3dc[start-1][1]=="7"&&s2_3dc[start-1][3]=="~")  // max value for Nth Fibonacci number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [Nth FIBONACCI NUMBERS] ");sfc(ww);
                                    mm(34); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[3].first;
                                    if(store1<1 || store1>93) { mm(37); getch();break; }
                                    if(store1<store2) { mm(38); getch();break; }
                                    s2_3dc[start-1][3]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1)); break;
                                }
                                if(s2_3dc[start-1][4]=="~~")  // Rows in Matrix through initializer
                                {
                                    printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                        cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                    }
                                    mm(57); cin>>choice1;
                                    if(choice1=="cl") { s2_3dc[start-1][4]="~";break; }
                                    else if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool flag=false;
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        if(get<3>(si[itrr])==choice1)
                                        {
                                            fi=get<2>(si[itrr]); flag=true; s2_3dc[start-1][4]=choice1; dummy_o3dc.push_back(make_pair(get<0>(si[itrr]),choice1)); break;
                                        }
                                    }
                                    if(flag==false) { mm(58); getch();break; }
                                    break;
                                }
                                if(s2_3dc[start-1][4]=="~")  // Rows in Matrix
                                {
                                    mm(61); cin>>choice1;
                                    if(choice1=="int")
                                    {
                                        if(si.size()==0) { mm(59); getch();break; }
                                        else { s2_3dc[start-1][4]="~~"; break; }
                                    }
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>1000000) { mm(37); getch();break; }
                                    s2_3dc[start-1][4]=choice1; fi=store;
                                    dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                }
                                if(s2_3dc[start-1][5]=="~~")  // Columns in Matrix through initializer
                                {
                                    printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                        cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                    }
                                    mm(57); cin>>choice1;
                                    if(choice1=="cl") { s2_3dc[start-1][5]="~";break; }
                                    else if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    short flag=0;
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        if(get<3>(si[itrr])==choice1)
                                        {
                                            ll range=fi*get<2>(si[itrr]);
                                            if(range>1000000) { mm(65);sfc(lr);cout<<range;sfc(ww); mm(66); getch();flag=1;break; }
                                            flag=2; s2_3dc[start-1][5]=choice1; dummy_o3dc.push_back(make_pair(get<0>(si[itrr]),choice1));s2_3dc[start-1][0]="order1"; break;
                                        }
                                    }
                                    if(flag==false) { mm(58); getch();break; }
                                    break;
                                }
                                if(s2_3dc[start-1][5]=="~")  // Columns in Matrix
                                {
                                    mm(62);cin>>choice1;
                                    if(choice1=="int")
                                    {
                                        if(si.size()==0) { mm(59); getch();break; }
                                        else { s2_3dc[start-1][5]="~~"; break; }
                                    }
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>1000000) { mm(37); getch();break; }
                                    ll range=fi*store;
                                    if(range>1000000) { mm(65);sfc(lr);cout<<range;sfc(ww); mm(66); getch(); break; }
                                    s2_3dc[start-1][5]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1)); s2_3dc[start-1][0]="order1"; break;
                                }
                            }
                            if(s2_3dc[start-1][0]=="2")  // matrix of Real
                            {
                                printf("\n  Enter following details for");sfc(lm);printf(" [REAL NUMBERS] ");sfc(ww);
                                if(s2_3dc[start-1][1]=="~")   // set precision
                                {
                                    mm(43); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<0 || store>100) { mm(37); getch();break; }
                                    s2_3dc[start-1][1]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][2]=="~")  // set minimum value
                                {
                                    mm(25); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    s2_3dc[start-1][2]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][3]=="~")  // set maximum value
                                {
                                    mm(26); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[3].first;
                                    if(store1==store2) { mm(44); getch();break; }//  ( Note -> Max_value-Min_value >=1 )
                                    if(store1<store2) { mm(38); getch();break; }
                                    s2_3dc[start-1][3]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1)); break;
                                }
                                if(s2_3dc[start-1][4]=="~~")  // Rows in Matrix through initializer
                                {
                                    printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                        cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                    }
                                    mm(57); cin>>choice1;
                                    if(choice1=="cl") { s2_3dc[start-1][4]="~";break; }
                                    else if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool flag=false;
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        if(get<3>(si[itrr])==choice1)
                                        {
                                            fi=get<2>(si[itrr]); flag=true; s2_3dc[start-1][4]=choice1; dummy_o3dc.push_back(make_pair(get<0>(si[itrr]),choice1)); break;
                                        }
                                    }
                                    if(flag==false) { mm(58); getch();break; }
                                    break;
                                }
                                if(s2_3dc[start-1][4]=="~")  // Rows in Matrix
                                {
                                    mm(61); cin>>choice1;
                                    if(choice1=="int")
                                    {
                                        if(si.size()==0) { mm(59); getch();break; }
                                        else { s2_3dc[start-1][4]="~~"; break; }
                                    }
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>1000000) { mm(37); getch();break; }
                                    s2_3dc[start-1][4]=choice1; fi=store;
                                    dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                }
                                if(s2_3dc[start-1][5]=="~~")  // Columns in Matrix through initializer
                                {
                                    printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                        cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                    }
                                    mm(57); cin>>choice1;
                                    if(choice1=="cl") { s2_3dc[start-1][5]="~";break; }
                                    else if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    short flag=0;
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        if(get<3>(si[itrr])==choice1)
                                        {
                                            ll range=fi*get<2>(si[itrr]);
                                            if(range>1000000) { mm(65);sfc(lr);cout<<range;sfc(ww); mm(66); getch();flag=1;break; }
                                            flag=2; s2_3dc[start-1][5]=choice1; dummy_o3dc.push_back(make_pair(get<0>(si[itrr]),choice1));s2_3dc[start-1][0]="order1"; break;
                                        }
                                    }
                                    if(flag==false) { mm(58); getch();break; }
                                    break;
                                }
                                if(s2_3dc[start-1][5]=="~")  // Columns in Matrix
                                {
                                    mm(62);cin>>choice1;
                                    if(choice1=="int")
                                    {
                                        if(si.size()==0) { mm(59); getch();break; }
                                        else { s2_3dc[start-1][5]="~~"; break; }
                                    }
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>1000000) { mm(37); getch();break; }
                                    ll range=fi*store;
                                    if(range>1000000) { mm(65);sfc(lr);cout<<range;sfc(ww); mm(66); getch();break; }
                                    s2_3dc[start-1][5]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1)); s2_3dc[start-1][0]="order1"; break;
                                }
                            }
                            if(s2_3dc[start-1][0]=="3")  // matrix of String
                            {
                                if(s2_3dc[start-1][1]=="~")  // type of string
                                {
                                    mm(46); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    if(choice1=="1" || choice1=="2")
                                    {
                                        short store=string_to_integer_converter(choice1); s2_3dc[start-1][1]=choice1;
                                        dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                    }
                                    mm(36); getch(); break;
                                }
                                if(s2_3dc[start-1][1]=="1")    // Default String
                                {
                                    if(s2_3dc[start-1][2]=="~") //  store the default String
                                    {
                                        mm(47); string def_string; cin>>def_string; s2_3dc[start-1][2]=def_string;
                                        dummy_o3dc.push_back(make_pair(4,def_string)); break;
                                    }
                                    if(s2_3dc[start-1][4]=="~~")  // Rows in Matrix through initializer
                                    {
                                        printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                        for(short itrr=0;itrr<si.size();itrr++)
                                        {
                                            printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                            cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                        }
                                        mm(57); cin>>choice1;
                                        if(choice1=="cl") { s2_3dc[start-1][4]="~";break; }
                                        else if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        bool flag=false;
                                        for(short itrr=0;itrr<si.size();itrr++)
                                        {
                                            if(get<3>(si[itrr])==choice1)
                                            {
                                                fi=get<2>(si[itrr]);  flag=true; s2_3dc[start-1][4]=choice1; dummy_o3dc.push_back(make_pair(get<0>(si[itrr]),choice1)); break;
                                            }
                                        }
                                        if(flag==false) { mm(58); getch();break; }
                                        break;
                                    }
                                    if(s2_3dc[start-1][4]=="~")  // Rows in Matrix
                                    {
                                        mm(61); cin>>choice1;
                                        if(choice1=="int")
                                        {
                                            if(si.size()==0) { mm(59); getch();break; }
                                            else { s2_3dc[start-1][4]="~~"; break; }
                                        }
                                        if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        bool check=valid_pos_neg_integer(choice1);
                                        if(check==false) { mm(37); getch();break; }
                                        ll store=string_to_integer_converter(choice1);
                                        if(store<1 || store>1000000) { mm(37); getch();break; }
                                        s2_3dc[start-1][4]=choice1; fi=store;
                                        dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                    }
                                    if(s2_3dc[start-1][5]=="~~")  // Columns in Matrix through initializer
                                    {
                                        printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                        for(short itrr=0;itrr<si.size();itrr++)
                                        {
                                            printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                            cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                        }
                                        mm(57); cin>>choice1;
                                        if(choice1=="cl") { s2_3dc[start-1][5]="~";break; }
                                        else if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        short flag=0;
                                        for(short itrr=0;itrr<si.size();itrr++)
                                        {
                                            if(get<3>(si[itrr])==choice1)
                                            {
                                                ll range=fi*get<2>(si[itrr]);
                                                if(range>1000000) { mm(65);sfc(lr);cout<<range;sfc(ww); mm(66); getch();flag=1;break; }
                                                flag=2; s2_3dc[start-1][5]=choice1; dummy_o3dc.push_back(make_pair(get<0>(si[itrr]),choice1));
                                                dummy2_o3dc.push_back(dummy_o3dc); dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                            }
                                        }
                                        if(flag==false) { mm(58); getch();break; }
                                        break;
                                    }
                                    if(s2_3dc[start-1][5]=="~")  // Columns in Matrix
                                    {
                                        mm(62); cin>>choice1;
                                        if(choice1=="int")
                                        {
                                            if(si.size()==0) { mm(59); getch();break; }
                                            else { s2_3dc[start-1][5]="~~"; break; }
                                        }
                                        if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        bool check=valid_pos_neg_integer(choice1);
                                        if(check==false) { mm(37); getch();break; }
                                        ll store=string_to_integer_converter(choice1);
                                        if(store<1 || store>1000000) { mm(37); getch();break; }
                                        ll range=fi*store;
                                        if(range>1000000) { mm(65);sfc(lr);cout<<range;sfc(ww); mm(66); getch();break; }
                                        s2_3dc[start-1][5]=choice1;
                                        dummy_o3dc.push_back(make_pair(store,choice1));
                                        dummy2_o3dc.push_back(dummy_o3dc); dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                    }
                                }
                                else                           // Input String
                                {
                                    if(s2_3dc[start-1][2]=="~")   // store input string
                                    {
                                        mm(48); string in_string;cin>>in_string; s2_3dc[start-1][2]=in_string;
                                        dummy_o3dc.push_back(make_pair(4,in_string)); break;
                                    }
                                    if(s2_3dc[start-1][3]=="~")   // type of string
                                    {
                                        mm(49); cin>>choice1;
                                        if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        if(choice1=="1" || choice1=="2" || choice1=="3" || choice1=="4")
                                        {
                                            short store=string_to_integer_converter(choice1);
                                            s2_3dc[start-1][3]=choice1;
                                            dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                        }
                                        mm(36); getch(); break;
                                    }

                                    if(s2_3dc[start-1][7]=="~")   // mode of string
                                    {
                                        mm(50); cin>>choice1;
                                        if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        if(choice1=="1" || choice1=="2")
                                        {
                                            short store=string_to_integer_converter(choice1); s2_3dc[start-1][7]=choice1;
                                            dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                        }
                                        mm(36); getch(); break;
                                    }
                                    if(s2_3dc[start-1][6]=="~")   // size of string
                                    {
                                        if(s2_3dc[start-1][7]=="1")    // Repetition allowed in symbols
                                        {
                                            mm(51);cin>>choice1;
                                            if(choice1=="min") break;
                                            else if(choice1=="exe") break;
                                            bool check=valid_pos_neg_integer(choice1);
                                            if(check==false) { mm(37); getch();break; }
                                            ll store=string_to_integer_converter(choice1);
                                            if(store<1 || store>1000000) { mm(37); getch();break; }
                                            s2_3dc[start-1][6]=choice1;
                                            dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                        }
                                        else        // No repetition allowed in symbols
                                        {
                                            if(s2_3dc[start-1][3]=="4")    // palindromic
                                            {
                                                mm(70);sfc(lm);cout<<(2*s2_3dc[start-1][2].size()); sfc(ww);printf(")\n\n SIZE ->  "); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                bool check=valid_pos_neg_integer(choice1);
                                                if(check==false) { mm(37); getch();break; }
                                                ll store=string_to_integer_converter(choice1);
                                                if(store<1 || store>(2*s2_3dc[start-1][2].size())) { mm(37); getch();break; }
                                                s2_3dc[start-1][6]=choice1;
                                                dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                            }
                                            else   //  Ordinary
                                            {
                                                mm(70);sfc(lm);cout<<s2_3dc[start-1][2].size();sfc(ww); printf(")\n\n SIZE ->  "); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                bool check=valid_pos_neg_integer(choice1);
                                                if(check==false) { mm(37); getch();break; }
                                                ll store=string_to_integer_converter(choice1);
                                                if(store<1 || store>s2_3dc[start-1][2].size()) { mm(37); getch();break; }
                                                s2_3dc[start-1][6]=choice1;
                                                dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                            }
                                        }
                                    }
                                    if(s2_3dc[start-1][4]=="~~")  // Rows in Matrix through initializer
                                    {
                                        printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                        for(short itrr=0;itrr<si.size();itrr++)
                                        {
                                            printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                            cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                        }
                                        mm(57); cin>>choice1;
                                        if(choice1=="cl") { s2_3dc[start-1][4]="~";break; }
                                        else if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        bool flag=false;
                                        for(short itrr=0;itrr<si.size();itrr++)
                                        {
                                            if(get<3>(si[itrr])==choice1)
                                            {
                                                fi=get<2>(si[itrr]);  flag=true; s2_3dc[start-1][4]=choice1; dummy_o3dc.push_back(make_pair(get<0>(si[itrr]),choice1)); break;
                                            }
                                        }
                                        if(flag==false) { mm(58); getch();break; }
                                        break;
                                    }
                                    if(s2_3dc[start-1][4]=="~")   // Rows in Matrix
                                    {
                                        mm(61); cin>>choice1;
                                        if(choice1=="int")
                                        {
                                            if(si.size()==0) { mm(59); getch();break; }
                                            else { s2_3dc[start-1][4]="~~"; break; }
                                        }
                                        if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        bool check=valid_pos_neg_integer(choice1);
                                        if(check==false) { mm(37); getch();break; }
                                        ll store=string_to_integer_converter(choice1);
                                        if(store<1 || store>1000000) { mm(37); getch();break; }
                                        s2_3dc[start-1][4]=choice1; fi=store;
                                        dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                    }
                                    if(s2_3dc[start-1][5]=="~~")  // Columns in Matrix through initializer
                                    {
                                        printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                        for(short itrr=0;itrr<si.size();itrr++)
                                        {
                                            printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                            cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                        }
                                        mm(57); cin>>choice1;
                                        if(choice1=="cl") { s2_3dc[start-1][5]="~";break; }
                                        else if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        short flag=0;
                                        for(short itrr=0;itrr<si.size();itrr++)
                                        {
                                            if(get<3>(si[itrr])==choice1)
                                            {
                                                ll range=fi*get<2>(si[itrr]);
                                                if(range>1000000) { mm(65);sfc(lr);cout<<range;sfc(ww); mm(66); getch();flag=1;break; }
                                                flag=2; s2_3dc[start-1][5]=choice1; dummy_o3dc.push_back(make_pair(get<0>(si[itrr]),choice1));s2_3dc[start-1][0]="order1"; break;
                                            }
                                        }
                                        if(flag==false) { mm(58); getch();break; }
                                        break;
                                    }
                                    if(s2_3dc[start-1][5]=="~")   // Columns in Matrix
                                    {
                                        mm(62); cin>>choice1;
                                        if(choice1=="int")
                                        {
                                            if(si.size()==0) { mm(59); getch();break; }
                                            else { s2_3dc[start-1][5]="~~"; break; }
                                        }
                                        if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        bool check=valid_pos_neg_integer(choice1);
                                        if(check==false) { mm(37); getch();break; }
                                        ll store=string_to_integer_converter(choice1);
                                        if(store<1 || store>1000000) { mm(37); getch();break; }
                                        ll range=fi*store;
                                        if(range>1000000) { mm(65);sfc(lr);cout<<range;sfc(ww); mm(66); getch(); break; }
                                        s2_3dc[start-1][5]=choice1;
                                        dummy_o3dc.push_back(make_pair(store,choice1)); s2_3dc[start-1][0]="order1"; break;
                                    }

                                }
                            }
                            if(s2_3dc[start-1][0]=="4")            // prepare for matrix of Permutation
                            {
                                dummy_o3dc.push_back(make_pair(1,"~")); // for storing permutation string    (index 2)
                                dummy_o3dc.push_back(make_pair(1,"~")); // for Storing Row of Matrix         (index 3)
                                dummy_o3dc.push_back(make_pair(1,"~")); // for storing Column of Matrix      (index 4)
                                s2_3dc[start-1][0]="ready_for_permutation"; break;
                            }
                            if(s2_3dc[start-1][0]=="ready_for_permutation")    // Matrix of Permutation
                            {
                                printf("\n  Enter following details for");sfc(lm);printf(" [PERMUTATIONS] ");sfc(ww);
                                if(s2_3dc[start-1][4]=="~~")  // Rows in Matrix through initializer
                                {
                                    printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                        cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                    }
                                    mm(57); cin>>choice1;
                                    if(choice1=="cl") { s2_3dc[start-1][4]="~";break; }
                                    else if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool flag=false;
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        if(get<3>(si[itrr])==choice1)
                                        {
                                            fi=get<2>(si[itrr]); flag=true; s2_3dc[start-1][4]=choice1; dummy_o3dc[3].first=get<0>(si[itrr]);dummy_o3dc[3].second=choice1; break;
                                        }
                                    }
                                    if(flag==false) { mm(58); getch();break; }
                                    break;
                                }
                                if(s2_3dc[start-1][4]=="~")  // Rows in Matrix
                                {
                                    mm(61); cin>>choice1;
                                    if(choice1=="int")
                                    {
                                        if(si.size()==0) { mm(59); getch();break; }
                                        else { s2_3dc[start-1][4]="~~"; break; }
                                    }
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>1000000) { mm(37); getch();break; }
                                    s2_3dc[start-1][4]=choice1; fi=store;
                                    dummy_o3dc[3].first=store;dummy_o3dc[3].second=choice1; break;
                                }
                                if(s2_3dc[start-1][5]=="~~")  // Columns in Matrix through initializer
                                {
                                    printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                        cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                    }
                                    mm(57); cin>>choice1;
                                    if(choice1=="cl") { s2_3dc[start-1][5]="~";break; }
                                    else if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    short flag=0;
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        if(get<3>(si[itrr])==choice1)
                                        {
                                            ll range=fi*get<2>(si[itrr]);
                                            if(range>1000000) { mm(65);sfc(lr);cout<<range;sfc(ww); mm(66); getch();flag=1;break; }
                                            flag=2; s2_3dc[start-1][5]=choice1;  fi=range;
                                            dummy_o3dc[4].first=get<0>(si[itrr]);dummy_o3dc[4].second=choice1; break;
                                        }
                                    }
                                    if(flag==false) { mm(58); getch();break; }
                                    break;
                                }
                                if(s2_3dc[start-1][5]=="~")  // Columns in Matrix
                                {
                                    mm(62); cin>>choice1;
                                    if(choice1=="int")
                                    {
                                        if(si.size()==0) { mm(59); getch();break; }
                                        else { s2_3dc[start-1][5]="~~"; break; }
                                    }
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>1000000) { mm(37); getch();break; }
                                    ll range=fi*store;
                                    if(range>1000000) { mm(65);sfc(lr);cout<<range;sfc(ww); mm(66); getch();break; }
                                    s2_3dc[start-1][5]=choice1;
                                    fi=range;
                                    dummy_o3dc[4].first=store;dummy_o3dc[4].second=choice1; break;
                                }
                                if(dummy_o3dc[2].second=="~")  // store string for permutation
                                {
                                    mm(68); string in_string; cin>>in_string;
                                    if(in_string.size()>19) { mm(37); getch();break; }
                                    ll store1=count_no_of_permutations(in_string);
                                    if(store1<fi)
                                    {
                                        cout<<"\n\n    Only "<<store1<<" number of permutations are possible of your string.";
                                        cout<<"\n    However, you want to create ";sfc(lg);printf("MATRIX[][]");sfc(ww);printf(" of ");cout<<fi;printf(" Number of cells");
                                        printf("\n\n  So you are advised to change your string, which meets the above criteria.");
                                        printf("\n\n    Now press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to continue"); getch(); break;
                                    }
                                    dummy_o3dc[2].second=in_string; dummy_o3dc[2].first=5;
                                    s2_3dc[start-1][0]="order1"; break;
                                }
                            }
                            if(s2_3dc[start-1][0]=="5")                       // prepare for unique number
                            {
                                dummy_o3dc.push_back(make_pair(1,"~"));  // for storing minimum value     (index 2)
                                dummy_o3dc.push_back(make_pair(1,"~"));  // for storing maximum value     (index 3)
                                dummy_o3dc.push_back(make_pair(1,"~"));  // for storing Rows of Matrix    (index 4)
                                dummy_o3dc.push_back(make_pair(1,"~"));  // for storing Columns of Matrix (index 5)
                                s2_3dc[start-1][0]="ready_for_unique"; break;
                            }
                            if(s2_3dc[start-1][0]=="ready_for_unique")  // matrix of all unique number
                            {
                                printf("\n  Enter following details for");sfc(lm);printf(" [UNIQUE NUMBERS] ");sfc(ww);
                                if(s2_3dc[start-1][4]=="~~")  // Rows in Matrix through initializer
                                {
                                    printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                        cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                    }
                                    mm(57); cin>>choice1;
                                    if(choice1=="cl") { s2_3dc[start-1][4]="~";break; }
                                    else if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool flag=false;
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        if(get<3>(si[itrr])==choice1)
                                        {
                                            fi=get<2>(si[itrr]); flag=true; s2_3dc[start-1][4]=choice1; dummy_o3dc[4].first=get<0>(si[itrr]);dummy_o3dc[4].second=choice1; break;
                                        }
                                    }
                                    if(flag==false) { mm(58); getch();break; }
                                    break;
                                }
                                if(s2_3dc[start-1][4]=="~")  // Rows in Matrix
                                {
                                    mm(61); cin>>choice1;
                                    if(choice1=="int")
                                    {
                                        if(si.size()==0) { mm(59); getch();break; }
                                        else { s2_3dc[start-1][4]="~~"; break; }
                                    }
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>1000000) { mm(37); getch();break; }
                                    s2_3dc[start-1][4]=choice1; fi=store;
                                    dummy_o3dc[4].first=store;dummy_o3dc[4].second=choice1; break;
                                }
                                if(s2_3dc[start-1][5]=="~~")  // Columns in Matrix through initializer
                                {
                                    printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                        cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                    }
                                    mm(57); cin>>choice1;
                                    if(choice1=="cl") { s2_3dc[start-1][5]="~";break; }
                                    else if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    short flag=0;
                                    for(short itrr=0;itrr<si.size();itrr++)
                                    {
                                        if(get<3>(si[itrr])==choice1)
                                        {
                                            ll range=fi*get<2>(si[itrr]);
                                            if(range>1000000) { mm(65);sfc(lr);cout<<range;sfc(ww); mm(66); getch();flag=1;break; }
                                            flag=2; s2_3dc[start-1][5]=choice1;  fi=range;
                                            dummy_o3dc[5].first=get<0>(si[itrr]);dummy_o3dc[5].second=choice1; break;
                                        }
                                    }
                                    if(flag==false) { mm(58); getch();break; }
                                    break;
                                }
                                if(s2_3dc[start-1][5]=="~")  // Columns in Matrix
                                {
                                    mm(62); cin>>choice1;
                                    if(choice1=="int")
                                    {
                                        if(si.size()==0) { mm(59); getch();break; }
                                        else { s2_3dc[start-1][5]="~~"; break; }
                                    }
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>1000000) { mm(37); getch();break; }
                                    ll range=fi*store;
                                    if(range>1000000) { mm(65);sfc(lr);cout<<range;sfc(ww); mm(66); getch(); break; }
                                    s2_3dc[start-1][5]=choice1; fi=range;
                                    dummy_o3dc[5].first=store;dummy_o3dc[5].second=choice1; break;
                                }
                                if(dummy_o3dc[2].second=="~")  // set minimum value
                                {
                                    mm(25); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    dummy_o3dc[2].first=store;dummy_o3dc[2].second=choice1; break;
                                }
                                if(dummy_o3dc[3].second=="~")  // set maximum value
                                {
                                    mm(26); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1);
                                    ll store2=dummy_o3dc[2].first;
                                    if(store1<store2) { mm(38); getch();break; }
                                    if(fi>(store1-store2+1))
                                    {
                                        cout<<"\n\n  You wish to create "<<fi<<" Number of cells in your ";sfc(lg);printf("MATRIX[][]");sfc(ww);
                                        cout<<"\n  However, only "<<(store1-store2+1)<<" Unique No. exists in range provided by you.";
                                        printf("\n\n  You are advised to enlarge your range");
                                        printf("\n\n   press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to change Maximum value"); getch();break;
                                    }
                                    dummy_o3dc[3].first=store1;dummy_o3dc[3].second=choice1;
                                    s2_3dc[start-1][0]="order1"; break;
                                }
                            }
                        }

                    case 6:    // TREE CLASS
                        {
                            cout<<"  "<<(++start)<<". ";
                            sfc(lg);cout<<_3dc[i][j].second;sfc(lc);cout<<" [CLASS TREE]";sfc(ww);
                            if(s2_3dc[start-1][0]=="yes")  // string to represent weights
                            {
                                mm(77); cin>>choice1;
                                dummy_o3dc[6].second=choice1;
                                dummy2_o3dc.push_back(dummy_o3dc);
                                dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                            }
                            if(s2_3dc[start-1][0]=="++")  // want to add string symbol in weights
                            {
                                mm(76); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1") { s2_3dc[start-1][0]="yes"; break; }
                                if(choice1=="2")
                                {
                                    dummy_o3dc[6].second=""; dummy2_o3dc.push_back(dummy_o3dc);
                                    dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                }
                                mm(36); getch(); break;
                            }
                            if(s2_3dc[start-1][0]=="~~~")  // string to connect nodes with node
                            {
                                mm(77); cin>>choice1; s2_3dc[start-1][0]="1";
                                dummy_o3dc[1].first=1; dummy_o3dc[1].second=choice1; break;
                            }
                            if(s2_3dc[start-1][0]=="~~")  // want to add string symbol between nodes
                            {
                                mm(78); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1") { s2_3dc[start-1][0]="~~~"; break; }
                                if(choice1=="2") { s2_3dc[start-1][0]=choice1; dummy_o3dc[1].first=0; break; }
                                mm(36); getch(); break;
                            }
                            if(s2_3dc[start-1][1]=="~")  // type of tree, 4 choices
                            {
                                mm(79); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1" || choice1=="2" || choice1=="3" || choice1=="4")
                                {
                                    short store=string_to_integer_converter(choice1);
                                    dummy_o3dc.push_back(make_pair(6,"tre"));
                                    dummy_o3dc.push_back(make_pair(0,""));
                                    dummy_o3dc.push_back(make_pair(store,choice1));
                                    s2_3dc[start-1][1]=choice1; break;
                                }
                                mm(36); getch(); break;
                            }
                            if(s2_3dc[start-1][2]=="~")   // number of nodes
                            {
                                if(s2_3dc[start-1][1]=="1" || s2_3dc[start-1][1]=="4")    // ROOTED BINARY TREE  or   BINARY SEARCH  TREE
                                {
                                    mm(81); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<2 || store>100000) { mm(37); getch();break; }
                                    dummy_o3dc.push_back(make_pair(store,choice1));
                                    s2_3dc[start-1][2]=choice1; break;
                                }
                                if(s2_3dc[start-1][1]=="2")    // FULL BINARY TREE
                                {
                                    mm(82); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<2 || store>100000) { mm(37); getch();break; }
                                    if(store%2==0) { mm(75); getch();break; }
                                    dummy_o3dc.push_back(make_pair(store,choice1));
                                    s2_3dc[start-1][2]=choice1; break;
                                }
                                if(s2_3dc[start-1][1]=="3")    // PERFECT BINARY TREE
                                {
                                    mm(83);cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    if(choice1=="3"||choice1=="7"||choice1=="15"||choice1=="31"||choice1=="63"||choice1=="127"||choice1=="255"||choice1=="511"||choice1=="1021"||choice1=="2047"||choice1=="4095"||choice1=="8191"||choice1=="16383"||choice1=="32767"||choice1=="65535")
                                    {
                                        ll store=string_to_integer_converter(choice1);
                                        dummy_o3dc.push_back(make_pair(store,choice1));
                                        s2_3dc[start-1][2]=choice1; break;
                                    }
                                    else { mm(37); getch();break; }
                                }
                            }
                            if(s2_3dc[start-1][3]=="~")          // starting index of node
                            {
                                mm(86); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                bool check=valid_pos_neg_integer(choice1);
                                if(check==false) { mm(37); getch();break; }
                                ll store=string_to_integer_converter(choice1);
                                if(store<-1000000000 || store>1000000000) { mm(37); getch();break; }
                                dummy_o3dc.push_back(make_pair(store,choice1));
                                s2_3dc[start-1][3]=choice1; break;
                            }
                            if(s2_3dc[start-1][4]=="~")          // ending index of nodes
                            {
                                printf("\n\n  Enter the ending index of the node  ");
                                ll lower_limit=dummy_o3dc[3].first+dummy_o3dc[4].first-1;
                                sfc(lr);printf("\n Note: ");sfc(ww);printf("Range -> (");cout<<lower_limit<<") - (10 to the power 9)";
                                sfc(lg);printf("\n\n  We recommend you to choose [ ");cout<<lower_limit<<" ] in order to obtain contiguous indexing ";printf("\n  of nodes");sfc(ww);
                                printf("\n\n  Enter your choice  -> "); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                bool check=valid_pos_neg_integer(choice1);
                                if(check==false) { mm(37); getch();break; }
                                ll store=string_to_integer_converter(choice1);
                                if(store<lower_limit) { mm(37); getch();break; }
                                dummy_o3dc.push_back(make_pair(store,choice1));
                                s2_3dc[start-1][4]=choice1; s2_3dc[start-1][0]="~~"; break;
                            }
                            //  skipping index 5
                            if(s2_3dc[start-1][6]=="~")           // Do you want weights
                            {
                                mm(88); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1") { s2_3dc[start-1][6]="~~"; break; }
                                if(choice1=="2")
                                {
                                    s2_3dc[start-1][6]=choice1;
                                    dummy_o3dc.push_back(make_pair(0,""));
                                    dummy2_o3dc.push_back(dummy_o3dc);
                                    dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                }
                                mm(36); getch(); break;
                            }
                            if(s2_3dc[start-1][6]=="~~")         // type of weight
                            {
                                mm(89); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1" || choice1=="2" || choice1=="3" || choice1=="4")
                                {
                                    short store=string_to_integer_converter(choice1); s2_3dc[start-1][6]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                }
                                mm(36); getch(); break;
                            }
                            if(s2_3dc[start-1][6]=="1")  // weight of integer
                            {
                                cout<<"\n\n  For WEIGHT of Integer, provide following details";
                                if(s2_3dc[start-1][7]=="~")  // type of Integer
                                {
                                    mm(35); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    if(choice1=="1" || choice1=="2" || choice1=="3" || choice1=="4" || choice1=="5" || choice1=="6" || choice1=="7")
                                    {
                                        s2_3dc[start-1][7]=choice1;
                                        short store=string_to_integer_converter(choice1);
                                        dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                    }
                                    mm(36); getch(); break;
                                }
                                if(s2_3dc[start-1][7]=="1"&&s2_3dc[start-1][8]=="~")  // min value for random number
                                {
                                    mm(73);printf("\n  Enter following details for");sfc(lm);printf(" [RANDOM NUMBERS] ");sfc(ww);
                                    mm(25); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1); s2_3dc[start-1][8]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                }
                                if(s2_3dc[start-1][7]=="2"&&s2_3dc[start-1][8]=="~")  // min value for odd number
                                {
                                    mm(73);printf("\n  Enter following details for");sfc(lm);printf(" [ODD NUMBERS] ");sfc(ww);
                                    mm(25); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1); s2_3dc[start-1][8]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][7]=="3"&&s2_3dc[start-1][8]=="~")  // min value for even number
                                {
                                    mm(73);printf("\n  Enter following details for");sfc(lm);printf(" [EVEN NUMBERS] ");sfc(ww);
                                    mm(25); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1); s2_3dc[start-1][8]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][7]=="4"&&s2_3dc[start-1][8]=="~")  // min value for prime number
                                {
                                    mm(73);printf("\n  Enter following details for");sfc(lm);printf(" [PRIME NUMBERS] ");sfc(ww);
                                    mm(27); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<2 || store>10000000) { mm(37); getch();break; }
                                    s2_3dc[start-1][8]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][7]=="5"&&s2_3dc[start-1][8]=="~")  // min value for non prime number
                                {
                                    mm(73);printf("\n  Enter following details for");sfc(lm);printf(" [Non Prime Numbers] ");sfc(ww);
                                    mm(29); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>1000000000000) { mm(37); getch();break; }
                                    s2_3dc[start-1][8]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][7]=="6"&&s2_3dc[start-1][8]=="~")  // starting value for incremented number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [Incremented Numbers] ");sfc(ww);
                                    mm(31); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    s2_3dc[start-1][8]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                }
                                if(s2_3dc[start-1][7]=="7"&&s2_3dc[start-1][8]=="~")  // min value for Nth Fibonacci number
                                {
                                    mm(73);printf("\n  Enter following details for");sfc(lm);printf(" [FIBONACCI NUMBERS] ");sfc(ww);
                                    mm(33); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>93) { mm(37); getch();break; }
                                    s2_3dc[start-1][8]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][7]=="1"&&s2_3dc[start-1][9]=="~")  // max value for random number
                                {
                                    mm(73);printf("\n  Enter following details for");sfc(lm);printf(" [RANDOM NUMBERS] ");sfc(ww);
                                    mm(26);  cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[8].first;
                                    if(store1<store2) { mm(38); getch();break; }
                                    s2_3dc[start-1][9]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1));
                                    s2_3dc[start-1][0]="++"; break;
                                }
                                if(s2_3dc[start-1][7]=="2"&&s2_3dc[start-1][9]=="~")  // max value for odd number
                                {
                                    mm(73);printf("\n  Enter following details for");sfc(lm);printf(" [ODD NUMBERS] ");sfc(ww);
                                    mm(26); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[8].first;
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_odd_exist(store2,store1);
                                    if(check==false) { mm(39); getch();break; }
                                    s2_3dc[start-1][9]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1));
                                    s2_3dc[start-1][0]="++"; break;
                                }
                                if(s2_3dc[start-1][7]=="3"&&s2_3dc[start-1][9]=="~")  // max value for even number
                                {
                                    mm(73);printf("\n  Enter following details for");sfc(lm);printf(" [EVEN NUMBERS] ");sfc(ww);
                                    mm(26); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[8].first;
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_even_exist(store2,store1);
                                    if(check==false) { mm(40); getch();break; }
                                    s2_3dc[start-1][9]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1));
                                    s2_3dc[start-1][0]="++"; break;
                                }
                                if(s2_3dc[start-1][7]=="4"&&s2_3dc[start-1][9]=="~")  // max value for prime number
                                {
                                    mm(73);printf("\n  Enter following details for");sfc(lm);printf(" [PRIME NUMBERS] ");sfc(ww);
                                    mm(28); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[8].first;
                                    if(store1<2 || store1>10000000) { mm(37); getch();break; }
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_prime_exist(store2,store1);
                                    if(check==false) { mm(41); getch();break; }
                                    s2_3dc[start-1][9]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1));
                                    s2_3dc[start-1][0]="++"; break;
                                }
                                if(s2_3dc[start-1][7]=="5"&&s2_3dc[start-1][9]=="~")  // max value for non prime number
                                {
                                    mm(73);printf("\n  Enter following details for");sfc(lm);printf(" [NON PRIME NUMBERS] ");sfc(ww);
                                    mm(30); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[8].first;
                                    if(store1<1 || store1>1000000000000) { mm(37); getch();break; }
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_non_prime_exist(store2,store1);
                                    if(check==false) { mm(42); getch();break; }
                                    s2_3dc[start-1][9]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1));
                                    s2_3dc[start-1][0]="++"; break;
                                }
                                if(s2_3dc[start-1][7]=="6"&&s2_3dc[start-1][9]=="~")  // incremented value for incremented number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [INCREMENTED NUMBERS] ");sfc(ww);
                                    mm(32); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1); s2_3dc[start-1][9]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));
                                    s2_3dc[start-1][0]="++"; break;
                                }
                                if(s2_3dc[start-1][7]=="7"&&s2_3dc[start-1][9]=="~")  // max value for Nth Fibonacci number
                                {
                                    mm(73);printf("\n  Enter following details for");sfc(lm);printf(" [Nth FIBONACCI NUMBERS] ");sfc(ww);
                                    mm(34); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[8].first;
                                    if(store1<1 || store1>93) { mm(37); getch();break; }
                                    if(store1<store2) { mm(38); getch();break; }
                                    s2_3dc[start-1][9]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1));
                                    s2_3dc[start-1][0]="++"; break;
                                }
                            }
                            if(s2_3dc[start-1][6]=="2")  // weight of real
                            {
                                cout<<"\n\n  For WEIGHT of Real, provide following details";
                                if(s2_3dc[start-1][7]=="~")  // set precision
                                {
                                    mm(43); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<0 || store>100) { mm(37); getch();break; }
                                    s2_3dc[start-1][7]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][8]=="~")  // set minimum value
                                {
                                    mm(73);mm(25); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    s2_3dc[start-1][8]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][9]=="~")  // set maximum value
                                {
                                    mm(73);mm(26); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1);
                                    ll store2=dummy_o3dc[8].first;
                                    if(store1==store2) { mm(44); getch();break; }//  ( Note -> Max_value-Min_value >=1 )
                                    if(store1<store2) { mm(38); getch();break; }
                                    s2_3dc[start-1][9]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1));
                                    s2_3dc[start-1][0]="++"; break;
                                }
                            }
                            if(s2_3dc[start-1][6]=="3")  // weight of string
                            {
                                cout<<"\n\n  For WEIGHT of String, provide following details";
                                if(s2_3dc[start-1][7]=="~")  // type of string
                                {
                                    mm(46); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    if(choice1=="1" || choice1=="2")
                                    {
                                        short store=string_to_integer_converter(choice1); s2_3dc[start-1][7]=choice1;
                                        dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                    }
                                    mm(36); getch(); break;
                                }
                                if(s2_3dc[start-1][7]=="1")    // default string
                                {
                                    if(s2_3dc[start-1][8]=="~") //  store the default String
                                    {
                                        mm(47); string def_string; cin>>def_string; dummy_o3dc[7].second=def_string;
                                        s2_3dc[start-1][0]="++"; break;
                                    }
                                }
                                if(s2_3dc[start-1][7]=="2")    // input string
                                {
                                    if(s2_3dc[start-1][8]=="~")  // store input string
                                    {
                                        mm(48); string in_string;cin>>in_string;
                                        dummy_o3dc[7].second=in_string;
                                        s2_3dc[start-1][8]="~~"; break;
                                    }
                                    if(s2_3dc[start-1][8]=="~~")  // type of string
                                    {
                                        mm(49); cin>>choice1;
                                        if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        if(choice1=="1" || choice1=="2" || choice1=="3" || choice1=="4")
                                        {
                                            short store=string_to_integer_converter(choice1);
                                            s2_3dc[start-1][8]=choice1;
                                            dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                        }
                                        mm(36); getch(); break;
                                    }
                                    if(s2_3dc[start-1][9]=="~")  // mode of string
                                    {
                                        mm(50); cin>>choice1;
                                        if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        if(choice1=="1" || choice1=="2")
                                        {
                                            short store=string_to_integer_converter(choice1); s2_3dc[start-1][9]=choice1;
                                            dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                        }
                                        mm(36); getch(); break;
                                    }
                                    if(s2_3dc[start-1][10]=="~")  // size of string
                                    {
                                        if(s2_3dc[start-1][9]=="1")    // Repetition allowed in symbols
                                        {
                                            mm(51); cin>>choice1;
                                            if(choice1=="min") break;
                                            else if(choice1=="exe") break;
                                            bool check=valid_pos_neg_integer(choice1);
                                            if(check==false) { mm(37); getch();break; }
                                            ll store=string_to_integer_converter(choice1);
                                            if(store<1 || store>1000000) { mm(37); getch();break; }
                                            s2_3dc[start-1][10]=choice1;
                                            dummy_o3dc.push_back(make_pair(store,choice1));
                                            s2_3dc[start-1][0]="++"; break;
                                        }
                                        else        // No repetition allowed in symbols
                                        {
                                            if(s2_3dc[start-1][8]=="4")    // palindromic
                                            {
                                                mm(70);sfc(lm);cout<<(2*dummy_o3dc[7].second.size()); sfc(ww);printf(")\n\n SIZE ->  "); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                bool check=valid_pos_neg_integer(choice1);
                                                if(check==false) { mm(37); getch();break; }
                                                ll store=string_to_integer_converter(choice1);
                                                if(store<1 || store>(2*dummy_o3dc[7].second.size())) { mm(37); getch();break; }
                                                s2_3dc[start-1][10]=choice1;
                                                dummy_o3dc.push_back(make_pair(store,choice1));
                                                s2_3dc[start-1][0]="++"; break;
                                            }
                                            else   //  Ordinary
                                            {
                                                mm(70);sfc(lm);cout<<dummy_o3dc[7].second.size();sfc(ww); printf(")\n\n SIZE ->  "); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                bool check=valid_pos_neg_integer(choice1);
                                                if(check==false) { mm(37); getch();break; }
                                                ll store=string_to_integer_converter(choice1);
                                                if(store<1 || store>dummy_o3dc[7].second.size())
                                                { mm(37); getch();break; }
                                                s2_3dc[start-1][10]=choice1;
                                                dummy_o3dc.push_back(make_pair(store,choice1));
                                                s2_3dc[start-1][0]="++"; break;
                                            }
                                        }
                                    }
                                }

                            }
                            if(s2_3dc[start-1][6]=="4")  // weight of permutation
                            {
                                cout<<"\n\n  For WEIGHT of Permutation, provide following details";
                                if(s2_3dc[start-1][7]=="~")
                                {
                                    mm(74); string in_string; cin>>in_string;
                                    if(in_string.size()>19) { mm(37); getch();break; }
                                    s2_3dc[start-1][7]=in_string;
                                    dummy_o3dc.push_back(make_pair(6,in_string));
                                    s2_3dc[start-1][0]="++"; break;
                                }
                            }
                        }

                    case 7:    // GRAPH CLASS
                        {
                            cout<<"  "<<(++start)<<". ";
                            sfc(lg);cout<<_3dc[i][j].second;sfc(lc);cout<<" [CLASS GRAPH]";sfc(ww);
                            if(s2_3dc[start-1][0]=="yes")  // string to represent weights
                            {
                                mm(77); cin>>choice1;
                                dummy_o3dc[7].second=choice1;
                                dummy2_o3dc.push_back(dummy_o3dc);
                                dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                            }
                            if(s2_3dc[start-1][0]=="++")  // want to add string symbol in weights
                            {
                                mm(76); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1") { s2_3dc[start-1][0]="yes"; break; }
                                if(choice1=="2")
                                {
                                    dummy_o3dc[7].second=""; dummy2_o3dc.push_back(dummy_o3dc);
                                    dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                }
                                mm(36); getch(); break;
                            }
                            if(s2_3dc[start-1][0]=="~~~")  // string to connect nodes with node
                            {
                                mm(77); cin>>choice1; s2_3dc[start-1][0]="1";
                                dummy_o3dc[1].first=1; dummy_o3dc[1].second=choice1; break;
                            }
                            if(s2_3dc[start-1][0]=="~~")  // want to add string symbol between nodes
                            {
                                mm(78); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1") { s2_3dc[start-1][0]="~~~"; break; }
                                if(choice1=="2") { s2_3dc[start-1][0]=choice1; dummy_o3dc[1].first=0; break; }
                                mm(36); getch(); break;
                            }
                            if(s2_3dc[start-1][1]=="~")  // type of graph, directed or undirected
                            {
                                mm(80); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1" || choice1=="2")
                                {
                                    short store=string_to_integer_converter(choice1);
                                    dummy_o3dc.push_back(make_pair(7,"gra"));
                                    dummy_o3dc.push_back(make_pair(0,""));
                                    dummy_o3dc.push_back(make_pair(store,choice1));
                                    s2_3dc[start-1][1]=choice1; break;
                                }
                                mm(36); getch(); break;
                            }
                            if(s2_3dc[start-1][2]=="~")   // number of nodes
                            {
                                mm(84); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                bool check=valid_pos_neg_integer(choice1);
                                if(check==false) { mm(37); getch();break; }
                                ll store=string_to_integer_converter(choice1);
                                if(store<2 || store>100000) { mm(37); getch();break; }
                                dummy_o3dc.push_back(make_pair(store,choice1));
                                s2_3dc[start-1][2]=choice1; break;
                            }
                            if(s2_3dc[start-1][3]=="~~")   // No. of edges through initializer
                            {
                                ll edges=dummy_o3dc[3].first*(dummy_o3dc[3].first-1);
                                if(s2_3dc[start-1][1]=="1") { edges/=2; }
                                if(edges>100000) { edges=100000; }
                                sfc(lr);printf("\n Note: ");sfc(ww);printf("Range -> (1) to (");cout<<edges;printf(")");
                                printf("\n\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                for(short itrr=0;itrr<si.size();itrr++)
                                {
                                    printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                    cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                }
                                mm(57); cin>>choice1;
                                if(choice1=="cl") { s2_3dc[start-1][3]="~";break; }
                                else if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                short flag=0;
                                for(short itrr=0;itrr<si.size();itrr++)
                                {
                                    if(get<3>(si[itrr])==choice1)
                                    {
                                        if(get<2>(si[itrr])>edges) { flag=1;break; }
                                        flag=2; s2_3dc[start-1][3]=choice1;
                                        dummy_o3dc.push_back(make_pair(get<0>(si[itrr]),choice1)); break;
                                    }
                                }
                                if(flag==0) { mm(58); getch();break; }
                                if(flag==1) { mm(85);getch(); }
                                break;
                            }
                            if(s2_3dc[start-1][3]=="~")   // No. of edges
                            {
                                printf("\n\n  Enter the number of edges in your graph ");
                                ll edges=dummy_o3dc[3].first*(dummy_o3dc[3].first-1);
                                if(s2_3dc[start-1][1]=="1") { edges/=2; }
                                if(edges>100000) { edges=100000; }
                                printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (1) to (");cout<<edges;printf(")");
                                printf("\n\n  If you want to choose an ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" then type ");sfc(lm);printf("int");sfc(ww);printf(" and ");sbc(dr);printf(" ENTER ");sbc(bb);
                                printf("\n\n  Enter your choice  -> "); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="int")
                                {
                                    if(si.size()==0) { mm(59); getch();break; }
                                    else { s2_3dc[start-1][3]="~~"; break; }
                                }
                                bool check=valid_pos_neg_integer(choice1);
                                if(check==false) { mm(37); getch();break; }
                                ll store=string_to_integer_converter(choice1);
                                if(store<1 || store>edges) { mm(37); getch();break; }
                                dummy_o3dc.push_back(make_pair(store,choice1));
                                s2_3dc[start-1][3]=choice1; break;
                            }
                            if(s2_3dc[start-1][4]=="~")          // starting index of node
                            {
                                mm(87); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                bool check=valid_pos_neg_integer(choice1);
                                if(check==false) { mm(37); getch();break; }
                                ll store=string_to_integer_converter(choice1);
                                if(store<-1000000000 || store>1000000000) { mm(37); getch();break; }
                                dummy_o3dc.push_back(make_pair(store,choice1));
                                s2_3dc[start-1][4]=choice1; break;
                            }
                            if(s2_3dc[start-1][5]=="~")          // ending index of nodes
                            {
                                printf("\n\n  Enter the ending index of the node  ");
                                ll lower_limit=dummy_o3dc[3].first+dummy_o3dc[5].first-1;
                                sfc(lr);printf("\n Note: ");sfc(ww);printf("Range -> (");cout<<lower_limit<<") - (10 to the power 9)";
                                sfc(lg);printf("\n\n  We recommend you to choose [");cout<<lower_limit<<"] in order to obtain contiguous indexing of NODES";sfc(ww);
                                printf("\n\n  Enter your choice  -> "); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                bool check=valid_pos_neg_integer(choice1);
                                if(check==false) { mm(37); getch();break; }
                                ll store=string_to_integer_converter(choice1);
                                if(store<lower_limit) { mm(37); getch();break; }
                                dummy_o3dc.push_back(make_pair(store,choice1));
                                s2_3dc[start-1][5]=choice1;
                                s2_3dc[start-1][0]="~~"; break;
                            }
                            if(s2_3dc[start-1][6]=="~")           // Do you want weights
                            {
                                mm(88); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1") { s2_3dc[start-1][6]="~~"; break; }
                                if(choice1=="2")
                                {
                                    s2_3dc[start-1][6]=choice1;
                                    dummy_o3dc.push_back(make_pair(0,""));
                                    dummy2_o3dc.push_back(dummy_o3dc);
                                    dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                }
                                mm(36); getch(); break;
                            }
                            if(s2_3dc[start-1][6]=="~~")     // type of weight
                            {
                                mm(89); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1" || choice1=="2" || choice1=="3" || choice1=="4")
                                {
                                    short store=string_to_integer_converter(choice1); s2_3dc[start-1][6]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                }
                                mm(36); getch(); break;
                            }
                            if(s2_3dc[start-1][6]=="1")  // weight of integer
                            {
                                cout<<"\n\n  For WEIGHT of Integer, provide following details";
                                if(s2_3dc[start-1][7]=="~")  // type of Integer
                                {
                                    mm(35); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    if(choice1=="1" || choice1=="2" || choice1=="3" || choice1=="4" || choice1=="5" || choice1=="6" || choice1=="7")
                                    {
                                        s2_3dc[start-1][7]=choice1;
                                        short store=string_to_integer_converter(choice1);
                                        dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                    }
                                    mm(36); getch(); break;
                                }
                                if(s2_3dc[start-1][7]=="1"&&s2_3dc[start-1][8]=="~")  // min value for random number
                                {
                                    mm(72);printf("\n  Enter following details for");sfc(lm);printf(" [RANDOM NUMBERS] ");sfc(ww);
                                    mm(25); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1); s2_3dc[start-1][8]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                }
                                if(s2_3dc[start-1][7]=="2"&&s2_3dc[start-1][8]=="~")  // min value for odd number
                                {
                                    mm(72);printf("\n  Enter following details for");sfc(lm);printf(" [ODD NUMBERS] ");sfc(ww);
                                    mm(25); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1); s2_3dc[start-1][8]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][7]=="3"&&s2_3dc[start-1][8]=="~")  // min value for even number
                                {
                                    mm(72);printf("\n  Enter following details for");sfc(lm);printf(" [EVEN NUMBERS] ");sfc(ww);
                                    mm(25); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1); s2_3dc[start-1][8]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][7]=="4"&&s2_3dc[start-1][8]=="~")  // min value for prime number
                                {
                                    mm(72);printf("\n  Enter following details for");sfc(lm);printf(" [PRIME NUMBERS] ");sfc(ww);
                                    mm(27); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<2 || store>10000000) { mm(37); getch();break; }
                                    s2_3dc[start-1][8]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][7]=="5"&&s2_3dc[start-1][8]=="~")  // min value for non prime number
                                {
                                    mm(72);printf("\n  Enter following details for");sfc(lm);printf(" [Non Prime Numbers] ");sfc(ww);
                                    mm(29); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>1000000000000) { mm(37); getch();break; }
                                    s2_3dc[start-1][8]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][7]=="6"&&s2_3dc[start-1][8]=="~")  // starting value for incremented number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [Incremented Numbers] ");sfc(ww);
                                    mm(31); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    s2_3dc[start-1][8]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1)); break;
                                }
                                if(s2_3dc[start-1][7]=="7"&&s2_3dc[start-1][8]=="~")  // min value for Nth Fibonacci number
                                {
                                    mm(72);printf("\n  Enter following details for");sfc(lm);printf(" [FIBONACCI NUMBERS] ");sfc(ww);
                                    mm(33); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>93) { mm(37); getch();break; }
                                    s2_3dc[start-1][8]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][7]=="1"&&s2_3dc[start-1][9]=="~")  // max value for random number
                                {
                                    mm(72);printf("\n  Enter following details for");sfc(lm);printf(" [RANDOM NUMBERS] ");sfc(ww);
                                    mm(26);  cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[9].first;
                                    if(store1<store2) { mm(38); getch();break; }
                                    s2_3dc[start-1][9]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1));
                                    s2_3dc[start-1][0]="++"; break;
                                }
                                if(s2_3dc[start-1][7]=="2"&&s2_3dc[start-1][9]=="~")  // max value for odd number
                                {
                                    mm(72);printf("\n  Enter following details for");sfc(lm);printf(" [ODD NUMBERS] ");sfc(ww);
                                    mm(26); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[9].first;
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_odd_exist(store2,store1);
                                    if(check==false) { mm(39); getch();break; }
                                    s2_3dc[start-1][9]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1));
                                    s2_3dc[start-1][0]="++"; break;
                                }
                                if(s2_3dc[start-1][7]=="3"&&s2_3dc[start-1][9]=="~")  // max value for even number
                                {
                                    mm(72);printf("\n  Enter following details for");sfc(lm);printf(" [EVEN NUMBERS] ");sfc(ww);
                                    mm(26); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[9].first;
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_even_exist(store2,store1);
                                    if(check==false) { mm(40); getch();break; }
                                    s2_3dc[start-1][9]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1));
                                    s2_3dc[start-1][0]="++"; break;
                                }
                                if(s2_3dc[start-1][7]=="4"&&s2_3dc[start-1][9]=="~")  // max value for prime number
                                {
                                    mm(72);printf("\n  Enter following details for");sfc(lm);printf(" [PRIME NUMBERS] ");sfc(ww);
                                    mm(28); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[9].first;
                                    if(store1<2 || store1>10000000) { mm(37); getch();break; }
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_prime_exist(store2,store1);
                                    if(check==false) { mm(41); getch();break; }
                                    s2_3dc[start-1][9]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1));
                                    s2_3dc[start-1][0]="++"; break;
                                }
                                if(s2_3dc[start-1][7]=="5"&&s2_3dc[start-1][9]=="~")  // max value for non prime number
                                {
                                    mm(72);printf("\n  Enter following details for");sfc(lm);printf(" [NON PRIME NUMBERS] ");sfc(ww);
                                    mm(30); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[9].first;
                                    if(store1<1 || store1>1000000000000) { mm(37); getch();break; }
                                    if(store1<store2) { mm(38); getch();break; }
                                    check=check_non_prime_exist(store2,store1);
                                    if(check==false) { mm(42); getch();break; }
                                    s2_3dc[start-1][9]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1));
                                    s2_3dc[start-1][0]="++"; break;
                                }
                                if(s2_3dc[start-1][7]=="6"&&s2_3dc[start-1][9]=="~")  // incremented value for incremented number
                                {
                                    printf("\n  Enter following details for");sfc(lm);printf(" [INCREMENTED NUMBERS] ");sfc(ww);
                                    mm(32); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1); s2_3dc[start-1][9]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));
                                    s2_3dc[start-1][0]="++"; break;
                                }
                                if(s2_3dc[start-1][7]=="7"&&s2_3dc[start-1][9]=="~")  // max value for Nth Fibonacci number
                                {
                                    mm(72);printf("\n  Enter following details for");sfc(lm);printf(" [Nth FIBONACCI NUMBERS] ");sfc(ww);
                                    mm(34); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1); ll store2=dummy_o3dc[9].first;
                                    if(store1<1 || store1>93) { mm(37); getch();break; }
                                    if(store1<store2) { mm(38); getch();break; }
                                    s2_3dc[start-1][9]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1));
                                    s2_3dc[start-1][0]="++"; break;
                                }
                            }
                            if(s2_3dc[start-1][6]=="2")  // weight of real
                            {
                                cout<<"\n\n  For WEIGHT of Real, provide following details";
                                if(s2_3dc[start-1][7]=="~")  // set precision
                                {
                                    mm(43); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<0 || store>100) { mm(37); getch();break; }
                                    s2_3dc[start-1][7]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][8]=="~")  // set minimum value
                                {
                                    mm(72);mm(25); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    s2_3dc[start-1][8]=choice1;
                                    dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                }
                                if(s2_3dc[start-1][9]=="~")  // set maximum value
                                {
                                    mm(72);mm(26); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1);
                                    ll store2=string_to_integer_converter(s2_3dc[start-1][8]);
                                    if(store1==store2) { mm(44); getch();break; }//  ( Note -> Max_value-Min_value >=1 )
                                    if(store1<store2) { mm(38); getch();break; }
                                    s2_3dc[start-1][9]=choice1;
                                    dummy_o3dc.push_back(make_pair(store1,choice1));
                                    s2_3dc[start-1][0]="++"; break;
                                }
                            }
                            if(s2_3dc[start-1][6]=="3")  // weight of string
                            {
                                cout<<"\n\n  For WEIGHT of String, provide following details";
                                if(s2_3dc[start-1][7]=="~")  // type of string
                                {
                                    mm(46); cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    if(choice1=="1" || choice1=="2")
                                    {
                                        short store=string_to_integer_converter(choice1); s2_3dc[start-1][7]=choice1;
                                        dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                    }
                                    mm(36); getch(); break;
                                }
                                if(s2_3dc[start-1][7]=="1")    // default string
                                {
                                    if(s2_3dc[start-1][8]=="~") //  store the default String
                                    {
                                        mm(47); string def_string; cin>>def_string; dummy_o3dc[8].second=def_string;
                                        s2_3dc[start-1][0]="++"; break;
                                    }
                                }
                                if(s2_3dc[start-1][7]=="2")    // input string
                                {
                                    if(s2_3dc[start-1][8]=="~")  // store input string
                                    {
                                        mm(48); string in_string;cin>>in_string;
                                        dummy_o3dc[8].second=in_string;
                                        s2_3dc[start-1][8]="~~"; break;
                                    }
                                    if(s2_3dc[start-1][8]=="~~")  // type of string
                                    {
                                        mm(49); cin>>choice1;
                                        if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        if(choice1=="1" || choice1=="2" || choice1=="3" || choice1=="4")
                                        {
                                            short store=string_to_integer_converter(choice1);
                                            s2_3dc[start-1][8]=choice1;
                                            dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                        }
                                        mm(36); getch(); break;
                                    }
                                    if(s2_3dc[start-1][9]=="~")  // mode of string
                                    {
                                        mm(50); cin>>choice1;
                                        if(choice1=="min") break;
                                        else if(choice1=="exe") break;
                                        if(choice1=="1" || choice1=="2")
                                        {
                                            short store=string_to_integer_converter(choice1); s2_3dc[start-1][9]=choice1;
                                            dummy_o3dc.push_back(make_pair(store,choice1));  break;
                                        }
                                        mm(36); getch(); break;
                                    }
                                    if(s2_3dc[start-1][10]=="~")  // size of string
                                    {
                                        if(s2_3dc[start-1][9]=="1")    // Repetition allowed in symbols
                                        {
                                            mm(51); cin>>choice1;
                                            if(choice1=="min") break;
                                            else if(choice1=="exe") break;
                                            bool check=valid_pos_neg_integer(choice1);
                                            if(check==false) { mm(37); getch();break; }
                                            ll store=string_to_integer_converter(choice1);
                                            if(store<1 || store>1000000) { mm(37); getch();break; }
                                            s2_3dc[start-1][10]=choice1;
                                            dummy_o3dc.push_back(make_pair(store,choice1));
                                            s2_3dc[start-1][0]="++"; break;
                                        }
                                        else        // No repetition allowed in symbols
                                        {
                                            if(s2_3dc[start-1][8]=="4")    // palindromic
                                            {
                                                mm(70);sfc(lm);cout<<(2*dummy_o3dc[8].second.size()); sfc(ww);printf(")\n\n SIZE ->  "); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                bool check=valid_pos_neg_integer(choice1);
                                                if(check==false) { mm(37); getch();break; }
                                                ll store=string_to_integer_converter(choice1);
                                                if(store<1 || store>(2*dummy_o3dc[8].second.size())) { mm(37); getch();break; }
                                                s2_3dc[start-1][10]=choice1;
                                                dummy_o3dc.push_back(make_pair(store,choice1));
                                                s2_3dc[start-1][0]="++"; break;
                                            }
                                            else   //  Ordinary
                                            {
                                                mm(70);sfc(lm);cout<<dummy_o3dc[8].second.size();sfc(ww); printf(")\n\n SIZE ->  "); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                bool check=valid_pos_neg_integer(choice1);
                                                if(check==false) { mm(37); getch();break; }
                                                ll store=string_to_integer_converter(choice1);
                                                if(store<1 || store>dummy_o3dc[8].second.size())
                                                { mm(37); getch();break; }
                                                s2_3dc[start-1][10]=choice1;
                                                dummy_o3dc.push_back(make_pair(store,choice1));
                                                s2_3dc[start-1][0]="++"; break;
                                            }
                                        }
                                    }
                                }
                            }
                            if(s2_3dc[start-1][6]=="4")  // weight of permutation
                            {
                                cout<<"\n\n  For WEIGHT of Permutation, provide following details";
                                if(s2_3dc[start-1][7]=="~")
                                {
                                    mm(71); string in_string; cin>>in_string;
                                    if(in_string.size()>19) { mm(37); getch();break; }
                                    s2_3dc[start-1][7]=in_string;
                                    dummy_o3dc.push_back(make_pair(7,in_string));
                                    s2_3dc[start-1][0]="++"; break;
                                }
                            }
                        }

                    case 8:    // CUSTOM DATA TYPE CLASS
                        {
                            cout<<"  "<<(++start)<<". ";
                            sfc(lg);cout<<_3dc[i][j].second;sfc(lc);cout<<" [CLASS CUSTOM_DATA_TYPE]";sfc(ww);
                            if(s2_3dc[start-1][0]=="~")
                            {
                                mm(67); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                bool check=valid_pos_neg_integer(choice1);
                                if(check==false) { mm(37); getch();break; }
                                ll store=string_to_integer_converter(choice1);
                                if(store<1 || store>20) { mm(37); getch();break; }
                                no_of_attribute_for_custom=store; s2_3dc[start-1][0]=choice1;
                                dummy_o3dc.push_back(make_pair(8,"cus"));
                                dummy_o3dc.push_back(make_pair(store,choice1)); break;
                            }
                            if(s2_3dc[start-1][1]=="~~")
                            {
                                printf("\n  List of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" available\n");
                                for(short itrr=0;itrr<si.size();itrr++)
                                {
                                    printf("\n "); cout<<(itrr+1)<<"- "; sfc(ly);cout<<get<3>(si[itrr]);sfc(ww);
                                    cout<<"   Range ["<<get<1>(si[itrr])<<" - "<<get<2>(si[itrr])<<"]";
                                }
                                mm(57); cin>>choice1;
                                if(choice1=="cl") { s2_3dc[start-1][1]="~";break; }
                                else if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                bool flag=false;
                                for(short itrr=0;itrr<si.size();itrr++)
                                {
                                    if(get<3>(si[itrr])==choice1)
                                    {
                                        flag=true; s2_3dc[start-1][1]=choice1; dummy_o3dc.push_back(make_pair(get<0>(si[itrr]),choice1)); break;
                                    }
                                }
                                if(flag==false) { mm(58); getch();break; }
                                break;
                            }
                            if(s2_3dc[start-1][1]=="~")
                            {
                                mm(69); cin>>choice1;
                                if(choice1=="int")
                                {
                                    if(si.size()==0) { mm(59); getch();break; }
                                    else { s2_3dc[start-1][1]="~~"; break; }
                                }
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                bool check=valid_pos_neg_integer(choice1);
                                if(check==false) { mm(37); getch();break; }
                                ll store=string_to_integer_converter(choice1);
                                if(store<1 || store>1000000) { mm(37); getch();break; }
                                s2_3dc[start-1][1]=choice1;
                                dummy_o3dc.push_back(make_pair(store,choice1)); break;
                            }
                            while(no_of_attribute_for_custom>0)
                            {
                                cout<<"\n\n  Your structure -> ";vector <pair <ll,string>> demo_custom; sfc(lm);cout<<custom_structure;sfc(ww);
                                mm(52); cin>>choice1;
                                if(choice1=="min") break;
                                else if(choice1=="exe") break;
                                if(choice1=="1" || choice1=="2" || choice1=="3" || choice1=="4" || choice1=="5" || choice1=="6")
                                {
                                    if(choice1=="1")  // attribute type ->  Integer
                                    {
                                        custom_structure+="Integer";
                                        demo_custom.push_back(make_pair(1,"int"));  // Integer   (index 0)
                                        demo_custom.push_back(make_pair(1,"~"));    // type      (index 1)
                                        demo_custom.push_back(make_pair(1,"~"));    // min_value (index 2)
                                        demo_custom.push_back(make_pair(1,"~"));    // max_value (index 3)
                                        demo_custom.push_back(make_pair(1,"~"));    // order     (index 4)
                                        dummy_o3dc.push_back(make_pair(++index_of_custom_data_type,"Integer"));
                                        cdt.push_back(demo_custom);
                                    }
                                    else if(choice1=="2")   // attribute type ->  Real
                                    {
                                        custom_structure+="Real";
                                        demo_custom.push_back(make_pair(2,"rel")); // Real         (index 0)
                                        demo_custom.push_back(make_pair(2,"~"));   // precision    (index 1)
                                        demo_custom.push_back(make_pair(2,"~"));   // min_value    (index 2)
                                        demo_custom.push_back(make_pair(2,"~"));   // max_value    (index 3)
                                        demo_custom.push_back(make_pair(2,"~"));   // order        (index 4)
                                        dummy_o3dc.push_back(make_pair(++index_of_custom_data_type,"Real"));
                                        cdt.push_back(demo_custom);
                                    }
                                    else if(choice1=="3")   // attribute type ->  String
                                    {
                                        custom_structure+="String";
                                        demo_custom.push_back(make_pair(3,"str"));  // string   (index 0)
                                        demo_custom.push_back(make_pair(3,"~"));    // type     (index 1)
                                        dummy_o3dc.push_back(make_pair(++index_of_custom_data_type,"String"));
                                        cdt.push_back(demo_custom);
                                    }
                                    else if(choice1=="4")   // attribute type ->  Permutation
                                    {
                                        custom_structure+="Permutation";
                                        demo_custom.push_back(make_pair(4,"per"));  // permutation  (index 0)
                                        demo_custom.push_back(make_pair(4,"~"));    // string       (index 1)
                                        demo_custom.push_back(make_pair(4,"~"));    // order        (index 2)
                                        dummy_o3dc.push_back(make_pair(++index_of_custom_data_type,"Permutation"));
                                        cdt.push_back(demo_custom);
                                    }
                                    else if(choice1=="5")  // attribute type ->  Unique Number
                                    {
                                        custom_structure+="Unique_No";
                                        demo_custom.push_back(make_pair(5,"uni"));  // Unique Number  (index 0)
                                        demo_custom.push_back(make_pair(5,"~"));    // min_value      (index 1)
                                        demo_custom.push_back(make_pair(5,"~"));    // max_value      (index 2)
                                        demo_custom.push_back(make_pair(5,"~"));    // order          (index 3)
                                        dummy_o3dc.push_back(make_pair(++index_of_custom_data_type,"Unique_Number"));
                                        cdt.push_back(demo_custom);
                                    }
                                    else if(choice1=="6")   // attribute type ->  Space
                                    {
                                        custom_structure+="_space_";
                                        demo_custom.push_back(make_pair(6,"spc"));  // space
                                        dummy_o3dc.push_back(make_pair(++index_of_custom_data_type,"Space"));
                                        cdt.push_back(demo_custom);
                                    }
                                    --no_of_attribute_for_custom;
                                    break;
                                }
                                mm(36); getch(); break;
                            }
                            if(no_of_attribute_for_custom==0)
                            {
                                no_of_attribute_for_custom=-1; dummy2_o3dc.push_back(dummy_o3dc); break;
                            }
                            if(no_of_attribute_for_custom==-1)
                            {
                                cout<<"\n\n  Your structure -> "; sfc(lm);cout<<custom_structure;sfc(ww);
                                printf("\n  Define following sub attributes of your custom data type\n");
                                for(short itr=3;itr<dummy_o3dc.size();itr++)
                                {
                                    if(dummy_o3dc[itr].first<0)
                                    {
                                        if(itr==(dummy_o3dc.size()-1))
                                        {
                                            no_of_attribute_for_custom=-2; break;
                                        }
                                        cout<<"\n"<<(itr-2)<<"- Attribute value saved for ";sfc(lm);cout<<dummy_o3dc[itr].second;sfc(ww); continue;
                                    }
                                    if(dummy_o3dc[itr].second=="Integer")
                                    {
                                        printf("\n\n  Class [Integer] \n\n");
                                        for(short itr2=1;itr2<=4;itr2++)
                                        {
                                            if(cdt[dummy_o3dc[itr].first][itr2].second=="~" && itr2==1)   // case 1 -> Type of Integer
                                            {
                                                mm(35); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                if(choice1=="1" || choice1=="2" || choice1=="3" || choice1=="4" || choice1=="5" || choice1=="6" || choice1=="7")
                                                    {
                                                        short store=string_to_integer_converter(choice1);
                                                        cdt[dummy_o3dc[itr].first][itr2].first=store;
                                                        cdt[dummy_o3dc[itr].first][itr2].second=choice1;
                                                        break;
                                                    }
                                                mm(36); getch(); break;
                                            }
                                            if(cdt[dummy_o3dc[itr].first][itr2].second=="~" && itr2==2)    //  case 2 -> Minimum value
                                            {
                                                if(cdt[dummy_o3dc[itr].first][itr2-1].first==1)   // random integer
                                                {
                                                    printf("\n  Random Integer");
                                                    mm(25); cin>>choice1;
                                                    if(choice1=="min") break;
                                                    else if(choice1=="exe") break;
                                                    bool check=valid_pos_neg_integer(choice1);
                                                    if(check==false) { mm(37); getch();break; }
                                                    ll store=string_to_integer_converter(choice1);
                                                    cdt[dummy_o3dc[itr].first][itr2].second=choice1; cdt[dummy_o3dc[itr].first][itr2].first=store; break;
                                                }
                                                if(cdt[dummy_o3dc[itr].first][itr2-1].first==2)   // odd number
                                                {
                                                    printf("\n  Odd Integer");
                                                    mm(25); cin>>choice1;
                                                    if(choice1=="min") break;
                                                    else if(choice1=="exe") break;
                                                    bool check=valid_pos_neg_integer(choice1);
                                                    if(check==false) { mm(37); getch();break; }
                                                    ll store=string_to_integer_converter(choice1);
                                                    cdt[dummy_o3dc[itr].first][itr2].second=choice1; cdt[dummy_o3dc[itr].first][itr2].first=store; break;
                                                }
                                                if(cdt[dummy_o3dc[itr].first][itr2-1].first==3)   // even number
                                                {
                                                    printf("\n  Even Integer");
                                                    mm(25); cin>>choice1;
                                                    if(choice1=="min") break;
                                                    else if(choice1=="exe") break;
                                                    bool check=valid_pos_neg_integer(choice1);
                                                    if(check==false) { mm(37); getch();break; }
                                                    ll store=string_to_integer_converter(choice1);
                                                    cdt[dummy_o3dc[itr].first][itr2].second=choice1; cdt[dummy_o3dc[itr].first][itr2].first=store; break;
                                                }
                                                if(cdt[dummy_o3dc[itr].first][itr2-1].first==4)   // prime number
                                                {
                                                    printf("\n  Prime Number");
                                                    mm(27); cin>>choice1;
                                                    if(choice1=="min") break;
                                                    else if(choice1=="exe") break;
                                                    bool check=valid_pos_neg_integer(choice1);
                                                    if(check==false) { mm(37); getch();break; }
                                                    ll store=string_to_integer_converter(choice1);
                                                    if(store<2 || store>10000000) { mm(37); getch();break; }
                                                    cdt[dummy_o3dc[itr].first][itr2].second=choice1; cdt[dummy_o3dc[itr].first][itr2].first=store; break;
                                                }
                                                if(cdt[dummy_o3dc[itr].first][itr2-1].first==5)   // non prime number
                                                {
                                                    printf("\n  Non prime Number");
                                                    mm(29);  cin>>choice1;
                                                    if(choice1=="min") break;
                                                    else if(choice1=="exe") break;
                                                    bool check=valid_pos_neg_integer(choice1);
                                                    if(check==false) { mm(37); getch();break; }
                                                    ll store=string_to_integer_converter(choice1);
                                                    if(store<1 || store>1000000000000) { mm(37); getch();break; }
                                                    cdt[dummy_o3dc[itr].first][itr2].second=choice1; cdt[dummy_o3dc[itr].first][itr2].first=store; break;
                                                }
                                                if(cdt[dummy_o3dc[itr].first][itr2-1].first==6)   // incremented number
                                                {
                                                    printf("\n  Incremented Number");
                                                    mm(31); cin>>choice1;
                                                    if(choice1=="min") break;
                                                    else if(choice1=="exe") break;
                                                    bool check=valid_pos_neg_integer(choice1);
                                                    if(check==false) { mm(37); getch();break; }
                                                    ll store=string_to_integer_converter(choice1);
                                                    cdt[dummy_o3dc[itr].first][itr2].second=choice1; cdt[dummy_o3dc[itr].first][itr2].first=store; break;
                                                }
                                                if(cdt[dummy_o3dc[itr].first][itr2-1].first==7)   // Nth fibonacci number
                                                {
                                                    printf("\n  Nth Fibonacci Number");
                                                    mm(33);  cin>>choice1;
                                                    if(choice1=="min") break;
                                                    else if(choice1=="exe") break;
                                                    bool check=valid_pos_neg_integer(choice1);
                                                    if(check==false) { mm(37); getch();break; }
                                                    ll store=string_to_integer_converter(choice1);
                                                    if(store<1 || store>93) { mm(37); getch();break; }
                                                    cdt[dummy_o3dc[itr].first][itr2].second=choice1; cdt[dummy_o3dc[itr].first][itr2].first=store; break;
                                                }
                                            }
                                            if(cdt[dummy_o3dc[itr].first][itr2].second=="~" && itr2==3)    //  case 3 ->  maximum value
                                            {
                                                if(cdt[dummy_o3dc[itr].first][itr2-2].first==1)   // random integer
                                                {
                                                    printf("\n   Random Number");
                                                    mm(26);  cin>>choice1;
                                                    if(choice1=="min") break;
                                                    else if(choice1=="exe") break;
                                                    bool check=valid_pos_neg_integer(choice1);
                                                    if(check==false) { mm(37); getch();break; }
                                                    ll store1=string_to_integer_converter(choice1);
                                                    ll store2=string_to_integer_converter(cdt[dummy_o3dc[itr].first][itr2-1].second);
                                                    if(store1<store2) { mm(38); getch();break; }
                                                    cdt[dummy_o3dc[itr].first][itr2].second=choice1; cdt[dummy_o3dc[itr].first][itr2].first=store1; break;
                                                }
                                                if(cdt[dummy_o3dc[itr].first][itr2-2].first==2)   // odd number
                                                {
                                                    printf("\n  Odd Number");
                                                    mm(26);  cin>>choice1;
                                                    if(choice1=="min") break;
                                                    else if(choice1=="exe") break;
                                                    bool check=valid_pos_neg_integer(choice1);
                                                    if(check==false) { mm(37); getch();break; }
                                                    ll store1=string_to_integer_converter(choice1);
                                                    ll store2=string_to_integer_converter(cdt[dummy_o3dc[itr].first][itr2-1].second);
                                                    if(store1<store2) { mm(38); getch();break; }
                                                    check=check_odd_exist(store2,store1);
                                                    if(check==false) { mm(39); getch();break; }
                                                    cdt[dummy_o3dc[itr].first][itr2].second=choice1; cdt[dummy_o3dc[itr].first][itr2].first=store1; break;
                                                }
                                                if(cdt[dummy_o3dc[itr].first][itr2-2].first==3)   // even number
                                                {
                                                    printf("\n  Even Number");
                                                    mm(26); cin>>choice1;
                                                    if(choice1=="min") break;
                                                    else if(choice1=="exe") break;
                                                    bool check=valid_pos_neg_integer(choice1);
                                                    if(check==false) { mm(37); getch();break; }
                                                    ll store1=string_to_integer_converter(choice1);
                                                    ll store2=string_to_integer_converter(cdt[dummy_o3dc[itr].first][itr2-1].second);
                                                    if(store1<store2) { mm(38); getch();break; }
                                                    check=check_even_exist(store2,store1);
                                                    if(check==false) { mm(40); getch();break; }
                                                    cdt[dummy_o3dc[itr].first][itr2].second=choice1; cdt[dummy_o3dc[itr].first][itr2].first=store1; break;
                                                }
                                                if(cdt[dummy_o3dc[itr].first][itr2-2].first==4)   //  prime number
                                                {
                                                    printf("\n  Prime Number");
                                                    mm(28); cin>>choice1;
                                                    if(choice1=="min") break;
                                                    else if(choice1=="exe") break;
                                                    bool check=valid_pos_neg_integer(choice1);
                                                    if(check==false) { mm(37); getch();break; }
                                                    ll store1=string_to_integer_converter(choice1);
                                                    ll store2=string_to_integer_converter(cdt[dummy_o3dc[itr].first][itr2-1].second);
                                                    if(store1<2 || store1>10000000) { mm(37); getch();break; }
                                                    if(store1<store2) { mm(38); getch();break; }
                                                    check=check_prime_exist(store2,store1);
                                                    if(check==false) { mm(41); getch();break; }
                                                    cdt[dummy_o3dc[itr].first][itr2].second=choice1; cdt[dummy_o3dc[itr].first][itr2].first=store1; break;
                                                }
                                                if(cdt[dummy_o3dc[itr].first][itr2-2].first==5)   //  Non prime number
                                                {
                                                    printf("\n  Non Prime Number");
                                                    mm(30); cin>>choice1;
                                                    if(choice1=="min") break;
                                                    else if(choice1=="exe") break;
                                                    bool check=valid_pos_neg_integer(choice1);
                                                    if(check==false) { mm(37); getch();break; }
                                                    ll store1=string_to_integer_converter(choice1);
                                                    ll store2=string_to_integer_converter(cdt[dummy_o3dc[itr].first][itr2-1].second);
                                                    if(store1<1 || store1>1000000000000) { mm(37); getch();break; }
                                                    if(store1<store2) { mm(38); getch();break; }
                                                    check=check_non_prime_exist(store2,store1);
                                                    if(check==false) { mm(42); getch();break; }
                                                    cdt[dummy_o3dc[itr].first][itr2].second=choice1; cdt[dummy_o3dc[itr].first][itr2].first=store1; break;
                                                }
                                                if(cdt[dummy_o3dc[itr].first][itr2-2].first==6)   //  incremented number
                                                {
                                                    printf("\n  Incremented Number");
                                                    mm(32);  cin>>choice1;
                                                    if(choice1=="min") break;
                                                    else if(choice1=="exe") break;
                                                    bool check=valid_pos_neg_integer(choice1);
                                                    if(check==false) { mm(37); getch();break; }
                                                    ll store=string_to_integer_converter(choice1);
                                                    cdt[dummy_o3dc[itr].first][itr2].second=choice1; cdt[dummy_o3dc[itr].first][itr2].first=store; break;
                                                }
                                                if(cdt[dummy_o3dc[itr].first][itr2-2].first==7)   //  Nth fibonacci number
                                                {
                                                    printf("\n  Nth Fibonacci Number");
                                                    mm(34); cin>>choice1;
                                                    if(choice1=="min") break;
                                                    else if(choice1=="exe") break;
                                                    bool check=valid_pos_neg_integer(choice1);
                                                    if(check==false) { mm(37); getch();break; }
                                                    ll store1=string_to_integer_converter(choice1);
                                                    ll store2=string_to_integer_converter(cdt[dummy_o3dc[itr].first][itr2-1].second);
                                                    if(store1<1 || store1>93) { mm(37); getch();break; }
                                                    if(store1<store2) { mm(38); getch();break; }
                                                    cdt[dummy_o3dc[itr].first][itr2].second=choice1; cdt[dummy_o3dc[itr].first][itr2].first=store1; break;
                                                }
                                            }
                                            if(cdt[dummy_o3dc[itr].first][itr2].second=="~" && itr2==4)    //    case 4 -> order
                                            {
                                                mm(53); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                if(choice1=="1" || choice1=="2" || choice1=="3")
                                                {
                                                    ll store=string_to_integer_converter(choice1);
                                                    cdt[dummy_o3dc[itr].first][itr2].first=store;
                                                    cdt[dummy_o3dc[itr].first][itr2].second=choice1;
                                                    dummy_o3dc[itr].first=-1; break;
                                                }
                                                mm(36); getch(); break;
                                            }
                                        }
                                    }
                                    if(dummy_o3dc[itr].second=="Real")
                                    {
                                        printf("\n\n  Class [REAL] \n\n");
                                        for(short itr2=1;itr2<=4;itr2++)
                                        {
                                            if(cdt[dummy_o3dc[itr].first][itr2].second=="~" && itr2==1)
                                            {
                                                mm(43); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                bool check=valid_pos_neg_integer(choice1);
                                                if(check==false) { mm(37); getch();break; }
                                                ll store=string_to_integer_converter(choice1);
                                                if(store<0 || store>100) { mm(37); getch();break; }
                                                cdt[dummy_o3dc[itr].first][itr2].second=choice1; cdt[dummy_o3dc[itr].first][itr2].first=store; break;
                                            }
                                            if(cdt[dummy_o3dc[itr].first][itr2].second=="~" && itr2==2)
                                            {
                                                mm(25); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                bool check=valid_pos_neg_integer(choice1);
                                                if(check==false) { mm(37); getch();break; }
                                                ll store=string_to_integer_converter(choice1);
                                                cdt[dummy_o3dc[itr].first][itr2].second=choice1; cdt[dummy_o3dc[itr].first][itr2].first=store; break;
                                            }
                                            if(cdt[dummy_o3dc[itr].first][itr2].second=="~" && itr2==3)
                                            {
                                                mm(26); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                bool check=valid_pos_neg_integer(choice1);
                                                if(check==false) { mm(37); getch();break; }
                                                ll store1=string_to_integer_converter(choice1);
                                                ll store2=cdt[dummy_o3dc[itr].first][itr2-1].first;
                                                if(store1==store2) { mm(44); getch();break; }//  ( Note -> Max_value-Min_value >=1 )
                                                if(store1<store2) { mm(38); getch();break; }
                                                cdt[dummy_o3dc[itr].first][itr2].second=choice1; cdt[dummy_o3dc[itr].first][itr2].first=store1; break;
                                            }
                                            if(cdt[dummy_o3dc[itr].first][itr2].second=="~" && itr2==4)
                                            {
                                                mm(53); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                if(choice1=="1" || choice1=="2" || choice1=="3")
                                                {
                                                    ll store=string_to_integer_converter(choice1);
                                                    cdt[dummy_o3dc[itr].first][itr2].first=store;
                                                    cdt[dummy_o3dc[itr].first][itr2].second=choice1;
                                                    dummy_o3dc[itr].first=-1;
                                                    break;
                                                }
                                                mm(36); getch(); break;
                                            }
                                        }
                                    }
                                    if(dummy_o3dc[itr].second=="String")
                                    {
                                        printf("\n\n [CLASS STRING]");
                                        if(cdt[dummy_o3dc[itr].first][1].second=="~")
                                        {
                                            mm(46); cin>>choice1;
                                            if(choice1=="min") break;
                                            else if(choice1=="exe") break;
                                            if(choice1=="1")  // default string
                                            {
                                                short store=string_to_integer_converter(choice1);
                                                cdt[dummy_o3dc[itr].first][1].second=choice1; cdt[dummy_o3dc[itr].first][1].first=store;
                                                cdt[dummy_o3dc[itr].first].push_back(make_pair(1,"~"));  // default_string
                                                break;
                                            }
                                            if(choice1=="2")   // Computer_generated string
                                            {
                                                short store=string_to_integer_converter(choice1);
                                                cdt[dummy_o3dc[itr].first][1].second=choice1; cdt[dummy_o3dc[itr].first][1].first=store;
                                                cdt[dummy_o3dc[itr].first].push_back(make_pair(2,"~"));  // input_string (index 2)
                                                cdt[dummy_o3dc[itr].first].push_back(make_pair(2,"~"));  // type         (index 3)
                                                cdt[dummy_o3dc[itr].first].push_back(make_pair(2,"~"));  // mode         (index 4)
                                                cdt[dummy_o3dc[itr].first].push_back(make_pair(2,"~"));  // size         (index 5)
                                                cdt[dummy_o3dc[itr].first].push_back(make_pair(2,"~"));  // order        (index 6)
                                                break;
                                            }
                                            mm(36); getch(); break;
                                        }
                                        if(cdt[dummy_o3dc[itr].first][1].first==1)  // default string
                                        {
                                            mm(47); string def_string; cin>>def_string;
                                            cdt[dummy_o3dc[itr].first][2].second=def_string;
                                            dummy_o3dc[itr].first=-1; break;
                                        }
                                        if(cdt[dummy_o3dc[itr].first][1].first==2)  // input string
                                        {
                                            if(cdt[dummy_o3dc[itr].first][2].second=="~")  // input_string
                                            {
                                                mm(48);string in_string; cin>>in_string;
                                                cdt[dummy_o3dc[itr].first][2].second=in_string; break;
                                            }
                                            if(cdt[dummy_o3dc[itr].first][3].second=="~")  // string type
                                            {
                                                mm(49); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                if(choice1=="1" || choice1=="2" || choice1=="3" || choice1=="4")
                                                {
                                                    short store=string_to_integer_converter(choice1);
                                                    cdt[dummy_o3dc[itr].first][3].second=choice1; cdt[dummy_o3dc[itr].first][3].first=store; break;
                                                }
                                                mm(36); getch(); break;
                                            }
                                            if(cdt[dummy_o3dc[itr].first][4].second=="~")  // string mode
                                            {
                                                mm(50); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                if(choice1=="1" || choice1=="2")
                                                {
                                                    short store=string_to_integer_converter(choice1);
                                                    cdt[dummy_o3dc[itr].first][4].second=choice1; cdt[dummy_o3dc[itr].first][4].first=store; break;
                                                }
                                                mm(36); getch(); break;
                                            }
                                            if(cdt[dummy_o3dc[itr].first][5].second=="~")  //  string size
                                            {
                                                if(cdt[dummy_o3dc[itr].first][4].second=="1")    // Repetition allowed in symbols
                                                {
                                                    mm(51); cin>>choice1;
                                                    if(choice1=="min") break;
                                                    else if(choice1=="exe") break;
                                                    bool check=valid_pos_neg_integer(choice1);
                                                    if(check==false) { mm(37); getch();break; }
                                                    ll store=string_to_integer_converter(choice1);
                                                    if(store<1 || store>1000000) { mm(37); getch();break; }
                                                    cdt[dummy_o3dc[itr].first][5].second=choice1; cdt[dummy_o3dc[itr].first][5].first=store; break;
                                                }
                                                else        // No repetition allowed in symbols
                                                {
                                                    if(cdt[dummy_o3dc[itr].first][3].second=="4")    // palindromic
                                                    {
                                                        mm(70);sfc(lm);cout<<(2*cdt[dummy_o3dc[itr].first][2].second.size());sfc(ww); printf(")\n\n SIZE ->  "); cin>>choice1;
                                                        if(choice1=="min") break;
                                                        else if(choice1=="exe") break;
                                                        bool check=valid_pos_neg_integer(choice1);
                                                        if(check==false) { mm(37); getch();break; }
                                                        ll store=string_to_integer_converter(choice1);
                                                        if(store<1 || store>(2*cdt[dummy_o3dc[itr].first][2].second.size())) { mm(37); getch();break; }
                                                        cdt[dummy_o3dc[itr].first][5].second=choice1; cdt[dummy_o3dc[itr].first][5].first=store; break;
                                                    }
                                                    else   //  Ordinary
                                                    {
                                                        mm(70);sfc(lm);cout<<cdt[dummy_o3dc[itr].first][2].second.size();sfc(ww); printf(")\n\n SIZE ->  "); cin>>choice1;
                                                        if(choice1=="min") break;
                                                        else if(choice1=="exe") break;
                                                        bool check=valid_pos_neg_integer(choice1);
                                                        if(check==false) { mm(37); getch();break; }
                                                        ll store=string_to_integer_converter(choice1);
                                                        if(store<1 || store>cdt[dummy_o3dc[itr].first][2].second.size()) { mm(37); getch();break; }
                                                        cdt[dummy_o3dc[itr].first][5].second=choice1; cdt[dummy_o3dc[itr].first][5].first=store; break;
                                                    }
                                                }
                                            }
                                            if(cdt[dummy_o3dc[itr].first][6].second=="~")  // string order
                                            {
                                                mm(53); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                if(choice1=="1" || choice1=="2" || choice1=="3")
                                                {
                                                    ll store=string_to_integer_converter(choice1);
                                                    cdt[dummy_o3dc[itr].first][6].second=choice1; cdt[dummy_o3dc[itr].first][6].first=store;
                                                    dummy_o3dc[itr].first=-1; break;
                                                }
                                                mm(36); getch(); break;
                                            }
                                        }
                                    }
                                    if(dummy_o3dc[itr].second=="Permutation")
                                    {
                                        printf("\n\n  CLASS [PERMUTATION]");
                                        if(cdt[dummy_o3dc[itr].first][1].second=="~")   // store string to generate permutation
                                        {
                                            mm(68); string in_string; cin>>in_string;
                                            if(in_string.size()>19) { mm(37); getch();break; }
                                            ll store1=count_no_of_permutations(in_string);
                                            if(dummy_o3dc[2].first<0)
                                            {
                                                short indexx=abs(dummy_o3dc[2].first)-1;
                                                ll store2=get<2>(si[indexx]);
                                                if(store1<store2)
                                                {
                                                    cout<<"\n\n    Only "<<store1<<" number of permutations are possible of your string.";
                                                    cout<<"\n    However, you want to create "<<store2<<" number of rows at Maximum as per your ";sfc(ly);printf("INITIALIZER");sfc(ww);printf(" size");
                                                    sfc(ly);printf("\n  INITIALIZER : ");cout<<get<3>(si[indexx]);sfc(ww);printf(" Range -> [ ");cout<<get<1>(si[indexx])<<" - "<<get<2>(si[indexx])<<" ]";
                                                    cout<<"\n\n    So you are advised to change your string which have at least "<<store2<<" number of permutations.";
                                                    printf("\n\n    Now press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to continue"); getch(); break;
                                                }
                                            }
                                            else
                                            {
                                                ll store2=dummy_o3dc[2].first;
                                                if(store1<store2)
                                                {
                                                    cout<<"\n\n    Only "<<store1<<" number of permutations are possible of your string.";
                                                    cout<<"\n    However, you want to create "<<store2<<" number of rows";
                                                    cout<<"\n\n    So you are advised to change your string which have at least "<<store2<<" number of permutations.";
                                                    printf("\n\n    Now press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to continue"); getch(); break;
                                                }
                                            }
                                            cdt[dummy_o3dc[itr].first][1].second=in_string; break;
                                        }
                                        if(cdt[dummy_o3dc[itr].first][2].second=="~")  // permutation order
                                            {
                                                mm(53); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                if(choice1=="1" || choice1=="2" || choice1=="3")
                                                {
                                                    ll store=string_to_integer_converter(choice1);
                                                    cdt[dummy_o3dc[itr].first][2].second=choice1; cdt[dummy_o3dc[itr].first][2].first=store;
                                                    dummy_o3dc[itr].first=-1; break;
                                                }
                                                mm(36); getch(); break;
                                            }
                                    }
                                    if(dummy_o3dc[itr].second=="Unique_Number")
                                    {
                                        printf("\n\n  CLASS [UNIQUE-RANDOM NUMBER]");
                                        if(cdt[dummy_o3dc[itr].first][1].second=="~")
                                        {
                                            mm(25); cin>>choice1;
                                            if(choice1=="min") break;
                                            else if(choice1=="exe") break;
                                            bool check=valid_pos_neg_integer(choice1);
                                            if(check==false) { mm(37); getch();break; }
                                            ll store=string_to_integer_converter(choice1);
                                            cdt[dummy_o3dc[itr].first][1].second=choice1; cdt[dummy_o3dc[itr].first][1].first=store; break;
                                        }
                                        if(cdt[dummy_o3dc[itr].first][2].second=="~")
                                        {
                                            mm(26); cin>>choice1;
                                            if(choice1=="min") break;
                                            else if(choice1=="exe") break;
                                            bool check=valid_pos_neg_integer(choice1);
                                            if(check==false) { mm(37); getch();break; }
                                            ll store1=string_to_integer_converter(choice1);
                                            ll store2=cdt[dummy_o3dc[itr].first][1].first;
                                            if(store1<store2) { mm(38); getch();break; }
                                            if(dummy_o3dc[2].first<0)
                                            {
                                                short indexx=abs(dummy_o3dc[2].first)-1;
                                                ll maxi=get<2>(si[indexx]);
                                                if(maxi>(store1-store2+1))
                                                {
                                                    cout<<"\n\n  You wish to create "<<maxi<<" No. of Rows at Maximum as per your ";sfc(ly);printf("INITIALIZER");sfc(ww);printf(" size.");
                                                    sfc(ly);printf("\n  INITIALIZER : ");cout<<get<3>(si[indexx]);sfc(ww);printf(" Range -> [ ");cout<<get<1>(si[indexx])<<" - "<<get<2>(si[indexx])<<" ]";
                                                    cout<<"\n  However, only "<<(store1-store2+1)<<" Unique No. exists in range provided by you.";
                                                    printf("\n\n  You are advised to enlarge your range");
                                                    printf("\n\n   press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to change Maximum value"); getch();break;
                                                }
                                            }
                                            else
                                            {
                                            if(dummy_o3dc[2].first>(store1-store2+1))
                                            {
                                                cout<<"\n\n  You wish to create "<<dummy_o3dc[2].first<<" No. of Rows.";
                                                cout<<"\n  However, only "<<(store1-store2+1)<<" Unique No. exists in range provided by you.";
                                                printf("\n\n  You are advised to enlarge your range");
                                                printf("\n\n   press ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to change Maximum value"); getch();break;
                                            }
                                            }
                                            cdt[dummy_o3dc[itr].first][2].second=choice1; cdt[dummy_o3dc[itr].first][2].first=store1; break;
                                        }
                                        if(cdt[dummy_o3dc[itr].first][3].second=="~")
                                        {
                                                mm(53); cin>>choice1;
                                                if(choice1=="min") break;
                                                else if(choice1=="exe") break;
                                                if(choice1=="1" || choice1=="2" || choice1=="3")
                                                {
                                                    ll store=string_to_integer_converter(choice1);
                                                    cdt[dummy_o3dc[itr].first][3].second=choice1; cdt[dummy_o3dc[itr].first][3].first=store;
                                                    dummy_o3dc[itr].first=-1; break;
                                                }
                                                mm(36); getch(); break;
                                        }
                                    }
                                    if(dummy_o3dc[itr].second=="Space")
                                    {
                                        dummy_o3dc[itr].first=-1; break;
                                    }
                                    break;
                                }
                                if(no_of_attribute_for_custom==-2)
                                {
                                    no_of_attribute_for_custom=1; custom_structure.clear(); dummy_o3dc.clear();
                                    s_3dc[i][j]=true; break;
                                }
                            }
                            break;
                        }

                    default:   //  INITIALIZER CLASS
                        {
                            cout<<"  "<<(++start)<<". ";
                            sfc(ly);cout<<_3dc[i][j].second;sfc(lc);cout<<" [CLASS INITIALIZER]";sfc(ww);
                            if(s2_3dc[start-1][0]=="~")
                                {
                                    printf("\n\n   Enter the ");sfc(ly);printf("Minimum");sfc(ww);printf(" value and then ");sbc(dr);printf(" ENTER ");sbc(bb);
                                    printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (1) to (10 to the power 6)");
                                    printf("\n\n  Minimum value ->  "); string min_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store=string_to_integer_converter(choice1);
                                    if(store<1 || store>1000000)
                                    { mm(37); getch();break; }
                                    min_value=choice1;
                                    dummy_o3dc.push_back(make_pair(_3dc[i][j].first,"ini"));
                                    dummy_o3dc.push_back(make_pair(store,min_value));
                                    s2_3dc[start-1][0]=min_value; break;
                                }
                                if(s2_3dc[start-1][1]=="~")
                                {
                                    printf("\n\n   Enter the ");sfc(ly);printf("Maximum");sfc(ww);printf(" value and then ");sbc(dr);printf(" ENTER ");sbc(bb);
                                    printf("\n ");sfc(lr);printf(" Note: ");sfc(ww);printf("Range -> (1) to (10 to the power 6)");
                                    printf("\n\n  Maximum value ->  "); string max_value; cin>>choice1;
                                    if(choice1=="min") break;
                                    else if(choice1=="exe") break;
                                    bool check=valid_pos_neg_integer(choice1);
                                    if(check==false) { mm(37); getch();break; }
                                    ll store1=string_to_integer_converter(choice1);
                                    ll store2=string_to_integer_converter(s2_3dc[start-1][0]);
                                    if(store1<1 || store1>1000000) { mm(37); getch();break; }
                                    if(store1<store2) { mm(38); getch();break; }
                                    max_value=choice1; s2_3dc[start-1][1]=max_value;
                                    dummy_o3dc.push_back(make_pair(store1,max_value));
                                    dummy2_o3dc.push_back(dummy_o3dc);
                                    si.push_back(make_tuple(_3dc[i][j].first,dummy_o3dc[1].first,dummy_o3dc[2].first,_3dc[i][j].second));
                                    dummy_o3dc.clear(); s_3dc[i][j]=true; break;
                                }
                        }
                    }
                    tr=1; cout<<"\n\n"; break;
                }
                if(tr==1) break;
            }
            if(choice1=="min") break;
            else if(choice1=="exe") break;
        }

        //  State 9  finishing state

        if(state=="state9")
        {
            system("cls"); short sttr=-1;
            for(short i=0;i<_3dc.size();i++)
            {
                for(short j=0;j<_3dc[i].size();j++)
                {
                    sttr++; for(short ii=0;ii<dummy2_o3dc[sttr].size();ii++) { dummy_o3dc.push_back(dummy2_o3dc[sttr][ii]); }
                }
                o3dc.push_back(dummy_o3dc);
                dummy_o3dc.clear();
            }
            break;
        }

    }
}


//*********************************************************************************************************************************
//*********************************************************************************************************************************


void Three_D_objects::build_integers(short index)
{
    Child_of_all_test_case_datatype c1;
    for(int i1=0;i1<cube[index].size();i1++)
    {
        for(int i2=0;i2<cube[index][i1].size();i2++)
        {
            ll type=cube[index][i1][i2].first;
            switch(type)
            {
            case 1:  // Integer
                {
                    short inner_type=cube[index][i1][i2+1].first;
                    switch(inner_type)
                    {
                    case 4:  // Prime Numbers
                        {
                            vector <ll> prime=c1.get_prime(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first,cube[index][i1][i2+4].first);
                            integers.push_back(prime);
                            cube[index][i1][i2+6].first=(integers.size()-1);
                            cube[index][i1][i2+5].first=-1;
                            i2+=6;break;
                        }
                    case 6:  // Incremented Numbers
                        {
                            cube[index][i1][i2+4].first=cube[index][i1][i2+2].first;;
                            i2+=4; break;
                        }
                    case 7:  // Nth Fibonacci Numbers
                        {
                            vector <ll> fibo=c1.get_fibonacci(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first,cube[index][i1][i2+4].first);
                            integers.push_back(fibo);
                            cube[index][i1][i2+6].first=(integers.size()-1);
                            cube[index][i1][i2+5].first=-1;
                            i2+=6;break;
                        }
                    case 8:  // Unique Numbers
                        {
                            vector <ll> uni=c1.get_all_random_numbers(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first,cube[index][i1][i2+4].first);
                            integers.push_back(uni);
                            cube[index][i1][i2+6].first=(integers.size()-1);
                            cube[index][i1][i2+5].first=-1;
                            i2+=6;break;
                        }
                    default:  // All others
                        {
                            i2+=3;break;
                        }
                    }
                    break;
                }
            case 2:  // Real
                {
                    i2+=3; break;
                }
            case 3:  // Array
                {
                    short inner_type=cube[index][i1][i2+1].first;
                    switch(inner_type)
                    {
                    case 1:   { i2+=7;break; } // Array of Integer
                    case 2:   { i2+=7;break; } // Array of Real
                    case 3:  // Array of String
                        {
                            short inner_type2=cube[index][i1][i2+2].first;
                            switch(inner_type2)
                            {
                            case 1:   { i2+=5;break; } // Array of default string
                            case 2:   { i2+=9;break; } // Array of Input String (user defined)
                            }
                            break;
                        }
                    case 4:   { i2+=5;break; }   // Array of Permutation
                    case 5:   { i2+=6;break; }   // Array of Unique Numbers
                    }
                    break;
                }
            case 4:  // String
                {
                    short inner_type=cube[index][i1][i2+1].first;
                    switch(inner_type)
                    {
                    case 1:   { i2+=2;break; } // Default String
                    case 2:   { i2+=5;break; } // Input String
                    }
                    break;
                }
            case 5:  // Matrix
                {
                    short inner_type=cube[index][i1][i2+1].first;
                    switch(inner_type)
                    {
                    case 1:  { i2+=8;break; }  // Matrix of Integer
                    case 2:  { i2+=8;break; }  // Matrix of Real
                    case 3:  // Matrix of Sting
                        {
                            short inner_type2=cube[index][i1][i2+2].first;
                            switch(inner_type2)
                            {
                            case 1:  { i2+=5;break; }   // Matrix of default String
                            case 2:  { i2+=10;break; }  // Matrix of Input String (user defined)
                            }
                            break;
                        }
                    case 4:   { i2+=6;break; }  // Matrix of Permutation
                    case 5:   { i2+=7;break; }  // Matrix of Unique Numbers
                    }
                    break;
                }
            case 6:  // Tree
                {
                    if(cube[index][i1][i2+6].first==0)  // No weight
                    {
                        i2+=6;break;
                    }
                    else if(cube[index][i1][i2+6].first==1) // weight of integer
                    {
                        i2+=9;break;
                    }
                    else if(cube[index][i1][i2+6].first==2)  // weight of real
                    {
                        i2+=9;break;
                    }
                    else if(cube[index][i1][i2+6].first==3)   // weight of string
                    {
                        if(cube[index][i1][i2+7].first==1)  // default string
                        {
                            i2+=7;break;
                        }
                        else                                // input string
                        {
                            i2+=10;break;
                        }
                    }
                    else if(cube[index][i1][i2+6].first==4)  // weight of permutation
                    {
                        i2+=7;break;
                    }
                }
            case 7:  // Graph
                {
                    if(cube[index][i1][i2+7].first==0)  // No weight
                    {
                        i2+=7;break;
                    }
                    else if(cube[index][i1][i2+7].first==1) // weight of integer
                    {
                        i2+=10;break;
                    }
                    else if(cube[index][i1][i2+7].first==2)  // weight of real
                    {
                        i2+=10;break;
                    }
                    else if(cube[index][i1][i2+7].first==3)   // weight of string
                    {
                        if(cube[index][i1][i2+8].first==1)  // default string
                        {
                            i2+=8;break;
                        }
                        else                                // input string
                        {
                            i2+=11;break;
                        }
                    }
                    else if(cube[index][i1][i2+7].first==4)  // weight of permutation
                    {
                        i2+=8;break;
                    }
                }
            case 8:  // Custom_Data_Type
                {
                    i2+=(cube[index][i1][i2+1].first+2);break;
                }
            default:  // initializer
                {
                    i2+=2;break;
                }
            }
        }
    }
}

//*********************************************************************************************************************************

void Three_D_objects::build(short index)
{
    if(test_print_status==true)
    {
        f1<<get_test_size()<<"\n";
        //cout<<get_test_size()<<"\n";
        test_print_status=false;
    }
    if(query_print_status==true)
    {
        f1<<get_query_size()<<"\n";
        //cout<<get_query_size()<<"\n";
        query_print_status=false;
    }
    Child_of_all_test_case_datatype c1;
    //  Initializers details
    for(short itr=0;itr<initializer[index].size();itr++)
    {
        c1.store_initializer_details(get<1>(initializer[index][itr]),get<2>(initializer[index][itr]));
    }
    c1.set_initializer();
    for(int i1=0;i1<cube[index].size();i1++)
    {
        for(int i2=0;i2<cube[index][i1].size();i2++)
        {
            ll type=cube[index][i1][i2].first;
            switch(type)
            {
            case 1:   // Integer
            {
                short inner_type=cube[index][i1][i2+1].first;
                switch(inner_type)
                {
                case 1:   // Random Number
                    {
                        //cout<<c1.get_random(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first)<<" ";
                        f1<<c1.get_random(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first)<<" "; break;
                    }
                case 2:    // Odd Number
                    {
                        //cout<<c1.get_odd(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first)<<" ";
                        f1<<c1.get_odd(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first)<<" "; break;
                    }
                case 3:   // Even Number
                    {
                        //cout<<c1.get_even(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first)<<" ";
                        f1<<c1.get_even(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first)<<" "; break;
                    }
                case 4:   // Prime Number
                    {
                        //cout<<integers[cube[index][i1][i2+6].first][++cube[index][i1][i2+5].first]<<" ";
                        f1<<integers[cube[index][i1][i2+6].first][++cube[index][i1][i2+5].first]<<" "; i2+=3;break;
                    }
                case 5:   // Non Prime Number
                    {
                        //cout<<c1.get_non_prime(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first)<<" ";
                        f1<<c1.get_non_prime(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first)<<" "; break;
                    }
                case 6:   // Incremented Number
                    {
                        //cout<<cube[index][i1][i2+4].first<<" ";
                        f1<<cube[index][i1][i2+4].first<<" ";
                        cube[index][i1][i2+4].first+=cube[index][i1][i2+3].first; i2+=1;break;
                    }
                case 7:   // Nth Fibonacci Number
                    {
                        //cout<<integers[cube[index][i1][i2+6].first][++cube[index][i1][i2+5].first]<<" ";
                        f1<<integers[cube[index][i1][i2+6].first][++cube[index][i1][i2+5].first]<<" "; i2+=3;break;
                    }
                case 8:   // Get_Random_Unique_Number
                    {
                        //cout<<integers[cube[index][i1][i2+6].first][++cube[index][i1][i2+5].first]<<" ";
                        f1<<integers[cube[index][i1][i2+6].first][++cube[index][i1][i2+5].first]<<" "; i2+=3;break;
                    }
                }
                i2+=3; break;
            }

            case 2:  //  Real
            {
                //cout<<c1.get_random_real(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first,cube[index][i1][i2+1].first)<<" ";
                f1<<c1.get_random_real(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first,cube[index][i1][i2+1].first)<<" "; i2+=3;break;
            }

            case 3:  //  Array
            {
                short inner_type=cube[index][i1][i2+1].first;
                switch(inner_type)
                {
                case 1:  // Array of Integer
                    {
                        vector <ll> store;
                        store=c1.get_integer(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first,cube[index][i1][i2+4].first,cube[index][i1][i2+5].first,cube[index][i1][i2+7].first);
                        if(cube[index][i1][i2+6].first==1)    //space separated
                        {
                            for(int ktr=0;ktr<store.size();ktr++)
                            {
                                 //cout<<store[ktr]<<" ";
                                 f1<<store[ktr]<<" ";
                            }
                        }
                        else                                 //Line separated
                        {
                            for(int ktr=0;ktr<store.size();ktr++)
                            {
                                if(ktr!=0)
                                {
                                    //cout<<"\n";
                                    f1<<"\n";
                                }
                                 //cout<<store[ktr]<<" ";
                                 f1<<store[ktr]<<" ";
                            }
                        }
                        i2+=7;break;
                    }
                case 2:  // Array of Real
                    {
                        vector <string> store;
                        store=c1.get_real(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first,cube[index][i1][i2+4].first,cube[index][i1][i2+5].first,cube[index][i1][i2+7].first);
                        if(cube[index][i1][i2+6].first==1)    //space separated
                        {
                            for(int ktr=0;ktr<store.size();ktr++)
                            {
                                 //cout<<store[ktr]<<" ";
                                 f1<<store[ktr]<<" ";
                            }
                        }
                        else                                  //Line separated
                        {
                            for(int ktr=0;ktr<store.size();ktr++)
                            {
                                if(ktr!=0)
                                {
                                    //cout<<"\n";
                                    f1<<"\n";
                                }
                                 //cout<<store[ktr]<<" ";
                                 f1<<store[ktr]<<" ";
                            }
                        }
                        i2+=7;break;
                    }
                case 3:  // Array of String
                    {
                        short inner_type2=cube[index][i1][i2+2].first;
                        switch(inner_type2)
                        {
                        case 1:  // Array of default string
                            {
                                int sizee=cube[index][i1][i2+4].first;
                                if(sizee<0) { sizee=c1.get_initializer(sizee); }
                                if(cube[index][i1][i2+5].first==1)    //space separated
                                {
                                    for(int ktr=0;ktr<sizee;ktr++)
                                    {
                                         //cout<<cube[index][i1][i2+3].second<<" ";
                                         f1<<cube[index][i1][i2+3].second<<" ";
                                    }
                                }
                                else                                  //Line separated
                                {
                                    for(int ktr=0;ktr<sizee;ktr++)
                                    {
                                        if(ktr!=0)
                                        {
                                            //cout<<"\n";
                                            f1<<"\n";
                                        }
                                        //cout<<cube[index][i1][i2+3].second<<" ";
                                        f1<<cube[index][i1][i2+3].second<<" ";
                                    }
                                }
                                i2+=5;break;
                            }
                        case 2:  // Array of Input String (user defined)
                            {
                                short index3=c1.store_input_string(cube[index][i1][i2+3].second,cube[index][i1][i2+4].first,cube[index][i1][i2+5].first,cube[index][i1][i2+6].first);
                                vector <string> st=c1.get_input_string_array(index3,cube[index][i1][i2+7].first,cube[index][i1][i2+9].first);
                                if(cube[index][i1][i2+8].first==1)    //space separated
                                {
                                    for(int ktr=0;ktr<st.size();ktr++)
                                    {
                                        //cout<<st[ktr]<<" ";
                                        f1<<st[ktr]<<" ";
                                    }
                                }
                                else                                  //Line separated
                                {
                                    for(int ktr=0;ktr<st.size();ktr++)
                                    {
                                        if(ktr!=0)
                                        {
                                            //cout<<"\n";
                                            f1<<"\n";
                                        }
                                        //cout<<st[ktr]<<" ";
                                        f1<<st[ktr]<<" ";
                                    }
                                }
                                i2+=9;break;
                            }
                        }
                        break;
                    }
                case 4:  // Array of Permutation
                    {
                        short index3=c1.store_string_for_permutation(cube[index][i1][i2+2].second);
                        vector <string> st=c1.get_all_permutations(index3,cube[index][i1][i2+3].first,cube[index][i1][i2+5].first);
                        if(cube[index][i1][i2+4].first==1)    //space separated
                                {
                                    for(int ktr=0;ktr<st.size();ktr++)
                                    {
                                         //cout<<st[ktr]<<" ";
                                         f1<<st[ktr]<<" ";
                                    }
                                }
                                else                                  //Line separated
                                {
                                    for(int ktr=0;ktr<st.size();ktr++)
                                    {
                                        if(ktr!=0)
                                        {
                                            //cout<<"\n";
                                            f1<<"\n";
                                        }
                                         //cout<<st[ktr]<<" ";
                                         f1<<st[ktr]<<" ";
                                    }
                                }
                        i2+=5;break;
                    }
                case 5:  // Array of Unique Numbers
                    {
                        vector <ll> store=c1.get_all_random_numbers_for_array(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first,cube[index][i1][i2+4].first,cube[index][i1][i2+6].first);
                        if(cube[index][i1][i2+5].first==1)    //space separated
                        {
                            for(int ktr=0;ktr<store.size();ktr++)
                            {
                                 //cout<<store[ktr]<<" ";
                                 f1<<store[ktr]<<" ";
                            }
                        }
                        else                                  //Line separated
                        {
                            for(int ktr=0;ktr<store.size();ktr++)
                            {
                                if(ktr!=0)
                                {
                                    //cout<<"\n";
                                    f1<<"\n";
                                }
                                //cout<<store[ktr]<<" ";
                                f1<<store[ktr]<<" ";
                            }
                        }
                        i2+=6;break;
                    }
                }
                break;
            }

            case 4:  //  String
            {
                short inner_type=cube[index][i1][i2+1].first;
                switch(inner_type)
                {
                case 1:  // Default String
                    {
                        //cout<<cube[index][i1][i2+2].second<<" ";
                        f1<<cube[index][i1][i2+2].second<<" "; i2+=2;break;
                    }
                case 2:  // Input String
                    {
                        short index3=c1.store_input_string(cube[index][i1][i2+2].second,cube[index][i1][i2+3].first,cube[index][i1][i2+4].first,cube[index][i1][i2+5].first);
                        //cout<<c1.get_input_string(index3)<<" ";
                        f1<<c1.get_input_string(index3)<<" "; i2+=5;break;
                    }
                }
                break;
            }

            case 5:  //  Matrix
            {
                short inner_type=cube[index][i1][i2+1].first;
                switch(inner_type)
                {
                case 1:  // Matrix of Integer
                    {
                        vector <vector <ll>> matrix=c1.get_integer_matrix(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first,cube[index][i1][i2+4].first,cube[index][i1][i2+5].first,cube[index][i1][i2+6].first,cube[index][i1][i2+7].first,cube[index][i1][i2+8].first);
                        for(int ktr1=0;ktr1<matrix.size();ktr1++)
                        {
                            int ktr2;
                            for(ktr2=0;ktr2<matrix[ktr1].size();ktr2++)
                            {
                                //cout<<matrix[ktr1][ktr2]<<" ";
                                f1<<matrix[ktr1][ktr2]<<" ";
                            }
                            if(ktr1==(matrix.size()-1)&&ktr2==(matrix[ktr1].size())) continue;
                            //cout<<"\n";
                            f1<<"\n";
                        }
                        i2+=8;break;
                    }
                case 2:  // Matrix of Real
                    {
                        vector <vector <string>> matrix=c1.get_real_matrix(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first,cube[index][i1][i2+4].first,cube[index][i1][i2+5].first,cube[index][i1][i2+6].first,cube[index][i1][i2+7].first,cube[index][i1][i2+8].first);
                        for(int ktr1=0;ktr1<matrix.size();ktr1++)
                        {
                            int ktr2;
                            for(ktr2=0;ktr2<matrix[ktr1].size();ktr2++)
                            {
                                //cout<<matrix[ktr1][ktr2]<<" ";
                                f1<<matrix[ktr1][ktr2]<<" ";
                            }
                            if(ktr1==(matrix.size()-1)&&ktr2==(matrix[ktr1].size())) continue;
                            //cout<<"\n";
                            f1<<"\n";
                        }
                        i2+=8;break;
                    }
                case 3:  // Matrix of Sting
                    {
                        short inner_type2=cube[index][i1][i2+2].first;
                        switch(inner_type2)
                        {
                        case 1:  // Matrix of default String
                            {
                                int row=cube[index][i1][i2+4].first;
                                if(row<0) { row=c1.get_initializer(row); }
                                int col=cube[index][i1][i2+5].first;
                                if(col<0) { col=c1.get_initializer(col); }
                                for(int ktr1=0;ktr1<row;ktr1++)
                                {
                                    int ktr2;
                                    for(ktr2=0;ktr2<col;ktr2++)
                                    {
                                        //cout<<cube[index][i1][i2+3].second<<" ";
                                        f1<<cube[index][i1][i2+3].second<<" ";
                                    }
                                    if(ktr1==(row-1)&&ktr2==(col)) continue;
                                    //cout<<"\n";
                                    f1<<"\n";
                                }
                                i2+=5;break;
                            }
                        case 2:  // Matrix of Input String (user defined)
                            {
                                short index3=c1.store_input_string(cube[index][i1][i2+3].second,cube[index][i1][i2+4].first,cube[index][i1][i2+5].first,cube[index][i1][i2+6].first);
                                vector <vector <string>> matrix=c1.get_string_matrix(index3,cube[index][i1][i2+7].first,cube[index][i1][i2+8].first,cube[index][i1][i2+9].first,cube[index][i1][i2+10].first);
                                for(int ktr1=0;ktr1<matrix.size();ktr1++)
                                {
                                    int ktr2;
                                    for(ktr2=0;ktr2<matrix[ktr1].size();ktr2++)
                                    {
                                        //cout<<matrix[ktr1][ktr2]<<" ";
                                        f1<<matrix[ktr1][ktr2]<<" ";
                                    }
                                    if(ktr1==(matrix.size()-1)&&ktr2==(matrix[ktr1].size())) continue;
                                    //cout<<"\n";
                                    f1<<"\n";
                                }
                                i2+=10;break;
                            }
                        }
                        break;
                    }
                case 4:  // Matrix of Permutation
                    {
                        short index3=c1.store_string_for_permutation(cube[index][i1][i2+2].second);
                        vector <vector <string>> matrix=c1.get_permutation_matrix(index3,cube[index][i1][i2+3].first,cube[index][i1][i2+4].first,cube[index][i1][i2+5].first,cube[index][i1][i2+6].first);
                        for(int ktr1=0;ktr1<matrix.size();ktr1++)
                        {
                            int ktr2;
                            for(ktr2=0;ktr2<matrix[ktr1].size();ktr2++)
                            {
                                //cout<<matrix[ktr1][ktr2]<<" ";
                                f1<<matrix[ktr1][ktr2]<<" ";
                            }
                            if(ktr1==(matrix.size()-1)&&ktr2==(matrix[ktr1].size())) continue;
                            //cout<<"\n";
                            f1<<"\n";
                        }
                        i2+=6;break;
                    }
                case 5:  // Matrix of Unique Numbers
                    {
                        vector <vector <ll>> matrix=c1.get_matrix_of_all_unique_numbers(cube[index][i1][i2+2].first,cube[index][i1][i2+3].first,cube[index][i1][i2+4].first,cube[index][i1][i2+5].first,cube[index][i1][i2+6].first,cube[index][i1][i2+7].first);
                        for(int ktr1=0;ktr1<matrix.size();ktr1++)
                        {
                            int ktr2;
                            for(ktr2=0;ktr2<matrix[ktr1].size();ktr2++)
                            {
                                //cout<<matrix[ktr1][ktr2]<<" ";
                                f1<<matrix[ktr1][ktr2]<<" ";
                            }
                            if(ktr1==(matrix.size()-1)&&ktr2==(matrix[ktr1].size())) continue;
                            //cout<<"\n";
                            cout<<"\n";
                        }
                        i2+=7;break;
                    }
                }
                break;
            }

            case 6:  //  Tree
            {
                vector <pair <ll,ll>> tree;
                string str1=cube[index][i1][i2+1].second;
                string str2=cube[index][i1][i2+6].second;
                if(cube[index][i1][i2+1].first==1) { str1=cube[index][i1][i2+1].second; }
                short inner_type=cube[index][i1][i2+2].first;
                switch(inner_type)
                {
                case 1:  //  Rooted Binary Tree
                    {
                        tree=c1.get_binary_rooted_tree(cube[index][i1][i2+3].first,cube[index][i1][i2+4].first,cube[index][i1][i2+5].first); break;
                    }
                case 2:  //  Full Binary Tree
                    {
                        tree=c1.get_full_binary_tree(cube[index][i1][i2+3].first,cube[index][i1][i2+4].first,cube[index][i1][i2+5].first); break;
                    }
                case 3:  //  Perfect Binary Tree
                    {
                        tree=c1.get_perfect_binary_tree(cube[index][i1][i2+3].first,cube[index][i1][i2+4].first,cube[index][i1][i2+5].first); break;
                    }
                case 4:  //  Binary Search Tree
                    {
                        tree=c1.get_binary_search_tree(cube[index][i1][i2+3].first,cube[index][i1][i2+4].first,cube[index][i1][i2+5].first); break;
                    }
                }

                if(cube[index][i1][i2+6].first==0)  // No weight
                {
                    for(int ktr=0;ktr<tree.size();ktr++)
                    {
                        f1<<tree[ktr].first<<" "<<str1<<" "<<tree[ktr].second<<" ";
                        //cout<<tree[ktr].first<<" "<<str1<<" "<<tree[ktr].second<<" ";
                        if(ktr==tree.size()-1) continue;
                        f1<<"\n";
                        //cout<<"\n";
                    }
                    i2+=6;break;
                }

                else if(cube[index][i1][i2+6].first==1) // weight of integer
                {
                    vector <ll> integer=c1.get_integer(cube[index][i1][i2+7].first,cube[index][i1][i2+8].first,cube[index][i1][i2+9].first,(cube[index][i1][i2+3].first-1),1);
                    for(int ktr=0;ktr<tree.size();ktr++)
                    {
                        f1<<tree[ktr].first<<" "<<str1<<" "<<tree[ktr].second<<" "<<str2<<" "<<integer[ktr]<<" ";
                        //cout<<tree[ktr].first<<" "<<str1<<" "<<tree[ktr].second<<" "<<str2<<" "<<integer[ktr]<<" ";
                        if(ktr==tree.size()-1) continue;
                        f1<<"\n";
                        //cout<<"\n";
                    }
                    i2+=9;break;
                }

                else if(cube[index][i1][i2+6].first==2)  // weight of real
                {
                    vector <string> real=c1.get_real(cube[index][i1][i2+7].first,cube[index][i1][i2+8].first,cube[index][i1][i2+9].first,(cube[index][i1][i2+3].first-1),1);
                    for(int ktr=0;ktr<tree.size();ktr++)
                    {
                        f1<<tree[ktr].first<<" "<<str1<<" "<<tree[ktr].second<<" "<<str2<<" "<<real[ktr]<<" ";
                        //cout<<tree[ktr].first<<" "<<str1<<" "<<tree[ktr].second<<" "<<str2<<" "<<real[ktr]<<" ";
                        if(ktr==tree.size()-1) continue;
                        f1<<"\n";
                        //cout<<"\n";
                    }
                    i2+=9;break;
                }

                else if(cube[index][i1][i2+6].first==3)   // weight of string
                {
                    if(cube[index][i1][i2+7].first==1)  // default string
                    {
                        for(int ktr=0;ktr<tree.size();ktr++)
                        {
                            f1<<tree[ktr].first<<" "<<str1<<" "<<tree[ktr].second<<" "<<str2<<" "<<cube[index][i1][i2+7].second<<" ";
                            //cout<<tree[ktr].first<<" "<<str1<<" "<<tree[ktr].second<<" "<<str2<<" "<<cube[index][i1][i2+7].second<<" ";
                            if(ktr==tree.size()-1) continue;
                            f1<<"\n";
                            //cout<<"\n";
                        }
                        i2+=7;break;
                    }
                    else                                // input string
                    {
                        short index5=c1.store_input_string(cube[index][i1][i2+7].second,cube[index][i1][i2+8].first,cube[index][i1][i2+9].first,cube[index][i1][i2+10].first);
                        vector <string> string_array=c1.get_input_string_array(index5,(cube[index][i1][i2+3].first-1),1);
                        for(int ktr=0;ktr<tree.size();ktr++)
                        {
                            f1<<tree[ktr].first<<" "<<str1<<" "<<tree[ktr].second<<" "<<str2<<" "<<string_array[ktr]<<" ";
                            //cout<<tree[ktr].first<<" "<<str1<<" "<<tree[ktr].second<<" "<<str2<<" "<<string_array[ktr]<<" ";
                            if(ktr==tree.size()-1) continue;
                            f1<<"\n";
                            //cout<<"\n";
                        }
                        i2+=10;break;
                    }
                }
                else if(cube[index][i1][i2+6].first==4)  // weight of permutation
                {
                    ll sizee=count_no_of_permutations(cube[index][i1][i2+7].second);
                    vector <string> permutations=c1.get_permutations_for_tree_edges(cube[index][i1][i2+7].second,(cube[index][i1][i2+3].first-1),sizee);
                    for(int ktr=0;ktr<tree.size();ktr++)
                    {
                        f1<<tree[ktr].first<<" "<<str1<<" "<<tree[ktr].second<<" "<<str2<<" "<<permutations[ktr]<<" ";
                        //cout<<tree[ktr].first<<" "<<str1<<" "<<tree[ktr].second<<" "<<str2<<" "<<permutations[ktr]<<" ";
                        if(ktr==tree.size()-1) continue;
                        f1<<"\n";
                        //cout<<"\n";
                    }
                    i2+=7;break;
                }
            }

            case 7:  //  Graph
            {
                vector <pair <ll,ll>> graph;
                string str1=cube[index][i1][i2+1].second;
                string str2=cube[index][i1][i2+7].second;
                if(cube[index][i1][i2+1].first==1) { str1=cube[index][i1][i2+1].second; }
                int edges=cube[index][i1][i2+4].first;
                if(edges<0) { edges=c1.get_initializer(edges); }
                short inner_type=cube[index][i1][i2+2].first;
                switch(inner_type)
                {
                case 1:    // undirected graph
                    {
                        graph=c1.get_undirected_graph(cube[index][i1][i2+3].first,edges,cube[index][i1][i2+5].first,cube[index][i1][i2+6].first); break;
                    }
                case 2:   // directed graph
                    {
                        graph=c1.get_directed_graph(cube[index][i1][i2+3].first,edges,cube[index][i1][i2+5].first,cube[index][i1][i2+6].first); break;
                    }
                }
                if(cube[index][i1][i2+7].first==0)  // No weight
                {
                    for(int ktr=0;ktr<graph.size();ktr++)
                    {
                        f1<<graph[ktr].first<<" "<<str1<<" "<<graph[ktr].second<<" ";
                        //cout<<graph[ktr].first<<" "<<str1<<" "<<graph[ktr].second<<" ";
                        if(ktr==graph.size()-1) continue;
                        f1<<"\n";
                        //cout<<"\n";
                    }
                    i2+=7;break;
                }
                else if(cube[index][i1][i2+7].first==1) // weight of integer
                {
                    vector <ll> integer=c1.get_integer(cube[index][i1][i2+8].first,cube[index][i1][i2+9].first,cube[index][i1][i2+10].first,edges,1);
                    for(int ktr=0;ktr<graph.size();ktr++)
                    {
                        f1<<graph[ktr].first<<" "<<str1<<" "<<graph[ktr].second<<" "<<str2<<" "<<integer[ktr]<<" ";
                        //cout<<graph[ktr].first<<" "<<str1<<" "<<graph[ktr].second<<" "<<str2<<" "<<integer[ktr]<<" ";
                        if(ktr==graph.size()-1) continue;
                        f1<<"\n";
                        //cout<<"\n";
                    }
                    i2+=10;break;
                }
                else if(cube[index][i1][i2+7].first==2)  // weight of real
                {
                    vector <string> real=c1.get_real(cube[index][i1][i2+8].first,cube[index][i1][i2+9].first,cube[index][i1][i2+10].first,edges,1);
                    for(int ktr=0;ktr<graph.size();ktr++)
                    {
                        f1<<graph[ktr].first<<" "<<str1<<" "<<graph[ktr].second<<" "<<str2<<" "<<real[ktr]<<" ";
                        //cout<<graph[ktr].first<<" "<<str1<<" "<<graph[ktr].second<<" "<<str2<<" "<<real[ktr]<<" ";
                        if(ktr==graph.size()-1) continue;
                        f1<<"\n";
                        //cout<<"\n";
                    }
                    i2+=10;break;
                }
                else if(cube[index][i1][i2+7].first==3)   // weight of string
                {
                    if(cube[index][i1][i2+8].first==1)  // default string
                    {
                        for(int ktr=0;ktr<graph.size();ktr++)
                        {
                            f1<<graph[ktr].first<<" "<<str1<<" "<<graph[ktr].second<<" "<<str2<<" "<<cube[index][i1][i2+8].second<<" ";
                            //cout<<graph[ktr].first<<" "<<str1<<" "<<graph[ktr].second<<" "<<str2<<" "<<cube[index][i1][i2+8].second<<" ";
                            if(ktr==graph.size()-1) continue;
                            f1<<"\n";
                            //cout<<"\n";
                        }
                        i2+=8;break;
                    }
                    else                                // input string
                    {
                        short index5=c1.store_input_string(cube[index][i1][i2+8].second,cube[index][i1][i2+9].first,cube[index][i1][i2+10].first,cube[index][i1][i2+11].first);
                        vector <string> string_array=c1.get_input_string_array(index5,edges,1);
                        for(int ktr=0;ktr<graph.size();ktr++)
                        {
                            f1<<graph[ktr].first<<" "<<str1<<" "<<graph[ktr].second<<" "<<str2<<" "<<string_array[ktr]<<" ";
                            //cout<<graph[ktr].first<<" "<<str1<<" "<<graph[ktr].second<<" "<<str2<<" "<<string_array[ktr]<<" ";
                            if(ktr==graph.size()-1) continue;
                            f1<<"\n";
                            //cout<<"\n";
                        }
                        i2+=11;break;
                    }
                }
                else if(cube[index][i1][i2+7].first==4)  // weight of permutation
                {
                    ll sizee=count_no_of_permutations(cube[index][i1][i2+8].second);
                    vector <string> permutations=c1.get_permutations_for_tree_edges(cube[index][i1][i2+8].second,edges,sizee);
                    for(int ktr=0;ktr<graph.size();ktr++)
                    {
                        f1<<graph[ktr].first<<" "<<str1<<" "<<graph[ktr].second<<" "<<str2<<" "<<permutations[ktr]<<" ";
                        //cout<<graph[ktr].first<<" "<<str1<<" "<<graph[ktr].second<<" "<<str2<<" "<<permutations[ktr]<<" ";
                        if(ktr==graph.size()-1) continue;
                        f1<<"\n";
                        //cout<<"\n";
                    }
                    i2+=8;break;
                }
            }

            case 8:  //  Custom_data_type
            {
                vector <ll> copy_cube;
                copy_cube.push_back(8);
                copy_cube.push_back(cube[index][i1][i2+1].first);
                copy_cube.push_back(cube[index][i1][i2+2].first);
                for(short ktr=(i2+3);ktr<(i2+3+cube[index][i1][i2+1].first);ktr++)
                {
                    short index2=cube[index][i1][ktr].first;
                    short inner_type=custom[index][index2][0].first;
                    switch (inner_type)
                    {
                    case 1:  // custom of integers
                        {
                            short index3=c1.store_details_of_numbers_custom(custom[index][index2][1].first,custom[index][index2][2].first,custom[index][index2][3].first,custom[index][index2][4].first);
                            copy_cube.push_back(index3); break;
                        }
                    case 2:  // custom of reals
                        {
                            short index3=c1.store_details_of_real_custom(custom[index][index2][1].first,custom[index][index2][2].first,custom[index][index2][3].first,custom[index][index2][4].first);
                            copy_cube.push_back(index3); break;
                        }
                    case 3:  // custom of Strings
                        {
                            short inner_type2=custom[index][index2][1].first;
                            switch(inner_type2)
                            {
                            case 1:  // custom of default string
                                {
                                    short index3=c1.store_default_string(custom[index][index2][2].second);
                                    short index4=c1.store_details_of_default_string_custom(index3);
                                    copy_cube.push_back(index4); break;
                                }
                            case 2:  // custom of input string
                                {
                                    short index3=c1.store_input_string(custom[index][index2][2].second,custom[index][index2][3].first,custom[index][index2][4].first,custom[index][index2][5].first);
                                    short index4=c1.store_details_of_input_string_custom(index3,custom[index][index2][6].first);
                                    copy_cube.push_back(index4); break;
                                }
                            }
                            break;
                        }
                    case 4:  // custom of Permutations
                        {
                            short index3=c1.store_string_for_permutation(custom[index][index2][1].second);
                            short index4=c1.store_details_of_permutation_string_custom(index3,custom[index][index2][2].first);
                            copy_cube.push_back(index4); break;
                        }
                    case 5:  // custom of Unique Numbers
                        {
                            short index3=c1.store_details_of_unique_numbers_custom(custom[index][index2][1].first,custom[index][index2][2].first,custom[index][index2][3].first);
                            copy_cube.push_back(index3); break;
                        }
                    case 6:  // custom of Spaces
                        {
                            short index3=c1.store_space_in_custom();
                            copy_cube.push_back(index3); break;
                        }
                    }
                }
                // **********************************************************************
                vector <pair <short,short>> store=c1.build_custom_data_type(copy_cube);
                int size_of_custom=copy_cube[2];
                if(size_of_custom<0) { size_of_custom=c1.get_initializer(size_of_custom); }
                for(int i=0;i<size_of_custom;i++)
                {
                    for(int j=0;j<store.size();j++)
                    {
                        short ch=store[j].first;
                        switch(ch)
                        {
                            case 1:
                            {
                                //cout<<c1.get_integer_data_of_custom(store[j].second,i);
                                f1<<c1.get_integer_data_of_custom(store[j].second,i); break;
                            }
                            case 2:
                            {
                                //cout<<c1.get_string_data_of_custom(store[j].second,i);
                                f1<<c1.get_string_data_of_custom(store[j].second,i); break;
                            }
                            case 3:
                            {
                                //cout<<" ";
                                f1<<" "; break;
                            }
                        }
                    }
                    if(i==(size_of_custom-1)) break;
                    //cout<<"\n";
                    f1<<"\n";
                }
                c1.reset_custom_data();
                i2+=(cube[index][i1][i2+1].first+2);break;
            }

            default:  //  Initializer
                {
                    //cout<<c1.get_initializer(type)<<" ";
                    f1<<c1.get_initializer(type)<<" "; i2+=2;break;
                }
            }
        }
        //cout<<"\n";
        f1<<"\n";
    }
    c1.reset_initializer();
}

//*********************************************************************************************************************************

void Three_D_objects::show_data()
    {
        system("cls");cout<<"\n  Details of objects\n\n";
        for(int i1=0;i1<cube.size();i1++)
        {
            cout<<" Object -> "<<object_names[i1]<<"\n\n";
            cout<<"  Initializers details\n";
            for(short itr=0;itr<initializer[i1].size();itr++)
            {
                cout<<"("<<get<0>(initializer[i1][itr])<<") ["<<get<1>(initializer[i1][itr])<<" - "<<get<2>(initializer[i1][itr])<<" ] "<<get<3>(initializer[i1][itr])<<" \n";
            }
            cout<<"\n  Object\n";
            for(int i2=0;i2<cube[i1].size();i2++)
            {
                for(int i3=0;i3<cube[i1][i2].size();i3++)
                {
                    cout<<"["<<cube[i1][i2][i3].first<<" "<<cube[i1][i2][i3].second<<"] ";
                }
                cout<<"\n";
            }
            cout<<"\n------------------------------------\n";
        }
        cout<<"\n\n\n  Details of custom\n\n";
        for(int i1=0;i1<custom.size();i1++)
        {
            for(int i2=0;i2<custom[i1].size();i2++)
            {
                for(int i3=0;i3<custom[i1][i2].size();i3++)
                {
                    cout<<"["<<custom[i1][i2][i3].first<<" "<<custom[i1][i2][i3].second<<"] ";
                }
                cout<<"\n";
            }
            cout<<"\n------------------------------------\n";
        }
        getch();
    }

//*********************************************************************************************************************************

void Three_D_objects::object_display()
{
    cout<<"\n\n\n  List of Objects            Status\n";
    for(short ktr=0;ktr<object_names.size();ktr++) { gxy(3,5+ktr);sfc(ly);cout<<"  ["<<object_names[ktr]<<"]";sfc(lg);gxy(26,5+ktr);printf("Ready to build"); } sfc(ww);
}

//*********************************************************************************************************************************

void Three_D_objects::mm(short ch)
{
    switch(ch)
    {
    case 0:
        {
            sfc(lr);printf("\n  MESSAGE BOX");sfc(ww);
            printf("\n  Please type a valid choice ");
            printf("\n  Now press  ");sbc(dr);printf("ENTER");sbc(bb);printf("  to continue"); break;
        }
    case 1:
        {
            sfc(lc);printf("\n  Great Job");sfc(ww);printf("\n  You have successfully saved all the attribute values into your object\n\n\n");
            printf("  Now press  ");sbc(dr);printf("ENTER");sbc(bb);printf("  to continue...");break;
        }
    case 2:
        {
            printf("\n\n\n\n\n  Do you want to display T value at top of your data file ?");
            printf("\n\n  Type ");sfc(ly);printf("yes");sfc(ww);printf("  and  ");sbc(dr);printf("ENTER");sbc(bb);printf("    to include it");
            printf("\n\n  Type ");sfc(ly);printf("no");sfc(ww);printf("   and  ");sbc(dr);printf("ENTER");sbc(bb);printf("    to disable it");
            cout<<"\n\n  Enter your choice  -> ";  break;
        }
    case 3:
        {
            printf("\n\n\n\n  Press ");sbc(dr);printf("ENTER");sbc(bb);printf("  to start the process of  building your ");sfc(lc);printf("TEST FILE...");sfc(ww);break;
        }
    case 4:
        {
            printf("\n\n\n\n   Please wait, this process can take some time.....\n");break;
        }
    case 5:
        {
            sfc(ly);printf("\n\n\n   Congratulations");
            sfc(lc);printf("\n\n   Your Test file is successfully created...\n\n");
            printf("\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to build another file ");
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to go back to menu");
            printf("\n  ");sfc(lr);printf("press 3");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" to exit");
            cout<<"\n\n  Enter your choice  -> ";  break;
        }
    case 6:
        {
            cout<<"\n\n\n\n   How many ";sfc(ly);printf("OBJECTS");sfc(ww);printf(" you want to include in your Test Cases ?");
            sfc(lr);printf("\n   Note");sfc(ww);printf(" : Range [ 1 to 10 ]");
            printf("\n\n  Enter your choice ->  "); break;
        }
    case 7:
        {
            cout<<"\n\n\n\n   How many ";sfc(lc);printf("QUERIES");sfc(ww);printf(" you want to include in your Test Cases ?");
            sfc(lr);printf("\n   Note");sfc(ww);printf(" : Range [ 1 to 10 to the power 5 ]");
            printf("\n\n  Enter your choice ->  "); break;
        }
    case 8:
        {
            printf("\n\n\n\n\n  Do you want to display Query value at top of your ");sfc(ly);printf("TESE FILE");sfc(ww);
            printf("\n\n  Type ");sfc(ly);printf("yes");sfc(ww);printf("  and  ");sbc(dr);printf("ENTER");sbc(bb);printf("    to include it");
            printf("\n\n  Type ");sfc(ly);printf("no");sfc(ww);printf("   and  ");sbc(dr);printf("ENTER");sbc(bb);printf("    to disable it");
            cout<<"\n\n  Enter your choice  -> "; break;
        }
    case 9:
        {
            printf("\n\n   Select a valid arrangement of your ");sfc(ly);printf("OBJECTS\n\n");sfc(ww);
            printf("\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" for SEQUENTIAL ARRANGEMENT ");
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" for RANDOMIZED ARRANGEMENT ");
            cout<<"\n\n  Enter your choice  -> "; break;
        }
    case 10:
        {
            printf("\n\n\n   Name your ");sfc(lc);printf("TEST FILE\n\n   ->  ");sfc(ww);break;
        }
    case 11:
        {
            printf("\n\n   Select a valid ");sfc(lc);printf("FILE FORMAT");sfc(ww);printf(" of your ");sfc(lc);printf("TEST FILE\n\n");sfc(ww);
            printf("\n  ");sfc(lr);printf("press 1");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" for TEXT DOCUMENT ");
            printf("\n  ");sfc(lr);printf("press 2");sfc(ww);printf(" and ");sbc(dr);sfc(lr);printf(" ENTER ");sbc(bb);sfc(ww);printf(" for WORD DOCUMENT ");
            cout<<"\n\n  Enter your choice  -> "; break;
        }
    }
}

//  The END
