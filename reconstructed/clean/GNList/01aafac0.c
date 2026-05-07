// Function: FUN_01aafac0
// Address: 01aafac0
// Size: 1662 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNString"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01aafac0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  uint32_t uVar7;
  int64_t **pplVar8;
  void*this_ptr;
  int64_t *plVar9;
  int64_t *plVar10;
  bool bVar11;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  bool local_48;
  int64_t *local_40;
  char local_38 [8];
  
  if ((((int64_t *)*param_2 == (int64_t *)0x0) ||
      (cVar5 = (**(code **)(*(int64_t *)*param_2 + 0x3a0))(), cVar5 == '\0')) ||
     (cVar5 = FUN_00ce6e30(), cVar5 == '\0')) goto LAB_01aaff76;
  FUN_00ca1380();
  bVar11 = local_38[0] == '\0';
  local_50 = local_40;
  if (bVar11) {
    local_48 = false;
  }
  else {
    local_48 = true;
    local_38[0] = '\0';
  }
  local_48 = !bVar11;
  if ((g_027048b0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
    ___cxa_guard_release();
  }
  pplVar8 = (int64_t **)&g_02802688;
  if (local_40 != (int64_t *)0x0) {
    (**(code **)(*local_40 + 0x360))();
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
      cVar5 = FUN_00e8da30();
      if (cVar5 == '\0') {
        pplVar8 = (int64_t **)&g_02802688;
      }
      else {
        pplVar8 = &local_50;
      }
    }
  }
  local_58 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_48 != false) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 == (int64_t *)0x0) goto LAB_01aaff76;
  (**(code **)(*(int64_t *)*param_2 + 0x368))();
  plVar3 = local_50;
  if (local_48 == false) {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = false;
  }
  local_40 = plVar3;
  local_38[0] = '\0';
  iVar6 = FUN_00d237a0();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != false) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar6 != -1) {
    FUN_00c9fe20();
    plVar3 = local_40;
    pplVar8 = (int64_t **)local_38;
    if (local_38[0] == '\0') {
      pplVar8 = &local_50;
    }
    local_50 = (int64_t *)CONCAT71(local_50._1_7_,local_38[0]);
    *(void*)pplVar8 = 0;
    if ((local_38[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(plVar3[2] + (int64_t)iVar6 * 8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if ((char)local_50 != '\0') {
      FUN_00d50b20();
    }
    FUN_017bf050();
    (**(code **)(*local_50 + 0x368))();
    plVar3 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_48 != false) && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    cVar5 = FUN_00d90870();
    if (cVar5 != '\0') {
      uVar7 = FUN_00d8c7a0();
      FUN_00d8f140(extraout_XMM0_Da,uVar7);
      plVar4 = local_40;
      if (((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
         ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != (int64_t *)0x0)))) {
        FUN_00d50b20();
      }
      lVar2 = g_02704060;
      if (g_02704060 != 0) {
        FUN_00d50b00();
      }
      cVar5 = FUN_00d90870();
      uVar7 = extraout_XMM0_Da_00;
      if (lVar2 != 0) {
        uVar7 = FUN_00d50b20();
      }
      plVar10 = plVar4;
      if (cVar5 != '\0') {
        FUN_00d8f140(uVar7,1);
        plVar10 = local_40;
        plVar9 = plVar4;
        if (plVar4 != local_40) {
          if (local_38[0] != '\0') {
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_01aafe81;
          }
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          plVar9 = plVar10;
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        plVar10 = plVar9;
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_01aafe81:
      uVar7 = FUN_017bf050();
      local_60 = '\0';
      local_68 = plVar10;
      (**(code **)(*local_50 + 0x400))(uVar7,&local_68);
      plVar4 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != false) && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar4 != (int64_t *)0x0) {
        cVar5 = (**(code **)(*plVar4 + 0x3a0))();
        if ((cVar5 != '\0') && (cVar5 = FUN_00ce6e30(), cVar5 != '\0')) {
          *this_ptr = plVar4;
          *(void*)(this_ptr + 1) = 1;
          if (plVar10 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (plVar3 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          return;
        }
        FUN_00d50b20();
      }
      if (plVar10 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01aaff76:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

