/*
file name: Assignment1.cpp
Author 
    ID:u1311019
    Name:Sejin Yoon
*/

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;


int main()
{

    double S1T1, S1T2, S1T3; 
    double S2T1, S2T2, S2T3;
    double S3T1, S3T2, S3T3;
    double S4T1, S4T2, S4T3;
    double S5T1, S5T2, S5T3;

    double Student1_Average, Student2_Average, Student3_Average, Student4_Average, Student5_Average;
    
    double Test1_Average, Test2_Average, Test3_Average;
    
    double Test1_Variance, Test2_Variance, Test3_Variance;   
    
    
    cout << "Enter your student #1 Test #1 score";
    cin >> S1T1;
    cout << "Enter your student #1 Test #2 score";
    cin >> S1T2;
    cout << "Enter your student #1 Test #3 score";
    cin >> S1T3;
    cout << "Enter your student #2 Test #1 score";
    cin >> S2T1;
    cout << "Enter your student #2 Test #2 score";
    cin >> S2T2;
    cout << "Enter your student #2 Test #3 score";
    cin >> S2T3;
    cout << "Enter your student #3 Test #1 score";
    cin >> S3T1;
    cout << "Enter your student #3 Test #2 score";
    cin >> S3T2;
    cout << "Enter your student #3 Test #3 score";
    cin >> S3T3;
    cout << "Enter your student #4 Test #1 score";
    cin >> S4T1;
    cout << "Enter your student #4 Test #2 score";
    cin >> S4T2;
    cout << "Enter your student #4 Test #3 score";
    cin >> S4T3;
    cout << "Enter your student #5 Test #1 score";
    cin >> S5T1;
    cout << "Enter your student #5 Test #2 score";
    cin >> S5T2;
    cout << "Enter your student #5 Test #3 score";
    cin >> S5T3;

    Student1_Average = (S1T1 + S1T2 + S1T3)/3;
    Student2_Average = (S2T1 + S2T2 + S2T3)/3;
    Student3_Average = (S3T1 + S3T2 + S3T3)/3;
    Student4_Average = (S4T1 + S4T2 + S4T3)/3;
    Student5_Average = (S5T1 + S5T2 + S5T3)/3;

    Test1_Average = (S1T1 + S2T1 + S3T1 + S4T1 + S5T1)/5;
    Test2_Average = (S1T2 + S2T2 + S3T2 + S4T2 + S5T2)/5;
    Test3_Average = (S1T3 + S2T3 + S3T3 + S4T3 + S5T3)/5;
    
    Test1_Variance = (
        pow(S1T1-Test1_Average,2)+
        pow(S2T1-Test1_Average,2)+
        pow(S3T1-Test1_Average,2)+
        pow(S4T1-Test1_Average,2)+
        pow(S5T1-Test1_Average,2)
        )/5;
    Test2_Variance = (
        pow(S1T2-Test2_Average,2)+
        pow(S2T2-Test2_Average,2)+
        pow(S3T2-Test2_Average,2)+
        pow(S4T2-Test2_Average,2)+
        pow(S5T2-Test2_Average,2)
        )/5;
    Test3_Variance = (
        pow(S1T3-Test3_Average,2)+
        pow(S2T3-Test3_Average,2)+
        pow(S3T3-Test3_Average,2)+
        pow(S4T3-Test3_Average,2)+
        pow(S5T3-Test3_Average,2)
        )/5;


    cout << "==============================================================================\n\n";
    cout << setprecision(2) << fixed;
    
    cout << "Student #" << setw(10) << "Test #1" << setw(10) << "Test #2" << setw(10) << "Test #3" 
    << setw(10) << "Average" << endl;
    
    cout << setw(5) << "1" << setw(13) << S1T1 << setw(10) << S1T2 << setw(10) << S1T3 << setw(10) 
    << Student1_Average <<endl;
    cout << setw(5) << "2" << setw(13) << S2T1 << setw(10) << S2T2 << setw(10) << S2T3 << setw(10) 
    << Student2_Average <<endl;
    cout << setw(5) << "3" << setw(13) << S3T1 << setw(10) << S3T2 << setw(10) << S3T3 << setw(10) 
    << Student3_Average <<endl;
    cout << setw(5) << "4" << setw(13) << S4T1 << setw(10) << S4T2 << setw(10) << S4T3 << setw(10) 
    << Student4_Average <<endl;
    cout << setw(5) << "5" << setw(13) << S5T1 << setw(10) << S5T2 << setw(10) << S5T3 << setw(10) 
    << Student5_Average << "\n\n";

    cout << "==============================================================================\n\n";

    cout << "Average:" << setw(10) << Test1_Average << setw(10) << Test2_Average << setw(10) << Test3_Average << endl;
    cout << "Variance:" << setw(10) << Test1_Variance << setw(10) << Test2_Variance << setw(10) << Test3_Variance << "\n\n";

    cout << "==============================================================================";



    return 5;

} 