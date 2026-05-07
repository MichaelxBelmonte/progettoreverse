// Function: FUN_01e10690
// Address: 01e10690
// Size: 2371 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNMultipleValue"
//   "GNString"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01e10690(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da_02;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  plVar7 = (int64_t *)*arg1;
  if ((g_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_01e106e2:
    plVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar7 = arg1;
    if (cVar4 == '\0') goto LAB_01e106e2;
  }
  lVar1 = *plVar7;
  local_31 = (char)plVar7[1];
  if ((local_31 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) goto LAB_01e107dc;
  }
  else {
    FUN_00d50b00();
  }
  local_68 = lVar1;
  FUN_00e987e0();
  lVar3 = local_48;
  lVar1 = *arg1;
  if (lVar1 == local_48) {
    if (((char)arg1[1] == '\0') && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_01e1076f;
      FUN_00d50b00();
      goto LAB_01e107a6;
    }
LAB_01e107ae:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = arg1[1];
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      *arg1 = lVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01e107a6:
      *(void*)(arg1 + 1) = 1;
      goto LAB_01e107ae;
    }
    *arg1 = local_48;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_01e1076f:
    *(void*)(arg1 + 1) = 1;
  }
  if (*arg1 == 0) {
    FUN_00e99c70();
    local_c8 = local_68;
    local_c0 = '\0';
    local_b8 = 0;
    local_b0 = '\0';
    FUN_00d8ede0();
    local_58 = local_78;
    local_50 = 0;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_50 = '\x01';
    (**(code **)(*local_d8 + 0x368))(&local_b8,&local_c8,&local_58);
    lVar3 = local_48;
    lVar1 = *arg1;
    if (lVar1 == local_48) {
      if (((char)arg1[1] == '\0') && (local_48 != 0)) {
        if (local_40 != '\0') goto LAB_01e10b07;
        FUN_00d50b00();
        goto LAB_01e10c6a;
      }
LAB_01e10c72:
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar2 = arg1[1];
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        *arg1 = lVar3;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01e10c6a:
        *(void*)(arg1 + 1) = 1;
        goto LAB_01e10c72;
      }
      *arg1 = local_48;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01e10b07:
      *(void*)(arg1 + 1) = 1;
      local_40 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
LAB_01e107dc:
  plVar7 = (int64_t *)*arg1;
  if (plVar7 == (int64_t *)0x0) {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_025795a8;
    (*g_025795c0)();
    FUN_01e125e0();
    FUN_00d50b20();
  }
  else {
    if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar7 = arg1;
    if (cVar4 == '\0') {
      plVar7 = &g_02802688;
    }
    if (*plVar7 == 0) {
      plVar7 = (int64_t *)*arg1;
      uVar9 = extraout_XMM0_Da;
      if ((g_027048b0 == '\0') &&
         (iVar5 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Da_02, iVar5 != 0)) {
        g_026cd478 = FUN_00d4fe50();
        g_026cd460 = "GNList";
        g_026cd468 = 0x20;
        g_026cd470 = FUN_00018210;
        g_026cd480 = 0;
        ram_00000000026cd488 = 0;
        g_026cd490 = 0;
        g_026cd508 = 0;
        ram_00000000026cd510 = 0;
        g_026cd518 = 0;
        g_026cd51a = 6;
        g_026cd498 = 0;
        ram_00000000026cd4a0 = 0;
        g_026cd4a8 = 0;
        ram_00000000026cd4b0 = 0;
        g_026cd4b8 = 0;
        ram_00000000026cd4c0 = 0;
        g_026cd4c8 = 0;
        ram_00000000026cd4d0 = 0;
        g_026cd4d8 = 0;
        ram_00000000026cd4e0 = 0;
        g_026cd4e8 = 0;
        ram_00000000026cd4f0 = 0;
        g_026cd4f8 = 0;
        ram_00000000026cd500 = 0;
        g_026cd523 = 0;
        g_026cd51b = 0;
        uVar9 = ___cxa_guard_release();
      }
      plVar8 = &g_02802688;
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar4 = FUN_00e85ea0();
        uVar9 = extraout_XMM0_Da_00;
        if (cVar4 != '\0') {
          if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
          cVar4 = FUN_00e8da30();
          plVar8 = arg1;
          uVar9 = extraout_XMM0_Da_01;
          if (cVar4 == '\0') {
            plVar8 = &g_02802688;
          }
        }
      }
      lVar1 = g_027d64a0;
      if (*plVar8 == 0) {
        (**(code **)(*(int64_t *)*arg1 + 400))();
        lVar1 = local_48;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01e125e0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_98 = *arg1;
        local_90 = '\0';
        if (g_027d64a0 != 0) {
          uVar9 = FUN_00d50b00();
        }
        local_88 = lVar1;
        local_80 = '\x01';
        FUN_00d95130(uVar9,&local_88);
        lVar1 = local_48;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01e125e0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_a8 = *arg1;
      local_a0 = '\0';
      FUN_00d8dab0();
      lVar1 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01e125e0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*this_ptr + 0x540))();
  return;
}

