// Function: FUN_009b5820
// Address: 009b5820
// Size: 877 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x009b5b1e) */
/* WARNING: Removing unreachable block (ram,0x009b5ab3) */
/* WARNING: Removing unreachable block (ram,0x009b5b55) */
/* WARNING: Removing unreachable block (ram,0x009b5b67) */

longlong FUN_009b5820(void *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  streambuf *this;
  undefined8 unaff_RSI;
  longlong lVar4;
  longlong lVar5;
  longlong local_68;
  undefined1 local_60;
  uint local_5c;
  longlong *local_58;
  int local_4c;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  
  local_58 = param_4;
  FUN_009b5cae();
  local_60 = 0;
  local_5c = 0xffffffcc;
  local_68 = -0x3333333333333334;
  std::ios_base::init(param_1);
  this = (streambuf *)&DAT_025172a8;
  local_38 = &DAT_025172a8;
  local_40 = &DAT_025172d0;
  std::streambuf::streambuf((streambuf *)&DAT_025172a8);
  local_48 = &DAT_02523790;
  std::ios_base::init(this);
  std::streambuf::streambuf(this);
  pcVar1 = (code *)FUN_009b5cae();
  if (local_58 != (longlong *)0x0) {
    *local_58 = 0;
  }
  if (pcVar1 == (code *)0x0) {
    lVar5 = 0;
    lVar4 = 0;
  }
  else {
    uVar2 = 0xffffffcc;
    lVar4 = 0;
    lVar5 = 0;
    while( true ) {
      local_68 = (uVar2 & 0xff) * 0x101010101010101;
      this = (streambuf *)&local_4c;
      lVar3 = (*pcVar1)(this,&local_68,unaff_RSI,param_2);
      if (lVar3 != 0) {
        lVar3 = (longlong)local_4c;
        this = *(streambuf **)*param_3;
        (**(code **)(this + 0x20))(this,local_4c);
        lVar5 = lVar5 + lVar3;
        lVar4 = lVar4 + 1;
      }
      pcVar1 = (code *)FUN_009b5d38();
      if (pcVar1 == (code *)0x0) break;
      uVar2 = (ulonglong)local_5c;
    }
  }
  if (local_58 != (longlong *)0x0) {
    *local_58 = lVar5;
  }
  std::streambuf::~streambuf(this);
  std::ostream::~ostream((ostream *)this);
  std::ios::~ios((ios *)this);
  std::streambuf::~streambuf(this);
  std::ostream::~ostream((ostream *)this);
  std::ios::~ios((ios *)this);
  return lVar4;
}


