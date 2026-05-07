// Function: FUN_01b9abf0
// Address: 01b9abf0
// Size: 2206 bytes
// Class: GNValue

void FUN_01b9abf0(int64_t param_1)

{
  int64_t lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  void*puVar5;
  void *pvVar6;
  uint64_t uVar7;
  char *pcVar8;
  uint64_t uVar9;
  void* pVar10;
  byte unaff_SIL;
  int64_t *this_ptr;
  int64_t lVar11;
  uint uVar12;
  int64_t local_f0;
  uint8_t local_e8;
  uint64_t local_e0;
  int64_t local_d8;
  char local_d0;
  int local_c4;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  uint32_t local_a4;
  int64_t local_a0;
  char local_98;
  uint64_t local_90;
  int64_t local_88;
  void*local_80;
  void*local_78;
  int64_t local_70;
  void*local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  char local_50 [16];
  int64_t local_40;
  char local_38 [8];
  
  cVar3 = (**(code **)(*this_ptr + 0x9d0))();
  if (cVar3 == '\0') {
    return;
  }
  cVar3 = (**(code **)(*this_ptr + 0x9e8))();
  if (cVar3 != '\0') {
    return;
  }
  local_b8 = '\0';
  local_c0 = 0;
  local_a4 = 0xffffffff;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  local_68 = puVar5;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar2)();
  local_78 = puVar5;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar2)();
  local_80 = puVar5;
  if (this_ptr[0x3f] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar11 = this_ptr[0x3f];
    if (lVar11 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    lVar1 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      local_70 = local_40;
      param_1 = local_40;
      if (local_40 == 0) {
        local_90 = 0;
      }
      else {
        local_90 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
        if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      goto LAB_01b9ae22;
    }
  }
  local_90 = 0;
  local_70 = 0;
LAB_01b9ae22:
  local_c4 = (uint)(unaff_SIL ^ 1) * 2 + -1;
  do {
    do {
      do {
        pVar10 = (void*)param_1;
        FUN_01b6d0d0();
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar7 = (**(code **)(*this_ptr + 0x9d8))();
        param_1 = (**(code **)(*this_ptr + 0x9e0))();
        cVar3 = FUN_01252960(param_1,uVar7,&local_c0,&local_b0);
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        puVar5 = local_68;
        if (cVar3 == '\0') {
          if (0 < *(int *)((int64_t)local_68 + 0xc)) {
            (**(code **)(*this_ptr + 0xa48))();
            if (0 < *(int *)((int64_t)puVar5 + 0xc)) {
              lVar11 = 0;
              do {
                pVar10 = (void*)param_1;
                FUN_01b6d0d0();
                pvVar6 = _pthread_getspecific(pVar10);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                lVar1 = *(int64_t *)(local_80[2] + lVar11 * 8);
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
                uVar7 = FUN_00dd6320();
                param_1 = FUN_00dd6320();
                local_38[0] = '\0';
                local_40 = lVar1;
                FUN_012502a0(param_1,uVar7,(char)this_ptr[0x36]);
                puVar5 = local_68;
                if ((local_38[0] != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                if (lVar1 != 0) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
                  FUN_00d50b20();
                }
                lVar11 = lVar11 + 1;
              } while (lVar11 < *(int *)((int64_t)puVar5 + 0xc));
            }
            FUN_00d23310();
            lVar11 = local_40;
            pcVar8 = &local_60;
            if (local_38[0] != '\0') {
              pcVar8 = local_38;
            }
            local_60 = local_38[0];
            *pcVar8 = '\0';
            if ((local_38[0] != '\0') && (lVar11 != 0)) {
              FUN_00d50b20();
            }
            local_98 = 0;
            if (local_60 == '\0') {
              if (lVar11 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            local_98 = '\x01';
            local_a0 = lVar11;
            FUN_00d23310();
            lVar11 = local_40;
            local_50[0] = local_38[0];
            pcVar8 = local_50;
            if (local_38[0] != '\0') {
              pcVar8 = local_38;
            }
            *pcVar8 = '\0';
            if ((local_38[0] != '\0') && (lVar11 != 0)) {
              FUN_00d50b20();
            }
            local_88 = lVar11;
            uVar7 = FUN_00dd6320();
            FUN_00d23310();
            lVar11 = local_40;
            pcVar8 = local_38;
            if (local_38[0] == '\0') {
              pcVar8 = local_50 + 8;
            }
            local_50[8] = local_38[0];
            *pcVar8 = '\0';
            if ((local_38[0] != '\0') && (lVar11 != 0)) {
              FUN_00d50b20();
            }
            lVar1 = local_88;
            uVar9 = FUN_00dd6320();
            (**(code **)(*this_ptr + 0xa80))(uVar9,uVar7);
            if ((local_50[8] != '\0') && (lVar11 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50[0] != '\0') && (lVar1 != 0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            (**(code **)(*this_ptr + 0xa50))();
          }
          if (((char)local_90 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (local_80 != (void*)0x0) {
            FUN_00d50b20();
          }
          if (local_78 != (void*)0x0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          return;
        }
      } while (local_c0 == 0);
      local_d8 = local_c0;
      local_d0 = '\0';
      param_1 = local_b0;
      (**(code **)(*this_ptr + 0x940))(local_b0,&local_d8);
      lVar11 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    } while (lVar11 == 0);
    local_88 = lVar11;
    FUN_01b95ae0(local_e0,local_b0,1,0);
    lVar11 = local_40;
    if ((local_38[0] == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    local_f0 = lVar11;
    local_e8 = 0;
    param_1 = local_b0;
    iVar4 = FUN_01b9a7b0(local_b0,&local_f0);
    if ((iVar4 == -1) || (uVar12 = iVar4 + local_c4, (int)uVar12 < 0)) {
      if (lVar11 != 0) goto LAB_01b9ae47;
    }
    else {
      if ((int)uVar12 < *(int *)(lVar11 + 0xc)) {
        FUN_00dd67f0();
        lVar1 = CONCAT71(uStack_5f,local_60);
        if (local_58 == '\0') {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_38[0] = '\0';
        local_40 = lVar1;
        FUN_00d21140();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
          FUN_00d50b20();
        }
        FUN_00dd67f0();
        lVar1 = CONCAT71(uStack_5f,local_60);
        if (local_58 == '\0') {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_38[0] = '\0';
        local_40 = lVar1;
        FUN_00d21140();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
          FUN_00d50b20();
        }
        param_1 = *(int64_t *)(lVar11 + 0x10);
        lVar11 = *(int64_t *)(param_1 + (uint64_t)uVar12 * 8);
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        local_38[0] = '\0';
        local_40 = lVar11;
        FUN_00d21140();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
      }
LAB_01b9ae47:
      FUN_00d50b20();
    }
    FUN_00d50b20();
  } while( true );
}

