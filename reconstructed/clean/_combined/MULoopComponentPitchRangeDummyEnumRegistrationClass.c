// ===================================================================
// MULoopComponentPitchRangeDummyEnumRegistrationClass — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (1):
//   MULoopComponentPitchRange _dummy


// ============================================================
// 01785c90
// ============================================================
// Function: FUN_01785c90
// Address: 01785c90
// Size: 527 bytes
// Class: MULoopComponentPitchRangeDummyEnumRegistrationClass
// === MULoopComponentPitchRangeDummyEnumRegistrationClass properties ===
//   MULoopComponentPitchRange _dummy


int64_t * FUN_01785c90(int64_t *param_1)

{
  void*puVar1;
  int64_t lVar2;
  int iVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  uint uVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint uVar13;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar15 [16];
  int64_t local_40;
  char local_38;
  uint8_t auVar14 [16];
  
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
  auVar15._0_4_ = (float)(iVar3 * 100) + g_023b7c10;
  uVar4 = (**(code **)(*arg1 + 0x3a8))(auVar15._0_8_);
  if (3 < (int)*(uint *)(*param_1 + 0x18)) {
    uVar7 = *(uint *)(*param_1 + 0x18) >> 2;
    uVar5 = (uint64_t)uVar7;
    lVar2 = *(int64_t *)(local_40 + 0x10);
    uVar11 = (uVar5 - (uVar5 != 0)) + 1;
    if ((7 < uVar11) && (uVar13 = uVar7 - 1, uVar7 - (uVar5 != 0) <= uVar13)) {
      uVar10 = uVar11 & 0xfffffffffffffff8;
      uVar9 = (uVar10 - 8 >> 3) + 1;
      uVar12 = (uint64_t)((uint)uVar9 & 3);
      if (uVar10 - 8 < 0x18) {
        uVar8 = 0;
      }
      else {
        lVar6 = -(uVar9 & 0xfffffffffffffffc);
        uVar8 = 0;
        do {
          puVar1 = (void*)(lVar2 + -0xc + (uint64_t)uVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar4;
          puVar1[2] = uVar4;
          puVar1[3] = uVar4;
          puVar1 = (void*)(lVar2 + -0x1c + (uint64_t)uVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar4;
          puVar1[2] = uVar4;
          puVar1[3] = uVar4;
          uVar9 = (uint64_t)((uVar8 ^ 0xfffffff7) + uVar7);
          puVar1 = (void*)(lVar2 + -0xc + uVar9 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar4;
          puVar1[2] = uVar4;
          puVar1[3] = uVar4;
          puVar1 = (void*)(lVar2 + -0x1c + uVar9 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar4;
          puVar1[2] = uVar4;
          puVar1[3] = uVar4;
          uVar9 = (uint64_t)((uVar8 ^ 0xffffffef) + uVar7);
          puVar1 = (void*)(lVar2 + -0xc + uVar9 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar4;
          puVar1[2] = uVar4;
          puVar1[3] = uVar4;
          puVar1 = (void*)(lVar2 + -0x1c + uVar9 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar4;
          puVar1[2] = uVar4;
          puVar1[3] = uVar4;
          uVar9 = (uint64_t)((uVar8 ^ 0xffffffe7) + uVar7);
          puVar1 = (void*)(lVar2 + -0xc + uVar9 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar4;
          puVar1[2] = uVar4;
          puVar1[3] = uVar4;
          puVar1 = (void*)(lVar2 + -0x1c + uVar9 * 4);
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
          puVar1 = (void*)(lVar2 + -0xc + (uint64_t)uVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar4;
          puVar1[2] = uVar4;
          puVar1[3] = uVar4;
          puVar1 = (void*)(lVar2 + -0x1c + (uint64_t)uVar13 * 4);
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
      *(void*)(lVar2 + (uint64_t)uVar7 * 4) = uVar4;
      lVar6 = lVar6 + -1;
    } while (1 < lVar6);
  }
LAB_01785da2:
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01785110
// ============================================================
// Function: FUN_01785110
// Address: 01785110
// Size: 613 bytes
// Class: MULoopComponentPitchRangeDummyEnumRegistrationClass
// String references:
//   "_dummy"
//   "MULoopComponentPitchRangeDummyEnumRegistrationClass"
//   "MULoopComponentPitchRange"
//   "=MULoopComponentPitchRangeUndefined"
//   "=MULoopComponentPitchRangeLow"
// === MULoopComponentPitchRangeDummyEnumRegistrationClass properties ===
//   MULoopComponentPitchRange _dummy


void* FUN_01785110(void)

{
  bool bVar1;
  int iVar2;
  
  if (g_027dd1f8 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      bVar1 = *g_027dd1b0 != '=';
      g_027dd1e0 = -(uint)(*g_027dd1b0 == '=');
      g_027dd1e4 = 0;
      if (*g_027dd1b8 != '=') {
        g_027dd1e4 = (uint)bVar1;
      }
      g_027dd1e8 = g_027dd1e4 + 1;
      g_027dd1ec = g_027dd1e4 + 2;
      g_027dd1f0 = g_027dd1e4 == bVar1;
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027ced88 = "_dummy";
      g_027ced90 = &g_027cecb8;
      g_027ced98 = 0;
      g_027ceda0 = 0x6500;
      g_027ceda8 = "MULoopComponentPitchRange";
      g_027cedb0 = &g_027dd200;
      g_027cedb8 = 0;
      ram_00000000027cedc0 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027ced88;
}

