// Function: FUN_0097ebcf
// Address: 0097ebcf
// Size: 1018 bytes
// Class: Unknown
// String references:
//   "not-a-date-time"
//   "-infinity"
//   "+infinity"


undefined8 FUN_0097ebcf(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined **this;
  ostream *this_00;
  ostream *poVar5;
  longlong *unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 auStack_138 [6];
  ulonglong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined **local_e0;
  undefined4 auStack_c0 [26];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined *local_40;
  
  this = &PTR__ostream_02517318;
  local_e0 = &PTR__ostream_02517340;
  std::ios_base::init(&PTR__ostream_02517318);
  local_58 = 0;
  local_50 = 0xffffffff;
  local_40 = &DAT_025172a8;
  local_e0 = (undefined **)&DAT_025172d0;
  std::streambuf::streambuf((streambuf *)this);
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0x10;
  lVar1 = *unaff_RSI;
  this_00 = (ostream *)0x8000000000000000;
  if (lVar1 == -0x8000000000000000) {
    FUN_009ad920(0x8000000000000000,9);
  }
  else {
    this_00 = (ostream *)0x7ffffffffffffffe;
    if (lVar1 == 0x7ffffffffffffffe) {
      FUN_009ad920(0x7ffffffffffffffe,0xf);
    }
    else {
      this_00 = (ostream *)0x7fffffffffffffff;
      if (lVar1 == 0x7fffffffffffffff) {
        FUN_009ad920(0x7fffffffffffffff,9);
      }
      else {
        local_48 = 0;
        iVar3 = FUN_0098c910();
        if (iVar3 == -1) {
          local_48 = CONCAT71(local_48._1_7_,0x2d);
          FUN_009ad920();
        }
        *(undefined8 *)((longlong)auStack_138 + DAT_02517290) = 2;
        *(undefined4 *)((longlong)auStack_c0 + DAT_02517290) = 0x30;
        std::ostream::operator<<((ostream *)*unaff_RSI,*unaff_RSI / 3600000000);
        FUN_009ad920();
        *(undefined8 *)((longlong)auStack_138 + DAT_02517290) = 2;
        *(undefined4 *)((longlong)auStack_c0 + DAT_02517290) = 0x30;
        std::ostream::operator<<((ostream *)0x8888888888888889,*unaff_RSI / 3600000000);
        FUN_009ad920();
        *(undefined8 *)((longlong)auStack_138 + DAT_02517290) = 2;
        *(undefined4 *)((longlong)auStack_c0 + DAT_02517290) = 0x30;
        std::ostream::operator<<
                  ((ostream *)((*unaff_RSI / 1000000) % 0x3c),(*unaff_RSI / 1000000) / 0x3c);
        this_00 = (ostream *)(*unaff_RSI % 1000000);
        poVar5 = (ostream *)-(longlong)this_00;
        if (0 < (longlong)this_00) {
          poVar5 = this_00;
        }
        if (poVar5 != (ostream *)0x0) {
          plVar4 = (longlong *)FUN_009ad920(this_00,1);
          lVar1 = *plVar4;
          lVar2 = *(longlong *)(lVar1 + -0x18);
          *(undefined8 *)((longlong)plVar4 + lVar2 + 0x18) = 6;
          this_00 = *(ostream **)(lVar1 + -0x18);
          *(undefined4 *)((longlong)(plVar4 + 0x12) + (longlong)this_00) = 0x30;
          std::ostream::operator<<(this_00,lVar2);
        }
      }
    }
  }
  FUN_00892260();
  local_e0 = (undefined **)&DAT_025172d0;
  if ((local_108 & 1) != 0) {
    operator_delete(this_00);
  }
  std::streambuf::~streambuf((streambuf *)this_00);
  std::ostream::~ostream(this_00);
  std::ios::~ios((ios *)this_00);
  return unaff_RDI;
}


