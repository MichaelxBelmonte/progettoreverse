// Function: FUN_008df2a7
// Address: 008df2a7
// Size: 529 bytes
// Class: Unknown
// String references:
//   ", "


/* WARNING: Removing unreachable block (ram,0x008df46c) */

undefined8 FUN_008df2a7(undefined8 param_1,undefined8 *param_2)

{
  streambuf *psVar1;
  streambuf *psVar2;
  streambuf *psVar3;
  undefined8 *unaff_RSI;
  undefined8 unaff_RDI;
  byte local_60;
  
  std::ios_base::init(&PTR__ostream_02517318);
  psVar2 = (streambuf *)&DAT_025172a8;
  std::streambuf::streambuf((streambuf *)&DAT_025172a8);
  psVar1 = (streambuf *)*unaff_RSI;
  psVar3 = psVar1;
  if ((streambuf *)*param_2 != psVar1) {
    while( true ) {
      psVar2 = psVar3;
      if (psVar1 != psVar3) {
        FUN_009ad920(psVar3,2);
      }
      FUN_00a6d1a0();
      FUN_009ad920();
      if ((local_60 & 1) != 0) {
        operator_delete(psVar2);
      }
      psVar1 = *(streambuf **)(psVar3 + 8);
      if (*(streambuf **)(psVar3 + 8) == (streambuf *)0x0) {
        psVar2 = *(streambuf **)(psVar3 + 0x10);
        if (*(streambuf **)psVar2 != psVar3) {
          do {
            psVar3 = *(streambuf **)(psVar3 + 0x10);
            psVar2 = *(streambuf **)(psVar3 + 0x10);
          } while (*(streambuf **)psVar2 != psVar3);
        }
      }
      else {
        do {
          psVar2 = psVar1;
          psVar1 = *(streambuf **)psVar2;
        } while (*(streambuf **)psVar2 != (streambuf *)0x0);
      }
      if ((streambuf *)*param_2 == psVar2) break;
      psVar1 = (streambuf *)*unaff_RSI;
      psVar3 = psVar2;
    }
  }
  FUN_00892260();
  std::streambuf::~streambuf(psVar2);
  std::ostream::~ostream((ostream *)psVar2);
  std::ios::~ios((ios *)psVar2);
  return unaff_RDI;
}


