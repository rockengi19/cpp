
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void HanoiTower(int n, char f_rod, char t_rod, char a_rod)
{
	if (n == 1)
	{
		cout << "Move disk 1 from rod " << f_rod << " to rod " << t_rod << endl;
		return;
	}
	HanoiTower(n - 1, f_rod, t_rod, a_rod);
	cout << "Move the disk " << n << " from rod " << f_rod << " to rod " << t_rod << endl;
	HanoiTower(n - 1, a_rod, t_rod, f_rod);
}
int main()
{
	int n;
	cout << "Enter the number of disks" << endl;
	cin >> n;
	HanoiTower(n, 'X', 'Z', 'Y');
	return 0;
}


