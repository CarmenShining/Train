#pragma once


ref class RetInfo
{
public:
	float velocity;		// 速度
	float accelerate;	//加速度
	float current;		//电流
	float voltage;		//电压
	float pre_pos;		//上一次的位置
	float new_pos;		//现在的位置
	int new_ordin;		//序号
	RetInfo() :new_ordin(1) {}
	float v()
	{
		return System::Math::Abs(pre_pos - new_pos)/1000;
	}
};