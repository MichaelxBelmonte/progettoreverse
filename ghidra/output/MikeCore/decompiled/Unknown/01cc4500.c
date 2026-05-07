// Function: FUN_01cc4500
// Address: 01cc4500
// Size: 773 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc4500(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar8 [16];
  undefined4 uVar11;
  float fVar12;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined1 auVar13 [16];
  longlong local_40;
  char local_38;
  
  auVar13._8_4_ = in_XMM3_Dc;
  auVar13._0_8_ = param_4;
  auVar13._12_4_ = in_XMM3_Dd;
  fVar5 = (float)(**(code **)(*unaff_RDI + 0x648))();
  if ((DAT_028b7390 == 0) || (DAT_028b7399 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b7390 == 0) {
      FUN_01cfbee0();
      lVar2 = DAT_028b7390;
      if (DAT_028b7390 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar2 = local_40;
        }
        bVar1 = DAT_028b7390 != 0;
        DAT_028b7390 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_40;
        }
      }
      if ((lVar2 != 0) && (DAT_028b7398 == '\0')) {
        DAT_028b7398 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_40;
      }
      if ((local_38 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b7399 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b7399 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_01d48b40();
  if (0.0 < fVar5) {
    fVar12 = auVar13._4_4_;
    auVar6._4_4_ = fVar12;
    auVar6._0_4_ = fVar12;
    auVar6._8_4_ = auVar13._12_4_;
    auVar6._12_4_ = auVar13._12_4_;
    auVar7._4_12_ = auVar6._4_12_;
    auVar7._0_4_ = fVar12 + DAT_023908ec;
    auVar8 = insertps(auVar13,auVar7,0x10);
    uVar3 = 0;
    do {
      uVar4 = -(ulonglong)((double)(int)uVar3 / (double)fVar5 <= DAT_0241f388);
      fVar12 = (float)(double)(uVar4 & DAT_023e1698 |
                              ~uVar4 & (ulonglong)SQRT((double)(int)uVar3 / (double)fVar5) &
                                       _DAT_023908f0);
      lVar2 = *param_2;
      FUN_01cfbee0((*(float *)(lVar2 + 0x10) - *(float *)(DAT_028b7390 + 0x10)) * fVar12 +
                   *(float *)(DAT_028b7390 + 0x10),
                   (*(float *)(lVar2 + 0x14) - *(float *)(DAT_028b7390 + 0x14)) * fVar12 +
                   *(float *)(DAT_028b7390 + 0x14),
                   (*(float *)(lVar2 + 0x18) - *(float *)(DAT_028b7390 + 0x18)) * fVar12 +
                   *(float *)(DAT_028b7390 + 0x18),fVar12,auVar8);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
      fVar12 = auVar8._0_4_;
      uVar9 = auVar8._4_4_;
      uVar10 = auVar8._8_4_;
      uVar11 = auVar8._12_4_;
      FUN_00d05530();
      if ((uVar3 & 3) == 0) {
        fVar12 = fVar12 + DAT_02390d34;
      }
      auVar8._4_4_ = uVar9;
      auVar8._0_4_ = fVar12;
      auVar8._8_4_ = uVar10;
      auVar8._12_4_ = uVar11;
      uVar3 = uVar3 + 1;
    } while ((float)(int)uVar3 < fVar5);
  }
  return;
}


