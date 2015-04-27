#include "WorldBase.h"
#include "VirusBase.h"

WorldBase::WorldBase(void)
{
	world.x = 0;
	world.y = 0;
	world.width = 200;
	world.height = 200;
}

WorldBase::~WorldBase(void)
{
}

void WorldBase::CreateWorld()
{
	Mat canvas(world.height,world.width,CV_8UC3,Scalar(0,0,0));// 初始化一个全黑的世界,初始大小和颜色(纯黑)
	world_canvas = canvas;
}
void WorldBase::UpdateWorld()
{
	cv::rectangle(world_canvas,world,Scalar(240,150,26),CV_FILLED);// 在画布上绘制世界

}
void WorldBase::ManualControl(char key,VirusBase &smp,WorldBase &environment)
{
	int steps = 1;
	switch (key)
	{
	case 'q':
		{
			smp.V_Move(1,steps,environment);
		}
		break;
	case 'w':
		{
			smp.V_Move(2,steps,environment);
		}
		break;
	case 'e':
		{
			smp.V_Move(3,steps,environment);
		}
		break;
	case 'd':
		{
			smp.V_Move(4,steps,environment);
		}
		break;
	case 'c':
		{
			smp.V_Move(5,steps,environment);
		}
		break;
	case 'x':
		{
			smp.V_Move(6,steps,environment);
		}
		break;
	case 'z':
		{
			smp.V_Move(7,steps,environment);
		}
		break;
	case 'a':
		{
			smp.V_Move(8,steps,environment);
		}
		break;
	case 's':
		{
			smp.V_Move(0,steps,environment);
		}
		break;
	default:
		break;
	}
}

void WorldBase::DrawItem(VirusBase &smp)
{
	circle(world_canvas,smp.m_current_pos,5,Scalar(23,55,180));
}