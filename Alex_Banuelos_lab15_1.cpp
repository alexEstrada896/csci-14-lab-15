/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
#include <fstream>
int main()
{
    ifstream inputFile; //file stream object
    
    string name, highestName, secHighestName; //variables for highest and sec highest results
    int grade, highest = 0, secHighest = 0;
    
    
    inputFile.open("grades-1.txt"); //opens files for names and grades
    
    //open file with grades and sames 
    
    while(inputFile >> name >> grade)//reads names and grades from files 
    {
        
        if(grade > highest)//finds highest grade
        {
            highest = grade;
            highestName = name;
        }
        
        if (grade < highest && grade >secHighest)//finds second highest grades
        {
            secHighest = grade;
            secHighestName = name;
        }
        
        
        cout<<highestName<<" "<<highest <<endl; 
        cout<<secHighestName<<" "<<secHighest<<endl;
    }
    
    
    ofstream outputFile; //file stream
    outputFile.open("scoreReport.txt");//creates and opens file for highest names and grades
    
    
   outputFile <<"Highest score: "<<highestName <<" "<< highest << endl; //outputs highest and sec highest to new file
    outputFile <<"Second highest score: "<<secHighestName <<" "<< secHighest<<endl;
    
    outputFile.close(); //closes new file made
    
   
  //close file with grades and names 
  
  inputFile.close();
  

    return 0;
}