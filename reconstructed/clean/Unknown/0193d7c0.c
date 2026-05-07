// Function: FUN_0193d7c0
// Address: 0193d7c0
// Size: 916 bytes
// Class: Unknown

void* FUN_0193d7c0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  void*puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t *plVar8;
  int64_t arg1;
  void*this_ptr;
  uint64_t uVar9;
  undefined7 uVar11;
  uint64_t uVar10;
  int64_t **pplVar12;
  uint64_t uVar13;
  int64_t *local_60;
  char local_58;
  uint64_t local_50;
  int64_t *local_48;
  uint64_t local_40;
  int64_t *local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar5 = *(int64_t *)(arg1 + 0x38);
  uVar7 = *(uint *)(lVar5 + 0xc);
  uVar13 = (uint64_t)uVar7;
  if (0 < (int)uVar7) {
    local_48 = (int64_t *)0x0;
    local_38 = (int64_t *)0x0;
    local_50 = 0;
    uVar9 = 0;
    do {
      uVar7 = uVar7 - 1;
      plVar1 = *(int64_t **)(*(int64_t *)(lVar5 + 0x10) + (uint64_t)uVar7 * 8);
      local_58 = '\0';
      local_60 = plVar1;
      uVar6 = FUN_008291b0();
      pplVar12 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        uVar6 = FUN_00e85ea0();
        pplVar12 = &local_60;
        if ((char)uVar6 == '\0') {
          pplVar12 = (int64_t **)&g_02802688;
        }
      }
      plVar8 = *pplVar12;
      cVar3 = (char)uVar9;
      if (plVar8 == local_48) {
        plVar2 = local_48;
        local_40 = uVar9;
        if ((cVar3 == '\0') && (plVar8 != (int64_t *)0x0)) {
          plVar8 = local_48;
          if (*(char *)(pplVar12 + 1) != '\0') goto LAB_0193d8e5;
          local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
          FUN_00d50b00();
          plVar2 = local_48;
        }
      }
      else if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar8 != (int64_t *)0x0) {
          uVar6 = FUN_00d50b00();
        }
        local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        plVar2 = plVar8;
        if ((cVar3 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((cVar3 != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar6 = FUN_00d50b20();
        }
LAB_0193d8e5:
        *(void*)(pplVar12 + 1) = 0;
        plVar2 = plVar8;
        local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      }
      local_48 = plVar2;
      if ((local_58 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar8 = local_48;
      uVar10 = local_50;
      if (local_48 == (int64_t *)0x0) {
LAB_0193d9e0:
        uVar10 = uVar10 & 0xffffffff;
      }
      else {
        (**(code **)(*local_48 + 0x4d8))();
        cVar3 = FUN_00d054a0();
        if (cVar3 == '\0') goto LAB_0193d9e0;
        FUN_01956980();
        plVar2 = local_60;
        uVar11 = (undefined7)((uint64_t)plVar1 >> 8);
        cVar3 = (char)uVar10;
        plVar1 = local_60;
        if (local_60 == local_38) {
          if ((cVar3 == '\0') && (local_60 != (int64_t *)0x0)) {
            uVar10 = CONCAT71(uVar11,1);
            plVar2 = local_38;
            if (local_58 != '\0') goto joined_r0x0193dad7;
            FUN_00d50b00();
LAB_0193da66:
            uVar10 = CONCAT71(uVar11,1);
            plVar2 = local_38;
          }
          else {
            uVar10 = uVar10 & 0xffffffff;
            plVar2 = local_38;
          }
joined_r0x0193daf7:
          local_38 = plVar2;
          plVar1 = local_60;
          if (local_58 != '\0') {
LAB_0193da6c:
            plVar1 = local_60;
            plVar2 = local_38;
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b20();
              plVar1 = local_60;
              plVar2 = local_38;
            }
            goto joined_r0x0193daeb;
          }
joined_r0x0193dad7:
          local_60 = plVar2;
          if (local_60 == (int64_t *)0x0) goto LAB_0193dad9;
LAB_0193da83:
          local_58 = '\0';
          local_38 = local_60;
          FUN_00d235a0();
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_58 == '\0') {
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            uVar10 = CONCAT71(uVar11,1);
            if (cVar3 == '\0') goto joined_r0x0193daf7;
            if (local_38 != (int64_t *)0x0) {
              FUN_00d50b20();
              local_38 = plVar2;
              goto LAB_0193da66;
            }
            local_38 = plVar2;
            plVar1 = local_60;
            if (local_58 == '\0') goto joined_r0x0193dad7;
            goto LAB_0193da6c;
          }
          uVar10 = CONCAT71(uVar11,1);
          if ((cVar3 == '\0') || (local_38 == (int64_t *)0x0)) goto joined_r0x0193dad7;
          FUN_00d50b20();
          plVar1 = local_60;
joined_r0x0193daeb:
          local_60 = plVar2;
          if (local_60 != (int64_t *)0x0) goto LAB_0193da83;
LAB_0193dad9:
          local_60 = plVar1;
          local_38 = (int64_t *)0x0;
        }
      }
      if ((int64_t)uVar13 < 2) goto LAB_0193db21;
      uVar13 = uVar13 - 1;
      lVar5 = *(int64_t *)(arg1 + 0x38);
      uVar9 = local_40;
      local_50 = uVar10;
    } while( true );
  }
  uVar10 = 0;
  local_38 = (int64_t *)0x0;
  local_40 = 0;
  plVar8 = (int64_t *)0x0;
LAB_0193db21:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  if (((char)uVar10 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

