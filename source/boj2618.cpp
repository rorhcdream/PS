// #include <iostream>
// #include <list>
// #include <cstdlib>
// #include <algorithm>

// using namespace std;

// class Path
// {	
// private:
// 	list<int> path;
// 	int distSum;
	
// public:
// 	Path()
// 	{
// 		distSum = 0;
// 	}
	
// 	void AddPath(int car, int dist)
// 	{
// 		path.push_back(car);
// 		distSum += dist;
// 	}
	
// 	Path& operator=(const Path &p)
// 	{
// 		path = p.getPath();
// 		distSum = p.distSum;
// 	}
	
// 	list<int> getPath() const
// 	{
// 		return path;
// 	}
	
// 	void printPath() const
// 	{
// 		cout << "[PATH] distsum: " << distSum << endl;
		
// 	}
	
// 	int getDistSum() { return distSum; }
// };

// class Point
// {
// public:
// 	int x;
// 	int y;
	
// 	Point() : x(1), y(1) {}
// 	Point(int a, int b) : x(a), y(b) {}

// 	static int dist(Point& p1, Point& p2)
// 	{
// 		return abs(p1.x - p2.x) + abs(p1.y - p2.y);
// 	}
// };





// int main(void)
// {
// 	Path path_arr1_1[1001], path_arr2_1[1001];
// 	Path path_arr1_2[1001], path_arr2_2[1001];
// 	Point accidents[1001];
	
// 	int streetSize, accidentNum;
	
// 	cin >> streetSize >> accidentNum;
	
// 	for(int i = 1; i <= accidentNum; ++i)
// 	{
// 		int x, y;
// 		cin >> x >> y;
// 		accidents[i].x = x;
// 		accidents[i].y = y;
// 	}
	
// 	Point zero;
// 	Point end(streetSize, streetSize);
	
// 	path_arr1_1[1].AddPath(1, Point::dist(zero, accidents[1]));
// 	path_arr2_1[1].AddPath(2, Point::dist(end, accidents[1]));
	
	
// 	for(int step = 2; step <= accidentNum; step++)
// 	{
// 		for(int i = 1; i <= step; i++)
// 		{
// 			if(i <= step - 1)
// 			{
// 				path_arr1_2[i] = path_arr1_1[i];
// 				path_arr1_2[i].AddPath(1, Point::dist(accidents[step], accidents[step-1]));
				
// 				path_arr2_2[i] = path_arr2_1[i];
// 				path_arr2_2[i].AddPath(2, Point::dist(accidents[step], accidents[step-1]));
// 			}
// 			else
// 			{
// 				int minI=9999;
// 				int minD=99999999;
// 				int ii;
								
				
// 				for(ii = 1; ii <= step-1; ii++)
// 				{
// 					Point car1Point = (ii == 1) ? zero : accidents[ii-1];
					
// 					int curDistSum = path_arr2_1[ii].getDistSum();
// 					curDistSum += Point::dist(car1Point, accidents[step]);
// 					if(curDistSum < minD)
// 					{
// 						minI = ii;
// 						minD = curDistSum;
// 					}
// 				}
				
// 				Point car1Point = (minI == 1) ? zero : accidents[minI-1];
// 				path_arr1_2[i] = path_arr2_1[minI];
// 				path_arr1_2[i].AddPath(1, Point::dist(car1Point, accidents[step]));
				
				
// 				minI=9999;
// 				minD=99999999;
				
// 				for(ii = 1; ii <= step-1; ii++)
// 				{
// 					Point car2Point = (ii == 1) ? end : accidents[ii-1];
					
// 					int curDistSum = path_arr1_1[ii].getDistSum();
// 					curDistSum += Point::dist(car2Point, accidents[step]);
// 					if(curDistSum < minD)
// 					{
// 						minI = ii;
// 						minD = curDistSum;
// 					}
// 				}
				
// 				Point car2Point = (minI == 1) ? end : accidents[minI-1];
// 				path_arr2_2[i] = path_arr1_1[minI];
// 				path_arr2_2[i].AddPath(2, Point::dist(car2Point, accidents[step]));
// 			}
// 		}
		
// 		copy(path_arr1_2, path_arr1_2 + 1001, path_arr1_1);
// 		copy(path_arr2_2, path_arr2_2 + 1001, path_arr2_1);
// 	}

	
// 	int minI1 = 9999;
// 	int minD1 = 99999999;
// 	int minI2 = 9999;
// 	int minD2 = 99999999;
	
// 	for(int i = 1; i <= accidentNum; i++)
// 	{
// 		int curDistSum = path_arr1_1[i].getDistSum();
// 		if(curDistSum < minD1)
// 		{
// 			minI1 = i;
// 			minD1 = curDistSum;
// 		}
// 	}
	
// 	for(int i = 1; i <= accidentNum; i++)
// 	{
// 		int curDistSum = path_arr2_1[i].getDistSum();
// 		if(curDistSum < minD2)
// 		{
// 			minI2 = i;
// 			minD2 = curDistSum;
// 		}
// 	}
	
// 	int resultD;
// 	list<int> resultPath;
	
// 	if(minD1 < minD2)
// 	{
// 		resultD = minD1;
// 		resultPath = path_arr1_1[minI1].getPath();
// 	}
// 	else
// 	{
// 		resultD = minD2;
// 		resultPath = path_arr2_1[minI2].getPath();
// 	}
	
// 	cout << resultD << endl;
// 	for(int i = 1; i <= accidentNum; i++)
// 	{
// 		cout << resultPath.front() << endl;
// 		resultPath.pop_front();
// 	}
// }

