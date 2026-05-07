// Function: FUN_00e07210
// Address: 00e07210
// Size: 1446 bytes
// Class: GNDistinction
// String references:
//   " /* %s */"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e07210(undefined1 param_1,undefined1 param_2,longlong param_3,char param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  uint *puVar6;
  longlong lVar7;
  byte bVar8;
  char cVar9;
  longlong lVar10;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 unaff_SIL;
  ulonglong uVar14;
  uint uVar15;
  undefined8 *unaff_RDI;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_00d8db40();
  puVar5 = (undefined1 *)FUN_00d8b910();
  *puVar5 = unaff_SIL;
  puVar5[1] = param_2;
  puVar5[2] = param_1;
  puVar5[3] = 0x5f;
  puVar6 = (uint *)FUN_00e83010();
  iVar3 = FUN_00e7dde0();
  local_48 = 0xc3d2e1f0;
  local_58 = _DAT_023e0060;
  uStack_50 = _UNK_023e0068;
  iVar18 = 0;
  if (0x3f < iVar3) {
    lVar19 = 0;
    do {
      lVar10 = (longlong)(int)lVar19;
      lVar7 = (longlong)((int)lVar19 + 0x3c);
      uVar13 = (lVar7 - lVar10) + 3;
      if (uVar13 < 0xc) {
        uVar14 = 0;
        lVar19 = lVar10;
LAB_00e073c5:
        puVar11 = (uint *)(local_198 + uVar14 * 4);
        lVar10 = lVar19;
        do {
          uVar12 = *(uint *)(param_3 + lVar10);
          *puVar11 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18;
          lVar19 = lVar10 + 4;
          puVar11 = puVar11 + 1;
          bVar1 = lVar10 < lVar7;
          lVar10 = lVar19;
        } while (bVar1);
      }
      else {
        uVar13 = (uVar13 >> 2) + 1;
        uVar14 = uVar13 & 0xfffffffffffffffc;
        lVar19 = lVar10 + uVar14 * 4;
        uVar16 = 0;
        do {
          auVar20 = pshufb(*(undefined1 (*) [16])(lVar10 + param_3 + uVar16 * 4),_DAT_023e0070);
          *(undefined1 (*) [16])(local_198 + uVar16 * 4) = auVar20;
          uVar16 = uVar16 + 4;
        } while (uVar14 != uVar16);
        if (uVar13 != uVar14) goto LAB_00e073c5;
      }
      FUN_00e05070();
      iVar18 = (int)lVar19;
    } while (iVar18 <= iVar3 + -0x40);
  }
  uVar17 = iVar3 - iVar18;
  local_168 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  uVar12 = 0;
  if (0 < (int)uVar17) {
    bVar2 = 0;
    if (uVar17 == 1) {
      uVar13 = 0;
    }
    else {
      lVar19 = iVar18 + param_3;
      uVar13 = 0;
      do {
        uVar15 = (uint)uVar13 & 0xfffffffc;
        uVar12 = (uint)*(byte *)(lVar19 + uVar13) << (bVar2 & 0x10 ^ 0x18) |
                 *(uint *)(local_198 + uVar15);
        *(uint *)(local_198 + uVar15) = uVar12;
        *(uint *)(local_198 + uVar15) =
             (uint)*(byte *)(lVar19 + 1 + uVar13) << (bVar2 & 0x10 ^ 0x10) | uVar12;
        uVar13 = uVar13 + 2;
        bVar2 = bVar2 + 0x10;
      } while ((uVar17 & 0xfffffffe) != uVar13);
    }
    uVar12 = uVar17;
    if ((uVar17 & 1) != 0) {
      *(uint *)(local_198 + ((uint)uVar13 & 0xfffffffc)) =
           *(uint *)(local_198 + ((uint)uVar13 & 0xfffffffc)) |
           (uint)*(byte *)(param_3 + (longlong)iVar18 + uVar13) << (~((char)uVar13 * '\b') & 0x18U);
    }
  }
  *(uint *)(local_198 + (uVar12 & 0xfffffffc)) =
       *(uint *)(local_198 + (uVar12 & 0xfffffffc)) | 0x80 << (~((char)uVar12 * '\b') & 0x18U);
  if (0x37 < (int)uVar17) {
    FUN_00e05070();
    local_168._0_12_ = SUB1612((undefined1  [16])0x0,0);
    local_178 = (undefined1  [16])0x0;
    local_188 = (undefined1  [16])0x0;
    local_198 = (undefined1  [16])0x0;
  }
  local_168._12_4_ = iVar3 << 3;
  FUN_00e05070();
  puVar6[4] = local_48 >> 0x18 | (local_48 & 0xff0000) >> 8 | (local_48 & 0xff00) << 8 |
              local_48 << 0x18;
  puVar6[3] = uStack_50._4_4_ >> 0x18 | (uStack_50._4_4_ & 0xff0000) >> 8 |
              (uStack_50._4_4_ & 0xff00) << 8 | uStack_50._4_4_ << 0x18;
  puVar6[2] = (uint)uStack_50 >> 0x18 | ((uint)uStack_50 & 0xff0000) >> 8 |
              ((uint)uStack_50 & 0xff00) << 8 | (uint)uStack_50 << 0x18;
  puVar6[1] = local_58._4_4_ >> 0x18 | (local_58._4_4_ & 0xff0000) >> 8 |
              (local_58._4_4_ & 0xff00) << 8 | local_58._4_4_ << 0x18;
  *puVar6 = (uint)local_58 >> 0x18 | ((uint)local_58 & 0xff0000) >> 8 |
            ((uint)local_58 & 0xff00) << 8 | (uint)local_58 << 0x18;
  bVar8 = (byte)*puVar6 >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < (byte)*puVar6) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[4] = bVar2;
  bVar2 = (byte)*puVar6 & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[5] = cVar9;
  bVar8 = *(byte *)((longlong)puVar6 + 1) >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < *(byte *)((longlong)puVar6 + 1)) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[6] = bVar2;
  bVar2 = *(byte *)((longlong)puVar6 + 1) & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[7] = cVar9;
  bVar8 = *(byte *)((longlong)puVar6 + 2) >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < *(byte *)((longlong)puVar6 + 2)) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[8] = bVar2;
  bVar2 = *(byte *)((longlong)puVar6 + 2) & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[9] = cVar9;
  bVar8 = *(byte *)((longlong)puVar6 + 3) >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < *(byte *)((longlong)puVar6 + 3)) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[10] = bVar2;
  bVar2 = *(byte *)((longlong)puVar6 + 3) & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[0xb] = cVar9;
  bVar8 = (byte)puVar6[1] >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < (byte)puVar6[1]) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[0xc] = bVar2;
  bVar2 = (byte)puVar6[1] & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[0xd] = cVar9;
  bVar8 = *(byte *)((longlong)puVar6 + 5) >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < *(byte *)((longlong)puVar6 + 5)) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[0xe] = bVar2;
  bVar2 = *(byte *)((longlong)puVar6 + 5) & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[0xf] = cVar9;
  bVar8 = *(byte *)((longlong)puVar6 + 6) >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < *(byte *)((longlong)puVar6 + 6)) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[0x10] = bVar2;
  bVar2 = *(byte *)((longlong)puVar6 + 6) & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[0x11] = cVar9;
  bVar8 = *(byte *)((longlong)puVar6 + 7) >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < *(byte *)((longlong)puVar6 + 7)) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[0x12] = bVar2;
  bVar2 = *(byte *)((longlong)puVar6 + 7) & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[0x13] = cVar9;
  puVar5[0x14] = 0;
  if (param_4 != '\0') {
    local_198._8_4_ = 1;
    local_198._0_8_ = &DAT_026ba3d0;
    local_188._0_8_ = param_3;
    FUN_00d94d80(cVar9,local_198);
  }
  FUN_00d8c7d0();
  FUN_00e83070();
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


