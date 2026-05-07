// Function: FUN_004461d0
// Address: 004461d0
// Size: 2600 bytes
// Class: MDToolbarVolumeCtrl

void FUN_004461d0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int iVar8;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qa;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  uint local_c4;
  int64_t local_70;
  int64_t local_68;
  int64_t local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  lVar2 = local_70;
  lVar6 = g_026f6fd0;
  if (g_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar9 = FUN_0071a120();
  if (((((char)local_68 == '\0') && (local_70 != 0)) &&
      (uVar9 = FUN_00d50b00(), (char)local_68 != '\0')) && (local_70 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  local_48 = lVar6;
  local_40 = '\0';
  FUN_000175c0(uVar9,&local_48);
  if ((char)local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), (char)local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68._0_1_ = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  plVar7 = arg1;
  if (local_70 != 0) {
    local_68._0_1_ = '\0';
    uVar5 = FUN_00c70bc0();
    plVar7 = (int64_t *)(uint64_t)uVar5;
    if (((char)local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((local_70 != 0 & (byte)plVar7) == 0) {
    iVar8 = *(int *)(*arg1 + 0xc);
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (1 < iVar8) {
      FUN_00d23310();
      plVar7 = (int64_t *)local_38;
      if ((char)local_68 != '\0') {
        plVar7 = &local_68;
      }
      local_38[0] = (char)local_68;
      *(void*)plVar7 = 0;
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] == '\0') && (local_70 != 0)) {
        FUN_00d50b00();
      }
      FUN_000ba510();
      lVar3 = local_48;
      lVar6 = *arg1;
      if (lVar6 == local_48) {
        if (((char)arg1[1] == '\0') && (local_48 != 0)) {
          if (local_40 != '\0') goto LAB_0044642c;
          FUN_00d50b00();
          goto LAB_0044646b;
        }
LAB_00446474:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar1 = arg1[1];
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *arg1 = lVar3;
          if (((char)lVar1 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
LAB_0044646b:
          *(void*)(arg1 + 1) = 1;
          goto LAB_00446474;
        }
        *arg1 = local_48;
        if (((char)lVar1 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
LAB_0044642c:
        *(void*)(arg1 + 1) = 1;
        local_40 = '\0';
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x10) == 0) {
    return;
  }
  FUN_006f3f00();
  if ((char)local_68 == '\0') {
    if (local_70 == 0) {
      return;
    }
    FUN_00d50b00();
    if (((char)local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == 0) {
    return;
  }
  FUN_00793300();
  if ((char)local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), (char)local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68._0_1_ = '\0';
  }
  if (local_70 == 0) goto LAB_00446bc4;
  if (*(int *)(*arg1 + 0xc) == 1) {
    FUN_00d23310();
    plVar7 = &local_48;
    if ((char)local_68 != '\0') {
      plVar7 = &local_68;
    }
    local_48 = CONCAT71(local_48._1_7_,(char)local_68);
    *(void*)plVar7 = 0;
    if (((char)local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    cVar4 = FUN_004fa0f0();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      uVar5 = 0;
    }
    else {
      FUN_00d23310();
      plVar7 = &local_68;
      if ((char)local_68 == '\0') {
        plVar7 = (int64_t *)local_38;
      }
      local_38[0] = (char)local_68;
      *(void*)plVar7 = 0;
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_38[0] == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      FUN_004b8020();
      lVar6 = local_48;
      if (local_40 == '\0') {
        if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
      if (lVar6 == 0) goto LAB_0044670b;
      uVar5 = FUN_003b7780();
      FUN_00d50b20();
    }
  }
  else {
LAB_0044670b:
    uVar5 = 0;
  }
  FUN_004b5af0();
  FUN_003b79f0();
  if ((char)local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), (char)local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68._0_1_ = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_004b5af0();
  if ((char)local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_004467b6;
    }
  }
  else if (local_70 != 0) {
LAB_004467b6:
    local_68._0_1_ = '\0';
    local_70 = 0;
    local_60 = lVar2;
    local_58 = -1;
    iStack_54 = 0;
    iStack_50 = 0;
    while( true ) {
      if (iStack_54 != 0) {
        if (iStack_54 < 1) {
          iStack_54 = -iStack_54;
        }
        else {
          local_58 = local_58 - iStack_54;
          FUN_00d23690();
          iStack_50 = iStack_50 + iStack_54;
          iStack_54 = 0;
        }
      }
      lVar6 = (int64_t)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(local_60 + 0xc) <= local_58) break;
      local_70 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar6 * 8);
      cVar4 = FUN_003b7710();
      if (cVar4 != '\0') {
        local_40 = '\0';
        local_48 = local_70;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00274d30();
    FUN_00d50b20();
  }
  FUN_0078b9c0();
  if ((char)local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_004468cc;
    }
  }
  else if (local_70 != 0) {
LAB_004468cc:
    local_68._0_1_ = '\0';
    local_60 = local_70;
    local_58 = -1;
    iStack_54 = 0;
    iStack_50 = 0;
    local_c4 = uVar5 & 0xff;
    while( true ) {
      if (iStack_54 != 0) {
        if (iStack_54 < 1) {
          iStack_54 = -iStack_54;
        }
        else {
          local_58 = local_58 - iStack_54;
          FUN_00d23690();
          iStack_50 = iStack_50 + iStack_54;
          iStack_54 = 0;
        }
      }
      lVar6 = (int64_t)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(local_60 + 0xc) <= local_58) break;
      lVar6 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar6 * 8);
      cVar4 = FUN_004fa0f0();
      if (cVar4 != '\0') {
        local_e0 = '\0';
        local_e8 = lVar6;
        FUN_004b8020(extraout_XMM0_Qa,&local_e8);
        lVar3 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          local_40 = '\0';
          local_48 = lVar6;
          cVar4 = FUN_00d24090();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            cVar4 = FUN_003b7710();
            if (cVar4 != '\0') {
              local_40 = '\0';
              local_48 = lVar3;
              FUN_00d23f50();
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              FUN_003b79a0();
            }
          }
          else {
            FUN_003b79a0();
            local_40 = '\0';
            local_48 = lVar3;
            FUN_00d23f50();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
      }
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_68._0_1_ = '\0';
    local_60 = lVar2;
    iStack_54 = 0;
    iStack_50 = 0;
    for (iVar8 = 0; local_58 = iVar8, iVar8 < *(int *)(lVar2 + 0xc); iVar8 = iVar8 + 1) {
      FUN_003b79a0();
    }
    FUN_00274d30();
  }
  local_d8 = *arg1;
  local_d0 = '\0';
  FUN_006fcaf0();
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00446bc4:
  FUN_00d50b20();
  return;
}

