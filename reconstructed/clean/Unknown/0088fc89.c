// Function: FUN_0088fc89
// Address: 0088fc89
// Size: 529 bytes
// Class: Unknown
// String references:
//   ", "

uint64_t FUN_0088fc89(uint64_t param_1,void*param_2)

{
  streambuf *psVar1;
  streambuf *psVar2;
  streambuf *psVar3;
  void*arg1;
  uint64_t this_ptr;
  byte local_60;
  
  std::ios_base::init(&PTR__ostream_02517318);
  psVar2 = (streambuf *)&g_025172a8;
  std::streambuf::streambuf((streambuf *)&g_025172a8);
  psVar1 = (streambuf *)*arg1;
  psVar3 = psVar1;
  if ((streambuf *)*param_2 != psVar1) {
    while( true ) {
      psVar2 = psVar3;
      if (psVar1 != psVar3) {
        FUN_009ad920(psVar3,2);
      }
      FUN_008e4c54();
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
      psVar1 = (streambuf *)*arg1;
      psVar3 = psVar2;
    }
  }
  FUN_00892260();
  std::streambuf::~streambuf(psVar2);
  std::ostream::~ostream((ostream *)psVar2);
  std::ios::~ios((ios *)psVar2);
  return this_ptr;
}

