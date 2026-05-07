// Function: FUN_01bf3db0
// Address: 01bf3db0
// Size: 1841 bytes
// Class: GNList
// String references:
//   "GNList"
//   "MUMultiTrackItem"
//   "MUMultiTrackView"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01bf3db0(uint64_t param_1,int64_t *param_2)

{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  int64_t *arg1;
  uint64_t unaff_R13;
  int64_t *plVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  uint32_t local_38;
  char local_31;
  
  local_68 = param_2;
  uVar7 = FUN_01d26010();
  if (local_60 == (int64_t *)0x0) {
    plVar3 = (int64_t *)0x0;
  }
  else {
    plVar3 = (int64_t *)(**(code **)(*local_60 + 0x10))();
    uVar7 = extraout_XMM0_Da;
  }
  if ((g_026fe4d0 == '\0') &&
     (iVar2 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_03, iVar2 != 0)) {
    g_02726438 = FUN_0006d940();
    g_02726420 = "MUMultiTrackView";
    g_02726428 = 0x228;
    g_02726430 = FUN_00082de0;
    g_02726440 = 0;
    ram_0000000002726448 = 0;
    g_02726450 = 0;
    g_027264c8 = 0;
    ram_00000000027264d0 = 0;
    g_027264d8 = 0;
    g_027264da = 1;
    g_02726458 = 0;
    ram_0000000002726460 = 0;
    g_02726468 = 0;
    ram_0000000002726470 = 0;
    g_02726478 = 0;
    ram_0000000002726480 = 0;
    g_02726488 = 0;
    ram_0000000002726490 = 0;
    g_02726498 = 0;
    ram_00000000027264a0 = 0;
    g_027264a8 = 0;
    ram_00000000027264b0 = 0;
    g_027264b8 = 0;
    ram_00000000027264c0 = 0;
    g_027264e3 = 0;
    g_027264db = 0;
    uVar7 = ___cxa_guard_release();
  }
  uVar8 = (uint32_t)CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
  if (plVar3 == (int64_t *)0x0) {
LAB_01bf3e45:
    plVar3 = (int64_t *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar1 = FUN_00e85ea0();
    uVar7 = extraout_XMM0_Da_00;
    if (cVar1 == '\0') goto LAB_01bf3e45;
    uVar7 = FUN_00d50b00();
    uVar8 = 0;
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    uVar7 = FUN_00d50b20();
  }
  if ((char)uVar8 != '\0') {
    local_80 = *local_68;
    local_78 = '\0';
    FUN_01df91e0(uVar7,&local_80);
    if (local_78 == '\0') {
      return;
    }
    if (local_80 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  plVar6 = (int64_t *)*arg1;
  local_70 = plVar3;
  local_38 = uVar8;
  if ((g_027048b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
  plVar3 = &g_02802688;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 != '\0') {
      if ((g_026fe4e0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        g_026d7a88 = FUN_00d4fe50();
        g_026d7a70 = "MUMultiTrackItem";
        g_026d7a78 = 0x60;
        g_026d7a80 = FUN_0006eae0;
        g_026d7a90 = 0;
        ram_00000000026d7a98 = 0;
        g_026d7aa0 = 0;
        g_026d7b18 = 0;
        ram_00000000026d7b20 = 0;
        g_026d7b28 = 0;
        g_026d7b2a = 1;
        g_026d7aa8 = 0;
        ram_00000000026d7ab0 = 0;
        g_026d7ab8 = 0;
        ram_00000000026d7ac0 = 0;
        g_026d7ac8 = 0;
        ram_00000000026d7ad0 = 0;
        g_026d7ad8 = 0;
        ram_00000000026d7ae0 = 0;
        g_026d7ae8 = 0;
        ram_00000000026d7af0 = 0;
        g_026d7af8 = 0;
        ram_00000000026d7b00 = 0;
        g_026d7b08 = 0;
        ram_00000000026d7b10 = 0;
        g_026d7b33 = 0;
        g_026d7b2b = 0;
        ___cxa_guard_release();
      }
      cVar1 = FUN_00e8da30();
      plVar3 = arg1;
      if (cVar1 == '\0') {
        plVar3 = &g_02802688;
      }
    }
  }
  plVar6 = local_70;
  cVar1 = (char)plVar3[1];
  if ((cVar1 == '\0') || (*plVar3 == 0)) {
    if (*plVar3 == 0) {
      (**(code **)(*local_70 + 0x9d0))();
      goto LAB_01bf4240;
    }
  }
  else {
    FUN_00d50b00();
  }
  uVar7 = local_38;
  uVar8 = FUN_01d2b630();
  plVar3 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      uVar8 = FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
      goto LAB_01bf3fc0;
    }
  }
  else if (local_60 != (int64_t *)0x0) {
LAB_01bf3fc0:
    local_31 = cVar1;
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_68 = plVar3;
    local_50 = plVar3;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar2 = 0;
    while( true ) {
      if (iVar2 != 0) {
        if (iVar2 < 1) {
          iVar2 = -iVar2;
        }
        else {
          local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar2);
          uVar8 = FUN_00d23690(uVar8,iVar2);
          local_40 = local_40 + iVar2;
          iVar2 = 0;
        }
        local_48 = CONCAT44(iVar2,(int)local_48);
      }
      lVar4 = (int64_t)(int)local_48;
      iVar2 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar2);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar2) break;
      plVar3 = *(int64_t **)(local_50[2] + 8 + lVar4 * 8);
      local_60 = plVar3;
      if ((g_026fe4e0 == '\0') &&
         (iVar2 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_02, iVar2 != 0)) {
        g_026d7a88 = FUN_00d4fe50();
        g_026d7a70 = "MUMultiTrackItem";
        g_026d7a78 = 0x60;
        g_026d7a80 = FUN_0006eae0;
        g_026d7a90 = 0;
        ram_00000000026d7a98 = 0;
        g_026d7aa0 = 0;
        g_026d7b18 = 0;
        ram_00000000026d7b20 = 0;
        g_026d7b28 = 0;
        g_026d7b2a = 1;
        g_026d7aa8 = 0;
        ram_00000000026d7ab0 = 0;
        g_026d7ab8 = 0;
        ram_00000000026d7ac0 = 0;
        g_026d7ac8 = 0;
        ram_00000000026d7ad0 = 0;
        g_026d7ad8 = 0;
        ram_00000000026d7ae0 = 0;
        g_026d7ae8 = 0;
        ram_00000000026d7af0 = 0;
        g_026d7af8 = 0;
        ram_00000000026d7b00 = 0;
        g_026d7b08 = 0;
        ram_00000000026d7b10 = 0;
        g_026d7b33 = 0;
        g_026d7b2b = 0;
        uVar8 = ___cxa_guard_release();
      }
      pplVar5 = (int64_t **)&g_02802688;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar5 = &local_60;
        uVar8 = extraout_XMM0_Da_01;
        if (cVar1 == '\0') {
          pplVar5 = (int64_t **)&g_02802688;
        }
      }
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (*pplVar5 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_01bf40c1;
        }
      }
      else {
        *(void*)(pplVar5 + 1) = 0;
        if (*pplVar5 != (int64_t *)0x0) {
LAB_01bf40c1:
          cVar1 = FUN_00d23d70();
          if (cVar1 == '\0') {
            FUN_01bc08b0();
          }
          uVar8 = FUN_00d50b20();
        }
      }
      iVar2 = local_48._4_4_;
    }
    FUN_00083b20();
    FUN_00d50b20();
    plVar6 = local_70;
    cVar1 = local_31;
    uVar7 = local_38;
  }
  (**(code **)(*plVar6 + 0x9d0))();
  if (cVar1 != '\0') {
    FUN_00d50b20();
  }
  if ((char)uVar7 != '\0') {
    return;
  }
LAB_01bf4240:
  FUN_00d50b20();
  return;
}

