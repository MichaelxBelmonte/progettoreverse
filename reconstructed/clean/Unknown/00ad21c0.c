// Function: FUN_00ad21c0
// Address: 00ad21c0
// Size: 958 bytes
// Class: Unknown

int FUN_00ad21c0(int64_t param_1,double param_2)

{
  int64_t *plVar1;
  bool bVar2;
  uint uVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  locale *plVar8;
  void*puVar9;
  string *in_RCX;
  locale *this;
  void *pvVar10;
  string *in_RDX;
  uint64_t uVar11;
  int64_t this_ptr;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qa;
  int64_t alStack_188 [7];
  uint64_t local_150;
  uint64_t local_148;
  uint64_t local_140;
  uint64_t local_138;
  uint32_t local_130;
  void**local_128;
  uint64_t local_a0;
  uint32_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  void*local_68;
  void*local_60;
  void*local_58;
  int64_t local_50;
  uint64_t local_48;
  uint64_t uStack_40;
  uint64_t local_38;
  
  local_50 = param_1;
  iVar6 = (**(code **)(**(int64_t **)(this_ptr + 0x60) + 0x10))();
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  iVar7 = ___fpclassifyd(local_50);
  if (iVar7 == 1) {
    uVar12 = std::string::operator=(in_RCX,in_RDX);
  }
  else if (iVar7 == 2) {
    if (local_50 < 0) {
      uVar12 = std::string::operator=(in_RCX,in_RDX);
    }
    else {
      uVar12 = std::string::operator=(in_RCX,in_RDX);
    }
  }
  else {
    local_128 = &PTR__ostream_02517340;
    std::ios_base::init(&PTR__ostream_02517318);
    local_a0 = 0;
    local_98 = 0xffffffff;
    this = (locale *)&g_025172a8;
    local_60 = &g_025172a8;
    local_68 = &g_025172d0;
    local_128 = (void**)&g_025172d0;
    std::streambuf::streambuf((streambuf *)&g_025172a8);
    lVar4 = g_02517290;
    local_58 = &g_02523790;
    local_150 = 0;
    local_148 = 0;
    local_140 = 0;
    local_138 = 0;
    local_130 = 0x10;
    plVar8 = (locale *)std::locale::classic();
    std::ios_base::getloc();
    std::ios_base::imbue(this);
    std::locale::~locale(this);
    plVar1 = *(int64_t **)((int64_t)alStack_188 + lVar4 + 0x18);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      std::locale::locale(this,plVar8);
      std::locale::operator=(this,plVar8);
      std::locale::~locale(this);
    }
    std::locale::~locale(this);
    *(void*)((int64_t)alStack_188 + g_02517290) = 0x11;
    std::ostream::operator<<((ostream *)this,param_2);
    FUN_00892260();
    local_128 = (void**)local_68;
    if ((local_150 & 1) != 0) {
      operator_delete(this);
    }
    std::streambuf::~streambuf((streambuf *)this);
    std::ostream::~ostream((ostream *)this);
    std::ios::~ios((ios *)this);
    if ((local_48 & 1) != 0) {
      operator_delete(this);
    }
    local_38 = local_80;
    uStack_40 = local_88;
    local_48 = local_90;
    cVar5 = (**(code **)(**(int64_t **)(this_ptr + 0x60) + 0x20))();
    uVar12 = extraout_XMM0_Qa;
    if (cVar5 == '\0') {
      bVar2 = false;
      goto joined_r0x00ad24c2;
    }
  }
  uVar12 = (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x48))(uVar12,1);
  iVar6 = iVar6 + 1;
  bVar2 = true;
joined_r0x00ad24c2:
  if ((local_48 & 1) == 0) {
    uVar11 = (uint64_t)((byte)local_48 >> 1);
  }
  else {
    uVar11 = uStack_40;
    if (uStack_40 >> 0x20 != 0) {
      puVar9 = (void*)___cxa_allocate_exception();
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = &g_02517250;
      *(void*)(puVar9 + 4) = 3;
                          ___cxa_throw(&g_02517250,FUN_0088de20);
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x48))(uVar12,uVar11);
  if ((local_48 & 1) == 0) {
    pvVar10 = (void *)(uint64_t)((byte)local_48 >> 1);
    uVar3 = (uint)((byte)local_48 >> 1);
  }
  else {
    pvVar10 = (void *)(uStack_40 & 0xffffffff);
    uVar3 = (uint)uStack_40;
  }
  iVar6 = iVar6 + uVar3;
  if (bVar2) {
    (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x48))(pvVar10,1);
    iVar6 = iVar6 + 1;
  }
  if (((byte)local_48 & 1) != 0) {
    operator_delete(pvVar10);
  }
  return iVar6;
}

