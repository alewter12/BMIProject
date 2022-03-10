
#include <iostream>
using namespace std;

static double CvrtInch(double feet, double inch) {
	feet = feet * 12;
	double total = feet + inch;
	return total;
}

static double Step1(double weightP) {
	double ans = weightP * 0.45;
	return ans;
}

static double Step2(double heightI) {
	double ans = heightI * 0.025;
	return ans;
}

static double Step3(double heightM) {
	double ans = heightM * heightM;
	return ans;
}

static double Step4(double weightKG, double step3) {
	double ans = weightKG / step3;
	return ans;
}

static void sortResults(double BMI) {
	cout << "BMI: " << BMI << endl;
	if (BMI < 18.5) {
		cout << "Underweight" << endl;
	}
	else if (BMI >= 18.5 && BMI <= 24.9) {
		cout << "Normal Weight" << endl;
	}
	else if (BMI >= 25 && BMI <= 29.9) {
		cout << "Overweight" << endl;
	}
	else if (BMI >= 30) {
		cout << "Obese" << endl;

	}
	else {
		cout << "Error: BMI not sorted correctly" << endl;
	}
}

  int main() {
	cout << "Enter the feet part of  height"<<endl;
	double feet;
	cin >> feet;
	cout << "Enter the inches part of the height" << endl;
	double inch;
	cin >> inch;
	cout << "Enter the weight in pounds" << endl;
	double weight;
	cin >> weight;
	double totalIn = CvrtInch(feet, inch);
	double weightkg = Step1(weight);
	double heightM = Step2(totalIn);
	double heightsq = Step3(heightM);
	double BMI = Step4(weightkg, heightsq);
	sortResults(BMI);
	return 0;
}