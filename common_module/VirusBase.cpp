#include "VirusBase.h"
#include "WorldBase.h" 
VirusBase::VirusBase(void)
{
	m_current_pos.x = 100;
	m_current_pos.y = 100;
}
VirusBase::~VirusBase(void)
{

}
cv::Point VirusBase::Move_Boundary_Check(cv::Point current_pos, WorldBase &envrionment)
{
	int boundary_left_pos = 0;
	int boundary_right_pos = envrionment.world.width - 1;
	int boundary_top_pos = 0;
	int boundary_bottom_pos = envrionment.world.height - 1;
	if (current_pos.x < boundary_left_pos)
	{
		current_pos.x = boundary_right_pos;
	}
	else if (current_pos.x > boundary_right_pos)
	{
		current_pos.x = boundary_left_pos;
	}

	if (current_pos.y < boundary_top_pos)
	{
		current_pos.y = boundary_bottom_pos;
	}
	else if (current_pos.y > boundary_bottom_pos)
	{
		current_pos.y = boundary_top_pos;
	}
	return current_pos;
}
void VirusBase::V_Move(int direction,int steps,WorldBase &envrionment)
{
	// 不同的数字代表不一样的方向。即direction的值，steps表示一下走几步
	// 1|2|3
	// 8|0|4
	// 7|6|5
	switch (direction)
	{
	case 0:
		{
			m_current_pos.x = m_current_pos.x;
			m_current_pos.y = m_current_pos.y;
		}
		break;
	case 1:
		{
			m_current_pos.x = m_current_pos.x - steps;
			m_current_pos.y = m_current_pos.y - steps;
		}
		break;
	case 2:
		{
			m_current_pos.x = m_current_pos.x;
			m_current_pos.y = m_current_pos.y - steps;
		}
		break;
	case 3:
		{
			m_current_pos.x = m_current_pos.x + steps;
			m_current_pos.y = m_current_pos.y - steps;
		}
		break;
	case 4:
		{
			m_current_pos.x = m_current_pos.x + steps;
			m_current_pos.y = m_current_pos.y;
		}
		break;
	case 5:
		{
			m_current_pos.x = m_current_pos.x + steps;
			m_current_pos.y = m_current_pos.y + steps;
		}
		break;
	case 6:
		{
			m_current_pos.x = m_current_pos.x;
			m_current_pos.y = m_current_pos.y + steps;
		}
		break;
	case 7:
		{
			m_current_pos.x = m_current_pos.x - steps;
			m_current_pos.y = m_current_pos.y + steps;
		}
		break;
	case 8:
		{
			m_current_pos.x = m_current_pos.x - steps;
			m_current_pos.y = m_current_pos.y;
		}
		break;
	default:
		break;
	}
	m_current_pos = Move_Boundary_Check(m_current_pos,envrionment);
}
void VirusBase::Born(Gene parent_a,Gene parent_b)
{

}
int VirusBase::Acquire_Random_Direction()
{

}