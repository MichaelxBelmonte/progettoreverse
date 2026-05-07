// Function: FUN_01ee0360
// Address: 01ee0360
// Size: 521 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01ee0424) */
/* WARNING: Removing unreachable block (ram,0x01ee042d) */

void FUN_01ee0360(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *unaff_RDI;
  bool bVar3;
  float fVar4;
  undefined8 extraout_XMM0_Qa;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 extraout_XMM0_Dd;
  undefined8 in_XMM1_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 local_48 [8];
  undefined8 uStack_40;
  longlong local_38;
  char local_30;
  undefined8 extraout_XMM0_Qb;
  
  if (unaff_RDI[6] == 0) {
    bVar3 = false;
    lVar1 = unaff_RDI[0x27];
  }
  else {
    (**(code **)(*unaff_RDI + 0x7b0))();
    bVar3 = unaff_RDI[6] == local_38;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x27];
  }
  if ((((lVar1 == 0) || (lVar1 = unaff_RDI[0x28], (int)lVar1 < 0)) ||
      (iVar2 = FUN_01eddbf0(), iVar2 <= (int)lVar1)) ||
     (FUN_01eddbb0(extraout_XMM0_Qa,(int)unaff_RDI[0x28]), local_38 == 0)) {
    if (bVar3) {
      (**(code **)(*unaff_RDI + 0x7b0))();
      FUN_01e3f820();
      (**(code **)(*unaff_RDI + 0x4e8))();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_30 == '\0') {
      FUN_00d50b00();
    }
    if (bVar3) {
      (**(code **)(*unaff_RDI + 0x7b0))();
      FUN_01e3f820();
      uStack_40 = in_XMM1_Qb;
      local_48 = (undefined1  [8])param_2;
      auVar7 = _local_48;
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      fVar4 = (float)FUN_01ede0b0();
      local_48._0_4_ = (undefined4)param_2;
      bVar3 = (float)local_48._0_4_ < fVar4 * *(float *)((longlong)unaff_RDI + 0x144);
      _local_48 = auVar7;
      if (bVar3) {
        auVar5._0_8_ = FUN_01ede0b0();
        auVar5._8_8_ = extraout_XMM0_Qb;
        auVar6._4_12_ = auVar5._4_12_;
        auVar6._0_4_ = (float)auVar5._0_8_ * *(float *)((longlong)unaff_RDI + 0x144);
        _local_48 = blendps(auVar7,auVar6,1);
      }
      FUN_01ede0b0();
      if ((float)local_48._4_4_ < extraout_XMM0_Db * *(float *)((longlong)unaff_RDI + 0x144)) {
        FUN_01ede0b0();
        auVar7._4_4_ = extraout_XMM0_Db_00;
        auVar7._0_4_ = extraout_XMM0_Db_00;
        auVar7._8_4_ = extraout_XMM0_Dd;
        auVar7._12_4_ = extraout_XMM0_Dd;
        auVar8._4_12_ = auVar7._4_12_;
        auVar8._0_4_ = extraout_XMM0_Db_00 * *(float *)((longlong)unaff_RDI + 0x144);
        insertps(_local_48,auVar8,0x10);
      }
      (**(code **)(*unaff_RDI + 0x4e8))();
    }
    else {
      FUN_01ede0b0();
      (**(code **)(*unaff_RDI + 0x4e8))();
    }
    FUN_00d50b20();
  }
  return;
}


