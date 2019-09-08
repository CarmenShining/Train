#pragma once
#include "OpenGL.h"
#include "RetInfo.h"
#include "AcqPos.h"
namespace moxingdingyi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace OpenGLForm;//增加

	/// <summary>
	/// SimulateRoadForm 摘要
	/// </summary>
	public ref class SimulateRoadForm : public System::Windows::Forms::Form
	{
	public:
		SimulateRoadForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
			
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~SimulateRoadForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;


	private: System::Windows::Forms::Panel^  panel4;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::TextBox^  velocity;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel2;





	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::MenuStrip^  menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^  选择需要显示的方案ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripComboBox^  ProjectNum_Chosen;

	private: System::Windows::Forms::GroupBox^  groupBox1;



	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  Voltage;
	private: System::Windows::Forms::TextBox^  Current;



	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox8;



	private: System::Windows::Forms::Label^  label10;


	private: System::Windows::Forms::ToolStripMenuItem^  toolStripComboBox2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripComboBox^  RunVelocity;



	private: System::Windows::Forms::ToolStripMenuItem^  开始运行ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripComboBox^  RunStyle_Chosen;
	private: System::Windows::Forms::TextBox^  Accelerate;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		//System::ComponentModel::Container ^components;
		OpenGLForm::COpenGL ^ OpenGL;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Accelerate = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->velocity = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->选择需要显示的方案ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ProjectNum_Chosen = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->RunStyle_Chosen = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->toolStripComboBox2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->RunVelocity = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->开始运行ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->Voltage = (gcnew System::Windows::Forms::TextBox());
			this->Current = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &SimulateRoadForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 5000;
			this->timer2->Tick += gcnew System::EventHandler(this, &SimulateRoadForm::timer2_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(21, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"模型层：";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Location = System::Drawing::Point(1, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(43, 1151);
			this->panel1->TabIndex = 1;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::DarkGray;
			this->panel10->Location = System::Drawing::Point(28, 459);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(584, 10);
			this->panel10->TabIndex = 11;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->Accelerate);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->textBox8);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Controls->Add(this->velocity);
			this->panel4->Controls->Add(this->textBox4);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Location = System::Drawing::Point(52, 496);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1176, 106);
			this->panel4->TabIndex = 3;
			// 
			// Accelerate
			// 
			this->Accelerate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Accelerate->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->Accelerate->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Accelerate->Font = (gcnew System::Drawing::Font(L"宋体", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Accelerate->Location = System::Drawing::Point(723, 12);
			this->Accelerate->Margin = System::Windows::Forms::Padding(4);
			this->Accelerate->Name = L"Accelerate";
			this->Accelerate->ReadOnly = true;
			this->Accelerate->Size = System::Drawing::Size(128, 24);
			this->Accelerate->TabIndex = 14;
			this->Accelerate->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(648, 16);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(67, 15);
			this->label12->TabIndex = 13;
			this->label12->Text = L"加速度：";
			// 
			// textBox8
			// 
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox8->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBox8->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"宋体", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox8->Location = System::Drawing::Point(95, 66);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(118, 24);
			this->textBox8->TabIndex = 9;
			this->textBox8->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(546, 16);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 15);
			this->label10->TabIndex = 12;
			this->label10->Text = L"km/h";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 68);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 15);
			this->label9->TabIndex = 11;
			this->label9->Text = L"当前位置：";
			// 
			// velocity
			// 
			this->velocity->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->velocity->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->velocity->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->velocity->Font = (gcnew System::Drawing::Font(L"宋体", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->velocity->Location = System::Drawing::Point(410, 12);
			this->velocity->Margin = System::Windows::Forms::Padding(4);
			this->velocity->Name = L"velocity";
			this->velocity->ReadOnly = true;
			this->velocity->Size = System::Drawing::Size(128, 24);
			this->velocity->TabIndex = 10;
			this->velocity->TabStop = false;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"宋体", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox4->Location = System::Drawing::Point(725, 66);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(128, 24);
			this->textBox4->TabIndex = 9;
			this->textBox4->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(618, 68);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 15);
			this->label4->TabIndex = 8;
			this->label4->Text = L"行驶方向：往";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(302, 16);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 15);
			this->label3->TabIndex = 6;
			this->label3->Text = L"行驶速度：";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"宋体", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(410, 66);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(128, 24);
			this->textBox2->TabIndex = 3;
			this->textBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(317, 68);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"下一站：";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(96, 12);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(117, 24);
			this->textBox1->TabIndex = 1;
			this->textBox1->TabStop = false;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(42, 459);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(624, 49);
			this->panel2->TabIndex = 6;
			// 
			// menuStrip2
			// 
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->选择需要显示的方案ToolStripMenuItem,
					this->ProjectNum_Chosen, this->toolStripMenuItem2, this->RunStyle_Chosen, this->toolStripComboBox2, this->toolStripMenuItem1,
					this->RunVelocity, this->开始运行ToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(1271, 29);
			this->menuStrip2->TabIndex = 9;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// 选择需要显示的方案ToolStripMenuItem
			// 
			this->选择需要显示的方案ToolStripMenuItem->Enabled = false;
			this->选择需要显示的方案ToolStripMenuItem->Name = L"选择需要显示的方案ToolStripMenuItem";
			this->选择需要显示的方案ToolStripMenuItem->Size = System::Drawing::Size(128, 25);
			this->选择需要显示的方案ToolStripMenuItem->Text = L"选择需要显示的方案";
			// 
			// ProjectNum_Chosen
			// 
			this->ProjectNum_Chosen->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"F001", L"F002", L"F003", L"F004" });
			this->ProjectNum_Chosen->Name = L"ProjectNum_Chosen";
			this->ProjectNum_Chosen->Size = System::Drawing::Size(121, 25);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Enabled = false;
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(92, 25);
			this->toolStripMenuItem2->Text = L"选择运行方式";
			// 
			// RunStyle_Chosen
			// 
			this->RunStyle_Chosen->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"实时同步运行", L"离线异步运行" });
			this->RunStyle_Chosen->Name = L"RunStyle_Chosen";
			this->RunStyle_Chosen->Size = System::Drawing::Size(121, 25);
			this->RunStyle_Chosen->SelectedIndexChanged += gcnew System::EventHandler(this, &SimulateRoadForm::RunStyle_Chosen_SelectedIndexChanged);
			// 
			// toolStripComboBox2
			// 
			this->toolStripComboBox2->Name = L"toolStripComboBox2";
			this->toolStripComboBox2->Size = System::Drawing::Size(12, 25);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Enabled = false;
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(104, 25);
			this->toolStripMenuItem1->Text = L"选择运行的倍速";
			// 
			// RunVelocity
			// 
			this->RunVelocity->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"原速", L"2倍速", L"5倍速", L"10倍速", L"0.5倍速", L"0.1倍速" });
			this->RunVelocity->Name = L"RunVelocity";
			this->RunVelocity->Size = System::Drawing::Size(121, 25);
			// 
			// 开始运行ToolStripMenuItem
			// 
			this->开始运行ToolStripMenuItem->Name = L"开始运行ToolStripMenuItem";
			this->开始运行ToolStripMenuItem->Size = System::Drawing::Size(68, 25);
			this->开始运行ToolStripMenuItem->Text = L"开始运行";
			this->开始运行ToolStripMenuItem->Click += gcnew System::EventHandler(this, &SimulateRoadForm::开始运行ToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->Voltage);
			this->groupBox1->Controls->Add(this->Current);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Location = System::Drawing::Point(822, 87);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(219, 230);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"信息显示框";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(138, 168);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 15);
			this->label8->TabIndex = 4;
			this->label8->Text = L"60%";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(20, 168);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(82, 15);
			this->label11->TabIndex = 3;
			this->label11->Text = L"当前空载率";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(94, 119);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(99, 24);
			this->textBox7->TabIndex = 1;
			// 
			// Voltage
			// 
			this->Voltage->Location = System::Drawing::Point(93, 73);
			this->Voltage->Name = L"Voltage";
			this->Voltage->Size = System::Drawing::Size(100, 24);
			this->Voltage->TabIndex = 1;
			// 
			// Current
			// 
			this->Current->Location = System::Drawing::Point(93, 29);
			this->Current->Name = L"Current";
			this->Current->Size = System::Drawing::Size(100, 24);
			this->Current->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(21, 122);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 15);
			this->label7->TabIndex = 0;
			this->label7->Text = L"车内人数";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(20, 76);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 15);
			this->label6->TabIndex = 0;
			this->label6->Text = L"车体电压";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 15);
			this->label5->TabIndex = 0;
			this->label5->Text = L"车体电流";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(860, 16);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(47, 15);
			this->label13->TabIndex = 15;
			this->label13->Text = L"km²/h";
			// 
			// SimulateRoadForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1271, 615);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Font = (gcnew System::Drawing::Font(L"宋体", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"SimulateRoadForm";
			this->Text = L"有轨电车运行界面";
			this->panel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private:
			float run_speed;
			bool isRealTime;
			String ^pronum;
			RetInfo ^retInfo = gcnew RetInfo();
			AcqPos ^acquire=gcnew AcqPos();

		 System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e)
		 {

			 UNREFERENCED_PARAMETER(sender);
			 UNREFERENCED_PARAMETER(e);

			 acquire->Runimm(pronum, isRealTime, retInfo);
			 OpenGL->setVelocity(retInfo->v());	//修改速度
			 OpenGL->Render();
			 OpenGL->swapOpenGLBuffers();
			 this->Current->Text = "" + retInfo->current;
			 this->Voltage->Text = "" + retInfo->voltage;
			 this->Accelerate->Text = ""+retInfo->accelerate;
			 this->velocity->Text = "" + retInfo->velocity;
			 this->textBox1->Text = "" + (OpenGL->getModleLayerNum() + 1);
			 this->textBox4->Text = "" + OpenGL->GetTerminusSite();
			 this->textBox2->Text = OpenGL->GetNextSite(-1);

		 }



	private:
		System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {			//红绿灯

			OpenGL->turnLight();
		}
	
private: System::Void 开始运行ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	pronum=this->ProjectNum_Chosen->Text->Trim();	   //方案号
	String ^str1 = this->RunVelocity->Text->Trim();					//运行倍速
	String ^str2 = this->RunStyle_Chosen->Text->Trim();			//运行方式
	if (pronum->IsNullOrEmpty(pronum)||str1->IsNullOrEmpty(str1)||str2->IsNullOrEmpty(str2))
		MessageBox::Show("方案号、运行方式或者运行倍速未选择！");
	else 
	{
		char* str3 = (char*)(void*)Marshal::StringToHGlobalAnsi(pronum);
		OpenGL = gcnew COpenGL(this, 620, 500, 10, 0, str3);
		
		if (str2 == "实时同步运行")
		{
			isRealTime = true;
			this->timer1->Interval = 1000;
			this->timer1->Interval = 1000;
		}
		else if (str2 == "离线异步运行")
		{
			isRealTime = false;
			switch (this->RunVelocity->SelectedIndex)
			{
			case 0:		  //原速
				this->timer1->Interval = 1000;
				this->timer2->Interval = 1000;
				break;
			case 1:		  //2倍速
				this->timer1->Interval = Math::Floor(1000 / 2);
				this->timer2->Interval = Math::Floor(1000 / 2);
				break;
			case 2:		 //5倍速
				this->timer1->Interval = Math::Floor(1000 / 5);
				this->timer2->Interval = Math::Floor(1000 / 5);
				break;
			case 3:		//10倍速
				this->timer1->Interval = Math::Floor(1000 / 10);
				this->timer2->Interval = Math::Floor(1000 / 10);
				break;
			case 4:		 //0.5倍速
				this->timer1->Interval = Math::Floor(1000 *1.5);
				this->timer2->Interval = Math::Floor(1000 *1.5);
				break;
			case 5:		//0.1倍速
				this->timer1->Interval = Math::Floor(1000 * 2);
				this->timer2->Interval = Math::Floor(1000 * 2);
				break;
			default:
				break;
			}

		}
		else
		{
			perror("运行方式出错！");
			exit(0);
		}
		this->timer1->Enabled = true;
		this->timer2->Enabled = true;
		this->开始运行ToolStripMenuItem->Enabled = false;

	}
	
}

private: System::Void RunStyle_Chosen_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->RunStyle_Chosen->Text->Trim() == "实时同步运行") {
		this->RunVelocity->Enabled = false;
		this->RunVelocity->Text = "原速";
	}
	else
		this->RunVelocity->Enabled = true;
}
};
}
