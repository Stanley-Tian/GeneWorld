#include "stdafx.h"

//#include "common_head.h"
#include "VirusBase.h"
#include "WorldBase.h"
#include <iostream>

using namespace std;
using namespace cv;
int _tmain(int argc, _TCHAR* argv[])
{
	WorldBase ttt;
	ttt.CreateWorld();
	ttt.UpdateWorld();
	VirusBase mmm;

	while (true)
	{
		char key = waitKey(1);
		if (key != -1)
		{
			ttt.ManualControl(key,mmm,ttt);
		}
		ttt.UpdateWorld();
		ttt.DrawItem(mmm);
		imshow("world2",ttt.world_canvas);
	}
	
	return 0;
}