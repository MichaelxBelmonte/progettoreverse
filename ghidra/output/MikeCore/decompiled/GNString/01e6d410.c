// Function: FUN_01e6d410
// Address: 01e6d410
// Size: 573 bytes
// Class: GNString


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e6d410(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 local_48 [16];
  
  iVar1 = *(int *)(unaff_RDI + 0x158);
  if (iVar1 == 2) {
    lVar4 = *(longlong *)(unaff_RDI + 0x150);
    iVar1 = *(int *)(lVar4 + 0xc);
    fVar8 = DAT_02390d28;
  }
  else if (iVar1 == 1) {
    if ((((float)DAT_028ba110 == 0.0) && (!NAN((float)DAT_028ba110))) ||
       ((DAT_028ba110._4_4_ == 0.0 && (!NAN(DAT_028ba110._4_4_))))) {
      lVar4 = *(longlong *)(unaff_RDI + 0x150);
      iVar1 = *(int *)(lVar4 + 0xc);
      DAT_028ba110._0_4_ = _DAT_024202c0;
      DAT_028ba110._4_4_ = _UNK_024202c4;
      fVar8 = _UNK_024202c4;
    }
    else {
      lVar4 = *(longlong *)(unaff_RDI + 0x150);
      iVar1 = *(int *)(lVar4 + 0xc);
      fVar8 = DAT_028ba110._4_4_;
    }
  }
  else {
    fVar8 = 0.0;
    if (iVar1 == 0) {
      if ((((float)DAT_028ba110 == 0.0) && (!NAN((float)DAT_028ba110))) ||
         ((DAT_028ba110._4_4_ == 0.0 && (!NAN(DAT_028ba110._4_4_))))) {
        DAT_028ba110._0_4_ = _DAT_024202c0;
        DAT_028ba110._4_4_ = _UNK_024202c4;
      }
      fVar8 = DAT_028ba110._4_4_ + DAT_02390d34 + DAT_02390d28;
    }
    lVar4 = *(longlong *)(unaff_RDI + 0x150);
    iVar1 = *(int *)(lVar4 + 0xc);
  }
  if (iVar1 < 1) {
    bVar2 = false;
    lVar5 = 0;
  }
  else {
    local_48 = ZEXT416((uint)DAT_02390d30);
    lVar7 = 0;
    bVar2 = false;
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar7 * 8);
      if (lVar6 == lVar4) {
        lVar5 = lVar6;
        bVar3 = bVar2;
        if ((!bVar2) && (lVar4 != 0)) {
          FUN_00d50b00();
          bVar3 = true;
        }
      }
      else {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        lVar5 = lVar4;
        if ((bVar2) && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = bVar3;
      auVar9._0_8_ = FUN_01e6d780();
      if (*unaff_RSI == lVar5) {
        auVar9._8_4_ = (undefined4)extraout_XMM0_Qb;
        auVar9._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
        blendps(local_48,_DAT_023b27d0,0xe);
        insertps(auVar9,fVar8,0x10);
        if (!bVar2) {
          return;
        }
        goto LAB_01e6d616;
      }
      local_48._4_4_ = 0;
      local_48._0_4_ = (float)local_48._0_4_ + (float)auVar9._0_8_ + DAT_02390d30;
      lVar7 = lVar7 + 1;
      lVar4 = *(longlong *)(unaff_RDI + 0x150);
      lVar6 = lVar5;
    } while (lVar7 < *(int *)(lVar4 + 0xc));
  }
  if (bVar2) {
LAB_01e6d616:
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


