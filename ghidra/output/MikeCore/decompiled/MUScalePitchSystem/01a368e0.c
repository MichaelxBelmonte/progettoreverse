// Function: FUN_01a368e0
// Address: 01a368e0
// Size: 1054 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01a36bbb) */
/* WARNING: Removing unreachable block (ram,0x01a36bc4) */
/* WARNING: Removing unreachable block (ram,0x01a36cc8) */
/* WARNING: Removing unreachable block (ram,0x01a36cd1) */

void FUN_01a368e0(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  longlong lVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar17;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  longlong local_38;
  char local_30;
  
  fVar17 = (float)((ulonglong)param_2 >> 0x20);
  fVar14 = (float)param_2;
  uVar8 = (**(code **)(*unaff_RDI + 0x938))();
  if ((fVar17 != 0.0) || (NAN(fVar17))) {
    cVar5 = FUN_00d054a0();
    if (cVar5 != '\0') {
      if ((DAT_028b2b38 == 0) || (DAT_028b2b41 == '\0')) {
        FUN_00e8cb50();
        if (DAT_028b2b38 == 0) {
          FUN_01cfc6a0();
          lVar6 = DAT_028b2b38;
          if (DAT_028b2b38 != local_38) {
            if (local_30 == '\0') {
              if (local_38 == 0) {
                lVar6 = 0;
              }
              else {
                FUN_00d50b00();
                lVar6 = local_38;
              }
            }
            else {
              local_30 = '\0';
              lVar6 = local_38;
            }
            bVar7 = DAT_028b2b38 != 0;
            DAT_028b2b38 = lVar6;
            if (bVar7) {
              FUN_00d50b20();
              lVar6 = local_38;
            }
          }
          if ((lVar6 != 0) && (DAT_028b2b40 == '\0')) {
            DAT_028b2b40 = '\x01';
            FUN_00e8cb90();
            lVar6 = local_38;
          }
          if ((local_30 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
          DAT_028b2b41 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028b2b41 = '\x01';
          FUN_00e8cb70();
        }
      }
      if (((longlong *)unaff_RDI[0x28] != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*(longlong *)unaff_RDI[0x28] + 0xb0))(), lVar6 = DAT_028b2b38,
         cVar5 != '\0')) {
        if (DAT_028b2b38 != 0) {
          FUN_00d50b00();
        }
        FUN_01d488d0();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
      }
    }
    auVar15._8_8_ = extraout_XMM0_Qb;
    auVar15._0_8_ = uVar8;
    fVar1 = (float)uVar8;
    if (unaff_RDI[0x28] != 0) {
      auVar9._4_12_ = auVar15._4_12_;
      auVar9._0_4_ = fVar1 - fVar17;
      cVar5 = FUN_00d054a0(auVar9._0_8_);
      if (cVar5 != '\0') {
        FUN_01a34870();
        if ((local_30 == '\0') && (local_38 != 0)) {
          FUN_00d50b00();
        }
        FUN_01d488d0();
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        auVar2._8_8_ = extraout_XMM0_Qb;
        auVar2._0_8_ = uVar8;
        auVar10._4_12_ = auVar2._4_12_;
        auVar10._0_4_ = fVar1 - fVar17;
        (**(code **)(*unaff_RDI + 0x640))();
        auVar3._8_8_ = extraout_XMM0_Qb;
        auVar3._0_8_ = uVar8;
        auVar15 = blendps(auVar10,auVar3,0xe);
        auVar11._0_4_ = DAT_0239011c * fVar17 + auVar15._0_4_;
        auVar11._4_4_ = DAT_0239011c * fVar17 + auVar15._4_4_;
        auVar11._8_4_ = auVar15._8_4_ + 0.0;
        auVar11._12_4_ = auVar15._12_4_ + 0.0;
        auVar15 = roundps(auVar11,auVar11,9);
        FUN_01cb3a30(auVar15._0_8_,2);
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      auVar4._8_8_ = extraout_XMM0_Qb;
      auVar4._0_8_ = uVar8;
      auVar12._0_4_ = fVar14 + fVar1;
      auVar12._4_4_ = fVar17 + (float)((ulonglong)uVar8 >> 0x20);
      auVar12._8_4_ = in_XMM1_Dc + (float)extraout_XMM0_Qb;
      auVar12._12_4_ = in_XMM1_Dd + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar15 = blendps(auVar12,auVar4,2);
      cVar5 = FUN_00d054a0();
      if (cVar5 != '\0') {
        FUN_01a34870();
        if ((local_30 == '\0') && (local_38 != 0)) {
          FUN_00d50b00();
        }
        FUN_01d488d0();
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0x640))();
        auVar13._0_4_ = DAT_0239011c * fVar17;
        auVar13._4_4_ = auVar13._0_4_;
        auVar13._8_8_ = 0;
        local_b8 = auVar15._0_4_;
        fStack_b4 = auVar15._4_4_;
        fStack_b0 = auVar15._8_4_;
        fStack_ac = auVar15._12_4_;
        auVar16._0_4_ = local_b8 + auVar13._0_4_;
        auVar16._4_4_ = fStack_b4 + auVar13._0_4_;
        auVar16._8_4_ = fStack_b0 + 0.0;
        auVar16._12_4_ = fStack_ac + 0.0;
        auVar15 = roundps(auVar13,auVar16,9);
        FUN_01cb3a30(auVar15._0_8_,0);
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}


