// Function: FUN_00d32c80
// Address: 00d32c80
// Size: 2271 bytes
// Class: GNString


void FUN_00d32c80(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulonglong uVar5;
  undefined7 uVar6;
  undefined8 *unaff_RDI;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char cVar10;
  undefined4 uVar11;
  undefined8 unaff_R14;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  undefined4 local_94;
  undefined8 local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  ulonglong local_60;
  char local_58 [8];
  ulonglong local_50;
  ulonglong local_48;
  uint local_3c;
  
  (**(code **)(*(longlong *)*unaff_RDI + 0x18))();
  lVar7 = CONCAT71(uStack_6f,local_70);
  if (local_68 == '\0') {
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_00d31720();
  local_80 = local_60;
  if (local_60 == 0) {
    uVar11 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    local_80 = 0;
  }
  else {
    if (local_58[0] == '\0') {
      FUN_00d50b00();
    }
    uVar11 = 0;
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
    FUN_00d50b20();
  }
  local_94 = uVar11;
  if ((local_80 == 0) || (*(int *)(local_80 + 0xc) < 1)) {
    local_50 = 0;
    uVar9 = 0;
    local_78 = 0;
    local_48 = 0;
  }
  else {
    lVar7 = 0;
    local_48 = 0;
    uVar8 = 0;
    uVar9 = 0;
    local_3c = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(local_80 + 0x10) + lVar7 * 8);
      uVar5 = local_80;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      uVar3 = FUN_00d31a90();
      uVar2 = local_60;
      cVar10 = (char)uVar8;
      if (local_60 == local_48) {
        uVar2 = local_48;
        if ((cVar10 == '\0') && (local_60 != 0)) {
          uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
          uVar8 = uVar5;
          if (local_58[0] == '\0') {
            local_78 = uVar5;
            FUN_00d50b00();
            uVar2 = local_48;
            uVar8 = local_78;
          }
        }
        else if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
          uVar2 = local_48;
        }
      }
      else if (local_58[0] == '\0') {
        if (local_60 != 0) {
          uVar3 = FUN_00d50b00();
        }
        local_78 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        uVar8 = local_78;
        if ((cVar10 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
          uVar8 = local_78;
        }
      }
      else {
        local_78 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        uVar8 = local_78;
        if ((cVar10 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
          uVar8 = local_78;
        }
      }
      local_78 = uVar8;
      local_48 = uVar2;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        local_50 = (ulonglong)local_3c;
      }
      else {
        lVar1 = *(longlong *)(*(longlong *)(local_80 + 0x10) + lVar7 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        uVar3 = FUN_00d2f5f0();
        uVar8 = local_60;
        if (uVar9 == local_60) {
          uVar8 = uVar9;
          if (((char)local_3c == '\0') && (uVar9 != 0)) {
            local_50 = CONCAT71((int7)(uVar5 >> 8),1);
            if (local_58[0] == '\0') {
              local_3c = 0;
              FUN_00d50b00();
            }
          }
          else if ((local_58[0] == '\0') || (local_60 == 0)) {
            local_50 = (ulonglong)local_3c;
          }
          else {
            FUN_00d50b20();
            local_50 = (ulonglong)local_3c;
          }
        }
        else if (local_58[0] == '\0') {
          if (local_60 != 0) {
            uVar3 = FUN_00d50b00();
          }
          local_50 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
          if (((char)local_3c != '\0') && (uVar9 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
          if (((char)local_3c != '\0') && (uVar9 != 0)) {
            FUN_00d50b20();
          }
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        local_3c = (uint)local_50;
        uVar9 = uVar8;
      }
      lVar7 = lVar7 + 1;
      uVar8 = local_78 & 0xffffffff;
    } while (lVar7 < *(int *)(local_80 + 0xc));
  }
  FUN_00d2fd00();
  local_88 = local_60;
  uVar8 = uVar9;
  if (local_60 == 0) {
    local_3c = 1;
    local_90 = 0;
    local_88 = 0;
    if (MACH_HEADER.filetype != 0) goto LAB_00d33086;
LAB_00d33205:
    uVar5 = local_88;
    lVar7 = DAT_0277d5a8;
    if (DAT_0277d5a8 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*(longlong *)*unaff_RDI + 0x28))();
    lVar1 = CONCAT71(uStack_6f,local_70);
    if (local_68 == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_00d2f5f0();
    uVar8 = local_60;
    uVar6 = (undefined7)(uVar5 >> 8);
    if (uVar9 == local_60) {
      if (((char)local_50 == '\0') && (uVar9 != 0)) {
        uVar5 = CONCAT71(uVar6,1);
        uVar8 = uVar9;
        if (local_58[0] == '\0') {
          FUN_00d50b00();
        }
      }
      else if ((local_58[0] == '\0') || (local_60 == 0)) {
        uVar5 = local_50 & 0xffffffff;
        uVar8 = uVar9;
      }
      else {
        FUN_00d50b20();
        uVar5 = local_50 & 0xffffffff;
        uVar8 = uVar9;
      }
    }
    else if (local_58[0] == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      uVar5 = CONCAT71(uVar6,1);
      if (((char)local_50 != '\0') && (uVar9 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (((char)local_50 != '\0') && (uVar9 != 0)) {
        FUN_00d50b20();
      }
      local_58[0] = '\0';
      uVar5 = CONCAT71(uVar6,1);
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    local_50 = uVar5 & 0xffffffff;
  }
  else {
    local_90 = CONCAT71((int7)(local_60 >> 8),1);
    if (local_58[0] == '\0') {
      FUN_00d50b00();
    }
    local_3c = 0;
    if (*(int *)(local_88 + 0xc) == 0) goto LAB_00d33205;
LAB_00d33086:
    if (DAT_028a76e8 == 0) {
      FUN_00d23310();
      uVar9 = local_60;
      pcVar4 = local_58;
      if (local_58[0] == '\0') {
        pcVar4 = &local_70;
      }
      local_70 = local_58[0];
      *pcVar4 = '\0';
      if ((local_58[0] != '\0') && (uVar9 != 0)) {
        FUN_00d50b20();
      }
      uVar5 = DAT_028a76e8;
      if (DAT_028a76e8 != uVar9) {
        if (uVar9 != 0) {
          FUN_00d50b00();
        }
        DAT_028a76e8 = uVar9;
        if (uVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if ((uVar9 != 0) && (DAT_028a76f0 == '\0')) {
        DAT_028a76f0 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_70 != '\0') && (uVar9 != 0)) {
        FUN_00d50b20();
      }
    }
    if (DAT_028a76f8 == 0) {
      FUN_00d23310();
      uVar9 = local_60;
      pcVar4 = local_58;
      if (local_58[0] == '\0') {
        pcVar4 = &local_70;
      }
      local_70 = local_58[0];
      *pcVar4 = '\0';
      if ((local_58[0] != '\0') && (uVar9 != 0)) {
        FUN_00d50b20();
      }
      uVar5 = DAT_028a76f8;
      if (DAT_028a76f8 != uVar9) {
        if (uVar9 != 0) {
          FUN_00d50b00();
        }
        DAT_028a76f8 = uVar9;
        if (uVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if ((uVar9 != 0) && (DAT_028a7700 == '\0')) {
        DAT_028a7700 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_70 != '\0') && (uVar9 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d6f370();
  local_b8 = DAT_0277d618;
  if (DAT_0277d618 != 0) {
    FUN_00d50b00();
  }
  local_b0 = '\x01';
  local_a8 = 0;
  local_a0 = '\0';
  FUN_00d704d0(&local_a8,&local_b8);
  uVar9 = local_60;
  if (local_58[0] == '\0') {
    if (((local_60 != 0) && (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
    FUN_00d50b20();
  }
  if (uVar9 == 0) goto LAB_00d33516;
  FUN_00d306a0();
  if (local_58[0] == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      goto LAB_00d3348e;
    }
  }
  else if (local_60 != 0) {
LAB_00d3348e:
    uVar9 = DAT_028a76e8;
    if (DAT_028a76e8 == 0) {
      uVar9 = 0;
      if (local_60 != 0) {
LAB_00d334ce:
        FUN_00d50b00();
        DAT_028a76e8 = local_60;
        if (uVar9 != 0) {
          FUN_00d50b20();
        }
      }
LAB_00d334ea:
      if (DAT_028a76f0 == '\0') {
        DAT_028a76f0 = '\x01';
        FUN_00e8cb90();
      }
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      if (local_60 != uVar9) {
        uVar9 = DAT_028a76e8;
        if (DAT_028a76e8 != local_60) goto LAB_00d334ce;
        goto LAB_00d334ea;
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00d33516:
  if ((char)local_94 == '\0' && local_80 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (uVar8 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_78 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_3c == '\0') {
    FUN_00d50b20();
  }
  return;
}


