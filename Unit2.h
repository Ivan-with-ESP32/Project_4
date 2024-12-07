#ifndef Unit2H
#define Unit2H
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>

class TForm2 : public TForm
{
__published:
    TEdit *EditAmount; 
    TButton *ButtonConvert;    
    TButton *ButtonClose;       
    TRadioButton *RadioUSDToUAH; 
    TRadioButton *RadioUAHToUSD; 
    TLabel *LabelResult;        
    TLabel *LabelTitle;       

    void __fastcall ButtonConvertClick(TObject *Sender); 
    void __fastcall ButtonCloseClick(TObject *Sender);
public: 
    __fastcall TForm2(TComponent* Owner);
};

extern PACKAGE TForm2 *Form2;
#endif
