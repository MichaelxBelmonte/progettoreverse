// Function: FUN_01734a40
// Address: 01734a40
// Size: 1226 bytes
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


void FUN_01734a40(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t lVar4;
  void *pvVar5;
  void* pVar6;
  int64_t lVar7;
  int iVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t **pplVar9;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar10;
  int64_t local_c8;
  char local_c0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  char local_31;
  
  FUN_00d50f50();
  if ((*(int64_t *)(this_ptr + 0x18) == this_ptr) && (*(int64_t *)(this_ptr + 0x58) != 0)) {
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_50 = *(int64_t *)(this_ptr + 0x58);
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar8 = -local_48._4_4_;
        }
        else {
          iVar8 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar8);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar8 = 0;
        }
        local_48 = CONCAT44(iVar8,(int)local_48);
      }
      lVar4 = (int64_t)(int)local_48;
      iVar8 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar8);
      if (*(int *)(local_50 + 0xc) <= iVar8) break;
      lVar7 = *(int64_t *)(local_50 + 0x10);
      local_60 = *(int64_t **)(lVar7 + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((void*)lVar7);
      pVar6 = (void*)lVar7;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01739bc0();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if (local_c8 != this_ptr) {
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_01739bf0();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_0176e380();
  }
  plVar1 = (int64_t *)*arg1;
  FUN_0002c940();
  if (plVar1 == (int64_t *)0x0) {
LAB_01734c3d:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01734c3d;
  }
  plVar1 = (int64_t *)*arg1;
  local_31 = (char)arg1[1];
  if ((local_31 == '\0') || (plVar1 == (int64_t *)0x0)) {
    if (plVar1 == (int64_t *)0x0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  lVar4 = g_027092b8;
  if (g_027092b8 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x590))();
  uVar10 = extraout_XMM0_Da;
  if (lVar4 != 0) {
    uVar10 = FUN_00d50b20();
  }
  lVar4 = g_027092b8;
  if (cVar3 == '\0') goto LAB_01734e52;
  if (g_027092b8 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_98 = lVar4;
  local_90 = '\x01';
  pplVar9 = &local_60;
  (**(code **)(*plVar1 + 0x578))(uVar10,&local_98);
  plVar1 = local_60;
  if ((g_026fd0c0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
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
  if (plVar1 == (int64_t *)0x0) {
LAB_01734d35:
    pplVar9 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01734d35;
  }
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar9 + 1) = 0;
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_80 = '\0';
    local_88 = plVar1;
    FUN_017aacd0();
    plVar1 = local_60;
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    if (*(int64_t **)(this_ptr + 0x38) != plVar1) {
      FUN_00d64850();
      plVar2 = *(int64_t **)(this_ptr + 0x38);
      if (plVar2 != plVar1) {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *(int64_t **)(this_ptr + 0x38) = plVar1;
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_01734e52:
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return;
}

