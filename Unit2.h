#ifndef Unit2H
#define Unit2H

#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>

// ���� �����
class TForm2 : public TForm
{
__published:    // IDE-������������
    TButton *Button1; // ������ �� ����
    void __fastcall Button1Click(TObject *Sender); // �������� ���� ������

public:        // ������������� ������
	__fastcall TForm2(TComponent* Owner);
};

extern PACKAGE TForm2 *Form2;

#endif

