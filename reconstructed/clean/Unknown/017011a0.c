// Function: FUN_017011a0
// Address: 017011a0
// Size: 1509 bytes
// Class: Unknown
// String references:
//   "%I bpm  (%I)"
//   "%@ = %I bpm  (%I)"
//   "%I bpm"
//   "%@ = %I bpm"

void* FUN_017011a0(uint *param_1,void*param_2)

{
  int iVar1;
  int64_t lVar2;
  void*puVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  void*puVar6;
  void *pvVar7;
  int iVar8;
  void* pVar9;
  void*this_ptr;
  uint64_t uVar11;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t local_e8;
  uint8_t local_e0;
  double local_d8;
  uint *local_d0;
  double local_c0;
  void*local_b8;
  uint64_t local_b0;
  int64_t local_a8;
  char local_a0;
  double local_98;
  uint local_8c;
  void*local_88;
  void*local_80;
  void*local_78;
  uint local_70;
  uint32_t local_6c;
  int64_t local_68;
  char local_60;
  uint32_t local_58;
  uint32_t local_54;
  void*local_50;
  uint local_48;
  uint32_t local_44;
  void*local_40;
  char local_38;
  double *pdVar10;
  
  local_d0 = param_1;
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  local_88 = puVar6;
  (*g_02572370)();
  local_8c = 0;
  local_c0 = 120.0;
  local_e8 = *param_2;
  local_e0 = 0;
  pdVar10 = &local_c0;
  local_b8 = param_2;
  FUN_016fafa0(pdVar10,&local_e8,&local_8c);
  puVar6 = local_78;
  if (((char)local_70 == '\0') && (local_78 != (void*)0x0)) {
    FUN_00d50b00();
  }
  if (7 < *(int *)(puVar6 + 3)) {
    uVar11 = 0;
    local_80 = puVar6;
    do {
      pVar9 = (void*)pdVar10;
      local_b0 = *(void*)(puVar6[2] + uVar11 * 8);
      local_98 = local_c0;
      local_d8 = (double)FUN_00e7c860();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = (void*)FUN_0190a000();
      FUN_00e7bdc0();
      puVar6 = local_80;
      local_98 = local_98 * local_d8;
      if ((int)((uint64_t)local_78 >> 0x20) == 1) {
        uVar5 = SUB84(local_78,0);
        if (uVar11 == local_8c) {
          local_6c = FUN_00e7d850(local_98);
          local_70 = 2;
          local_78 = (void*)&g_024c3df0;
          local_68 = CONCAT44(local_68._4_4_,uVar5);
          FUN_00d8cb40(extraout_XMM0_Qa,&local_78);
          puVar3 = local_50;
          puVar6 = local_80;
          if ((char)local_48 == '\0') {
            if (local_50 != (void*)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = local_48 & 0xffffff00;
          }
          local_40 = puVar3;
          local_38 = '\0';
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar3 != (void*)0x0) {
            FUN_00d50b20();
          }
          if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d970b0();
          uVar4 = FUN_00e7d850(local_98);
          lVar2 = local_a8;
          local_70 = 3;
          local_78 = &g_024c5048;
          local_60 = 0;
          uVar12 = extraout_XMM0_Qa_00;
          if (local_a8 != 0) {
            uVar12 = FUN_00d50b00();
          }
          local_68 = lVar2;
          local_60 = '\x01';
          local_78 = (void*)&g_02509758;
          local_58 = uVar4;
          local_54 = uVar5;
          FUN_00d8cb40(uVar12,&local_78);
          puVar3 = local_50;
          puVar6 = local_80;
          if ((char)local_48 == '\0') {
            if (local_50 != (void*)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = local_48 & 0xffffff00;
          }
          local_40 = puVar3;
          local_38 = '\0';
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar3 != (void*)0x0) {
            FUN_00d50b20();
          }
          if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
            FUN_00d50b20();
          }
          local_78 = &g_024c5048;
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else if (uVar11 == local_8c) {
        local_44 = FUN_00e7d850(local_98);
        local_48 = 1;
        local_50 = &g_024cc6f0;
        FUN_00d8cb40(&g_024cc6f0,&local_50);
        puVar3 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_78 = puVar3;
        local_70 = local_70 & 0xffffff00;
        FUN_00d21140();
        if (((char)local_70 != '\0') && (local_78 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar3 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d970b0();
        uVar5 = FUN_00e7d850(local_98);
        lVar2 = local_a8;
        local_70 = 2;
        local_78 = &g_024c5048;
        local_60 = 0;
        uVar12 = extraout_XMM0_Qa_01;
        if (local_a8 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_68 = lVar2;
        local_60 = '\x01';
        local_78 = (void*)&g_025df2a0;
        local_58 = uVar5;
        FUN_00d8cb40(uVar12,&local_78);
        puVar3 = local_50;
        if ((char)local_48 == '\0') {
          if (local_50 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = local_48 & 0xffffff00;
        }
        local_40 = puVar3;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar3 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_78 = &g_024c5048;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      }
      uVar11 = uVar11 + 1;
      iVar1 = *(int *)(puVar6 + 3);
      iVar8 = iVar1 + 7;
      if (-1 < iVar1) {
        iVar8 = iVar1;
      }
      pdVar10 = (double *)(uint64_t)(uint)(iVar8 >> 3);
    } while ((int64_t)uVar11 < (int64_t)(iVar8 >> 3));
  }
  if (local_d0 != (uint *)0x0) {
    *local_d0 = local_8c;
  }
  *this_ptr = local_88;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return this_ptr;
}

