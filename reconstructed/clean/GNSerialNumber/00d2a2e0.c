// Function: FUN_00d2a2e0
// Address: 00d2a2e0
// Size: 707 bytes
// Class: GNSerialNumber

uint FUN_00d2a2e0(void)

{
  int iVar1;
  uint uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t *this_ptr;
  int64_t lVar8;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t in_XMM2 [16];
  uint8_t auVar12 [16];
  uint8_t in_XMM3 [16];
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  iVar1 = FUN_00d8c7a0();
  if (iVar1 < 0x13) {
    return 0xffffffff;
  }
  FUN_00d97ce0(0xffffffff,0x13);
  lVar3 = *this_ptr;
  if (lVar3 == local_40) {
    if (((char)this_ptr[1] != '\0') || (local_40 == 0)) goto LAB_00d2a39a;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_00d2a395;
    }
LAB_00d2a362:
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    lVar6 = this_ptr[1];
    if (local_38 != '\0') {
      *this_ptr = local_40;
      if (((char)lVar6 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00d2a362;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = local_40;
    if (((char)lVar6 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_00d2a395:
    *(void*)(this_ptr + 1) = 1;
LAB_00d2a39a:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00debaf0();
  FUN_00d99d60();
  lVar3 = *this_ptr;
  if (lVar3 == local_40) {
    if (((char)this_ptr[1] != '\0') || (local_40 == 0)) goto LAB_00d2a456;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_00d2a451;
    }
LAB_00d2a41a:
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    lVar6 = this_ptr[1];
    if (local_38 != '\0') {
      *this_ptr = local_40;
      if (((char)lVar6 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00d2a41a;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = local_40;
    if (((char)lVar6 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_00d2a451:
    *(void*)(this_ptr + 1) = 1;
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
  uVar7 = (uint64_t)(uVar2 & 0xfffffff8);
  uVar4 = (uVar7 - 8 >> 3) + 1;
  if (uVar7 - 8 == 0) {
    auVar9 = (uint8_t  [16])0x0;
    lVar6 = 0;
    auVar10 = (uint8_t  [16])0x0;
  }
  else {
    lVar8 = -(uVar4 & 0xfffffffffffffffe);
    auVar9 = (uint8_t  [16])0x0;
    lVar6 = 0;
    auVar10 = (uint8_t  [16])0x0;
    do {
      auVar12 = pmovzxbd(in_XMM2,*(void*)(lVar3 + lVar6));
      in_XMM2._0_4_ = auVar12._0_4_ + auVar9._0_4_;
      in_XMM2._4_4_ = auVar12._4_4_ + auVar9._4_4_;
      in_XMM2._8_4_ = auVar12._8_4_ + auVar9._8_4_;
      in_XMM2._12_4_ = auVar12._12_4_ + auVar9._12_4_;
      auVar12 = pmovzxbd(in_XMM3,*(void*)(lVar3 + 4 + lVar6));
      in_XMM3._0_4_ = auVar12._0_4_ + auVar10._0_4_;
      in_XMM3._4_4_ = auVar12._4_4_ + auVar10._4_4_;
      in_XMM3._8_4_ = auVar12._8_4_ + auVar10._8_4_;
      in_XMM3._12_4_ = auVar12._12_4_ + auVar10._12_4_;
      auVar12 = pmovzxbd(auVar9,*(void*)(lVar3 + 8 + lVar6));
      auVar11 = pmovzxbd(auVar10,*(void*)(lVar3 + 0xc + lVar6));
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
  auVar12 = pmovzxbd(in_XMM2,*(void*)(lVar3 + 4 + lVar6));
  auVar11._0_4_ = auVar10._0_4_ + auVar12._0_4_;
  auVar11._4_4_ = auVar10._4_4_ + auVar12._4_4_;
  auVar11._8_4_ = auVar10._8_4_ + auVar12._8_4_;
  auVar11._12_4_ = auVar10._12_4_ + auVar12._12_4_;
  auVar10 = pmovzxbd(auVar12,*(void*)(lVar3 + lVar6));
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

