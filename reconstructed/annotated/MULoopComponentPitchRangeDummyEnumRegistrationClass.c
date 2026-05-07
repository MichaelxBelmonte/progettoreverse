// ===== MULoopComponentPitchRangeDummyEnumRegistrationClass — Annotated small functions =====
// 2 readable functions
// Known properties: 1
//   MULoopComponentPitchRange _dummy

// ==================================================
// @01785110 (613 bytes) — calculation
// Known properties of MULoopComponentPitchRangeDummyEnumRegistrationClass:
// _dummy

{
  bool bVar1;
  int iVar2;
  
  if (DAT_027dd1f8 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      bVar1 = *DAT_027dd1b0 != '=';
      _DAT_027dd1e0 = -(uint)(*DAT_027dd1b0 == '=');
      _DAT_027dd1e4 = 0;
      if (*DAT_027dd1b8 != '=') {
        _DAT_027dd1e4 = (uint)bVar1;
      }
      _DAT_027dd1e8 = _DAT_027dd1e4 + 1;
      _DAT_027dd1ec = _DAT_027dd1e4 + 2;
      DAT_027dd1f0 = _DAT_027dd1e4 == bVar1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027dd230 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_027dd200 = "MULoopComponentPitchRange";
      _DAT_027dd208 = 4;
      DAT_027dd20c = DAT_027dd1f0;
      _DAT_027dd210 = &DAT_027dd1e0;
      _DAT_027dd218 = &DAT_027dd1b0;
      _DAT_027dd220 = 0;
      uRam00000000027dd228 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027cedc8 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if (DAT_027ced80 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_027cecd0 = FUN_00d4fe50();
          _DAT_027cecb8 = "MULoopComponentPitchRangeDummyEnumRegistrationClass";
          _DAT_027cecc0 = 0x10;
          _DAT_027cecc8 = FUN_01784e80;
          _DAT_027cecd8 = 0;
          uRam00000000027cece0 = 0;
          _DAT_027cece8 = 0;
          _DAT_027ced60 = 0;
          uRam00000000027ced68 = 0;
          _DAT_027ced70 = 0;
          DAT_027ced72 = 3;
          _DAT_027cecf0 = 0;
          uRam00000000027cecf8 = 0;
          _DAT_027ced00 = 0;
          uRam00000000027ced08 = 0;
          _DAT_027ced10 = 0;
          uRam00000000027ced18 = 0;
          _DAT_027ced20 = 0;
          uRam00000000027ced28 = 0;
          _DAT_027ced30 = 0;
          uRam00000000027ced38 = 0;
          _DAT_027ced40 = 0;
          uRam00000000027ced48 = 0;
          _DAT_027ced50 = 0;
          uRam00000000027ced58 = 0;
          DAT_027ced7b = 0;
          _DAT_027ced73 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027ced88 = "_dummy";
      _DAT_027ced90 = &DAT_027cecb8;
      _DAT_027ced98 = 0;
      _DAT_027ceda0 = 0x6500;
      _DAT_027ceda8 = "MULoopComponentPitchRange";
      _DAT_027cedb0 = &DAT_027dd200;
      _DAT_027cedb8 = 0;
      uRam00000000027cedc0 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027ced88;
}




// ==================================================
// @01785c90 (527 bytes) — math_loop
// Known properties of MULoopComponentPitchRangeDummyEnumRegistrationClass:
// _dummy

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong *arg1;
  longlong *this;
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
  uVar4 = (**(code **)(*arg1 + 0x3a8))(auVar15._0_8_);
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
  *this = local_40;
  *(undefined1 *)(this + 1) = 1;
  return this;
}



