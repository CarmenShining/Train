#pragma once
#include "RetInfo.h"
using namespace  System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Data::Common;
using namespace System::Data::OleDb;
using namespace System::Collections;
using namespace System::Runtime::InteropServices;



ref class AcqPos
{
public:
	System::Void Runimm(String ^pronum,bool isRealTime,RetInfo^ ret)
	{			   
		//��ȡ��ʻ����
		String^selectsql;
		selectsql = "SELECT ��ʻ���� FROM trainTable WHERE �������='" + pronum  + "' AND �������='" + ret->new_ordin + "';";
		restable = ExecuteQuery1(selectsql);
		String^nowdir = restable->Rows[0]->ItemArray[0]->ToString()->Trim();		//��ʻ����
		

		//��ʵʱ����
		if (!isRealTime) {
			selectsql = "SELECT ��ʻ����,�ٶ�,���ٶ�,����,��ѹ,cast(λ�� as decimal(9,2)),cast(ʱ�� as datetime) FROM trainTable WHERE �������='" +
			pronum +  "' AND �������='" + ret->new_ordin + "';";
			restable = ExecuteQuery1(selectsql);

			ret->velocity = float::Parse(restable->Rows[0]->ItemArray[1]->ToString()->Trim());
			ret->accelerate = float::Parse(restable->Rows[0]->ItemArray[2]->ToString()->Trim());
			ret->current = float::Parse(restable->Rows[0]->ItemArray[3]->ToString()->Trim());		 //����
			ret->voltage = float::Parse(restable->Rows[0]->ItemArray[4]->ToString()->Trim());
			ret->pre_pos = ret->new_pos;
			ret->new_pos = float::Parse(restable->Rows[0]->ItemArray[5]->ToString()->Trim());
			ret->new_ordin += 1; 
		}
		else   //ʵʱ����
		{
			selectsql = "SELECT ��ʻ����,�ٶ�,���ٶ�,����,��ѹ,cast(λ�� as decimal(9,2)),cast(ʱ�� as datetime) "+
				"FROM [trainTable] WHERE[�������] = (SELECT MAX([�������]) FROM [trainTable] WHERE[�������] = '"+pronum+"';";
			restable = ExecuteQuery1(selectsql);
			ret->velocity = float::Parse(restable->Rows[0]->ItemArray[1]->ToString()->Trim());
			ret->accelerate = float::Parse(restable->Rows[0]->ItemArray[2]->ToString()->Trim());
			ret->current = float::Parse(restable->Rows[0]->ItemArray[3]->ToString()->Trim());		 //����
			ret->voltage = float::Parse(restable->Rows[0]->ItemArray[4]->ToString()->Trim());
			ret->pre_pos = ret->new_pos;
			ret->new_pos = float::Parse(restable->Rows[0]->ItemArray[5]->ToString()->Trim());
			ret->new_ordin = 1;
		}
	}

	//�Զ����ѯ���ݿ⺯��
	//�г����ݿ�
	System::Data::DataTable^ ExecuteQuery(String ^sqlStr)
	{
		SqlConnection^con = gcnew SqlConnection();
		//con->ConnectionString = "Data Source=DESKTOP-5TU40C0;Initial Catalog=�г����ݿ�;Integrated Security=True";
		con->ConnectionString = "Data Source=localhost;Initial Catalog=�г����ݿ�;Integrated Security=True";
		SqlDataAdapter^da = gcnew SqlDataAdapter(sqlStr, con);
		con->Open();
		DataTable^result_dt = gcnew DataTable();
		da->Fill(result_dt);
		con->Close();
		return result_dt;
	}
	//RunDB2���ݿ�
	System::Data::DataTable^ ExecuteQuery1(String ^sqlStr)
	{
		SqlConnection^con = gcnew SqlConnection();
		//con->ConnectionString = "Data Source=DESKTOP-5TU40C0;Initial Catalog=�г����ݿ�;Integrated Security=True";
		con->ConnectionString = "Data Source=localhost;Initial Catalog=RunDB2;Integrated Security=True";
		SqlDataAdapter^da = gcnew SqlDataAdapter(sqlStr, con);
		con->Open();
		DataTable^result_dt = gcnew DataTable();
		da->Fill(result_dt);
		con->Close();
		return result_dt;
	}

	private:
		static DataTable  ^restable=gcnew DataTable();
};


