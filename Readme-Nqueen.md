# Nqueen

author @ Varun Jani

Description: This program reads the chessboard size and queen locations from the input file
and prints a chessboard using the location of the queens. Then the other function/s check the
safety of the queen in that location and check if the nqueen problem is solved or not.


This program can only be run on a GNU compiler (Terminal) on Linux or it can be run on a GNU supporting IDE (Clion) on Windows

The command on terminal to compile the file (nqueen.cxx) it is as follows:

g++ -ansi -pedantic -Wall nqueen.cxx -o nqueen

The program reads the data from the files (Uploaded on this repository) as follows:

./nqueen chessboard-1.txt

./nqueen chessboard-2.txt

./nqueen chessboard-3.txt and so on

Keep the data in the file as kept in the .txt files for the best results if you decide to create a new file

bool Check_Nqueen(int num_rows, int num_cols, int num_queens)
bool Check_Cell_Safety(bool **board, int num_rows, int num_cols)
void Destroy_Board(bool **board, int num_cols)
