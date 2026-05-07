// Function: FUN_00d2a2e0
// Address: 00d2a2e0
// Size: 707 bytes
// Class: GNSerialNumber


/* WARNING: Removing unreachable block (ram,0x00d2a484) */
/* WARNING: Removing unreachable block (ram,0x00d2a48d) */
/* WARNING: Removing unreachable block (ram,0x00d2a5a1) */

uint FUN_00d2a2e0(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *unaff_RDI;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM3 [16];
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  iVar1 = FUN_00d8c7a0();
  if (iVar1 < 0x13) {
    return 0xffffffff;
  }
  FUN_00d97ce0(0xffffffff,0x13);
  lVar3 = *unaff_RDI;
  if (lVar3 == local_40) {
    if (((char)unaff_RDI[1] != '\0') || (local_40 == 0)) goto LAB_00d2a39a;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_00d2a395;
    }
LAB_00d2a362:
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    lVar6 = unaff_RDI[1];
    if (local_38 != '\0') {
      *unaff_RDI = local_40;
      if (((char)lVar6 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00d2a362;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = local_40;
    if (((char)lVar6 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_00d2a395:
    *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_00d2a39a:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00debaf0();
  FUN_00d99d60();
  lVar3 = *unaff_RDI;
  if (lVar3 == local_40) {
    if (((char)unaff_RDI[1] != '\0') || (local_40 == 0)) goto LAB_00d2a456;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_00d2a451;
    }
LAB_00d2a41a:
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    lVar6 = unaff_RDI[1];
    if (local_38 != '\0') {
      *unaff_RDI = local_40;
      if (((char)lVar6 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00d2a41a;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = local_40;
    if (((char)lVar6 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_00d2a451:
    *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_00d2a456:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = FUN_00d8b910();
  uVar2 = FUN_00e7dde0();
  if ((int)uVar2 < 1) {
    return 0;
  }
  if (uVar2 < 8) {
    uVar7 = 0;
    uVar5 = 0;
    goto LAB_00d2a570;
  }
  uVar7 = (ulonglong)(uVar2 & 0xfffffff8);
  uVar4 = (uVar7 - 8 >> 3) + 1;
  if (uVar7 - 8 == 0) {
    auVar9 = (undefined1  [16])0x0;
    lVar6 = 0;
    auVar10 = (undefined1  [16])0x0;
  }
  else {
    lVar8 = -(uVar4 & 0xfffffffffffffffe);
    auVar9 = (undefined1  [16])0x0;
    lVar6 = 0;
    auVar10 = (undefined1  [16])0x0;
    do {
      auVar12 = pmovzxbd(in_XMM2,*(undefined4 *)(lVar3 + lVar6));
      in_XMM2._0_4_ = auVar12._0_4_ + auVar9._0_4_;
      in_XMM2._4_4_ = auVar12._4_4_ + auVar9._4_4_;
      in_XMM2._8_4_ = auVar12._8_4_ + auVar9._8_4_;
      in_XMM2._12_4_ = auVar12._12_4_ + auVar9._12_4_;
      auVar12 = pmovzxbd(in_XMM3,*(undefined4 *)(lVar3 + 4 + lVar6));
      in_XMM3._0_4_ = auVar12._0_4_ + auVar10._0_4_;
      in_XMM3._4_4_ = auVar12._4_4_ + auVar10._4_4_;
      in_XMM3._8_4_ = auVar12._8_4_ + auVar10._8_4_;
      in_XMM3._12_4_ = auVar12._12_4_ + auVar10._12_4_;
      auVar12 = pmovzxbd(auVar9,*(undefined4 *)(lVar3 + 8 + lVar6));
      auVar11 = pmovzxbd(auVar10,*(undefined4 *)(lVar3 + 0xc + lVar6));
      auVar9._0_4_ = auVar12._0_4_ + in_XMM2._0_4_;
      auVar9._4_4_ = auVar12._4_4_ + in_XMM2._4_4_;
      auVar9._8_4_ = auVar12._8_4_ + in_XMM2._8_4_;
      auVar9._12_4_ = auVar12._12_4_ + in_XMM2._12_4_;
      auVar10._0_4_ = auVar11._0_4_ + in_XMM3._0_4_;
      auVar10._4_4_ = auVar11._4_4_ + in_XMM3._4_4_;
      auVar10._8_4_ = auVar11._8_4_ + in_XMM3._8_4_;
      auVar10._12_4_ = auVar11._12_4_ + in_XMM3._12_4_;
      lVar6 = lVar6 + 0x10;
      lVar8 = lVar8 + 2;
    } while (lVar8 != 0);
    auVar12 = auVar9;
    auVar11 = auVar10;
    if ((uVar4 & 1) == 0) goto LAB_00d2a54e;
  }
  auVar12 = pmovzxbd(in_XMM2,*(undefined4 *)(lVar3 + 4 + lVar6));
  auVar11._0_4_ = auVar10._0_4_ + auVar12._0_4_;
  auVar11._4_4_ = auVar10._4_4_ + auVar12._4_4_;
  auVar11._8_4_ = auVar10._8_4_ + auVar12._8_4_;
  auVar11._12_4_ = auVar10._12_4_ + auVar12._12_4_;
  auVar10 = pmovzxbd(auVar12,*(undefined4 *)(lVar3 + lVar6));
  auVar12._0_4_ = auVar9._0_4_ + auVar10._0_4_;
  auVar12._4_4_ = auVar9._4_4_ + auVar10._4_4_;
  auVar12._8_4_ = auVar9._8_4_ + auVar10._8_4_;
  auVar12._12_4_ = auVar9._12_4_ + auVar10._12_4_;
LAB_00d2a54e:
  uVar5 = auVar12._12_4_ + auVar11._12_4_ + auVar12._4_4_ + auVar11._4_4_ +
          auVar12._8_4_ + auVar11._8_4_ + auVar12._0_4_ + auVar11._0_4_;
  for (; uVar7 != uVar2; uVar7 = uVar7 + 1) {
LAB_00d2a570:
    uVar5 = uVar5 + *(byte *)(lVar3 + uVar7);
  }
  return uVar5 & 0xf;
}


