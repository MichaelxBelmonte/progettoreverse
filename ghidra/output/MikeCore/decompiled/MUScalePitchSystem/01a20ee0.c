// Function: FUN_01a20ee0
// Address: 01a20ee0
// Size: 1869 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01a210b8) */
/* WARNING: Removing unreachable block (ram,0x01a210c4) */
/* WARNING: Removing unreachable block (ram,0x01a21132) */
/* WARNING: Removing unreachable block (ram,0x01a21142) */
/* WARNING: Removing unreachable block (ram,0x01a2150b) */
/* WARNING: Removing unreachable block (ram,0x01a21518) */
/* WARNING: Removing unreachable block (ram,0x01a21164) */
/* WARNING: Removing unreachable block (ram,0x01a2116d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a20ee0(pthread_key_t param_1,float param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar13 [16];
  longlong *local_d8;
  char local_d0;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_40;
  char local_38;
  
  iVar3 = FUN_01d3a5a0();
  if (iVar3 != 1) {
LAB_01a21104:
    FUN_01e459c0();
    return;
  }
  iVar3 = FUN_01d3b630();
  if (iVar3 != 1) {
    iVar3 = FUN_01d3b630();
    if (iVar3 == 2) {
      FUN_01a1d6e0();
      (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                  *local_d8 + 0x38))();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if (local_d0 != '\0') {
        FUN_00d50b20();
      }
      if (local_40 == (longlong *)0x0) {
        return;
      }
      FUN_01d3abf0();
      uVar11 = FUN_01e466c0();
      uVar12 = (**(code **)(*unaff_RDI + 0x4d8))();
      FUN_01a1d6e0();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_01d62b10();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b00();
      local_58 = (float)uVar12;
      uStack_54 = (undefined4)((ulonglong)uVar12 >> 0x20);
      uStack_50 = (undefined4)extraout_XMM0_Qb_00;
      uStack_4c = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      auVar1._8_8_ = extraout_XMM0_Qb;
      auVar1._0_8_ = uVar11;
      auVar13._4_4_ = uStack_54;
      auVar13._0_4_ = local_58 + param_2 + DAT_02390d00 + DAT_023b8b2c;
      auVar13._8_4_ = uStack_50;
      auVar13._12_4_ = uStack_4c;
      auVar13 = blendps(auVar1,auVar13,1);
      FUN_01d5ef60(auVar13._0_8_,_DAT_02420ca0);
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_01d62b80();
      (**(code **)(*unaff_RDI + 0x620))();
      FUN_00d50b20();
      return;
    }
    goto LAB_01a21104;
  }
  FUN_01d3abf0();
  FUN_01e466c0();
  (**(code **)(*unaff_RDI + 0x928))();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*unaff_RDI + 0x920))();
  pvVar7 = _pthread_getspecific(param_1);
  plVar9 = local_40;
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    plVar9 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  iVar3 = (**(code **)(*plVar9 + 0x3a8))();
  lVar8 = FUN_00e7b4e0();
  unaff_RDI[0x28] = lVar8;
  (**(code **)(*unaff_RDI + 0x620))();
  iVar4 = FUN_01d3b620();
  plVar9 = (longlong *)(ulonglong)(1 - iVar3);
  while( true ) {
    (**(code **)(*unaff_RDI + 0x658))();
    plVar10 = (longlong *)*unaff_RSI;
    if (plVar10 != local_40) break;
    if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01a212dc;
      }
LAB_01a21292:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      local_38 = '\0';
    }
    if (*unaff_RSI == 0) goto LAB_01a213ea;
LAB_01a212ee:
    iVar5 = FUN_01d3a5a0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar5 == 6) goto LAB_01a213fe;
    iVar5 = FUN_01d3a5a0();
    if (iVar5 == 5) {
      FUN_01d3abf0();
      FUN_01e466c0();
      FUN_01e3f820();
      cVar2 = FUN_00d05410();
      if (cVar2 == '\0') {
        lVar8 = FUN_00e7b4e0();
      }
      else {
        (**(code **)(*unaff_RDI + 0x920))();
        pvVar7 = _pthread_getspecific((pthread_key_t)plVar9);
        plVar10 = local_40;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar9 = local_40;
          plVar10 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        iVar5 = (**(code **)(*plVar10 + 0x3a8))();
        if (iVar5 < iVar3) {
          lVar8 = FUN_00e7b4e0();
        }
        else {
          lVar8 = FUN_00e7b4e0();
        }
      }
      unaff_RDI[0x28] = lVar8;
      (**(code **)(*unaff_RDI + 0x620))();
    }
  }
  lVar8 = unaff_RSI[1];
  if (local_38 != '\0') {
    *unaff_RSI = (longlong)local_40;
    if (((char)lVar8 != '\0') && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_01a21292;
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  *unaff_RSI = (longlong)local_40;
  if (((char)lVar8 != '\0') && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a212dc:
  *(undefined1 *)(unaff_RSI + 1) = 1;
  if (*unaff_RSI != 0) goto LAB_01a212ee;
LAB_01a213ea:
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a213fe:
  if ((*(int *)((longlong)unaff_RDI + 0x144) == 0) || (*unaff_RSI == 0)) goto LAB_01a2161b;
  uVar6 = FUN_01d3b590();
  if (*(int *)((longlong)unaff_RDI + 0x144) == 1) {
    if (iVar4 < 2) {
      FUN_01a1d6e0();
      (**(code **)(*local_40 + 0xdf8))(1,(uVar6 & 4) >> 2,1);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01a1d6e0();
      (**(code **)(*local_40 + 0xdf8))(1,1,1);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      FUN_01a1d6e0();
      (**(code **)(*local_40 + 0xe00))(1,(uVar6 & 4) >> 2,1);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01a1d6e0();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((uVar6 & 4) == 0) {
      (**(code **)(*local_40 + 0xda0))();
    }
    iVar3 = *(int *)((longlong)unaff_RDI + 0x144);
    if (iVar3 == 0) {
      if (local_40 == (longlong *)0x0) goto LAB_01a215fc;
    }
    else {
      do {
        (**(code **)(*local_40 + 0xdf8))(1,1,1);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00d50b20();
  }
LAB_01a215fc:
  lVar8 = FUN_00e7b4e0();
  unaff_RDI[0x28] = lVar8;
  (**(code **)(*unaff_RDI + 0x620))();
LAB_01a2161b:
  FUN_00d50b20();
  return;
}


