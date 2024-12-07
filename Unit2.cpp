#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm2 *Form2;

__fastcall TForm2::TForm2(TComponent* Owner)
    : TForm(Owner)
{
}

void __fastcall TForm2::ButtonConvertClick(TObject *Sender)
{
    try
    {
        double amount = StrToFloat(EditAmount->Text);
		double rateUSDToUAH = 41.2; 
        double rateUAHToUSD = 0.0243;
        double result = 0.0;

        if (RadioUSDToUAH->Checked)
            result = amount * rateUSDToUAH; 
        else if (RadioUAHToUSD->Checked)
            result = amount * rateUAHToUSD; 
        else
        {
            ShowMessage(L"Будь ласка, виберіть напрямок конвертації!");
            return;
        }

        LabelResult->Caption = L"Результат: " + FloatToStrF(result, ffFixed, 8, 2);
    }
    catch (...)
    {
        ShowMessage(L"Будь ласка, введіть правильну суму!");
    }
}

void __fastcall TForm2::ButtonCloseClick(TObject *Sender)
{
    Close(); 
}
