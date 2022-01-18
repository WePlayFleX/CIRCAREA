//#include <iostream>			
//
//using namespace std;
//
//int main()
//{	
//	float rad;						
//	const float PI = 3.14159F;		
//	cout << "Enter the radius of the circle: ";
//	cin >> rad;
//	float area = PI * rad * rad;
//	cout << "The area of the circle is " << area << endl;
//
//	system("pause");
//	return 0;
//}

#include <iostream>			

using namespace std;

float circarea(float radius);

int main()
{
	double rad;
	cout << "Enter the radius of the circle: ";
	cin >> rad;
	cout << "The area of the circle is " << circarea(rad) << endl;

	system("pause");
	return 0;
}

float circarea(float r)
{
	const float PI = 3.14159F;

	return r * r * PI;
}