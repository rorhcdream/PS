#include <iostream>
#include <string>
#include <vector>
#include <cstring>

#define EMPTY '.'
#define WALL '*'
#define DOCUMENT '$'

using namespace std;

int t, h, w;
char map[100][100];
int moved[100][100];
int document;
vector<int> keys;

void openDoors(int key)
{
	for(int i = 0; i < h; i++)
	{
		for(int j = 0; j < w; j++)
		{
			if(map[i][j] == key + 'A')
				map[i][j] = EMPTY;
		}
	}
}

void clearMoved()
{
	memset(moved, 0, sizeof(moved));
}

bool isKey(int c)
{
	return (c >= 'a' && c <= 'z');
}

bool isDoor(int c)
{
	return (c >= 'A' && c <= 'Z');
}

bool move(int x, int y)
{
	if(x < 0 || x >= h || y < 0 || y >= w) return false;
	if(moved[x][y])	return false;
	if(isDoor(map[x][y])) return false;
	if(map[x][y] == WALL) return false;
	
	bool gotnewkey = false;
	if(isKey(map[x][y]))
	{
		openDoors(map[x][y]-'a');
		map[x][y] = EMPTY;
		gotnewkey = true;
	}
	else if(map[x][y] == DOCUMENT)
	{
		document++;
	}
	
	moved[x][y] = 1;
	gotnewkey |= move(x-1, y);
	gotnewkey |= move(x+1, y);
	gotnewkey |= move(x, y+1);
	gotnewkey |= move(x, y-1);
	return gotnewkey;
}

int main(void)
{
	cin >> t;
	for(int tc = 0; tc < t; tc++)
	{
		memset(map, 0, sizeof(map));
		memset(moved, 0, sizeof(moved));
		keys.clear();
		
		//input
		cin >> h >> w;
		for(int i = 0; i < h; i++)
		{
			cin >> map[i];
		}
		
		string s;
		cin >> s;
		if(s[0] != '0')
			for(char c : s)
				keys.push_back(c - 'a');
		
		//solve
		for(int k : keys)
			openDoors(k);
		
		bool gotnewkey;
		do
		{
			gotnewkey = false;
			document = 0;
			clearMoved();
			
			for(int i = 0; i < w; i++)
			{
				gotnewkey |= move(0, i);
				gotnewkey |= move(h-1, i);
			}
			for(int i = 0; i < h; i++)
			{
				gotnewkey |= move(i, 0);
				gotnewkey |= move(i, w-1);
			}
		}while(gotnewkey == true);

		cout << document << endl;
	}
}