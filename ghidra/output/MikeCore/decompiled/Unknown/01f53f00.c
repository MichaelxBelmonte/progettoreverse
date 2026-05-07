// Function: FUN_01f53f00
// Address: 01f53f00
// Size: 870 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01f53f3b) */
/* WARNING: Removing unreachable block (ram,0x01f53f44) */
/* WARNING: Removing unreachable block (ram,0x01f5422c) */
/* WARNING: Removing unreachable block (ram,0x01f54235) */
/* WARNING: Removing unreachable block (ram,0x01f54059) */
/* WARNING: Removing unreachable block (ram,0x01f54062) */
/* WARNING: Removing unreachable block (ram,0x01f54202) */
/* WARNING: Removing unreachable block (ram,0x01f5420b) */

void FUN_01f53f00(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  void *pvVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auVar9 [16];
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  longlong *unaff_RSI;
  short sVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auVar18 [12];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_register_00001244 [12];
  ushort local_48;
  longlong local_40;
  char local_38;
  ulonglong uVar8;
  undefined8 extraout_XMM0_Qb;
  
  FUN_01ea3610();
  lVar10 = DAT_027fe2e8;
  puVar5 = *(ushort **)(*unaff_RSI + 0x10);
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  if ((((uint)*puVar5 << 0x10) >> 0x18 | ((uint)*puVar5 << 0x10 & 0xff0000) >> 8) != 1) {
    if (DAT_027fe2e8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
  }
  lVar10 = DAT_027fe2e8;
  uVar15 = ((ulonglong)uVar3 << 0x30) >> 0x38 |
           ((ulonglong)uVar3 << 0x30 & 0xff000000000000) >> 0x28;
  uVar7 = ((ulonglong)uVar4 << 0x30) >> 0x38;
  uVar8 = uVar7 | ((ulonglong)uVar4 << 0x30 & 0xff000000000000) >> 0x28;
  pvVar1 = (void *)(uVar15 * 4);
  uVar14 = (uint)uVar8;
  pvVar11 = (void *)*unaff_RSI;
  if (((uint)(byte)(uVar2 >> 8) | (uint)((((ulonglong)uVar2 & 0xff) << 0x30) >> 0x28)) + 4 +
      (int)pvVar1 * uVar14 != *(int *)((longlong)pvVar11 + 0x18)) {
    if (DAT_027fe2e8 != 0) {
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
  uVar6 = *(undefined8 *)(local_40 + 0x10);
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


