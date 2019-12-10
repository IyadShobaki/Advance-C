//#include <iostream>
//using namespace std;
//
//template<class T, int N>
//
//class Example {
//	T a[N];
//public:
//	void setA(T pA[N]) {
//		for (int i = 0; i < N; i++)
//			a[i] = pA[i];
//	}
//	
//	T getA(int position) {
//		if (position < N)
//			return a[position];
//		else
//			return 0;
//	}
//	
//};
//
//
//int main() {
//
//	Example<int, 2> egint;
//	int A[2];
//	A[0] = 1;
//	A[1] = 2;
//	egint.setA(A);
//	
//	cout << "The value at position 0 is " << egint.getA(0) << endl;
//	cout << "The value at position 1 is " << egint.getA(1) << endl;
//
//
//	Example<float, 2> egfloat;
//	float B[2];
//	B[0] = 11.111111;
//	B[1] = 222.222222;
//	egfloat.setA(B);
//
//	cout << "The value at position 0 is " << egfloat.getA(0) << endl;
//	cout << "The value at position 1 is " << egfloat.getA(1) << endl;
//
//
//
//	Example<double, 2> egdouble;
//	double C[2];
//	C[0] = 11.111111;
//	C[1] = 222.222222;
//	egdouble.setA(C);
//
//	cout << "The value at position 0 is " << egdouble.getA(0) << endl;
//	cout << "The value at position 1 is " << egdouble.getA(1) << endl;
//	system("pause");
//	return 0;
//}