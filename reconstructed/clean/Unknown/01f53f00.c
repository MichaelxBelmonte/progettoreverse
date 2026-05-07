// Function: FUN_01f53f00
// Address: 01f53f00
// Size: 870 bytes
// Class: Unknown

void FUN_01f53f00(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  void *pvVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint8_t auVar9 [16];
  int64_t lVar10;
  void *pvVar11;
  uint uVar12;
  int64_t *arg1;
  short sVar13;
  uint uVar14;
  uint64_t uVar15;
  uint8_t auVar18 [12];
  uint8_t extraout_XMM0 [16];
  uint8_t extraout_XMM0_00 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t in_register_00001244 [12];
  ushort local_48;
  int64_t local_40;
  char local_38;
  uint64_t uVar8;
  uint64_t extraout_XMM0_Qb;
  
  FUN_01ea3610();
  lVar10 = g_027fe2e8;
  puVar5 = *(ushort **)(*arg1 + 0x10);
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  if ((((uint)*puVar5 << 0x10) >> 0x18 | ((uint)*puVar5 << 0x10 & 0xff0000) >> 8) != 1) {
    if (g_027fe2e8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
  }
  lVar10 = g_027fe2e8;
  uVar15 = ((uint64_t)uVar3 << 0x30) >> 0x38 |
           ((uint64_t)uVar3 << 0x30 & 0xff000000000000) >> 0x28;
  uVar7 = ((uint64_t)uVar4 << 0x30) >> 0x38;
  uVar8 = uVar7 | ((uint64_t)uVar4 << 0x30 & 0xff000000000000) >> 0x28;
  pvVar1 = (void *)(uVar15 * 4);
  uVar14 = (uint)uVar8;
  pvVar11 = (void *)*arg1;
  if (((uint)(byte)(uVar2 >> 8) | (uint)((((uint64_t)uVar2 & 0xff) << 0x30) >> 0x28)) + 4 +
      (int)pvVar1 * uVar14 != *(int *)((int64_t)pvVar11 + 0x18)) {
    if (g_027fe2e8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  auVar17._0_8_ = FUN_00c92170();
  auVar17._8_8_ = extraout_XMM0_Qb;
  auVar18 = auVar17._4_12_;
  uVar6 = *(void*)(local_40 + 0x10);
  local_48 = (ushort)uVar15;
  uVar12 = (uint)local_48;
  sVar13 = (short)uVar8;
  if (sVar13 != 0) {
    uVar12 = (uint)uVar15;
    if (sVar13 != 1) {
      pvVar11 = (void *)(uVar15 * -8);
      uVar15 = 0;
      do {
        _memcpy(pvVar11,pvVar1,param_3);
        _memcpy(pvVar11,pvVar1,param_3);
        auVar18 = extraout_XMM0._4_12_;
        uVar15 = uVar15 + 2;
      } while ((uVar14 & 0xfffffffe) != uVar15);
    }
    if ((uVar7 & 1) != 0) {
      _memcpy(pvVar11,pvVar1,param_3);
      auVar18 = extraout_XMM0_00._4_12_;
    }
  }
  auVar16._0_4_ = (float)uVar12;
  auVar16._4_12_ = auVar18;
  auVar9._4_12_ = in_register_00001244;
  auVar9._0_4_ = (float)uVar14;
  auVar17 = insertps(auVar16,auVar9,0x10);
  FUN_01d4f050(auVar17._0_8_,uVar6);
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00d21140();
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

