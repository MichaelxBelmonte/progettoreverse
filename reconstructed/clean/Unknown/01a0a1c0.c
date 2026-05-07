// Function: FUN_01a0a1c0
// Address: 01a0a1c0
// Size: 1690 bytes
// Class: Unknown

uint64_t FUN_01a0a1c0(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t lVar10;
  int64_t *plVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar12;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  float fVar14;
  uint32_t extraout_XMM0_Db;
  uint64_t uVar15;
  int64_t local_b8;
  char local_b0;
  int64_t local_88;
  char local_80;
  float local_74;
  int64_t *local_70;
  float local_64;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  uint32_t local_34;
  
  if (*param_2 == 0) {
    param_2 = (int64_t *)0x0;
    goto LAB_01a0a3c8;
  }
  uVar13 = FUN_01a58dc0();
  plVar12 = local_60;
  if (local_60 == (int64_t *)0x0) {
    bVar3 = true;
    bVar2 = false;
LAB_01a0a352:
    local_88 = *param_2;
    local_80 = '\0';
    uVar6 = FUN_01a58d30(uVar13,&local_88);
    param_2 = (int64_t *)(uint64_t)uVar6;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    cVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *plVar12))();
    if (cVar4 == '\0') {
      bVar2 = true;
      bVar3 = false;
      param_2 = (int64_t *)0x0;
    }
    else {
      iVar5 = FUN_01d3a5a0();
      bVar2 = true;
      uVar13 = extraout_XMM0_Da;
      if ((iVar5 != 1) || (iVar5 = FUN_01d3b630(), uVar13 = extraout_XMM0_Da_00, iVar5 != 1)) {
        bVar3 = false;
        goto LAB_01a0a352;
      }
      iVar5 = FUN_01d3b620();
      if (iVar5 == 2) {
        (**(code **)(*plVar12 + 0xe30))();
        plVar12 = local_60;
        if (local_60 != (int64_t *)0x0) {
          if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_58 = '\0';
          local_60 = (int64_t *)0x0;
          local_50 = plVar12;
          iStack_44 = 0;
          iStack_40 = 0;
          for (plVar11 = (int64_t *)0x0; local_48 = (int)plVar11,
              local_48 < *(int *)((int64_t)plVar12 + 0xc);
              plVar11 = (int64_t *)((int64_t)plVar11 + 1)) {
            local_60 = *(int64_t **)(plVar12[2] + (int64_t)plVar11 * 8);
            pvVar7 = _pthread_getspecific((void*)param_1);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01259600(0);
          }
          FUN_001159b0();
          uVar13 = 1;
          goto LAB_01a0a832;
        }
      }
      else {
        FUN_01d3abf0();
        FUN_01e466c0();
        local_64 = (float)(**(code **)(*plVar12 + 0xc00))(extraout_XMM0_Db);
        (**(code **)(*plVar12 + 0xe30))();
        local_70 = local_60;
        if (local_60 == (int64_t *)0x0) {
          local_34 = 0;
        }
        else {
          local_34 = (uint32_t)CONCAT71((int7)((uint64_t)local_60 >> 8),1);
          if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        while( true ) {
          (**(code **)(*plVar12 + 0x658))();
          plVar11 = local_60;
          plVar1 = (int64_t *)*arg1;
          if (plVar1 != local_60) break;
          if (((char)arg1[1] == '\0') && (local_60 != (int64_t *)0x0)) {
            if (local_58 == '\0') {
              FUN_00d50b00();
              goto LAB_01a0a4f5;
            }
LAB_01a0a4b1:
            *(void*)(arg1 + 1) = 1;
            local_58 = '\0';
          }
          if (*arg1 == 0) goto LAB_01a0a7d7;
LAB_01a0a507:
          uVar6 = FUN_01d3a5a0();
          plVar11 = (int64_t *)(uint64_t)uVar6;
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (uVar6 == 6) goto LAB_01a0a7eb;
          iVar5 = FUN_01d3a5a0();
          if (iVar5 == 5) {
            FUN_01d3abf0();
            uVar15 = FUN_01e466c0();
            local_74 = (float)(**(code **)(*plVar12 + 0xc00))((int)((uint64_t)uVar15 >> 0x20));
            local_64 = local_74 - local_64;
            cVar4 = FUN_01a0ab00();
            if ((cVar4 != '\0') && (local_70 != (int64_t *)0x0)) {
              local_58 = '\0';
              local_60 = (int64_t *)0x0;
              local_50 = local_70;
              local_48 = -1;
              iStack_44 = 0;
              iStack_40 = 0;
              while( true ) {
                if (iStack_44 != 0) {
                  if (iStack_44 < 1) {
                    iStack_44 = -iStack_44;
                  }
                  else {
                    local_48 = local_48 - iStack_44;
                    FUN_00d23690();
                    iStack_40 = iStack_40 + iStack_44;
                    iStack_44 = 0;
                  }
                }
                lVar8 = (int64_t)local_48;
                local_48 = local_48 + 1;
                if (*(int *)((int64_t)local_50 + 0xc) <= local_48) break;
                lVar10 = local_50[2];
                local_60 = *(int64_t **)(lVar10 + 8 + lVar8 * 8);
                pvVar7 = _pthread_getspecific((void*)lVar10);
                pVar9 = (void*)lVar10;
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar14 = (float)FUN_01265b70();
                FUN_01259600(fVar14 + local_64);
                cVar4 = FUN_0199be40();
                if (cVar4 != '\0') {
                  (**(code **)((int64_t)&linkedit_data_command_000013d8.cmd + *plVar12))();
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01265b70();
                  FUN_01259600();
                  if ((local_b0 != '\0') && (local_b8 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              FUN_001159b0();
            }
            (**(code **)((int64_t)&linkedit_data_command_000013e8.cmd + *plVar12))((int)uVar15);
            (**(code **)(*this_ptr + 0x458))();
            local_64 = local_74;
          }
        }
        lVar8 = arg1[1];
        if (local_58 != '\0') {
          *arg1 = (int64_t)local_60;
          if (((char)lVar8 != '\0') && (plVar1 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01a0a4b1;
        }
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)plVar11;
        if (((char)lVar8 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a0a4f5:
        *(void*)(arg1 + 1) = 1;
        if (*arg1 != 0) goto LAB_01a0a507;
LAB_01a0a7d7:
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a0a7eb:
        FUN_0199eb40();
        plVar12 = local_70;
        uVar13 = local_34;
LAB_01a0a832:
        bVar3 = false;
        bVar2 = true;
        param_2 = (int64_t *)CONCAT71((int7)((uint64_t)plVar11 >> 8),1);
        if (((char)uVar13 == '\0') || (plVar12 == (int64_t *)0x0)) goto LAB_01a0a3b6;
        FUN_00d50b20();
      }
      bVar2 = true;
      bVar3 = false;
      param_2 = (int64_t *)CONCAT71((int7)((uint64_t)param_2 >> 8),1);
    }
  }
LAB_01a0a3b6:
  if ((bVar2) && (!bVar3)) {
    FUN_00d50b20();
  }
LAB_01a0a3c8:
  return (uint64_t)param_2 & 0xffffffff;
}

