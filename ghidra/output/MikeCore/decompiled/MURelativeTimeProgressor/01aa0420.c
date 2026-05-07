// Function: FUN_01aa0420
// Address: 01aa0420
// Size: 1245 bytes
// Class: MURelativeTimeProgressor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01aa0420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  float fVar10;
  double dVar11;
  uint uVar12;
  undefined4 extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  uint uVar13;
  undefined4 extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  uint uVar14;
  undefined4 uVar15;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 uVar16;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong local_40;
  uint local_34;
  
  uVar16 = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar15 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (*unaff_RSI == 0) {
    return 0;
  }
  uVar9 = 0;
  uVar3 = FUN_00d8ca50();
  local_a8 = DAT_027d3890;
  local_58 = CONCAT71(local_58._1_7_,uVar3);
  if (*(uint *)(unaff_RDI + 0xc) - 1 < 3) {
    uVar9 = (ulonglong)*(uint *)(unaff_RDI + 0xc);
  }
  if (DAT_027d3890 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  FUN_00d91000(1,&local_a8);
  lVar8 = local_98;
  if (local_98 == 0) {
    uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
    lVar8 = 0;
    uVar6 = 0;
  }
  else {
    if (local_90 == '\0') {
      FUN_00d50b00();
      uVar9 = 0;
      uVar6 = 1;
      if ((local_90 == '\0') || (local_98 == 0)) goto LAB_01aa0511;
      FUN_00d50b20();
    }
    else {
      local_90 = '\0';
    }
    uVar6 = 1;
    uVar9 = 0;
  }
LAB_01aa0511:
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  iVar1 = *(int *)(lVar8 + 0xc);
  uVar13 = (uint)uVar9;
  local_40 = lVar8;
  if (*(int *)(unaff_RDI + 0xc) == 4) {
    if (iVar1 == 3) {
      local_48 = uVar6;
      local_34 = uVar13;
      iVar5 = FUN_00d8d560();
      iVar4 = FUN_00d8d560();
      iVar1 = -iVar5;
      if (0 < iVar5) {
        iVar1 = iVar5;
      }
      iVar5 = -iVar4;
      if (0 < iVar4) {
        iVar5 = iVar4;
      }
      plVar2 = *(longlong **)(unaff_RDI + 0x10);
      lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x10);
      local_60 = 0;
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      local_60 = '\x01';
      local_68 = lVar8;
      local_58._0_4_ = (float)(**(code **)(*plVar2 + 0x380))();
      local_58._0_4_ = (float)(iVar5 * 0x3c) + (float)iVar1 * DAT_023941f0 + (float)local_58;
      uStack_50 = CONCAT44(in_XMM2_Dd,in_XMM2_Dc);
      uVar9 = (ulonglong)local_34;
      local_58 = CONCAT44(uVar16,(float)local_58);
      if ((local_60 != '\0') && (local_58 = CONCAT44(uVar16,(float)local_58), local_68 != 0)) {
        local_58._4_4_ = uVar16;
        FUN_00d50b20();
      }
    }
    else if (iVar1 == 2) {
      local_34 = uVar13;
      iVar5 = FUN_00d8d560();
      iVar1 = -iVar5;
      if (0 < iVar5) {
        iVar1 = iVar5;
      }
      plVar2 = *(longlong **)(unaff_RDI + 0x10);
      lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + 8);
      local_70 = 0;
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      local_78 = lVar8;
      local_58._0_4_ = (float)(**(code **)(*plVar2 + 0x380))();
      local_58._0_4_ = (float)iVar1 * DAT_023941f0 + (float)local_58;
      uStack_50 = CONCAT44(in_XMM1_Dd,in_XMM1_Dc);
      uVar9 = (ulonglong)local_34;
      local_58 = CONCAT44(uVar15,(float)local_58);
      if ((local_70 != '\0') && (local_58 = CONCAT44(uVar15,(float)local_58), local_78 != 0)) {
        local_58._4_4_ = uVar15;
        FUN_00d50b20();
        local_58 = CONCAT44(local_58._4_4_,(float)local_58);
      }
    }
    else {
      local_58._0_4_ = 0.0;
      local_58._4_4_ = 0;
      uStack_50 = 0;
      local_58 = 0;
      if (iVar1 == 1) {
        plVar2 = *(longlong **)(unaff_RDI + 0x10);
        lVar8 = **(longlong **)(lVar8 + 0x10);
        local_80 = 0;
        local_34 = uVar13;
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        local_80 = '\x01';
        local_88 = lVar8;
        local_58 = (**(code **)(*plVar2 + 0x380))();
        uStack_50 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
        uVar9 = (ulonglong)local_34;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    cVar7 = (char)uVar9;
  }
  else {
    if (iVar1 == 1) {
      local_48 = uVar6;
      local_34 = uVar13;
      FUN_00d8d560();
    }
    else if (iVar1 == 2) {
      local_48 = uVar6;
      local_34 = uVar13;
      FUN_00d8d560();
      FUN_00d8d560();
    }
    else if (iVar1 == 3) {
      local_48 = uVar6;
      local_34 = uVar13;
      FUN_00d8d560();
      FUN_00d8d560();
      FUN_00d8d560();
    }
    else {
      local_48 = uVar6;
      local_34 = uVar13;
      if (0 < iVar1) {
        uVar9 = 0;
        do {
          FUN_00d8d560();
          switch(uVar9 & 0xffffffff) {
          case 0:
            break;
          case 1:
            break;
          case 2:
            break;
          case 3:
          }
          uVar9 = uVar9 + 1;
        } while ((longlong)uVar9 < (longlong)*(int *)(local_40 + 0xc));
      }
    }
    dVar11 = (double)FUN_00b383b0(local_40);
    uVar12 = (uint)((ulonglong)dVar11 >> 0x20);
    fVar10 = (float)dVar11;
    uVar13 = extraout_XMM0_Dc_00;
    uVar14 = extraout_XMM0_Dd_00;
    if ((char)local_58 != '\0') {
      fVar10 = (float)((uint)fVar10 ^ _DAT_023945e0);
      uVar12 = uVar12 ^ _UNK_023945e4;
      uVar13 = extraout_XMM0_Dc_00 ^ _UNK_023945e8;
      uVar14 = extraout_XMM0_Dd_00 ^ _UNK_023945ec;
    }
    local_58 = CONCAT44(uVar12,fVar10);
    uStack_50 = CONCAT44(uVar14,uVar13);
    cVar7 = (char)local_34;
  }
  if (cVar7 == '\0') {
    FUN_00d50b20();
  }
  return local_58;
}


