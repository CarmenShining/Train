#pragma once


ref class RetInfo
{
public:
	float velocity;		// �ٶ�
	float accelerate;	//���ٶ�
	float current;		//����
	float voltage;		//��ѹ
	float pre_pos;		//��һ�ε�λ��
	float new_pos;		//���ڵ�λ��
	int new_ordin;		//���
	RetInfo() :new_ordin(1) {}
	float v()
	{
		return System::Math::Abs(pre_pos - new_pos)/1000;
	}
};