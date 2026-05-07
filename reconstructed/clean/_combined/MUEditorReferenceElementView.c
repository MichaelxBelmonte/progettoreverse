// ===================================================================
// MUEditorReferenceElementView — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 019a7d70
// ============================================================
// Function: FUN_019a7d70
// Address: 019a7d70
// Size: 1072 bytes
// Class: MUEditorReferenceElementView
// String references:
//   "MUEditorReferenceElementView"

void* FUN_019a7d70(uint32_t param_1,uint32_t param_2)

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
      if ((g_02734210 == '\0') && (uVar4 = ___cxa_guard_acquire(), (int)uVar4 != 0)) {
        g_02734160 = FUN_0034cf20();
        g_02734148 = "MUEditorReferenceElementView";
        g_02734150 = 0x1f8;
        g_02734158 = FUN_0082d150;
        g_02734168 = 0;
        ram_0000000002734170 = 0;
        g_02734178 = 0;
        g_027341f0 = 0;
        ram_00000000027341f8 = 0;
        g_02734200 = 0;
        g_02734202 = 1;
        g_02734180 = 0;
        ram_0000000002734188 = 0;
        g_02734190 = 0;
        ram_0000000002734198 = 0;
        g_027341a0 = 0;
        ram_00000000027341a8 = 0;
        g_027341b0 = 0;
        ram_00000000027341b8 = 0;
        g_027341c0 = 0;
        ram_00000000027341c8 = 0;
        g_027341d0 = 0;
        ram_00000000027341d8 = 0;
        g_027341e0 = 0;
        ram_00000000027341e8 = 0;
        g_0273420b = 0;
        g_02734203 = 0;
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
          if (*(char *)(pplVar6 + 1) != '\0') goto LAB_019a7e83;
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
LAB_019a7e83:
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
            if (local_50 != '\0') goto joined_r0x019a8071;
            FUN_00d50b00();
LAB_019a7feb:
            uVar8 = CONCAT71(uVar11,1);
            plVar7 = local_38;
          }
joined_r0x019a808d:
          local_38 = plVar7;
          plVar10 = local_58;
          if (local_50 != '\0') {
LAB_019a7ff1:
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
            if ((char)local_48 == '\0') goto joined_r0x019a808d;
            if (local_38 != (int64_t *)0x0) {
              FUN_00d50b20();
              local_38 = plVar7;
              goto LAB_019a7feb;
            }
            local_38 = plVar7;
            plVar10 = local_58;
            if (local_50 == '\0') goto joined_r0x019a8071;
            goto LAB_019a7ff1;
          }
          uVar8 = CONCAT71(uVar11,1);
          if (((char)local_48 != '\0') && (local_38 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar10 = local_58;
          }
        }
joined_r0x019a8071:
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
      if ((int64_t)uVar12 < 2) goto LAB_019a815b;
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
LAB_019a8170:
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  if (((char)uVar8 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar1 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
LAB_019a815b:
  cVar1 = (char)local_40;
  plVar7 = local_38;
  goto LAB_019a8170;
}

