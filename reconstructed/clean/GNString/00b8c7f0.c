// Function: FUN_00b8c7f0
// Address: 00b8c7f0
// Size: 1023 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_00b8c7f0(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t **pplVar8;
  int64_t lVar9;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68 [8];
  int64_t *local_60;
  uint64_t local_58;
  uint32_t local_50;
  char local_38 [8];
  
  lVar9 = *(int64_t *)(arg1 + 0x40);
  if (lVar9 != 0) {
    param_1 = FUN_00d50b00();
  }
  lVar3 = g_02765240;
  if (g_02765240 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_80 = lVar3;
  local_78 = '\x01';
  FUN_000175c0(param_1,&local_80);
  plVar1 = local_70;
  if ((g_026fdd40 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
    g_026cd0e0 = FUN_00022d20;
    g_026cd0f0 = 0;
    ram_00000000026cd0f8 = 0;
    g_026cd100 = 0;
    g_026cd178 = 0;
    ram_00000000026cd180 = 0;
    g_026cd188 = 0;
    g_026cd18a = 6;
    g_026cd108 = 0;
    ram_00000000026cd110 = 0;
    g_026cd118 = 0;
    ram_00000000026cd120 = 0;
    g_026cd128 = 0;
    ram_00000000026cd130 = 0;
    g_026cd138 = 0;
    ram_00000000026cd140 = 0;
    g_026cd148 = 0;
    ram_00000000026cd150 = 0;
    g_026cd158 = 0;
    ram_00000000026cd160 = 0;
    g_026cd168 = 0;
    ram_00000000026cd170 = 0;
    g_026cd193 = 0;
    g_026cd18b = 0;
    ___cxa_guard_release();
  }
  pplVar8 = (int64_t **)&g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 != '\0') {
      if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
      cVar5 = FUN_00e8db60();
      pplVar8 = &local_70;
      if (cVar5 == '\0') {
        pplVar8 = (int64_t **)&g_02802688;
      }
    }
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00ca1380();
    plVar4 = local_70;
    pcVar7 = local_38;
    if (local_68[0] != '\0') {
      pcVar7 = local_68;
    }
    local_38[0] = local_68[0];
    *pcVar7 = '\0';
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      if (plVar4 == (int64_t *)0x0) goto LAB_00b8ca22;
      FUN_00d50b00();
    }
    else if (plVar4 == (int64_t *)0x0) goto LAB_00b8ca22;
    local_68[0] = '\0';
    local_70 = (int64_t *)0x0;
    local_60 = plVar4;
    local_50 = 0;
    local_58 = 0;
    if (0 < *(int *)((int64_t)plVar4 + 0xc)) {
      lVar9 = 0;
      do {
        plVar2 = *(int64_t **)(plVar4[2] + lVar9 * 8);
        local_70 = plVar2;
        FUN_007b8a50();
        pplVar8 = (int64_t **)&g_02802688;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar8 = &local_70;
          if (cVar5 == '\0') {
            pplVar8 = (int64_t **)&g_02802688;
          }
        }
        plVar2 = *pplVar8;
        if (*(char *)(pplVar8 + 1) == '\0') {
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_00b8ca54;
          }
        }
        else {
          *(void*)(pplVar8 + 1) = 0;
          if (plVar2 != (int64_t *)0x0) {
LAB_00b8ca54:
            *this_ptr = (int64_t)plVar2;
            *(void*)(this_ptr + 1) = 1;
            FUN_00083b20();
            FUN_00d50b20();
            goto LAB_00b8ca2d;
          }
        }
        lVar9 = lVar9 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar9);
      } while ((int)lVar9 < *(int *)((int64_t)plVar4 + 0xc));
    }
    FUN_00083b20();
    FUN_00d50b20();
  }
LAB_00b8ca22:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_00b8ca2d:
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

