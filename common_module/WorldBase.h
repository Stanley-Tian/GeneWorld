#pragma once
#include "common_head.h"

class VirusBase;
using namespace std;
using namespace cv;
class WorldBase
{
public:
	WorldBase(void);
	~WorldBase(void);

	cv::Rect world;
	Mat world_canvas;
public:
	void ManualControl(char key,VirusBase &smp,WorldBase &environment);
	void UpdateWorld();
	void DrawItem(VirusBase &smp);
	void CreateWorld();

};
