// Function: FUN_009bc5b8
// Address: 009bc5b8
// Size: 526 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x009bc775) */

undefined8 FUN_009bc5b8(byte *param_1,undefined8 param_2,byte *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined **this;
  ostream *poVar4;
  ios *this_00;
  ulonglong uVar5;
  undefined8 unaff_RDI;
  
  this = &PTR__ostream_02517318;
  std::ios_base::init(&PTR__ostream_02517318);
  std::streambuf::streambuf((streambuf *)this);
  plVar3 = (longlong *)FUN_009ad920();
  lVar1 = *plVar3;
  lVar2 = *(longlong *)(lVar1 + -0x18);
  *(undefined4 *)((longlong)plVar3 + lVar2 + 0x90) = 0x20;
  poVar4 = *(ostream **)(lVar1 + -0x18);
  *(undefined8 *)((longlong)(plVar3 + 3) + (longlong)poVar4) = 3;
  std::ostream::operator<<(poVar4,(int)lVar2);
  if ((*param_3 & 1) == 0) {
    uVar5 = (ulonglong)(*param_3 >> 1);
  }
  else {
    uVar5 = *(ulonglong *)(param_3 + 8);
  }
  plVar3 = (longlong *)FUN_009ad920();
  poVar4 = *(ostream **)(*plVar3 + -0x18);
  *(undefined8 *)((longlong)(plVar3 + 3) + (longlong)poVar4) = 5;
  std::ostream::operator<<(poVar4,uVar5);
  this_00 = (ios *)CONCAT71((int7)((ulonglong)poVar4 >> 8),1);
  if ((*param_1 & 1) == 0) {
    uVar5 = (ulonglong)(*param_1 >> 1);
  }
  else {
    uVar5 = *(ulonglong *)(param_1 + 8);
  }
  FUN_009ad920(this_00,uVar5);
  FUN_00892260();
  std::streambuf::~streambuf((streambuf *)this_00);
  std::ostream::~ostream((ostream *)this_00);
  std::ios::~ios(this_00);
  return unaff_RDI;
}


