// Function: FUN_009a8daa
// Address: 009a8daa
// Size: 601 bytes
// Class: Unknown


void FUN_009a8daa(undefined8 param_1,undefined8 param_2,long param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  facet *pfVar7;
  locale *this;
  id *this_00;
  locale *plVar8;
  undefined8 unaff_RSI;
  longlong *unaff_RDI;
  locale local_40 [16];
  
  lVar3 = *(longlong *)(*unaff_RDI + -0x18);
  uVar2 = *(uint *)((longlong)unaff_RDI + lVar3 + 8);
  this_00 = (id *)(ulonglong)uVar2;
  std::ios_base::getloc();
  cVar4 = std::locale::has_facet(this_00);
  std::locale::~locale((locale *)this_00);
  if (cVar4 == '\0') {
    pfVar7 = operator_new((ulong)this_00);
    FUN_009a9126();
    std::ios_base::getloc();
    this = (locale *)std::locale::id::__get();
    std::locale::__install_ctor(this,pfVar7,param_3);
    std::locale::~locale(this);
    lVar1 = *(longlong *)(*unaff_RDI + -0x18);
    std::ios_base::getloc();
    plVar8 = local_40;
    std::ios_base::imbue(this);
    std::locale::~locale(this);
    plVar6 = *(longlong **)((longlong)unaff_RDI + lVar1 + 0x28);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))();
      std::locale::locale(this,plVar8);
      std::locale::operator=(this,plVar8);
      std::locale::~locale(this);
    }
    std::locale::~locale(this);
    lVar1 = (longlong)unaff_RDI + *(longlong *)(*unaff_RDI + -0x18);
    iVar5 = *(int *)((longlong)unaff_RDI + *(longlong *)(*unaff_RDI + -0x18) + 0x90);
    if (iVar5 == -1) {
      std::ios_base::getloc();
      plVar6 = (longlong *)std::locale::use_facet((id *)this);
      plVar8 = (locale *)*plVar6;
      cVar4 = (**(code **)(plVar8 + 0x38))();
      std::locale::~locale(plVar8);
      iVar5 = (int)cVar4;
      *(int *)(lVar1 + 0x90) = iVar5;
    }
    plVar8 = (locale *)(ulonglong)(uint)(int)(char)iVar5;
    FUN_009a9078(plVar8,lVar1,unaff_RSI);
  }
  else {
    std::ios_base::getloc();
    std::locale::use_facet(this_00);
    lVar1 = (longlong)unaff_RDI + *(longlong *)(*unaff_RDI + -0x18);
    iVar5 = *(int *)((longlong)unaff_RDI + *(longlong *)(*unaff_RDI + -0x18) + 0x90);
    if (iVar5 == -1) {
      std::ios_base::getloc();
      plVar6 = (longlong *)std::locale::use_facet(this_00);
      plVar8 = (locale *)*plVar6;
      cVar4 = (**(code **)(plVar8 + 0x38))();
      std::locale::~locale(plVar8);
      iVar5 = (int)cVar4;
      *(int *)(lVar1 + 0x90) = iVar5;
    }
    plVar8 = (locale *)(ulonglong)(uint)(int)(char)iVar5;
    FUN_009a9078(plVar8,lVar1,unaff_RSI);
  }
  std::locale::~locale(plVar8);
  *(uint *)((longlong)unaff_RDI + lVar3 + 8) = uVar2;
  return;
}


