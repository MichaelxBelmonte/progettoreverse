// Function: FUN_009f4b13
// Address: 009f4b13
// Size: 601 bytes
// Class: Unknown

void FUN_009f4b13(uint64_t param_1,uint64_t param_2,long param_3)

{
  int64_t lVar1;
  uint uVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  facet *pfVar7;
  locale *this;
  id *this_00;
  locale *plVar8;
  uint64_t arg1;
  int64_t *this_ptr;
  locale local_40 [16];
  
  lVar3 = *(int64_t *)(*this_ptr + -0x18);
  uVar2 = *(uint *)((int64_t)this_ptr + lVar3 + 8);
  this_00 = (id *)(uint64_t)uVar2;
  std::ios_base::getloc();
  cVar4 = std::locale::has_facet(this_00);
  std::locale::~locale((locale *)this_00);
  if (cVar4 == '\0') {
    pfVar7 = operator_new((ulong)this_00);
    FUN_009fcfd6();
    std::ios_base::getloc();
    this = (locale *)std::locale::id::__get();
    std::locale::__install_ctor(this,pfVar7,param_3);
    std::locale::~locale(this);
    lVar1 = *(int64_t *)(*this_ptr + -0x18);
    std::ios_base::getloc();
    plVar8 = local_40;
    std::ios_base::imbue(this);
    std::locale::~locale(this);
    plVar6 = *(int64_t **)((int64_t)this_ptr + lVar1 + 0x28);
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x10))();
      std::locale::locale(this,plVar8);
      std::locale::operator=(this,plVar8);
      std::locale::~locale(this);
    }
    std::locale::~locale(this);
    lVar1 = (int64_t)this_ptr + *(int64_t *)(*this_ptr + -0x18);
    iVar5 = *(int *)((int64_t)this_ptr + *(int64_t *)(*this_ptr + -0x18) + 0x90);
    if (iVar5 == -1) {
      std::ios_base::getloc();
      plVar6 = (int64_t *)std::locale::use_facet((id *)this);
      plVar8 = (locale *)*plVar6;
      cVar4 = (**(code **)(plVar8 + 0x38))();
      std::locale::~locale(plVar8);
      iVar5 = (int)cVar4;
      *(int *)(lVar1 + 0x90) = iVar5;
    }
    plVar8 = (locale *)(uint64_t)(uint)(int)(char)iVar5;
    FUN_009fdd9c(plVar8,lVar1,arg1);
  }
  else {
    std::ios_base::getloc();
    std::locale::use_facet(this_00);
    lVar1 = (int64_t)this_ptr + *(int64_t *)(*this_ptr + -0x18);
    iVar5 = *(int *)((int64_t)this_ptr + *(int64_t *)(*this_ptr + -0x18) + 0x90);
    if (iVar5 == -1) {
      std::ios_base::getloc();
      plVar6 = (int64_t *)std::locale::use_facet(this_00);
      plVar8 = (locale *)*plVar6;
      cVar4 = (**(code **)(plVar8 + 0x38))();
      std::locale::~locale(plVar8);
      iVar5 = (int)cVar4;
      *(int *)(lVar1 + 0x90) = iVar5;
    }
    plVar8 = (locale *)(uint64_t)(uint)(int)(char)iVar5;
    FUN_009fdd9c(plVar8,lVar1,arg1);
  }
  std::locale::~locale(plVar8);
  *(uint *)((int64_t)this_ptr + lVar3 + 8) = uVar2;
  return;
}

