// Function: FUN_004461d0
// Address: 004461d0
// Size: 2600 bytes
// Class: MDToolbarVolumeCtrl


/* WARNING: Removing unreachable block (ram,0x00446547) */
/* WARNING: Removing unreachable block (ram,0x00446553) */
/* WARNING: Removing unreachable block (ram,0x0044699a) */
/* WARNING: Removing unreachable block (ram,0x004469a6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004461d0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  uint local_c4;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  lVar2 = local_70;
  lVar6 = DAT_026f6fd0;
  if (DAT_026f6fd0 != 0) {
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
  plVar7 = unaff_RSI;
  if (local_70 != 0) {
    local_68._0_1_ = '\0';
    uVar5 = FUN_00c70bc0();
    plVar7 = (longlong *)(ulonglong)uVar5;
    if (((char)local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((local_70 != 0 & (byte)plVar7) == 0) {
    iVar8 = *(int *)(*unaff_RSI + 0xc);
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (1 < iVar8) {
      FUN_00d23310();
      plVar7 = (longlong *)local_38;
      if ((char)local_68 != '\0') {
        plVar7 = &local_68;
      }
      local_38[0] = (char)local_68;
      *(undefined1 *)plVar7 = 0;
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] == '\0') && (local_70 != 0)) {
        FUN_00d50b00();
      }
      FUN_000ba510();
      lVar3 = local_48;
      lVar6 = *unaff_RSI;
      if (lVar6 == local_48) {
        if (((char)unaff_RSI[1] == '\0') && (local_48 != 0)) {
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
        lVar1 = unaff_RSI[1];
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *unaff_RSI = lVar3;
          if (((char)lVar1 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
LAB_0044646b:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          goto LAB_00446474;
        }
        *unaff_RSI = local_48;
        if (((char)lVar1 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
LAB_0044642c:
        *(undefined1 *)(unaff_RSI + 1) = 1;
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
  if (*(longlong *)(unaff_RDI + 0x10) == 0) {
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
  if (*(int *)(*unaff_RSI + 0xc) == 1) {
    FUN_00d23310();
    plVar7 = &local_48;
    if ((char)local_68 != '\0') {
      plVar7 = &local_68;
    }
    local_48 = CONCAT71(local_48._1_7_,(char)local_68);
    *(undefined1 *)plVar7 = 0;
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
        plVar7 = (longlong *)local_38;
      }
      local_38[0] = (char)local_68;
      *(undefined1 *)plVar7 = 0;
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
      lVar6 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(local_60 + 0xc) <= local_58) break;
      local_70 = *(longlong *)(*(longlong *)(local_60 + 0x10) + 8 + lVar6 * 8);
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
      lVar6 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(local_60 + 0xc) <= local_58) break;
      lVar6 = *(longlong *)(*(longlong *)(local_60 + 0x10) + 8 + lVar6 * 8);
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
  local_d8 = *unaff_RSI;
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


