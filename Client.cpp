#include "Head.h"
#include <fstream>
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	/*if (argc != 3)
	{
		cout << "incorrect command line! "
			"Waited: command in_file out_file"
			<< endl;
		exit(1);
	}
	ifstream inputFile(argv[1]);
	ofstream outputFile(argv[2]);*/
	ifstream inputFile("input.txt");
	ofstream outputFile("output.txt");
	cout << "Start" << endl;
	Head* c= new Head();
	//проверка файла на открытие
	if (!inputFile.is_open())
	{
		cout << "File isn't opened\n";
		exit(2);
	}
	c->input(inputFile);
	outputFile << "Filled container. " << endl;
	if (!outputFile.is_open())
	{
		cout << "File isn't opened\n";
		exit(3);
	}
	c->output(outputFile);
	
	outputFile << "Only fish " << endl;
	c->outputOne(outputFile, 'f');
	outputFile << "Only bird " << endl;
	c->outputOne(outputFile, 'b');
	outputFile << "Only animal " << endl;
	c->outputOne(outputFile, 'a');
	Head* cur;
	c->sort(cur);
	delete c;
	c = cur;
	outputFile << "Sorted container. " << endl;
	c->output(outputFile);
	
	c->clear();
	outputFile << "Empty container. " << endl;
	c->output(outputFile);
	cout << "Stop" << endl;
	return 0;
}
