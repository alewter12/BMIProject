
 #include <CppUnitTest.h>
#include "source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(Test) {

	TEST_METHOD(Convert) {
		Logger::WriteMessage("In CvrtInch\n");
		double ans = CvrtInch(5, 6);
		double correct = 66;
		Assert::AreEqual(correct, ans);
	}

	TEST_METHOD(Method1) {
		Logger::WriteMessage("In Step 1\n");
		double ans = Step1(130);
		double correct = 58.5;
		Assert::AreEqual(correct, ans);
	}

	TEST_METHOD(Method2) {
		Logger::WriteMessage("In Step 2\n");
		double ans = Step2(69);
		double correct = 1.725;
		Assert::AreEqual(correct, ans);
	}

	TEST_METHOD(Method3) {
		Logger::WriteMessage("In Step 3\n");
		double ans = Step3(1.5);
		double correct = 2.25;
		Assert::AreEqual(correct, ans);
	}

	TEST_METHOD(Method4) {
		Logger::WriteMessage("In Step 4\n");
		double ans = Step4(58.5, 2.25);
		double correct = 26;
		Assert::AreEqual(correct, ans);
	}
	
	TEST_METHOD(sorting) {
		Logger::WriteMessage("In sortResults\n");
		sortResults(18.5); //on
		sortResults(16); // outside
		sortResults(20);//internal
		sortResults(24.9); //on
		sortResults(24.98);
		sortResults(25); //on
		sortResults(26); //in
		sortResults(29.9);//on
		sortResults(29.98); //external
		sortResults(30);//on
		sortResults(35); //internal
	}
};
