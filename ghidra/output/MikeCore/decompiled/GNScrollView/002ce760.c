// Function: FUN_002ce760
// Address: 002ce760
// Size: 1748 bytes
// Class: GNScrollView


/* WARNING: Removing unreachable block (ram,0x002ceab2) */
/* WARNING: Removing unreachable block (ram,0x002ceaa6) */
/* WARNING: Removing unreachable block (ram,0x002cee1a) */

ulonglong FUN_002ce760(undefined8 param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong unaff_RDI;
  bool bVar10;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  longlong local_a0;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58 [8];
  longlong local_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  longlong local_38;
  
  lVar7 = *(longlong *)(unaff_RDI + 0xe0);
  iVar8 = 0;
  if (lVar7 == 0) {
    bVar4 = false;
  }
  else {
    FUN_00d50b00();
    local_58[0] = '\0';
    local_60 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    uVar1 = *(uint *)(lVar7 + 0xc);
    if ((int)uVar1 < 1) {
      bVar4 = false;
    }
    else {
      lVar2 = *(longlong *)(lVar7 + 0x10);
      if (uVar1 == 1) {
        uVar9 = 0;
        bVar4 = false;
      }
      else {
        uVar9 = 0;
        bVar4 = false;
        bVar10 = false;
        do {
          while (lVar3 = *(longlong *)(lVar2 + uVar9 * 8), *(int *)(lVar3 + 0x20) != 0) {
            local_60 = *(longlong *)(lVar2 + 8 + uVar9 * 8);
            if (*(int *)(local_60 + 0x20) == 0) goto LAB_002ce830;
LAB_002ce80b:
            uVar9 = uVar9 + 2;
            if ((uVar1 & 0xfffffffe) == (uint)uVar9) goto LAB_002ce844;
          }
          bVar4 = bVar10;
          if (*(int *)(lVar3 + 0x24) != 2) {
            bVar4 = true;
          }
          local_60 = *(longlong *)(lVar2 + 8 + uVar9 * 8);
          bVar10 = bVar4;
          if (*(int *)(local_60 + 0x20) != 0) goto LAB_002ce80b;
LAB_002ce830:
          if (*(int *)(local_60 + 0x24) != 2) {
            bVar4 = true;
          }
          uVar9 = uVar9 + 2;
          bVar10 = bVar4;
        } while ((uVar1 & 0xfffffffe) != (uint)uVar9);
      }
LAB_002ce844:
      iVar8 = (int)uVar9;
      if ((uVar1 & 1) != 0) {
        local_60 = *(longlong *)(lVar2 + (uVar9 & 0xffffffff) * 8);
        bVar10 = bVar4;
        if ((*(int *)(local_60 + 0x20) == 0) && (bVar10 = true, *(int *)(local_60 + 0x24) == 2)) {
          bVar10 = bVar4;
        }
        bVar4 = bVar10;
        iVar8 = iVar8 + 1;
      }
    }
    local_50 = lVar7;
    local_48 = iVar8;
    FUN_002d7300();
    FUN_00d50b20();
  }
  FUN_002cd490();
  lVar2 = local_60;
  local_a0 = local_60;
  if (local_58[0] == '\0') {
    if (local_60 == 0) {
      bVar10 = true;
    }
    else {
      FUN_00d50b00();
      bVar10 = lVar2 == 0;
      if (param_2 != '\0') goto LAB_002ce8d8;
    }
joined_r0x002ce9e3:
    if ((!bVar4) || (bVar10)) {
      uVar9 = 0;
      if (bVar10) goto LAB_002cee39;
    }
    else {
      FUN_002cc5d0();
      uVar9 = CONCAT71((int7)((ulonglong)lVar7 >> 8),local_60 != 0);
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    bVar10 = local_60 == 0;
    if (param_2 == '\0') goto joined_r0x002ce9e3;
LAB_002ce8d8:
    bVar10 = true;
    if (lVar2 == 0) goto joined_r0x002ce9e3;
    FUN_0075c8d0();
    lVar7 = local_60;
    if (local_58[0] != '\0') {
      if (local_60 == 0) goto LAB_002ce95d;
LAB_002ce923:
      FUN_01d3a560();
      iVar8 = FUN_01d3b590();
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_38 = lVar7;
      if (iVar8 == 8) {
        bVar10 = false;
        goto LAB_002ce960;
      }
LAB_002cebc2:
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_02572358;
      (*DAT_02572370)();
      lVar7 = *(longlong *)(unaff_RDI + 0xe0);
      if (lVar7 != 0) {
        FUN_00d50b00();
        local_58[0] = '\0';
        local_60 = 0;
        local_48 = -1;
        iStack_44 = 0;
        iStack_40 = 0;
        local_50 = lVar7;
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
          lVar7 = (longlong)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(local_50 + 0xc) <= local_48) break;
          local_60 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar7 * 8);
          if (*(longlong *)(local_60 + 0x10) != 0) {
            FUN_00d50b00();
            iVar8 = *(int *)(local_60 + 0x20);
            FUN_00d50b20();
            if (iVar8 == 0) {
              lVar7 = *(longlong *)(local_60 + 0x10);
              if (lVar7 != 0) {
                FUN_00d50b00();
              }
              local_68 = '\0';
              local_70 = lVar7;
              FUN_00d21140();
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if (lVar7 != 0) {
                FUN_00d50b20();
              }
            }
          }
        }
        FUN_002d7300();
        FUN_00d50b20();
      }
      lVar7 = *(longlong *)(unaff_RDI + 0xf0);
      local_a8 = '\0';
      local_b0 = puVar6;
      FUN_002cc5d0();
      local_80 = local_60;
      local_78 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      lVar2 = local_38;
      local_78 = '\x01';
      FUN_00761a80();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (lVar2 == 0) {
        bVar10 = false;
      }
      else {
        FUN_00d50b20();
        bVar10 = false;
      }
      goto joined_r0x002ce9e3;
    }
    if (local_60 != 0) {
      FUN_00d50b00();
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_002ce923;
    }
LAB_002ce95d:
    bVar10 = true;
LAB_002ce960:
    lVar2 = DAT_026fcec8;
    local_d0 = 0;
    local_c8 = '\0';
    if (DAT_026fcec8 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar2;
    local_b8 = '\x01';
    FUN_01e57260();
    local_90 = local_70;
    local_88 = 0;
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_88 = '\x01';
    FUN_01f4f940(1,&local_d0,0,&local_90);
    lVar2 = local_60;
    if (local_58[0] == '\0') {
      if (((local_60 != 0) && (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)(lVar2 + 0xc) == 1) {
      FUN_00d23310();
      lVar2 = local_60;
      plVar5 = (longlong *)local_58;
      if (local_58[0] == '\0') {
        plVar5 = &local_70;
      }
      local_70 = CONCAT71(local_70._1_7_,local_58[0]);
      *(char *)plVar5 = '\0';
      if ((local_58[0] != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 == lVar2) {
        if ((char)local_70 == '\0') {
          local_38 = lVar7;
        }
        else {
          local_38 = lVar7;
          if (lVar2 != 0) {
            FUN_00d50b20();
            local_38 = lVar7;
          }
        }
      }
      else if ((char)local_70 == '\0') {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_38 = lVar2;
        if (!bVar10) {
          FUN_00d50b20();
          local_38 = lVar2;
        }
      }
      else {
        local_38 = lVar2;
        if (!bVar10) {
          FUN_00d50b20();
          local_38 = lVar2;
        }
      }
      FUN_00d50b20();
      goto LAB_002cebc2;
    }
    FUN_00d50b20();
    if (!bVar10) {
      FUN_00d50b20();
    }
    uVar9 = 0;
  }
  FUN_00d50b20();
LAB_002cee39:
  return uVar9 & 0xffffffff;
}


