// Function: FUN_019a8300
// Address: 019a8300
// Size: 1072 bytes
// Class: MUEditorElementView
// String references:
//   "MUEditorElementView"

void* FUN_019a8300(uint32_t param_1,uint32_t param_2)

{
  char cVar1;
  void*puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t **pplVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  undefined7 uVar11;
  uint64_t uVar12;
  int64_t *local_58;
  char local_50;
  uint64_t local_48;
  uint64_t local_40;
  int64_t *local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  lVar3 = *(int64_t *)(arg1 + 0x38);
  uVar5 = *(uint *)(lVar3 + 0xc);
  uVar12 = (uint64_t)uVar5;
  if (0 < (int)uVar5) {
    local_38 = (int64_t *)0x0;
    local_48 = 0;
    uVar8 = 0;
    plVar7 = (int64_t *)0x0;
    do {
      uVar5 = uVar5 - 1;
      plVar10 = *(int64_t **)(*(int64_t *)(lVar3 + 0x10) + (uint64_t)uVar5 * 8);
      local_58 = plVar10;
      local_50 = '\0';
      uVar4 = 0;
      if ((g_02733c90 == '\0') && (uVar4 = ___cxa_guard_acquire(), (int)uVar4 != 0)) {
        g_02714138 = FUN_0034cf20();
        g_02714120 = "MUEditorElementView";
        g_02714128 = 0x1f8;
        g_02714130 = FUN_0034ceb0;
        g_02714140 = 0;
        ram_0000000002714148 = 0;
        g_02714150 = 0;
        g_027141c8 = 0;
        ram_00000000027141d0 = 0;
        g_027141d8 = 0;
        g_027141da = 1;
        g_02714158 = 0;
        ram_0000000002714160 = 0;
        g_02714168 = 0;
        ram_0000000002714170 = 0;
        g_02714178 = 0;
        ram_0000000002714180 = 0;
        g_02714188 = 0;
        ram_0000000002714190 = 0;
        g_02714198 = 0;
        ram_00000000027141a0 = 0;
        g_027141a8 = 0;
        ram_00000000027141b0 = 0;
        g_027141b8 = 0;
        ram_00000000027141c0 = 0;
        g_027141e3 = 0;
        g_027141db = 0;
        uVar4 = ___cxa_guard_release();
      }
      pplVar6 = (int64_t **)&g_02802688;
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        uVar4 = FUN_00e85ea0();
        pplVar6 = &local_58;
        if ((char)uVar4 == '\0') {
          pplVar6 = (int64_t **)&g_02802688;
        }
      }
      plVar10 = *pplVar6;
      cVar1 = (char)uVar8;
      if (plVar10 == plVar7) {
        plVar9 = plVar7;
        if ((cVar1 == '\0') && (plVar10 != (int64_t *)0x0)) {
          if (*(char *)(pplVar6 + 1) != '\0') goto LAB_019a8413;
          local_40 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
          FUN_00d50b00();
        }
        else {
          local_40 = uVar8;
        }
      }
      else {
        plVar9 = plVar10;
        if (*(char *)(pplVar6 + 1) == '\0') {
          if (plVar10 != (int64_t *)0x0) {
            uVar4 = FUN_00d50b00();
          }
          local_40 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
          if ((cVar1 != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((cVar1 != '\0') && (plVar7 != (int64_t *)0x0)) {
            uVar4 = FUN_00d50b20();
          }
LAB_019a8413:
          *(void*)(pplVar6 + 1) = 0;
          local_40 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
          plVar10 = plVar9;
        }
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = local_48;
      if ((plVar9 != (int64_t *)0x0) &&
         (cVar1 = (**(code **)(*plVar9 + 0x958))(param_1,param_2), uVar8 = local_48, cVar1 != '\0'))
      {
        (**(code **)(*plVar9 + 0x928))();
        plVar7 = local_58;
        uVar11 = (undefined7)((uint64_t)plVar10 >> 8);
        plVar10 = local_58;
        if (local_58 == local_38) {
          uVar8 = local_48;
          plVar7 = local_38;
          if (((char)local_48 == '\0') && (local_58 != (int64_t *)0x0)) {
            uVar8 = CONCAT71(uVar11,1);
            plVar7 = local_38;
            if (local_50 != '\0') goto joined_r0x019a8601;
            FUN_00d50b00();
LAB_019a857b:
            uVar8 = CONCAT71(uVar11,1);
            plVar7 = local_38;
          }
joined_r0x019a861d:
          local_38 = plVar7;
          plVar10 = local_58;
          if (local_50 != '\0') {
LAB_019a8581:
            plVar10 = local_58;
            plVar7 = local_38;
            if (local_58 != (int64_t *)0x0) {
              FUN_00d50b20();
              plVar10 = local_58;
              plVar7 = local_38;
            }
          }
        }
        else {
          if (local_50 == '\0') {
            if (local_58 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            uVar8 = CONCAT71(uVar11,1);
            if ((char)local_48 == '\0') goto joined_r0x019a861d;
            if (local_38 != (int64_t *)0x0) {
              FUN_00d50b20();
              local_38 = plVar7;
              goto LAB_019a857b;
            }
            local_38 = plVar7;
            plVar10 = local_58;
            if (local_50 == '\0') goto joined_r0x019a8601;
            goto LAB_019a8581;
          }
          uVar8 = CONCAT71(uVar11,1);
          if (((char)local_48 != '\0') && (local_38 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar10 = local_58;
          }
        }
joined_r0x019a8601:
        local_58 = plVar7;
        if (local_58 == (int64_t *)0x0) {
          local_38 = (int64_t *)0x0;
          local_58 = plVar10;
        }
        else {
          local_50 = '\0';
          local_38 = local_58;
          FUN_00d235a0();
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((int64_t)uVar12 < 2) goto LAB_019a86eb;
      uVar12 = uVar12 - 1;
      lVar3 = *(int64_t *)(arg1 + 0x38);
      local_48 = uVar8;
      uVar8 = local_40;
      plVar7 = plVar9;
    } while( true );
  }
  uVar8 = 0;
  plVar7 = (int64_t *)0x0;
  cVar1 = '\0';
  plVar9 = (int64_t *)0x0;
LAB_019a8700:
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  if (((char)uVar8 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar1 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
LAB_019a86eb:
  cVar1 = (char)local_40;
  plVar7 = local_38;
  goto LAB_019a8700;
}

