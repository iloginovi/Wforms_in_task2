#pragma once
#include <windows.h>
#include <math.h>
int FCol;

namespace Wformsintask2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	double pi = 3.14;
	
	
	int TCol[1];
	int GP[1];
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ColorDialog^ colorDialog2;

	public:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ColorDialog^ colorDialog3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::ColorDialog^ colorDialog1;
		   
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		Brush^ ZLVK = gcnew SolidBrush(Color::Orange);
		Pen^ KNTR;
		int GP = 1;
		int n = 20;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->colorDialog3 = (gcnew System::Windows::Forms::ColorDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox1->Location = System::Drawing::Point(267, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(504, 371);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(53, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(44, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(44, 176);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(180, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(44, 97);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(44, 218);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(180, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"label2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(803, 449);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void paint_circle(int cX, int cY, int radius) {
		Graphics^ Графика = pictureBox1->CreateGraphics();
		Графика->DrawEllipse(Pens::Black, cX-radius, cY-radius, radius * 2, radius * 2);
		Графика->DrawLine(Pens::Blue, 0, 0, cX, cY);
		
	}
	private: void paint_triangle(int cX, int cY) {
		array<Point>^ p;
		p = gcnew array<Point>(3);
		Graphics^ Графика = pictureBox1->CreateGraphics();
		double Med = (sqrt(3) / 2) * n;
		p[0] = Drawing::Point(int(cX-n/2),int(cY-Med/3));
		p[1] = Drawing::Point(cX, int(cY +2 * Med / 3));
		p[2] = Drawing::Point(int(cX + n / 2), int(cY - Med / 3));
		
		//Pen^ Цвет = gcnew Pen(Color::Green);
		
		Графика->FillPolygon(ZLVK, p);
		Графика->DrawPolygon(KNTR, p);
		//Графика->DrawLine(Pens::Blue, 0, 0, cX, cY);

	}
	private: void print_tan(int scale, int toXz,int toYz,int period) {
		Graphics^ Графика = pictureBox1->CreateGraphics();
		array<Point>^ p;
		p = gcnew array<Point>(46);
		for (int i = 0; i < 23; i++) {
			p[i] = Drawing::Point(int(toXz + (((-pi) / 2) + 0.25 + 0.05 * i) * scale)+period, int(toYz - tan(((-pi) / 2) + 0.25 + 0.05 * i) * scale));
		}
		p[23] = Drawing::Point(toXz+period, toYz);
		int k = 0;
		for (int i = 45; i >= 24; i--) {
			p[i] = Drawing::Point(int(toXz + (((pi) / 2) - 0.25 - 0.05 * k) * scale)+period, int(toYz - tan(((pi) / 2) - 0.25 - 0.05 * k) * scale));
			k++;
		}
		Графика->DrawCurve(Pens::Red, p);
	}
	private: void paint_graphic(bool Yline, int graph_period) {
		int scale = 40;
		int toXz = 250;
		int toYz = 180;
		
		int k1, k2, k3, k4, k5, k6, k7;
		k1 = -3 + (6 * graph_period); String^ Tk1 = String::Format("{0}", k1); Tk1 = Tk1 + "(pi/2)";
		k2 = -1 + (3 * graph_period); String^ Tk2 = String::Format("{0}", k2); Tk2 = Tk2 + "pi";
		k3 = -1 + (6 * graph_period); String^ Tk3 = String::Format("{0}", k3); Tk3 = Tk3 + "(pi/2)";
		k4 = 0 + (3 * graph_period); String^ Tk4 = String::Format("{0}", k4); Tk4 = Tk4 + "pi";
		k5 = 1 + (6 * graph_period); String^ Tk5 = String::Format("{0}", k5); Tk5 = Tk5 + "(pi/2)";
		k6 = 1 + (3 * graph_period); String^ Tk6 = String::Format("{0}", k6); Tk6 = Tk6 + "pi";
		k7 = 3 + (6 * graph_period); String^ Tk7 = String::Format("{0}", k7); Tk7 = Tk7 + "(pi/2)";
		Font = gcnew System::Drawing::Font("Times New Roman", 8, FontStyle::Bold);
		Brush^ Кисть = gcnew SolidBrush(Color::Black);
		

		Graphics^ Графика = pictureBox1->CreateGraphics();
		Графика->Clear(BackColor);
		Графика->DrawLine(Pens::Black, 0, toYz, toXz * 2, toYz);
		Графика->DrawString("x", Font, Кисть, toXz*2-5, toYz);
		if (Yline) {
			Графика->DrawLine(Pens::Black, 250, 5, 250, 355);
			Графика->DrawString("y=tan(x)", Font, Кисть, toXz, 0);
		}
		Графика->DrawLine(Pens::Gray, int(toXz + (pi / 2) * scale), 5, int(toXz + (pi / 2) * scale), 355);
		Графика->DrawLine(Pens::Gray, int(toXz - (pi / 2) * scale), 5, int(toXz - (pi / 2) * scale), 355);
		Графика->DrawLine(Pens::Gray, int(toXz + (3*pi / 2) * scale), 5, int(toXz + (3*pi / 2) * scale), 355);
		Графика->DrawLine(Pens::Gray, int(toXz - (3*pi / 2) * scale), 5, int(toXz - (3*pi / 2) * scale), 355);
		Графика->DrawString(Tk1, Font, Кисть, int(toXz - (3 * pi / 2) * scale)-15, toYz);
		Графика->DrawString(Tk2, Font, Кисть, int(toXz -  pi  * scale) - 15, toYz);
		Графика->DrawString(Tk3, Font, Кисть, int(toXz - (pi / 2) * scale) - 15, toYz);
		Графика->DrawString(Tk4, Font, Кисть, int(toXz) - 15, toYz);
		Графика->DrawString(Tk5, Font, Кисть, int(toXz + (pi / 2) * scale) - 15, toYz);
		Графика->DrawString(Tk6, Font, Кисть, int(toXz + pi * scale) - 15, toYz);
		Графика->DrawString(Tk7, Font, Кисть, int(toXz + (3 * pi / 2) * scale) - 15, toYz);
		print_tan(scale, toXz, toYz, 0);
		print_tan(scale, toXz+5, toYz, int(pi)*scale);
		print_tan(scale, toXz-5, toYz, int(-pi) * scale);

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "Движение по траектории";
		button1->Text = "Старт";
		button3->Text = "Цвет Заливки";
		button4->Text = "Цвет Контура";
		KNTR = gcnew Pen(Color::Green);
		label1->Text = "Введите количество повторений:";
		label2->Text = "Введите n - длину ребра треугольника:";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//paint_graphic(true);
		GP = Convert::ToInt32(textBox1->Text);
		n = Convert::ToInt32(textBox2->Text);
		
		int scale = 40;
		int toXz = 250;
		int toYz = 180;
		
		bool Yline = true;
		for (int g = 0; g < GP; g++) {
			double period = -pi;
			for (int j = 0; j < 3; j++) {
				
				double cur_p = (((-pi) / 2) + 0.25) + period;
				double stop = (((pi) / 2) - 0.25) + period;
				double step = 0.02;
				while (cur_p < stop) {
					paint_graphic(Yline, g);
					//paint_circle(int(toXz + cur_p * scale), int(toYz - tan(cur_p) * scale), 10);
					paint_triangle(int(toXz + cur_p * scale), int(toYz - tan(cur_p) * scale));
					::Sleep(20); //время приостановки прорисовки
					cur_p += step;
				}
				period += pi;
			}
			Yline = false;
		}
		
		
		
	}
	//ZLVK = gcnew SolidBrush(colorDialog1->Color);
	
	

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		ZLVK = gcnew SolidBrush(colorDialog2->Color);
	}
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog3->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		KNTR = gcnew Pen(colorDialog3->Color);
	}
}
};
}
