#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "C:\Users\user\Documents\Visual Studio 2015\Projects\progaOOP\progaOOP\Animal.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\progaOOP\progaOOP\Bird.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\progaOOP\progaOOP\Fish.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\progaOOP\progaOOP\Container.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\progaOOP\progaOOP\Element.cpp"
#include "C:\Users\user\Documents\Visual Studio 2015\Projects\progaOOP\progaOOP\Head.cpp"
namespace UnitTestOOP
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethodAddElement)
		{
			// TODO: Разместите здесь код своего теста
			Element* newElement = new Element;
			Head* head = new Head();
			Assert::IsTrue(newElement == (head->addElement(newElement)), (const wchar_t*)"bad test");
		}
		
		TEST_METHOD(TestMethodDeleteContainer)
		{
			// TODO: Разместите здесь код своего теста
			Element* newElement = new Element;
			Head* head = new Head();
			head->addElement(newElement);
			Assert::IsTrue(0 == head->Clear(), (const wchar_t*)"bad test");
		}
		
		TEST_METHOD(TestMethodEqu)
		{
			// TODO: Разместите здесь код своего теста
			Head* head = new Head();
			Element* f = new Element;
			f->setSizeName(14);
			Element* s = new Element;
			s->setSizeName(15);
			Assert::IsTrue(head->equ(f, s) == -1, (const wchar_t*)"bad test");
		}
		TEST_METHOD(TestMethodInputAnimal)
		{
			// TODO: Разместите здесь код своего теста
			Container* a=new Animal();

			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\inputAnimal.txt");
			if (inputFile.is_open())

				Assert::IsTrue(0 == a->InData( inputFile), (const wchar_t*)"bad test");
			else Assert::Fail();
		}

		TEST_METHOD(TestMethodInputFish)
		{
			// TODO: Разместите здесь код своего теста
			Container* a=new Fish();

			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\inputAnimal.txt");
			if (inputFile.is_open())

				Assert::IsTrue(0 == a->InData(inputFile), (const wchar_t*)"bad test");
			else Assert::Fail();
		}
		
		TEST_METHOD(TestMethodInputBird)
		{
			// TODO: Разместите здесь код своего теста
			Container* a=new Bird();

			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\inputAnimal.txt");
			if (inputFile.is_open())

				Assert::IsTrue(0 == a->InData(inputFile), (const wchar_t*)"bad test");
			else Assert::Fail();
		}
		
		TEST_METHOD(TestMethodInputElement)
		{
			// TODO: Разместите здесь код своего теста
			Container* e;
			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\input.txt");
			if (inputFile.is_open())

				Assert::IsTrue(false != e->In(inputFile), (const wchar_t*)"bad test");
			else Assert::Fail();
		}

		TEST_METHOD(TestMethodInputList)
		{
			// TODO: Разместите здесь код своего теста
			Head* e = new Head();
			
			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\input.txt");
			if (inputFile.is_open())

				Assert::IsTrue(3 == e->input(inputFile), (const wchar_t*)"bad test");
			else Assert::Fail();
		}
		
		TEST_METHOD(TestMethodNameLenght)
		{
			// TODO: Разместите здесь код своего теста
			Element* e = new Element();
			Container* c = new Bird();
			e->setContainer(c);
			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\input.txt");
		
			e->setContainer(e->getContainer()->In(inputFile));
			Assert::IsTrue(5 == (e->getContainer()->nameSize()), (const wchar_t*)"bad test");
		}

		TEST_METHOD(TestMethodOutputAnimal)
		{
			Container* a=new Animal();

			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\inputAnimal.txt");
			a->InData( inputFile);
			std::ofstream outputFile;
			outputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\output.txt");


			Assert::IsTrue(0 == a->Out(outputFile), (const wchar_t*)"bad test");
		}
		
		TEST_METHOD(TestMethodOutputFish)
		{
			Container* a = new Fish();

			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\inputFish.txt");
			a->InData(inputFile);
			std::ofstream outputFile;
			outputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\output.txt");


			Assert::IsTrue(0 == a->Out(outputFile), (const wchar_t*)"bad test");
		}

		TEST_METHOD(TestMethodOutputBird)
		{
			Container* a = new Bird();

			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\inputBird.txt");
			a->InData(inputFile);
			std::ofstream outputFile;
			outputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\output.txt");


			Assert::IsTrue(0 == a->Out(outputFile), (const wchar_t*)"bad test");
		}
		
		TEST_METHOD(TestMethodOutputElement)
		{
			Container* e=nullptr; 
			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\input.txt");
			e=e->In(inputFile);
			std::ofstream outputFile;
			outputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\output.txt");


			Assert::IsTrue(0 == e->Out(outputFile), (const wchar_t*)"bad test");
		}
		
		TEST_METHOD(TestMethodOutputList)
		{
			Head* e = new Head();
			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\input.txt");
			e->input(inputFile);
			std::ofstream outputFile;
			outputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\output.txt");


			Assert::IsTrue(3 ==e->output(outputFile), (const wchar_t*)"bad test");
		}
	
		TEST_METHOD(TestMethodIgnoreOutput)
		{
			Head* e = new Head();
			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\input.txt");
			e->input(inputFile);
			std::ofstream outputFile;
			outputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\output.txt");


			Assert::IsTrue(1 ==e->outputOne(outputFile,'a'), (const wchar_t*)"bad test");
		}
		
		TEST_METHOD(TestMethodSort)
		{
			Head* e = new Head();
			std::ifstream inputFile;
			inputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\input.txt");
			e->input(inputFile);
			inputFile.close();
		
			std::ofstream outputFile;
			outputFile.open("C:\\Users\\user\\Documents\\Visual Studio 2015\\Projects\\progaOOP\\UnitTestOOP\\output.txt");
			e->output(outputFile);
			outputFile.close();
			int* expected = new int[3];
			expected[0] = 1;
			expected[1] = 0;
			expected[2] = 0;
			auto actual = e->sort(e);
			for (int i = 0; i < 3; i++)
				Assert::IsTrue(expected[i] == actual[i]);
		}
		
	};
}