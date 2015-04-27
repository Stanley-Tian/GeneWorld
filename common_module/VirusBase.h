#pragma once
#include "common_head.h"

class WorldBase;
using namespace std;
using namespace cv;
struct Gene
{
	vector<int> sequence_1;
	vector<int> sequence_2;
};
class VirusBase
{
public:
	cv::Point m_current_pos;
public:
	VirusBase(void);
	~VirusBase(void);
public:

	void V_Move(int direction,int steps,WorldBase &environment);
	cv::Point Move_Boundary_Check(cv::Point current_pos, WorldBase &environment);
};
