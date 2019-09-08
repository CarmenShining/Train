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
		//获取行驶方向
		String^selectsql;
		selectsql = "SELECT 行驶方向 FROM trainTable WHERE 方案编号='" + pronum  + "' AND 数据序号='" + ret->new_ordin + "';";
		restable = ExecuteQuery1(selectsql);
		String^nowdir = restable->Rows[0]->ItemArray[0]->ToString()->Trim();		//行驶方向
		

		//非实时运行
		if (!isRealTime) {
			selectsql = "SELECT 行驶方向,速度,加速度,电流,电压,cast(位置 as decimal(9,2)),cast(时间 as datetime) FROM trainTable WHERE 方案编号='" +
			pronum +  "' AND 数据序号='" + ret->new_ordin + "';";
			restable = ExecuteQuery1(selectsql);

			ret->velocity = float::Parse(restable->Rows[0]->ItemArray[1]->ToString()->Trim());
			ret->accelerate = float::Parse(restable->Rows[0]->ItemArray[2]->ToString()->Trim());
			ret->current = float::Parse(restable->Rows[0]->ItemArray[3]->ToString()->Trim());		 //电流
			ret->voltage = float::Parse(restable->Rows[0]->ItemArray[4]->ToString()->Trim());
			ret->pre_pos = ret->new_pos;
			ret->new_pos = float::Parse(restable->Rows[0]->ItemArray[5]->ToString()->Trim());
			ret->new_ordin += 1; 
		}
		else   //实时运行
		{
			selectsql = "SELECT 行驶方向,速度,加速度,电流,电压,cast(位置 as decimal(9,2)),cast(时间 as datetime) "+
				"FROM [trainTable] WHERE[数据序号] = (SELECT MAX([数据序号]) FROM [trainTable] WHERE[方案编号] = '"+pronum+"';";
			restable = ExecuteQuery1(selectsql);
			ret->velocity = float::Parse(restable->Rows[0]->ItemArray[1]->ToString()->Trim());
			ret->accelerate = float::Parse(restable->Rows[0]->ItemArray[2]->ToString()->Trim());
			ret->current = float::Parse(restable->Rows[0]->ItemArray[3]->ToString()->Trim());		 //电流
			ret->voltage = float::Parse(restable->Rows[0]->ItemArray[4]->ToString()->Trim());
			ret->pre_pos = ret->new_pos;
			ret->new_pos = float::Parse(restable->Rows[0]->ItemArray[5]->ToString()->Trim());
			ret->new_ordin = 1;
		}
	}

	//自定义查询数据库函数
	//列车数据库
	System::Data::DataTable^ ExecuteQuery(String ^sqlStr)
	{
		SqlConnection^con = gcnew SqlConnection();
		//con->ConnectionString = "Data Source=DESKTOP-5TU40C0;Initial Catalog=列车数据库;Integrated Security=True";
		con->ConnectionString = "Data Source=localhost;Initial Catalog=列车数据库;Integrated Security=True";
		SqlDataAdapter^da = gcnew SqlDataAdapter(sqlStr, con);
		con->Open();
		DataTable^result_dt = gcnew DataTable();
		da->Fill(result_dt);
		con->Close();
		return result_dt;
	}
	//RunDB2数据库
	System::Data::DataTable^ ExecuteQuery1(String ^sqlStr)
	{
		SqlConnection^con = gcnew SqlConnection();
		//con->ConnectionString = "Data Source=DESKTOP-5TU40C0;Initial Catalog=列车数据库;Integrated Security=True";
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


