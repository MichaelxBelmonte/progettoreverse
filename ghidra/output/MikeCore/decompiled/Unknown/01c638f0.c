// Function: FUN_01c638f0
// Address: 01c638f0
// Size: 816 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01c63b43) */
/* WARNING: Removing unreachable block (ram,0x01c63b4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01c638f0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *unaff_RDI;
  undefined4 uVar8;
  undefined8 uVar9;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong local_38;
  char local_30;
  float fVar10;
  
  iVar5 = FUN_01d3a5a0();
  auVar11 = in_XMM1;
  if (iVar5 == 5) {
    FUN_01d3abf0();
    uVar8 = FUN_01e466c0();
    auVar11 = in_XMM1;
    if (*(char *)((longlong)unaff_RDI + 0x22c) != '\0') {
      uVar9 = FUN_01e436c0();
      fVar10 = (float)((ulonglong)uVar9 >> 0x20);
      auVar13._8_4_ = extraout_XMM0_Dc;
      auVar13._0_8_ = uVar9;
      auVar13._12_4_ = extraout_XMM0_Dd;
      auVar11._4_4_ = fVar10;
      auVar11._0_4_ = fVar10 + in_XMM1._4_4_ + DAT_023b1608;
      auVar11._8_4_ = extraout_XMM0_Dd;
      auVar11._12_4_ = extraout_XMM0_Dd;
      auVar11 = insertps(auVar13,auVar11,0x10);
      auVar13 = blendps(in_XMM1,_DAT_023b45e0,0xe);
      cVar4 = FUN_00d05410(uVar8,auVar11._0_8_,auVar13._0_8_);
      if (cVar4 != '\0') {
        FUN_01c4bc80();
        if ((local_30 == '\0') && (local_38 != 0)) {
          FUN_00d50b00();
        }
        FUN_01e4ac90();
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        uVar7 = CONCAT71((int7)((ulonglong)local_38 >> 8),1);
        goto LAB_01c63be4;
      }
    }
  }
  iVar5 = FUN_01d3a5a0();
  if (iVar5 == 1) {
    cVar4 = FUN_01e420b0();
    if (cVar4 == '\0') {
      FUN_01e42250();
    }
    FUN_01d3abf0();
    uVar8 = FUN_01e466c0();
    if (*(char *)((longlong)unaff_RDI + 0x22c) != '\0') {
      uVar9 = FUN_01e436c0();
      fVar10 = (float)((ulonglong)uVar9 >> 0x20);
      auVar12._8_4_ = extraout_XMM0_Dc_00;
      auVar12._0_8_ = uVar9;
      auVar12._12_4_ = extraout_XMM0_Dd_00;
      auVar3._4_4_ = fVar10;
      auVar3._0_4_ = fVar10 + auVar11._4_4_ + DAT_023b1608;
      auVar3._8_4_ = extraout_XMM0_Dd_00;
      auVar3._12_4_ = extraout_XMM0_Dd_00;
      auVar13 = insertps(auVar12,auVar3,0x10);
      auVar11 = blendps(auVar11,_DAT_023b45e0,0xe);
      cVar4 = FUN_00d05410(uVar8,auVar13._0_8_,auVar11._0_8_);
      if (cVar4 != '\0') {
        FUN_01c4bc80();
        if ((local_30 == '\0') && (local_38 != 0)) {
          FUN_00d50b00();
        }
        FUN_01e4ac90();
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        plVar1 = (longlong *)unaff_RDI[0x46];
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          FUN_00d50b00();
          if ((longlong *)unaff_RDI[0x46] != (longlong *)0x0) {
            lVar6 = (**(code **)(*(longlong *)unaff_RDI[0x46] + 0x10))();
            unaff_RDI[0x46] = 0;
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
          }
        }
        (**(code **)(*plVar1 + 0x18))();
        do {
          (**(code **)(*unaff_RDI + 0x658))();
          if (local_30 == '\0') {
            if (local_38 == 0) goto LAB_01c63bb4;
            FUN_00d50b00();
          }
          else if (local_38 == 0) goto LAB_01c63bb4;
          iVar5 = FUN_01d3a5a0();
          if ((iVar5 == 5) || (iVar5 = FUN_01d3a5a0(), iVar5 == 6)) {
            FUN_01d3abf0();
            FUN_01e466c0();
            (**(code **)(*plVar1 + 0x20))(extraout_XMM0_Db - (float)((ulonglong)param_1 >> 0x20));
            iVar5 = FUN_01d3a5a0();
            if (iVar5 == 6) goto code_r0x01c63bac;
          }
          FUN_00d50b20();
        } while( true );
      }
    }
  }
  uVar7 = 0;
  goto LAB_01c63be4;
code_r0x01c63bac:
  FUN_00d50b20();
LAB_01c63bb4:
  (**(code **)(*plVar1 + 0x28))();
  (**(code **)(*plVar1 + 0x40))();
  plVar2 = (longlong *)unaff_RDI[0x46];
  if (plVar2 != plVar1) {
    if (plVar2 == (longlong *)0x0) {
      local_38 = 0;
    }
    else {
      local_38 = (**(code **)(*plVar2 + 0x10))();
    }
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    unaff_RDI[0x46] = (longlong)plVar1;
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*plVar1 + 0x10))();
  uVar7 = CONCAT71((int7)((ulonglong)local_38 >> 8),1);
  FUN_00d50b20();
LAB_01c63be4:
  return uVar7 & 0xffffffff;
}


