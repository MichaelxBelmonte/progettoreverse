// Function: FUN_00497610
// Address: 00497610
// Size: 1445 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00497610(void* param_1,char param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  void* pVar6;
  uint64_t uVar7;
  int64_t **pplVar8;
  int64_t *plVar9;
  int64_t this_ptr;
  uint32_t uVar10;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  int64_t *local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x118) == 0) {
    uVar7 = 0;
    goto LAB_00497af7;
  }
  FUN_00d50b00();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0134a540();
  plVar9 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar7 = CONCAT71((int7)((uint64_t)plVar9 >> 8),plVar9 != (int64_t *)0x0);
  if ((plVar9 != (int64_t *)0x0) && (param_2 != '\0')) {
    FUN_00d6f370();
    local_d8 = g_027087b8;
    if (g_027087b8 != 0) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    local_c8 = 0;
    local_c0 = '\0';
    pplVar8 = &local_40;
    plVar9 = &local_c8;
    FUN_00d704d0(plVar9,&local_d8);
    plVar5 = local_40;
    pVar6 = (void*)plVar9;
    if ((g_026fd0c0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_026d5e58 = FUN_00d4fe50();
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      pVar6 = 0x5d920;
      g_026d5e50 = FUN_0005d920;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      ___cxa_guard_release();
    }
    if (plVar5 == (int64_t *)0x0) {
LAB_0049773f:
      pplVar8 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') goto LAB_0049773f;
    }
    plVar9 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar8 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_98 = plVar9;
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)0x0;
      local_58 = 0;
    }
    else {
      local_b0 = '\0';
      local_b8 = plVar9;
      uVar4 = FUN_00cddf30();
      plVar9 = local_40;
      if (local_40 == (int64_t *)0x0) {
        local_58 = 0;
        plVar9 = (int64_t *)0x0;
      }
      else if (local_38 == '\0') {
        uVar4 = FUN_00d50b00();
        local_58 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        local_58 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      }
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_90 = plVar9;
    FUN_01f51ef0();
    plVar9 = local_40;
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar9 + 0x388))();
    FUN_01538cd0();
    local_88 = local_40;
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    plVar5 = local_90;
    local_80 = '\x01';
    FUN_01f53a40();
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (int64_t *)0x0) {
      local_a8 = plVar5;
      local_a0 = '\0';
      (**(code **)(*plVar9 + 0x378))();
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    iVar2 = (**(code **)(*plVar9 + 0x390))();
    if (iVar2 == 0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_00049200();
      (**(code **)(*plVar5 + 0x18))();
      FUN_00d11ab0();
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0134a540();
      local_78 = local_40;
      local_70 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70 = '\x01';
      uVar10 = (**(code **)(*plVar9 + 0x380))();
      local_68 = local_50;
      local_60 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          uVar10 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      plVar5 = local_90;
      local_60 = '\x01';
      FUN_00d0c510(uVar10,&local_68);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00486560();
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (((char)local_58 != '\0') && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar7 = CONCAT71((int7)((uint64_t)plVar5 >> 8),1);
    if (local_98 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00497af7:
  return uVar7 & 0xffffffff;
}

