// Function: FUN_003b8010
// Address: 003b8010
// Size: 1743 bytes
// Class: MDLayer


/* WARNING: Removing unreachable block (ram,0x003b861f) */
/* WARNING: Removing unreachable block (ram,0x003b862b) */

void FUN_003b8010(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong local_40;
  char local_38;
  
  fVar9 = (float)((ulonglong)param_2 >> 0x20);
  fVar6 = (float)param_2;
  if ((DAT_028083b0 == 0) || (DAT_028083b9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028083b0 == 0) {
      FUN_01cfcdc0();
      lVar4 = DAT_028083b0;
      if (DAT_028083b0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar4 = local_40;
        }
        bVar1 = DAT_028083b0 != 0;
        DAT_028083b0 = lVar4;
        if (bVar1) {
          FUN_00d50b20();
          lVar4 = local_40;
        }
      }
      if ((lVar4 != 0) && (DAT_028083b8 == '\0')) {
        DAT_028083b8 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_40;
      }
      if ((local_38 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cfcdc0();
      lVar4 = DAT_028083a0;
      if (DAT_028083a0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar4 = local_40;
        }
        bVar1 = DAT_028083a0 != 0;
        DAT_028083a0 = lVar4;
        if (bVar1) {
          FUN_00d50b20();
          lVar4 = local_40;
        }
      }
      if ((lVar4 != 0) && (DAT_028083a8 == '\0')) {
        DAT_028083a8 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_40;
      }
      if ((local_38 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cfcdc0();
      lVar4 = DAT_028083d0;
      if (DAT_028083d0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar4 = local_40;
        }
        bVar1 = DAT_028083d0 != 0;
        DAT_028083d0 = lVar4;
        if (bVar1) {
          FUN_00d50b20();
          lVar4 = local_40;
        }
      }
      if ((lVar4 != 0) && (DAT_028083d8 == '\0')) {
        DAT_028083d8 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_40;
      }
      if ((local_38 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      fVar6 = 0.0;
      fVar9 = 0.0;
      FUN_01cfcdc0();
      lVar4 = DAT_028083c0;
      if (DAT_028083c0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar4 = local_40;
        }
        bVar1 = DAT_028083c0 != 0;
        DAT_028083c0 = lVar4;
        if (bVar1) {
          FUN_00d50b20();
          lVar4 = local_40;
        }
      }
      if ((lVar4 != 0) && (DAT_028083c8 == '\0')) {
        DAT_028083c8 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_40;
      }
      if ((local_38 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      DAT_028083b9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028083b9 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_01e3f820();
  lVar2 = DAT_028083c0;
  lVar4 = DAT_028083b0;
  fVar6 = fVar6 * DAT_0239011c;
  fVar7 = fVar6 + DAT_023b1d84;
  fVar9 = fVar9 * DAT_0239011c + extraout_XMM0_Db + DAT_02390d00;
  if (*(float *)(unaff_RDI + 0x220) <= DAT_023b3888) {
    fVar8 = *(float *)(unaff_RDI + 0x224);
    if ((fVar8 < DAT_0239428c) || (*(char *)(unaff_RDI + 0x228) != '\0')) {
      if (DAT_028083b0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      goto LAB_003b8446;
    }
  }
  else {
    if (DAT_028083c0 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
LAB_003b8446:
    FUN_01d48b40();
    auVar5._4_4_ = extraout_XMM0_Db;
    auVar5._0_4_ = extraout_XMM0_Da + fVar6;
    auVar5._8_4_ = extraout_XMM0_Dc;
    auVar5._12_4_ = extraout_XMM0_Dd;
    auVar5 = insertps(auVar5,fVar9,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c8))(auVar5._0_8_,fVar7);
    fVar8 = *(float *)(unaff_RDI + 0x224);
  }
  lVar2 = DAT_028083d0;
  lVar4 = DAT_028083a0;
  if (fVar8 <= 0.0) {
    if (*(char *)(unaff_RDI + 0x228) == '\0') {
      if (DAT_028083a0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      FUN_01d48b40();
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      return;
    }
  }
  else if ((DAT_0239428c < fVar8) && (*(char *)(unaff_RDI + 0x228) == '\0')) {
    if (DAT_028083d0 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    goto LAB_003b8555;
  }
  if (DAT_028083a0 != 0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_003b8555:
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02680400;
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x39) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x41) = 0;
  (*DAT_02680418)();
  FUN_01d39400();
  FUN_01d39310();
  FUN_01d38ba0();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
  FUN_00d50b20();
  return;
}


