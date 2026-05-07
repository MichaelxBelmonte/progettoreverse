// Function: FUN_00336030
// Address: 00336030
// Size: 2809 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00336030(uint64_t param_1,int param_2)

{
  code *pcVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  char *pcVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int iVar9;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar10;
  int64_t lVar11;
  uint32_t uVar12;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_a0;
  char local_98;
  int64_t *local_88;
  char local_80 [8];
  int64_t *local_78;
  uint64_t local_70;
  int local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  uint64_t local_50;
  int64_t *local_40;
  char local_38;
  
  plVar3 = local_88;
  while( true ) {
    (**(code **)(*this_ptr + 0x4a0))();
    iVar9 = *(int *)((int64_t)local_88 + 0xc);
    if ((local_80[0] != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar9 == 0) break;
    (**(code **)(*this_ptr + 0x4a0))();
    FUN_00d23340();
    local_60 = local_80[0];
    pcVar5 = local_80;
    if (local_80[0] == '\0') {
      pcVar5 = &local_60;
    }
    *pcVar5 = '\0';
    if ((local_80[0] != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_88 + 0x478))();
    if (local_60 != '\0') {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar11 = g_02702940;
  if ((param_2 == 2) || (lVar11 = g_02702938, param_2 == 1)) {
    if (lVar11 != 0) {
      FUN_00d50b00();
    }
    uVar10 = CONCAT71((int7)((uint64_t)&local_40 >> 8),lVar11 != 0);
  }
  else {
    uVar10 = 0;
    lVar11 = 0;
  }
  FUN_000b6980();
  plVar7 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0009d720();
  if (local_80[0] == '\0') {
    if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
       (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80[0] = '\0';
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((int64_t *)*arg1 != (int64_t *)0x0) {
    local_80[0] = '\0';
    local_88 = (int64_t *)0x0;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_70._4_4_ = 0;
    local_78 = (int64_t *)*arg1;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar9 = -local_70._4_4_;
        }
        else {
          iVar9 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar9);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar9 = 0;
        }
        local_70 = CONCAT44(iVar9,(int)local_70);
      }
      lVar6 = (int64_t)(int)local_70;
      iVar9 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar9);
      if (*(int *)((int64_t)local_78 + 0xc) <= iVar9) break;
      local_88 = *(int64_t **)(local_78[2] + 8 + lVar6 * 8);
      local_38 = '\0';
      local_40 = local_88;
      cVar4 = FUN_00d23d70();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        local_38 = '\0';
        local_40 = local_88;
        FUN_00d23f50();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00018280();
  }
  pcVar1 = g_02677e28;
  if (plVar3 != (int64_t *)0x0) {
    local_80[0] = '\0';
    local_88 = (int64_t *)0x0;
    local_78 = plVar3;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_50 = uVar10;
    while( true ) {
      lVar6 = (int64_t)(int)local_70;
      iVar9 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar9);
      if (*(int *)((int64_t)local_78 + 0xc) <= iVar9) break;
      local_88 = *(int64_t **)(local_78[2] + 8 + lVar6 * 8);
      plVar7 = (int64_t *)FUN_00e8fc40();
      FUN_0006daf0();
      *(void*)(plVar7 + 0x27) = 0;
      plVar7[0x2e] = 0;
      *(void*)(plVar7 + 0x2f) = 0;
      plVar7[0x30] = 0;
      *(void*)(plVar7 + 0x31) = 0;
      plVar7[0x28] = 0;
      plVar7[0x29] = 0;
      *(void*)(plVar7 + 0x2a) = 0;
      plVar7[0x2b] = 0;
      plVar7[0x2c] = 0;
      *(void*)((int64_t)plVar7 + 0x165) = 0;
      *(void*)((int64_t)plVar7 + 0x18c) = 0;
      *(void*)((int64_t)plVar7 + 0x194) = 0;
      *(void*)((int64_t)plVar7 + 0x199) = 0;
      plVar7[0x35] = 0;
      plVar7[0x36] = 0;
      plVar7[0x37] = 0;
      plVar7[0x38] = 0;
      *plVar7 = (int64_t)&g_02677e10;
      plVar7[2] = (int64_t)&g_026788e8;
      plVar7[0x39] = (int64_t)&g_02678928;
      *(void*)((int64_t)plVar7 + 500) = 0;
      *(void*)(plVar7 + 0x3f) = 0;
      plVar7[0x43] = 0;
      plVar7[0x3c] = 0;
      plVar7[0x3d] = 0;
      plVar7[0x3a] = 0;
      plVar7[0x3b] = 0;
      *(void*)(plVar7 + 0x3e) = 0;
      *(void*)((int64_t)plVar7 + 0x1fc) = 0;
      *(void*)((int64_t)plVar7 + 0x204) = 0;
      *(void*)((int64_t)plVar7 + 0x20c) = 0;
      (*pcVar1)();
      lVar6 = g_02702948;
      if (g_02702948 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar7 + 0xa10))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar7 + 0xa80))();
      if (local_68 == 0 && (int)local_70 == 0) {
        FUN_01cef4c0();
      }
      else if ((int)local_70 == *(int *)((int64_t)local_78 + 0xc) + -1) {
        FUN_01cef4c0();
      }
      else {
        FUN_01cef4c0();
      }
      uVar12 = FUN_01e4ec80();
      plVar7 = g_02702950;
      if (g_02702950 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b00();
      }
      local_40 = plVar7;
      local_38 = '\0';
      FUN_00ca0840(uVar12,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x450))();
      FUN_01e4ec80();
      uVar12 = FUN_00d46300();
      plVar7 = g_02702958;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          uVar12 = FUN_00d50b00();
          plVar7 = g_02702958;
        }
      }
      else {
        local_98 = '\0';
      }
      g_02702958 = plVar7;
      if (plVar7 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar7;
      FUN_00ca0840(uVar12,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_a0 != 0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      FUN_01e4ec80();
      uVar12 = FUN_00d46300();
      plVar7 = g_02702960;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          uVar12 = FUN_00d50b00();
          plVar7 = g_02702960;
        }
      }
      else {
        local_98 = '\0';
      }
      g_02702960 = plVar7;
      if (plVar7 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar7;
      FUN_00ca0840(uVar12,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_a0 != 0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      uVar12 = FUN_01e4ec80();
      plVar7 = g_02702968;
      if (g_02702968 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b00();
      }
      local_40 = plVar7;
      local_38 = '\0';
      FUN_00ca0840(uVar12,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (local_70._4_4_ != 0) {
        if (local_70 < 0) {
          iVar9 = -local_70._4_4_;
        }
        else {
          local_70 = CONCAT44(local_70._4_4_,(int)local_70 - local_70._4_4_);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar9 = 0;
        }
        local_70 = CONCAT44(iVar9,(int)local_70);
      }
    }
    FUN_00018280();
    uVar10 = local_50;
  }
  FUN_003375f0();
  FUN_003372c0();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  lVar6 = g_02702970;
  if (g_02702970 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026fce70;
  local_110 = lVar6;
  local_108 = '\x01';
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar2;
  local_f8 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  FUN_000bf690(&local_100,&local_110,&local_f0);
  plVar7 = (int64_t *)this_ptr[0x32];
  plVar8 = plVar7;
  if (plVar7 == local_88) goto LAB_00336aad;
  plVar8 = local_88;
  if (local_80[0] == '\0') {
    if (local_88 == (int64_t *)0x0) {
      plVar8 = (int64_t *)0x0;
      goto LAB_00336a29;
    }
    FUN_00d50b00();
    plVar7 = (int64_t *)this_ptr[0x32];
    this_ptr[0x32] = (int64_t)local_88;
  }
  else {
    local_80[0] = '\0';
LAB_00336a29:
    this_ptr[0x32] = (int64_t)plVar8;
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar8 = local_88;
  }
LAB_00336aad:
  if ((local_80[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)uVar10 != '\0') && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  return;
}

