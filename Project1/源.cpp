#include<iostream>
#include<limits.h>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
typedef long long ll;
//double intergral(double a,double b,double(*f)(double x))
//{
//	int n = 1000, i;
//	double h, x, s = 0.0;
//	h = (b / a) / n;
//	for (i = 1; i <= n; i++)
//	{
//		x = a + (i - 1) * h;
//		s += (f(x) + f(x + h)) * h / 2;
//	}
//	return s;
//}
//double f1(double x)
//{
//	return 1 + x;
//}
//double f2(double x)
//{
//	return exp(-x * x / 2);
//}
//double f3(double x)
//{
//	return x * x * x;
//}
//int main()
//{
//	double a, b;
//	cin >> a >> b;
//	cout << (intergral(a, b, f1) + intergral(a, b, f2) + intergral(a, b, f3));
//	return 0;
//}
//char s[4] = { '+','-','*','/' };
//double add(double a, double b)
//{
//	return a + b;
//}
//double sub(double a, double b)
//{
//	return a - b;
//}
//double mul(double a, double b)
//{
//	return a * b;
//}
//double div(double a, double b)
//{
//	if (b == 0)return 1000000000000007;
//	return a / b;
//}
//double(*p[4])(double, double) = { add,sub,mul,div };
//void cal(double a, double b, double c, double d) {
//	int flag = 0;
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			for (int k = 0; k < 4; k++) {
//				if (p[k](p[j](p[i](a, b), c), d) == 24) {      	//((a#b)#c)#d
//					flag = 1;
//					cout << "((" << a << s[i] << b << ")" << s[j] << c << ")" << s[k] << d << ")\n";
//				}
//				if (p[k](p[j](a, p[i](b, c)), d) == 24) {	//(a#(b#c))#d
//					flag = 1;
//					cout << "(" << a << s[j] << "(" << b << s[i] << c << "))" << s[k] << d << endl;
//				}
//				if (p[k](a, p[j](p[i](b, c), d)) == 24) {	//a#((b#c)#d)
//					flag = 1;
//					cout << a << s[k] << "((" << b << s[i] << c << ")" << s[j] << d << ")\n";
//				}
//				if (p[k](a, p[j](b, p[i](c, d))) == 24) {	//a#(b#(c#d))
//					flag = 1;
//					cout << a << s[k] << "(" << b << s[j] << "(" << c << s[i] << d << "))\n";
//				}
//				if (p[k](p[i](a, b), p[j](c, d)) == 24) {	//(a#b)#(c#d)
//					flag = 1;
//					cout << "(" << a << s[i] << b << ")" << s[k] << "(" << c << s[j] << d << ")\n";
//				}
//			}
//		}
//	}
//	if (flag == 0) {
//		cout << "нч╫Б" << endl;
//	}
//}
//int main()
//{
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	cal(a, b, c, d);
//	return 0;
//}
int a[100005] = { false };
int  main()
{
	for (int i = 2; i < 100005; i++)
	{
		if (a[i] = false)
		{
			for (int j = i * i; j < 1000005; j += i)
				a[j] = true;
		}
	}
	for (int i = 0; i < 100; i++)
	{
	}
}
