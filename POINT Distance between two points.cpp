#include <iostream>
#include <math.h>
#include <vector>
#include <iomanip>
#include <fstream>
using namespace std;
 
class Point 
{
    private:
        double x, y;
    public:
        Point(); // default constructor 
        Point(double x, double y); // another constructor
        Point(const Point& p); // copy constructor
        double getX() const;   // get X value
        double getY() const;   // get Y value
        double dist(const Point& p); // get the distance with another point
};
 
Point::Point()
{
	x=0;
	y=0;
} 
 
Point::Point(double _x, double _y) 
{
    x = _x;
    y = _y;
}
 
Point::Point(const Point& p) 
{
    x = p.x;
    y = p.y;
}
 
double Point::getX() const 
{
    return x;
}
 
double Point::getY() const 
{
    return y;
}
 
double dist(pair<double, double>a, pair<double, double>b) 
{
	double result = sqrt((a.first - b.first)* (a.first - b.first) + (a.second - b.second)* (a.second - b.second));
}

int main()
{   
	freopen("points.inp","r",stdin);
	freopen("points.out","w",stdout);
	int n; 
	cin >> n;
	std::vector<std:: pair<double, double> > toa_do;
	for (int i=0; i<n; i++) 
	{
		double dau_tien, thu_hai;
		cin >> dau_tien >> thu_hai;
		toa_do.push_back(make_pair(dau_tien, thu_hai));	
	}
	for (int i=0; i<toa_do.size(); i++)
	{
		for (int j=0; j<toa_do.size(); j++)
		{
			if (j!=toa_do.size()-1)
				cout << fixed << setprecision(2) << dist(toa_do[i], toa_do[j]) << " ";
			else 
				cout << fixed << setprecision(2) << dist(toa_do[i], toa_do[j]);
		}
		cout << endl;
	}
}
