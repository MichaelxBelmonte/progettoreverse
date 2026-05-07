// Function: FUN_00ad5540
// Address: 00ad5540
// Size: 638 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x00ad5771) */

int FUN_00ad5540(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  locale *plVar5;
  uint uVar6;
  streambuf *this_00;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar7;
  longlong local_1b0;
  uint auStack_190 [2];
  longlong alStack_188 [5];
  byte local_160;
  undefined *local_138;
  undefined8 local_80;
  runtime_error *this;
  
  iVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x60) + 0x18))();
  cVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x60) + 0x20))();
  if (cVar3 != '\0') {
    FUN_00ad3660();
    iVar4 = iVar4 + 1;
  }
  uVar7 = 0;
  cVar3 = *(char *)(unaff_RDI + 0x78);
  while( true ) {
    if (cVar3 == '\0') {
      (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x38))(uVar7,1);
    }
    *(undefined1 *)(unaff_RDI + 0x78) = 1;
    uVar6 = *(byte *)(unaff_RDI + 0x79) - 0x2b;
    this = (runtime_error *)(ulonglong)uVar6;
    if ((0x3a < (byte)uVar6) ||
       (this = (runtime_error *)(ulonglong)(uVar6 & 0xff),
       (0x400000004007fedU >> ((ulonglong)this & 0x3f) & 1) == 0)) break;
    *(undefined1 *)(unaff_RDI + 0x78) = 0;
    uVar7 = std::string::push_back((byte)uVar6);
    iVar4 = iVar4 + 1;
    cVar3 = *(char *)(unaff_RDI + 0x78);
  }
  FUN_00ad90c0();
  lVar1 = *(longlong *)(local_1b0 + -0x18);
  plVar5 = (locale *)std::locale::classic();
  std::ios_base::getloc();
  std::ios_base::imbue((locale *)this);
  std::locale::~locale((locale *)this);
  plVar2 = *(longlong **)((longlong)alStack_188 + lVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    std::locale::locale((locale *)this,plVar5);
    std::locale::operator=((locale *)this,plVar5);
    std::locale::~locale((locale *)this);
  }
  std::locale::~locale((locale *)this);
  std::istream::operator>>((istream *)this,(longlong *)plVar5);
  if ((*(uint *)((longlong)auStack_190 + *(longlong *)(local_1b0 + -0x18)) & 3) != 2) {
    ___cxa_allocate_exception();
    uVar7 = std::runtime_error::runtime_error(this,(string *)plVar5);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar7,PTR__runtime_error_0249c260);
  }
  this_00 = (streambuf *)&DAT_02522c80;
  local_138 = &DAT_02522ca8;
  if ((local_160 & 1) != 0) {
    operator_delete(&DAT_02522c80);
  }
  std::streambuf::~streambuf(this_00);
  std::istream::~istream((istream *)this_00);
  std::ios::~ios((ios *)this_00);
  *unaff_RSI = local_80;
  cVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x60) + 0x20))();
  if (cVar3 != '\0') {
    FUN_00ad3660();
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}


