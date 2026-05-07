// Function: FUN_01a1b340
// Address: 01a1b340
// Size: 1654 bytes
// Class: Unknown

uint64_t FUN_01a1b340(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void *pvVar6;
  uint64_t uVar7;
  void* pVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar11;
  uint uVar12;
  void*puVar13;
  uint uVar14;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  float fVar15;
  uint32_t uVar16;
  float extraout_XMM0_Db;
  float fStack_e4;
  int64_t local_88;
  char local_80;
  uint32_t local_74;
  int64_t *local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int local_50;
  int iStack_4c;
  int local_48;
  int64_t *local_40;
  uint64_t local_38;
  
  if (*param_2 == 0) {
    puVar13 = (void*)0x0;
    goto LAB_01a1b689;
  }
  uVar4 = FUN_01a58dc0();
  plVar11 = local_68;
  if (local_68 == (int64_t *)0x0) {
    local_74 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    plVar11 = (int64_t *)0x0;
  }
  else {
    if (local_60 == '\0') {
      FUN_00d50b00();
      local_74 = 0;
      if ((local_60 == '\0') || (local_68 == (int64_t *)0x0)) goto LAB_01a1b3b1;
      FUN_00d50b20();
    }
    local_74 = 0;
  }
LAB_01a1b3b1:
  (**(code **)(*plVar11 + 0x7b0))();
  local_70 = local_68;
  if ((((local_60 == '\0') && (local_68 != (int64_t *)0x0)) && (FUN_00d50b00(), local_60 != '\0'))
     && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" + *plVar11)
          )();
  if (cVar2 == '\0') {
    local_38 = 0;
    local_40 = (int64_t *)0x0;
    puVar13 = (void*)0x0;
    plVar10 = local_70;
  }
  else {
    iVar3 = FUN_01d3a5a0();
    uVar16 = extraout_XMM0_Da;
    if ((iVar3 == 1) && (iVar3 = FUN_01d3b630(), uVar16 = extraout_XMM0_Da_00, iVar3 == 1)) {
      iVar3 = FUN_01d3b620();
      if (iVar3 == 2) {
        (**(code **)(*plVar11 + 0xe30))();
        plVar10 = local_68;
        if (local_68 == (int64_t *)0x0) {
          puVar13 = (void*)0x1;
          local_38 = 0;
          local_40 = (int64_t *)0x0;
          plVar10 = local_70;
        }
        else {
          if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
             (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_60 = 0;
          local_68 = (int64_t *)0x0;
          local_40 = plVar10;
          local_58 = plVar10;
          local_50 = -1;
          iStack_4c = 0;
          local_48 = 0;
          uVar14 = 0;
          uVar12 = 0;
          while( true ) {
            lVar5 = (int64_t)local_50;
            local_50 = local_50 + 1;
            if (*(int *)((int64_t)local_58 + 0xc) <= local_50) break;
            lVar9 = local_58[2];
            local_68 = *(int64_t **)(lVar9 + 8 + lVar5 * 8);
            pvVar6 = _pthread_getspecific((void*)lVar9);
            pVar8 = (void*)lVar9;
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            fVar15 = (float)FUN_0125ea80();
            local_38 = CONCAT44(local_38._4_4_,-(uint)(fVar15 == g_02390124));
            pvVar6 = _pthread_getspecific(pVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            fVar15 = (float)FUN_0125ea80();
            uVar12 = uVar12 - (int)local_38;
            uVar14 = uVar14 + (fVar15 == g_0239424c);
            if (iStack_4c != 0) {
              if (iStack_4c < 1) {
                iStack_4c = -iStack_4c;
              }
              else {
                local_50 = local_50 - iStack_4c;
                FUN_00d23690();
                local_48 = local_48 + iStack_4c;
                iStack_4c = 0;
              }
            }
          }
          plVar10 = local_58;
          FUN_001159b0();
          uVar7 = local_38;
          local_60 = '\0';
          local_68 = (int64_t *)0x0;
          local_58 = local_40;
          iStack_4c = 0;
          local_48 = 0;
          local_38 = local_38 & 0xffffffff00000000;
          if (uVar12 <= uVar14) {
            local_38._4_4_ = SUB84(uVar7,4);
            local_38 = CONCAT44(local_38._4_4_,g_02390124);
          }
          for (lVar5 = 0; local_50 = (int)lVar5, local_50 < *(int *)((int64_t)local_40 + 0xc);
              lVar5 = lVar5 + 1) {
            local_68 = *(int64_t **)(local_40[2] + lVar5 * 8);
            pvVar6 = _pthread_getspecific((void*)plVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125ea20((int)local_38);
          }
          uVar4 = FUN_001159b0();
          local_38 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
          puVar13 = &g_02802501;
          plVar10 = local_70;
        }
      }
      else {
        FUN_01d3abf0();
        FUN_01e466c0();
        (**(code **)(*plVar11 + 0xe30))();
        local_40 = local_68;
        if (local_68 == (int64_t *)0x0) {
          local_38 = 0;
        }
        else {
          local_38 = CONCAT71((int7)((uint64_t)local_68 >> 8),1);
          if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
             (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_01cf74c0();
        fStack_e4 = extraout_XMM0_Db;
LAB_01a1b7f0:
        (**(code **)(*plVar11 + 0x658))();
        plVar1 = local_68;
        plVar10 = (int64_t *)*arg1;
        if (plVar10 != local_68) {
          lVar5 = arg1[1];
          if (local_60 != '\0') {
            *arg1 = (int64_t)local_68;
            if (((char)lVar5 != '\0') && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01a1b842;
          }
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *arg1 = (int64_t)plVar1;
          if (((char)lVar5 != '\0') && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01a1b884:
          *(void*)(arg1 + 1) = 1;
          if (*arg1 == 0) goto LAB_01a1b959;
LAB_01a1b895:
          iVar3 = FUN_01d3a5a0();
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar3 == 6) goto LAB_01a1b96d;
          iVar3 = FUN_01d3a5a0();
          if (iVar3 == 5) {
            FUN_01d3abf0();
            uVar4 = FUN_01e466c0();
            fVar15 = (float)((uint64_t)uVar4 >> 0x20);
            (**(code **)(*this_ptr + 0x4b8))(fStack_e4 - fVar15);
            (**(code **)((int64_t)&linkedit_data_command_000013e8.cmd + *plVar11))((int)uVar4);
            fStack_e4 = fVar15;
          }
          goto LAB_01a1b7f0;
        }
        if (((char)arg1[1] == '\0') && (local_68 != (int64_t *)0x0)) {
          if (local_60 == '\0') {
            FUN_00d50b00();
            goto LAB_01a1b884;
          }
LAB_01a1b842:
          *(void*)(arg1 + 1) = 1;
          local_60 = '\0';
        }
        if (*arg1 != 0) goto LAB_01a1b895;
LAB_01a1b959:
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a1b96d:
        FUN_0199eb40();
        puVar13 = (void*)CONCAT71((int7)((uint64_t)arg1 >> 8),1);
        FUN_01cf74c0();
        plVar10 = local_70;
      }
    }
    else {
      local_88 = *param_2;
      local_80 = '\0';
      uVar7 = FUN_01a58d30(uVar16,&local_88);
      plVar10 = local_70;
      puVar13 = (void*)(uVar7 & 0xffffffff);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      local_40 = (int64_t *)0x0;
      local_38 = 0;
    }
  }
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_74 == '\0' && plVar11 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01a1b689:
  return (uint64_t)puVar13 & 0xffffffff;
}

