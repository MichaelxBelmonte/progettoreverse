// Function: FUN_004afe20
// Address: 004afe20
// Size: 1763 bytes
// Class: MDErrorController


/* WARNING: Removing unreachable block (ram,0x004b00e2) */
/* WARNING: Removing unreachable block (ram,0x004b014c) */
/* WARNING: Removing unreachable block (ram,0x004b0151) */
/* WARNING: Removing unreachable block (ram,0x004b0159) */
/* WARNING: Removing unreachable block (ram,0x004b0170) */
/* WARNING: Removing unreachable block (ram,0x004b015e) */
/* WARNING: Removing unreachable block (ram,0x004b00e8) */
/* WARNING: Removing unreachable block (ram,0x004b016b) */
/* WARNING: Removing unreachable block (ram,0x004b00ed) */

undefined8 FUN_004afe20(longlong *param_1,longlong *param_2,char param_3,uint param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  longlong **pplVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong lVar9;
  longlong unaff_RDI;
  uint uVar10;
  char local_res8;
  longlong local_130;
  undefined1 local_128;
  longlong local_120;
  undefined1 local_118;
  longlong *local_110;
  longlong *local_108;
  char local_100;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  uint local_7c;
  longlong *local_78;
  longlong *local_68;
  char local_60 [8];
  longlong local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38 [8];
  
  local_f0 = *unaff_RSI;
  if (local_f0 == 0) {
    return 0;
  }
  if (*(int *)(local_f0 + 0xc) == 0) {
    return 0;
  }
  local_e8 = '\0';
  local_130 = *param_2;
  local_128 = 0;
  local_120 = *param_1;
  local_118 = 0;
  local_110 = param_2;
  local_7c = param_4;
  FUN_004b0830(&local_130,&local_f0,param_4 & 0xff,local_res8);
  plVar1 = (longlong *)*unaff_RSI;
  local_78 = param_1;
  if (plVar1 == local_68) {
    if (((char)unaff_RSI[1] == '\0') && (local_68 != (longlong *)0x0)) {
      if (local_60[0] == '\0') {
        FUN_00d50b00();
      }
      goto LAB_004aff56;
    }
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar4 = unaff_RSI[1];
    if (local_60[0] == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)local_68;
      if (((char)lVar4 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      *unaff_RSI = (longlong)local_68;
      if (((char)lVar4 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_004aff56:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    param_1 = local_78;
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  pcVar6 = local_38;
  if (local_60[0] != '\0') {
    pcVar6 = local_60;
  }
  local_38[0] = local_60[0];
  *pcVar6 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_e0 = *param_1;
  local_d8 = '\0';
  pplVar7 = &local_108;
  (**(code **)(*local_68 + 0x98))();
  plVar1 = local_108;
  FUN_00053ac0();
  if (plVar1 == (longlong *)0x0) {
LAB_004b0012:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_004b0012;
  }
  plVar2 = local_78;
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  FUN_00d45ad0();
  FUN_00d46300();
  if ((((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_40 = plVar1;
  if (local_res8 == '\0') {
    lVar9 = *unaff_RSI;
    lVar4 = local_58;
    goto joined_r0x004b0119;
  }
  FUN_00d46300();
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d46300();
  if (plVar1 == local_68) {
joined_r0x004b01b7:
    if ((local_60[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_60[0] == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      local_40 = local_68;
      goto joined_r0x004b01b7;
    }
    local_40 = local_68;
    FUN_00d50b20();
  }
  param_3 = '\x01';
  lVar9 = *unaff_RSI;
  lVar4 = local_58;
joined_r0x004b0119:
  local_58 = lVar9;
  if (local_58 != 0) {
    local_60[0] = '\0';
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar8 = -local_50._4_4_;
        }
        else {
          iVar8 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar8);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar8 = 0;
        }
        local_50 = CONCAT44(iVar8,(int)local_50);
      }
      lVar4 = (longlong)(int)local_50;
      iVar8 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar8);
      if (*(int *)(local_58 + 0xc) <= iVar8) break;
      local_d0 = local_68;
      local_c8 = '\0';
      local_c0 = *plVar2;
      local_b8 = '\0';
      (**(code **)(**(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar4 * 8) + 0x90))
                (*(longlong *)(local_58 + 0x10),&local_c0);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00083b20();
    lVar4 = local_58;
  }
  local_58 = lVar4;
  if ((((param_3 != '\0') && (cVar3 = FUN_00d45ad0(), cVar3 != '\0')) && ((char)local_7c == '\0'))
     && (lVar4 = *local_110, lVar4 != 0)) {
    local_60[0] = '\0';
    local_48 = 0;
    local_50 = 0;
    local_58 = lVar4;
    if (0 < *(int *)(lVar4 + 0xc)) {
      uVar10 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + (ulonglong)uVar10 * 8);
        local_a8 = '\0';
        local_b0 = plVar1;
        cVar3 = FUN_00d23d70();
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          iVar8 = *(int *)(*(longlong *)(unaff_RDI + 0x10) + 0x18);
          iVar5 = iVar8 + 3;
          if (-1 < iVar8) {
            iVar5 = iVar8;
          }
          if (3 < iVar8) {
            iVar5 = iVar5 >> 2;
            lVar9 = 0;
            do {
              if (*(uint *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x10) + lVar9 * 4) ==
                  uVar10) goto LAB_004b0380;
              lVar9 = lVar9 + 1;
            } while (iVar5 != (int)lVar9);
          }
          local_a0 = local_40;
          local_98 = '\0';
          local_90 = *local_78;
          local_88 = '\0';
          (**(code **)(*plVar1 + 0x90))(iVar5,&local_90);
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_004b0380:
        uVar10 = uVar10 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar10);
      } while ((int)uVar10 < *(int *)(lVar4 + 0xc));
    }
    FUN_00083b20();
  }
  cVar3 = FUN_00d45ad0();
  if ((cVar3 == '\0') && (*(int *)(*unaff_RSI + 0xc) < 2)) {
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      *(undefined8 *)(unaff_RDI + 0x18) = 0;
      FUN_00d50b20();
    }
    *(undefined8 *)(unaff_RDI + 0x20) = 0xffffffffffffffff;
  }
  if (local_68 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return 0;
}


