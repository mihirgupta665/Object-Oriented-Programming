//Files is a collection of data accordig to pattern in the storage.
// fstreambase is the class in cpp for file input output. 
// from fstreambase two more classes are derived named: 1. ofstream, 2. ifstream
// makes a stream with object name which acts a pipe for data transmission and need to be clossed.
// file can be taken accessed using constructor of class or open() member function.
//ifstream in(with respect to program) read from file to program. like cin takes the input this takes the input from file
//ofstream out(with respect to program) write from the program to the file. like cout displays the output to screen similarly this displays the output in the file.
//Wap in same program read and write from/to same file.
//eof character at the efof[End of file] For Ex: in.eof [this reads from the file tillthe end of file is not reached.]

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream out;   // pipe created between file and program named as "out".
    out.open("sample.txt");  // open member function opens the file.
    string sto1="Mihir is a very nice person.";
    string sto2="Mihir is a very smart person.";
    string sto3="Mihir is a very mature person.\n";
    out<<sto1<<endl;        // adding in the file throug object out and giving it a new line.
    out<<sto2<<endl;
    out<<sto3;
    out.close();  // close function do not need any argument it closes the object. Pipe just gets closed.
    ifstream in("sample.txt");  //constructor opens the file  [in with respect to main program as data comes to main program].
    string sti;
    while(!in.eof()){   // check whether the end of file is not reached .
        getline(in,sti);
        cout<<sti<<endl;
    }
    in.close();
    return 0;
}
