// Function: FUN_00d56410
// Address: 00d56410
// Size: 1556 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNObject"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00d56410(uint32_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t in_RCX;
  int64_t *plVar5;
  char *pcVar6;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_b0;
  uint8_t local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78 [8];
  int64_t local_70;
  int local_68;
  int iStack_64;
  int local_60;
  int64_t *local_58;
  char local_50;
  int64_t *plVar8;
  
  local_70 = *param_2;
  if (*(int *)(local_70 + 0xc) == 1) {
    uVar7 = FUN_00d23310();
    cVar2 = local_78[0];
    pcVar6 = &stack0xffffffffffffffc0;
    if (local_78[0] != '\0') {
      pcVar6 = local_78;
    }
    *pcVar6 = '\0';
    if ((local_78[0] != '\0') && (local_80 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    if ((cVar2 == '\0') && (local_80 != 0)) {
      uVar7 = FUN_00e31530(uVar7,0);
    }
    local_90 = local_80;
    local_88 = '\x01';
    (**(code **)(*arg1 + 0x88))(uVar7,&local_90);
    if (local_88 == '\0') {
      return this_ptr;
    }
    if (local_90 == 0) {
      return this_ptr;
    }
    FUN_00d50b20();
    return this_ptr;
  }
  if (arg1 != (int64_t *)0x0) {
    param_1 = FUN_00e31530(in_RCX,0);
    local_70 = *param_2;
    if (local_70 == 0) {
      *(void*)(this_ptr + 1) = 0;
      goto LAB_00d56a3a;
    }
  }
  local_78[0] = '\0';
  local_80 = 0;
  local_68 = -1;
  iStack_64 = 0;
  local_60 = 0;
  plVar8 = arg1;
  while( true ) {
    lVar4 = (int64_t)local_68;
    local_68 = local_68 + 1;
    if (*(int *)(local_70 + 0xc) <= local_68) break;
    local_80 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + 8 + lVar4 * 8);
    if ((g_027048b0 == '\0') &&
       (iVar3 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_00, iVar3 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026cd460 = "GNList";
      g_026cd468 = 0x20;
      g_026cd470 = FUN_00018210;
      g_026cd478 = &g_028a7cd0;
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
      param_1 = ___cxa_guard_release();
    }
    plVar5 = &g_02802688;
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar5 = (int64_t *)&stack0xffffffffffffffc0;
      param_1 = extraout_XMM0_Da;
      if (cVar2 == '\0') {
        plVar5 = &g_02802688;
      }
    }
    lVar4 = *plVar5;
    lVar1 = plVar5[1];
    if (((char)lVar1 == '\0') || (lVar4 == 0)) {
      if (lVar4 != 0) goto LAB_00d56609;
      local_a0 = local_80;
      local_98 = '\0';
      param_1 = (**(code **)(*plVar8 + 0x88))(plVar5,&local_a0);
      arg1 = local_58;
      if (local_58 == plVar8) {
joined_r0x00d567bb:
        arg1 = plVar8;
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          param_1 = FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00e31530(param_1,0);
          }
          param_1 = FUN_00d50b20();
          plVar8 = arg1;
          goto joined_r0x00d567bb;
        }
        param_1 = FUN_00d50b20();
        local_50 = '\0';
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        param_1 = FUN_00d50b20();
      }
      plVar8 = arg1;
      if (arg1 == (int64_t *)0x0) {
        arg1 = (int64_t *)0x0;
        goto LAB_00d56a0b;
      }
    }
    else {
      param_1 = FUN_00e31530(plVar5,0);
LAB_00d56609:
      local_a8 = 0;
      local_b0 = lVar4;
      param_1 = FUN_00d56b80(param_1,&local_b0);
      arg1 = local_58;
      if (plVar8 == local_58) {
        plVar5 = plVar8;
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          param_1 = FUN_00d50b20();
        }
      }
      else {
        plVar5 = arg1;
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            param_1 = FUN_00e31530(param_1,0);
          }
          if (plVar8 != (int64_t *)0x0) {
            param_1 = FUN_00d50b20();
          }
        }
        else if (plVar8 != (int64_t *)0x0) {
          param_1 = FUN_00d50b20();
        }
      }
      if ((char)lVar1 != '\0') {
        param_1 = FUN_00d50b20();
      }
      plVar8 = plVar5;
      if (plVar5 == (int64_t *)0x0) {
LAB_00d56a0b:
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        FUN_00018280();
        if (arg1 == (int64_t *)0x0) {
          return this_ptr;
        }
        FUN_00d50b20();
        return this_ptr;
      }
    }
    iVar3 = iStack_64;
    if (iStack_64 != 0) {
      if (iStack_64 < 1) {
        iStack_64 = -iStack_64;
      }
      else {
        local_68 = local_68 - iStack_64;
        param_1 = FUN_00d23690(param_1,iStack_64);
        local_60 = local_60 + iVar3;
        iStack_64 = 0;
      }
    }
  }
  FUN_00018280();
  *(void*)(this_ptr + 1) = 0;
LAB_00d56a3a:
  *this_ptr = arg1;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

