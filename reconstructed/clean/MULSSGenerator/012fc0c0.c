// Function: FUN_012fc0c0
// Address: 012fc0c0
// Size: 2141 bytes
// Class: MULSSGenerator

void* FUN_012fc0c0(uint64_t param_1)

{
  int64_t lVar1;
  code *pcVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  void*puVar6;
  void*puVar7;
  void*puVar8;
  char *pcVar9;
  void* pVar10;
  void**ppuVar11;
  int iVar12;
  int64_t *arg1;
  void*this_ptr;
  char local_e8;
  undefined7 uStack_e7;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  void*local_70;
  char local_68 [8];
  void*local_60;
  uint64_t local_58;
  int local_50;
  void*local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  if (*(int *)(*arg1 + 0xc) == 0) goto LAB_012fc90c;
  FUN_00d23310();
  pVar10 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_68[0]);
  ppuVar11 = &local_48;
  if (local_68[0] != '\0') {
    ppuVar11 = (void**)local_68;
  }
  local_48 = (void*)CONCAT71(local_48._1_7_,local_68[0]);
  *(char *)ppuVar11 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar10);
  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
    lVar5 = local_70[0xb];
  }
  else {
    lVar5 = *(int64_t *)(local_70[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x58);
  }
  if (lVar5 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (lVar5 == 0) {
    FUN_012e8880(0,FUN_012e8440);
    if (local_68[0] == '\0') {
      if (local_70 != (void*)0x0) {
        FUN_00d50b00();
        if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_012fc6de;
      }
    }
    else if (local_70 != (void*)0x0) {
LAB_012fc6de:
      local_68[0] = 0;
      local_50 = 0;
      local_58 = 0;
      if (0 < *(int *)((int64_t)local_70 + 0xc)) {
        iVar12 = 0;
        do {
          FUN_000ba510();
          local_98 = local_a8;
          local_90 = 0;
          if (local_a0 == '\0') {
            if (local_a8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          local_90 = '\x01';
          FUN_00c9fe20();
          puVar6 = local_48;
          local_38[0] = local_40[0];
          pcVar9 = local_40;
          if (local_40[0] == '\0') {
            pcVar9 = local_38;
          }
          *pcVar9 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (local_38[0] == '\0') {
            if (puVar6 != (void*)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38[0] = '\0';
          }
          FUN_012fceb0();
          local_d0 = 0;
          local_d8 = CONCAT71(uStack_e7,local_e8);
          if ((local_e0 == '\0') && (local_d8 != 0)) {
            FUN_00d50b00();
          }
          local_d0 = '\x01';
          FUN_012fce00();
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          if (puVar6 != (void*)0x0) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          iVar12 = iVar12 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
        } while (iVar12 < *(int *)((int64_t)local_70 + 0xc));
      }
      FUN_000be170();
      *this_ptr = plVar3;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      return this_ptr;
    }
LAB_012fc90c:
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*pcVar2)();
  if ((void*)*arg1 != (void*)0x0) {
    local_68[0] = '\0';
    local_70 = (void*)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = (void*)*arg1;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar12 = -local_58._4_4_;
        }
        else {
          iVar12 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
      lVar5 = (int64_t)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar12) break;
      local_70 = *(void**)(local_60[2] + 8 + lVar5 * 8);
      pvVar4 = _pthread_getspecific((void*)local_60[2]);
      puVar8 = local_70;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        puVar8 = (void*)local_70[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      puVar8 = (void*)puVar8[8];
      local_40[0] = '\0';
      local_48 = puVar8;
      iVar12 = FUN_00d237a0();
      if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (iVar12 == -1) {
        local_40[0] = '\0';
        local_48 = puVar8;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        puVar8 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &g_02572358;
        (*pcVar2)();
        local_40[0] = '\0';
        local_48 = puVar8;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      local_40[0] = '\0';
      local_48 = local_70;
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_000be170();
  }
  FUN_012e8880(0,FUN_012e8440);
  if (local_68[0] == '\0') {
    if (local_70 != (void*)0x0) {
      FUN_00d50b00();
      if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_012fc47a;
    }
  }
  else if (local_70 != (void*)0x0) {
LAB_012fc47a:
    local_68[0] = '\0';
    local_60 = local_70;
    local_50 = 0;
    local_58 = 0;
    if (0 < *(int *)((int64_t)local_70 + 0xc)) {
      lVar5 = 0;
      do {
        local_48 = *(void**)(local_70[2] + lVar5 * 8);
        local_40[0] = '\0';
        iVar12 = FUN_00d23d20();
        if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        lVar1 = *(int64_t *)(puVar6[2] + (int64_t)iVar12 * 8);
        local_c0 = 0;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_c0 = '\x01';
        local_c8 = lVar1;
        FUN_00c9fe20();
        puVar8 = local_48;
        local_e8 = local_40[0];
        pcVar9 = local_40;
        if (local_40[0] == '\0') {
          pcVar9 = &local_e8;
        }
        *pcVar9 = '\0';
        if ((local_40[0] != '\0') && (puVar8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (local_e8 == '\0') {
          if (puVar8 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_e8 = '\0';
        }
        FUN_012fceb0();
        lVar1 = local_a8;
        local_b0 = 0;
        if ((local_a0 == '\0') && (local_a8 != 0)) {
          FUN_00d50b00();
        }
        local_b8 = lVar1;
        local_b0 = '\x01';
        FUN_012fce00();
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if (puVar8 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar5);
      } while ((int)lVar5 < *(int *)((int64_t)local_70 + 0xc));
    }
    FUN_000be170();
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    goto joined_r0x012fc6a1;
  }
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
joined_r0x012fc6a1:
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}

