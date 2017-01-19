/* 
 * File:   main.cpp
 * Author: Gulzada IISAEVA 131044085
 *
 * Created on October 31, 2015, 7:58 PM
 */



#include "triangle.h"

using namespace std;

int main(int argc, char** argv) {

	Triangle t(3,4,5);
	Triangle a(7,9,15);
	t.output();
	swap_corners(t);
	
	if(isLarger(t,a))
		cout << " triangle 1 is larger" << endl;
	else 
		cout << "triangle 2 is larger" << endl;
        
        //To test
	/*t.input();
	t.output();
	t.angleA();
	t.angleB();
	t.angleC();
	t.calc_perimeter();
	t.calc_area();
	t.rightAngle();*/
    return 0;
}

