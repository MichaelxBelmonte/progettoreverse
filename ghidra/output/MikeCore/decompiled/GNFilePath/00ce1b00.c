// Function: FUN_00ce1b00
// Address: 00ce1b00
// Size: 3243 bytes
// Class: GNFilePath
// String references:
//   "%@/%@"
//   "//%@"
//   "/%@"


/* WARNING: Removing unreachable block (ram,0x00ce2170) */
/* WARNING: Removing unreachable block (ram,0x00ce217c) */
/* WARNING: Removing unreachable block (ram,0x00ce1c11) */
/* WARNING: Removing unreachable block (ram,0x00ce1c1d) */
/* WARNING: Removing unreachable block (ram,0x00ce1c77) */
/* WARNING: Removing unreachable block (ram,0x00ce1c83) */
/* WARNING: Removing unreachable block (ram,0x00ce20c7) */
/* WARNING: Removing unreachable block (ram,0x00ce20d3) */

undefined8 * FUN_00ce1b00(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined8 local_1b0 [2];
  undefined1 local_1a0;
  undefined1 local_190;
  undefined1 local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_58;
  char local_50;
  longlong local_38;
  
  lVar9 = DAT_02704060;
  if (DAT_02704060 != 0) {
    FUN_00d50b00();
  }
  local_178 = lVar9;
  local_170 = '\x01';
  cVar5 = FUN_00d90870();
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  lVar9 = DAT_02704060;
  if (cVar5 == '\0') {
    (**(code **)(*unaff_RSI + 0x368))();
    if ((local_88 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
    }
    if ((DAT_028a7578 == 0) || (DAT_028a7581 == '\0')) {
      FUN_00e8cb50();
      lVar9 = DAT_02775670;
      if (DAT_028a7578 == 0) {
        if (DAT_02775670 != 0) {
          FUN_00d50b00();
          lVar4 = DAT_028a7578;
          if (DAT_028a7578 == lVar9) {
            bVar12 = false;
          }
          else {
            DAT_028a7578 = lVar9;
            bVar12 = true;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028a7580 == '\0') {
            DAT_028a7580 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar12) {
            FUN_00d50b20();
          }
        }
        DAT_028a7581 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a7581 = '\x01';
        FUN_00e8cb70();
      }
    }
    if ((DAT_028a7588 == 0) || (DAT_028a7591 == '\0')) {
      FUN_00e8cb50();
      lVar9 = DAT_02774da0;
      if (DAT_028a7588 == 0) {
        if (DAT_02774da0 != 0) {
          FUN_00d50b00();
          lVar4 = DAT_028a7588;
          if (DAT_028a7588 == lVar9) {
            bVar12 = false;
          }
          else {
            DAT_028a7588 = lVar9;
            bVar12 = true;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028a7590 == '\0') {
            DAT_028a7590 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar12) {
            FUN_00d50b20();
          }
        }
        DAT_028a7591 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a7591 = '\x01';
        FUN_00e8cb70();
      }
    }
    lVar9 = DAT_028a7578;
    local_d0 = 0;
    if (DAT_028a7578 != 0) {
      FUN_00d50b00();
    }
    local_d8 = lVar9;
    local_d0 = '\x01';
    cVar5 = FUN_00d90eb0();
    lVar9 = DAT_028a7578;
    if (cVar5 == '\0') {
      local_c0 = 0;
      if (DAT_028a7578 != 0) {
        FUN_00d50b00();
      }
      local_c8 = lVar9;
      local_c0 = '\x01';
      cVar5 = FUN_00d90eb0();
      lVar9 = DAT_028a7588;
      if (cVar5 == '\0') {
        plVar11 = (longlong *)*param_2;
        local_b0 = 0;
        if (DAT_028a7588 != 0) {
          FUN_00d50b00();
        }
        local_b8 = lVar9;
        local_b0 = '\x01';
        bVar6 = (**(code **)(*plVar11 + 0x50))();
        bVar6 = bVar6 ^ 1;
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar6 = 0;
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      bVar6 = 0;
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6 == 0) {
      iVar8 = FUN_00d8c7a0();
      if ((iVar8 < 2) || (sVar7 = FUN_00d8cbc0(), sVar7 != 0x2f)) {
        bVar12 = false;
        local_158 = DAT_02704060;
      }
      else {
        sVar7 = FUN_00d8cbc0();
        bVar12 = sVar7 == 0x2f;
        local_158 = DAT_02704060;
      }
      DAT_02704060 = local_158;
      if (local_158 != 0) {
        FUN_00d50b00();
      }
      local_150 = '\x01';
      FUN_00d91000(1,&local_158);
      local_38 = local_90;
      if (local_90 == 0) {
        local_38 = 0;
        bVar2 = false;
      }
      else if (local_88 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      lVar9 = DAT_02704060;
      if (DAT_02704060 != 0) {
        FUN_00d50b00();
      }
      local_148 = lVar9;
      local_140 = '\x01';
      FUN_00d91000(1,&local_148);
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_00d214d0();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_a0 = local_90;
      local_1b0[0] = *param_2;
      FUN_00083ea0(2,local_1b0);
      FUN_00d8cb40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_1a0 = 1;
      FUN_00cddf30();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      bVar2 = false;
      local_38 = 0;
      bVar12 = false;
    }
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if (bVar6 != 0) goto LAB_00ce277e;
  }
  else {
    if (DAT_02704060 != 0) {
      FUN_00d50b00();
    }
    local_168 = lVar9;
    local_160 = '\x01';
    FUN_00d91000(1,&local_168);
    if (local_90 == 0) {
      local_38 = 0;
      bVar2 = false;
    }
    else {
      local_38 = local_90;
      if (local_88 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    bVar12 = false;
  }
  uVar10 = *(uint *)(local_38 + 0xc);
  if ((int)uVar10 < 1) {
    bVar3 = false;
    plVar11 = (longlong *)0x0;
  }
  else {
    lVar9 = (ulonglong)uVar10 + 1;
    plVar11 = (longlong *)0x0;
    bVar3 = false;
    do {
      uVar10 = uVar10 - 1;
      plVar1 = *(longlong **)(*(longlong *)(local_38 + 0x10) + (ulonglong)uVar10 * 8);
      if (plVar11 == plVar1) {
        lVar4 = DAT_02774da0;
        if ((!bVar3) && (plVar11 != (longlong *)0x0)) {
          bVar3 = true;
          FUN_00d50b00();
          lVar4 = DAT_02774da0;
        }
      }
      else {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
          bVar3 = true;
          plVar11 = plVar1;
          lVar4 = DAT_02774da0;
        }
        else {
          bVar3 = true;
          plVar11 = plVar1;
          lVar4 = DAT_02774da0;
        }
      }
      DAT_02774da0 = lVar4;
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      local_130 = '\x01';
      local_138 = lVar4;
      cVar5 = (**(code **)(*plVar11 + 0x50))();
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') {
        FUN_00d23620();
      }
      lVar9 = lVar9 + -1;
    } while (1 < lVar9);
    if (0 < *(int *)(local_38 + 0xc)) {
      iVar8 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(local_38 + 0x10) + (longlong)iVar8 * 8);
        if (plVar11 == plVar1) {
          lVar9 = DAT_02775678;
          if (!bVar3) {
            bVar3 = true;
            FUN_00d50b00();
            lVar9 = DAT_02775678;
          }
        }
        else {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          plVar11 = plVar1;
          if (bVar3) {
            FUN_00d50b20();
            bVar3 = true;
            lVar9 = DAT_02775678;
          }
          else {
            bVar3 = true;
            lVar9 = DAT_02775678;
          }
        }
        DAT_02775678 = lVar9;
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        local_120 = '\x01';
        local_128 = lVar9;
        cVar5 = (**(code **)(*plVar11 + 0x50))();
        if ((local_120 != '\0') && (local_128 != 0)) {
          FUN_00d50b20();
        }
        if (cVar5 != '\0') {
          if (iVar8 == 0) {
            *(undefined1 *)(unaff_RDI + 1) = 0;
            *unaff_RDI = 0;
            if (!bVar3) goto LAB_00ce277e;
            goto LAB_00ce2771;
          }
          FUN_00d23620();
          FUN_00d23620();
          iVar8 = iVar8 + -2;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(local_38 + 0xc));
    }
  }
  lVar9 = DAT_02704060;
  if (bVar12) {
    local_110 = '\0';
    local_118 = local_38;
    if (DAT_02704060 != 0) {
      FUN_00d50b00();
    }
    local_108 = lVar9;
    local_100 = '\x01';
    FUN_00d95130();
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_190 = 1;
    FUN_00cddf30();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_a0 != 0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_f0 = '\0';
    local_f8 = local_38;
    if (DAT_02704060 != 0) {
      FUN_00d50b00();
    }
    local_e8 = lVar9;
    local_e0 = '\x01';
    FUN_00d95130();
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_180 = 1;
    FUN_00cddf30();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_a0 != 0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (bVar3) {
LAB_00ce2771:
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_00ce277e:
  if ((bVar2) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


