#include <vcl.h>
#pragma hdrstop
#include "Unit2.h"
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm2 *Form2;

// Конструктор форми
__fastcall TForm2::TForm2(TComponent* Owner)
    : TForm(Owner)
{
}

// Обробник кліку на кнопку
void __fastcall TForm2::Button1Click(TObject *Sender)
{
    ShowMessage(L"Привіт, світ!");
}

