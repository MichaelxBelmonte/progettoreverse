// Function: FUN_01785c90
// Address: 01785c90
// Size: 527 bytes
// Class: MULoopComponentPitchRangeDummyEnumRegistrationClass


/* WARNING: Removing unreachable block (ram,0x01785ce4) */
/* WARNING: Removing unreachable block (ram,0x01785ced) */

longlong * FUN_01785c90(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar15 [16];
  longlong local_40;
  char local_38;
  undefined1 auVar14 [16];
  
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  iVar3 = FUN_00d8d560();
  auVar14._8_8_ = extraout_XMM0_Qb;
  auVar14._0_8_ = extraout_XMM0_Qa;
  auVar15._4_12_ = auVar14._4_12_;
  auVar15._0_4_ = (float)(iVar3 * 100) + DAT_023b7c10;
  uVar4 = (**(code **)(*unaff_RSI + 0x3a8))(auVar15._0_8_);
  if (3 < (int)*(uint *)(*param_1 + 0x18)) {
    uVar7 = *(uint *)(*param_1 + 0x18) >> 2;
    uVar5 = (ulonglong)uVar7;
    lVar2 = *(longlong *)(local_40 + 0x10);
    uVar11 = (uVar5 - (uVar5 != 0)) + 1;
    if ((7 < uVar11) && (uVar13 = uVar7 - 1, uVar7 - (uVar5 != 0) <= uVar13)) {
      uVar10 = uVar11 & 0xfffffffffffffff8;
      uVar9 = (uVar10 - 8 >> 3) + 1;
      uVar12 = (ulonglong)((uint)uVar9 & 3);
      if (uVar10 - 8 < 0x18) {
        uVar8 = 0;
      }
      else {
        lVar6 = -(uVar9 & 0xfffffffffffffffc);
        uVar8 = 0;
        do {
          puVar1 = (undefined4 *)(lVar2 + -0xc + (ulonglong)uVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar4;
          puVar1[2] = uVar4;
          puVar1[3] = uVar4;
          puVar1 = (undefined4 *)(lVar2 + -0x1c + (ulonglong)uVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar4;
          puVar1[2] = uVar4;
          puVar1[3] = uVar4;
          uVar9 = (ulonglong)((uVar8 ^ 0xfffffff7) + uVar7);
          puVar1 = (undefined4 *)(lVar2 + -0xc + uVar9 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar4;
          puVar1[2] = uVar4;
          puVar1[3] = uVar4;
          puVar1 = (undefined4 *)(lVar2 + -0x1c + uVar9 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar4;
          puVar1[2] = uVar4;
          puVar1[3] = uVar4;
          uVar9 = (ulonglong)((uVar8 ^ 0xffffffef) + uVar7);
          puVar1 = (undefined4 *)(lVar2 + -0xc + uVar9 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar4;
          puVar1[2] = uVar4;
          puVar1[3] = uVar4;
          puVar1 = (undefined4 *)(lVar2 + -0x1c + uVar9 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar4;
          puVar1[2] = uVar4;
          puVar1[3] = uVar4;
          uVar9 = (ulonglong)((uVar8 ^ 0xffffffe7) + uVar7);
          puVar1 = (undefined4 *)(lVar2 + -0xc + uVar9 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar4;
          puVar1[2] = uVar4;
          puVar1[3] = uVar4;
          puVar1 = (undefined4 *)(lVar2 + -0x1c + uVar9 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar4;
          puVar1[2] = uVar4;
          puVar1[3] = uVar4;
          uVar8 = uVar8 + 0x20;
          uVar13 = uVar13 - 0x20;
          lVar6 = lVar6 + 4;
        } while (lVar6 != 0);
      }
      if (uVar12 != 0) {
        uVar13 = ~uVar8 + uVar7;
        lVar6 = -uVar12;
        do {
          puVar1 = (undefined4 *)(lVar2 + -0xc + (ulonglong)uVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar4;
          puVar1[2] = uVar4;
          puVar1[3] = uVar4;
          puVar1 = (undefined4 *)(lVar2 + -0x1c + (ulonglong)uVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar4;
          puVar1[2] = uVar4;
          puVar1[3] = uVar4;
          uVar13 = uVar13 - 8;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0);
      }
      if (uVar11 == uVar10) goto LAB_01785da2;
      uVar5 = uVar5 - uVar10;
      uVar7 = uVar7 - (int)uVar10;
    }
    lVar6 = uVar5 + 1;
    do {
      uVar7 = uVar7 - 1;
      *(undefined4 *)(lVar2 + (ulonglong)uVar7 * 4) = uVar4;
      lVar6 = lVar6 + -1;
    } while (1 < lVar6);
  }
LAB_01785da2:
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


