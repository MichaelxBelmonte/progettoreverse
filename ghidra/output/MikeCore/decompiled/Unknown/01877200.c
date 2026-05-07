// Function: FUN_01877200
// Address: 01877200
// Size: 6948 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01877fe9) */
/* WARNING: Removing unreachable block (ram,0x01877ff5) */
/* WARNING: Removing unreachable block (ram,0x01878adf) */
/* WARNING: Removing unreachable block (ram,0x01878aeb) */
/* WARNING: Removing unreachable block (ram,0x01878d05) */
/* WARNING: Removing unreachable block (ram,0x01878d15) */
/* WARNING: Removing unreachable block (ram,0x018772ac) */
/* WARNING: Removing unreachable block (ram,0x018772b8) */
/* WARNING: Removing unreachable block (ram,0x018775dd) */
/* WARNING: Removing unreachable block (ram,0x018775e9) */
/* WARNING: Removing unreachable block (ram,0x018780ca) */
/* WARNING: Removing unreachable block (ram,0x018780d6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_01877200(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  float *pfVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  int *unaff_RSI;
  longlong lVar18;
  longlong *unaff_RDI;
  size_t sVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  int local_154;
  longlong local_148;
  char local_140;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  FUN_015b3230();
  FUN_015b32a0(DAT_02391074,&local_154);
  FUN_00c8e690();
  if ((local_140 == '\0') && (local_148 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  iVar6 = local_154 + 1 >> 0x1f;
  iVar15 = local_154 + 2 >> 0x1f;
  iVar7 = local_154 + 3 >> 0x1f;
  iVar8 = local_154 + 4 >> 0x1f;
  iVar9 = local_154 + 5 >> 0x1f;
  iVar10 = local_154 + 6 >> 0x1f;
  iVar11 = local_154 + 7 >> 0x1f;
  iVar12 = local_154 + 8 >> 0x1f;
  iVar13 = local_154 + 9 >> 0x1f;
  iVar14 = local_154 + 10 >> 0x1f;
  iVar16 = local_154 + 0xb >> 0x1f;
  sVar19 = local_154 + (((uint)((local_154 + 8) / 6 + iVar12) >> 1) - iVar12) * -0xc + 8;
  lVar2 = *(longlong *)(*unaff_RDI + 0x10);
  puVar3 = *(undefined4 **)(local_148 + 0x10);
  *puVar3 = *(undefined4 *)
             (lVar2 + (longlong)
                      (int)(local_154 +
                           (((uint)(local_154 / 6 + (local_154 >> 0x1f)) >> 1) - (local_154 >> 0x1f)
                           ) * -0xc) * 4);
  puVar3[1] = *(undefined4 *)
               (lVar2 + (longlong)
                        (int)((((uint)((local_154 + 1) / 6 + iVar6) >> 1) - iVar6) * -0xc +
                              local_154 + 1) * 4);
  puVar3[2] = *(undefined4 *)
               (lVar2 + (longlong)
                        (int)(local_154 +
                              (((uint)((local_154 + 2) / 6 + iVar15) >> 1) - iVar15) * -0xc + 2) * 4
               );
  puVar3[3] = *(undefined4 *)
               (lVar2 + (longlong)
                        (int)(local_154 +
                              (((uint)((local_154 + 3) / 6 + iVar7) >> 1) - iVar7) * -0xc + 3) * 4);
  puVar3[4] = *(undefined4 *)
               (lVar2 + (longlong)
                        (int)(local_154 +
                              (((uint)((local_154 + 4) / 6 + iVar8) >> 1) - iVar8) * -0xc + 4) * 4);
  puVar3[5] = *(undefined4 *)
               (lVar2 + (longlong)
                        (int)(local_154 +
                              (((uint)((local_154 + 5) / 6 + iVar9) >> 1) - iVar9) * -0xc + 5) * 4);
  puVar3[6] = *(undefined4 *)
               (lVar2 + (longlong)
                        (int)(local_154 +
                              (((uint)((local_154 + 6) / 6 + iVar10) >> 1) - iVar10) * -0xc + 6) * 4
               );
  puVar3[7] = *(undefined4 *)
               (lVar2 + (longlong)
                        (int)(local_154 +
                              (((uint)((local_154 + 7) / 6 + iVar11) >> 1) - iVar11) * -0xc + 7) * 4
               );
  puVar3[8] = *(undefined4 *)(lVar2 + (longlong)(int)sVar19 * 4);
  puVar3[9] = *(undefined4 *)
               (lVar2 + (longlong)
                        (int)((((uint)((local_154 + 9) / 6 + iVar13) >> 1) - iVar13) * -0xc +
                              local_154 + 9) * 4);
  puVar3[10] = *(undefined4 *)
                (lVar2 + (longlong)
                         (int)((((uint)((local_154 + 10) / 6 + iVar14) >> 1) - iVar14) * -0xc +
                               local_154 + 10) * 4);
  puVar3[0xb] = *(undefined4 *)
                 (lVar2 + (longlong)
                          (int)((((uint)((local_154 + 0xb) / 6 + iVar16) >> 1) - iVar16) * -0xc +
                                local_154 + 0xb) * 4);
  FUN_00c8e690();
  if ((local_140 == '\0') && (local_148 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  pfVar4 = *(float **)(local_148 + 0x10);
  fVar21 = *pfVar4 + DAT_02394254;
  puVar3 = *(undefined4 **)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[1] + DAT_02394254) / fVar21);
  *puVar3 = uVar20;
  uVar20 = _logf((pfVar4[2] + DAT_02394254) / fVar21);
  puVar3[1] = uVar20;
  uVar20 = _logf((pfVar4[3] + DAT_02394254) / fVar21);
  puVar3[2] = uVar20;
  uVar20 = _logf((pfVar4[4] + DAT_02394254) / fVar21);
  puVar3[3] = uVar20;
  uVar20 = _logf((pfVar4[5] + DAT_02394254) / fVar21);
  puVar3[4] = uVar20;
  uVar20 = _logf((pfVar4[6] + DAT_02394254) / fVar21);
  puVar3[5] = uVar20;
  uVar20 = _logf((pfVar4[7] + DAT_02394254) / fVar21);
  puVar3[6] = uVar20;
  uVar20 = _logf((pfVar4[8] + DAT_02394254) / fVar21);
  puVar3[7] = uVar20;
  uVar20 = _logf((pfVar4[9] + DAT_02394254) / fVar21);
  puVar3[8] = uVar20;
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  puVar3[9] = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  puVar3[10] = uVar20;
  fVar21 = pfVar4[1] + DAT_02394254;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[2] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x2c) = uVar20;
  uVar20 = _logf((pfVar4[3] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x30) = uVar20;
  uVar20 = _logf((pfVar4[4] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x34) = uVar20;
  uVar20 = _logf((pfVar4[5] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x38) = uVar20;
  uVar20 = _logf((pfVar4[6] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x3c) = uVar20;
  uVar20 = _logf((pfVar4[7] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x40) = uVar20;
  uVar20 = _logf((pfVar4[8] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x44) = uVar20;
  uVar20 = _logf((pfVar4[9] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x48) = uVar20;
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x4c) = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x50) = uVar20;
  fVar21 = pfVar4[2] + DAT_02394254;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[3] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x54) = uVar20;
  uVar20 = _logf((pfVar4[4] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x58) = uVar20;
  uVar20 = _logf((pfVar4[5] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x5c) = uVar20;
  uVar20 = _logf((pfVar4[6] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x60) = uVar20;
  uVar20 = _logf((pfVar4[7] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 100) = uVar20;
  uVar20 = _logf((pfVar4[8] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x68) = uVar20;
  uVar20 = _logf((pfVar4[9] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x6c) = uVar20;
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x70) = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x74) = uVar20;
  fVar21 = pfVar4[3] + DAT_02394254;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[4] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x78) = uVar20;
  uVar20 = _logf((pfVar4[5] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x7c) = uVar20;
  uVar20 = _logf((pfVar4[6] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x80) = uVar20;
  uVar20 = _logf((pfVar4[7] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x84) = uVar20;
  uVar20 = _logf((pfVar4[8] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x88) = uVar20;
  uVar20 = _logf((pfVar4[9] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x8c) = uVar20;
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x90) = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x94) = uVar20;
  fVar21 = pfVar4[4] + DAT_02394254;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[5] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x98) = uVar20;
  uVar20 = _logf((pfVar4[6] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x9c) = uVar20;
  uVar20 = _logf((pfVar4[7] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xa0) = uVar20;
  uVar20 = _logf((pfVar4[8] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xa4) = uVar20;
  uVar20 = _logf((pfVar4[9] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xa8) = uVar20;
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xac) = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xb0) = uVar20;
  fVar21 = pfVar4[5] + DAT_02394254;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[6] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xb4) = uVar20;
  uVar20 = _logf((pfVar4[7] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xb8) = uVar20;
  uVar20 = _logf((pfVar4[8] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xbc) = uVar20;
  uVar20 = _logf((pfVar4[9] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xc0) = uVar20;
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xc4) = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 200) = uVar20;
  fVar21 = pfVar4[6] + DAT_02394254;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[7] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xcc) = uVar20;
  uVar20 = _logf((pfVar4[8] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xd0) = uVar20;
  uVar20 = _logf((pfVar4[9] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xd4) = uVar20;
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xd8) = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xdc) = uVar20;
  fVar21 = pfVar4[7] + DAT_02394254;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[8] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xe0) = uVar20;
  uVar20 = _logf((pfVar4[9] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xe4) = uVar20;
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xe8) = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xec) = uVar20;
  fVar21 = pfVar4[8] + DAT_02394254;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[9] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xf0) = uVar20;
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xf4) = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xf8) = uVar20;
  fVar21 = pfVar4[9] + DAT_02394254;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xfc) = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x100) = uVar20;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / (pfVar4[10] + DAT_02394254));
  iVar16 = local_154;
  *(undefined4 *)(lVar2 + 0x104) = uVar20;
  FUN_00c8e4f0();
  if (local_140 == '\0') {
    if (local_148 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_140 = '\0';
  }
  FUN_00c92170();
  FUN_00c92160();
  puVar3 = *(undefined4 **)(local_148 + 0x10);
  puVar17 = *(undefined4 **)(local_148 + 0x10);
  *puVar17 = puVar3[5];
  puVar17[1] = puVar3[6];
  puVar17[2] = puVar3[7];
  puVar17[3] = puVar3[8];
  puVar17[4] = puVar3[9];
  puVar17[5] = puVar3[10];
  puVar17[6] = puVar3[0xb];
  puVar17[7] = *puVar3;
  puVar17[8] = puVar3[1];
  puVar17[9] = puVar3[2];
  puVar17[10] = puVar3[3];
  puVar17[0xb] = puVar3[4];
  FUN_00c8e690();
  if ((local_140 == '\0') && (local_148 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  pfVar4 = *(float **)(local_148 + 0x10);
  fVar21 = *pfVar4 + DAT_02394254;
  puVar3 = *(undefined4 **)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[1] + DAT_02394254) / fVar21);
  *puVar3 = uVar20;
  uVar20 = _logf((pfVar4[2] + DAT_02394254) / fVar21);
  puVar3[1] = uVar20;
  uVar20 = _logf((pfVar4[3] + DAT_02394254) / fVar21);
  puVar3[2] = uVar20;
  uVar20 = _logf((pfVar4[4] + DAT_02394254) / fVar21);
  puVar3[3] = uVar20;
  uVar20 = _logf((pfVar4[5] + DAT_02394254) / fVar21);
  puVar3[4] = uVar20;
  uVar20 = _logf((pfVar4[6] + DAT_02394254) / fVar21);
  puVar3[5] = uVar20;
  uVar20 = _logf((pfVar4[7] + DAT_02394254) / fVar21);
  puVar3[6] = uVar20;
  uVar20 = _logf((pfVar4[8] + DAT_02394254) / fVar21);
  puVar3[7] = uVar20;
  uVar20 = _logf((pfVar4[9] + DAT_02394254) / fVar21);
  puVar3[8] = uVar20;
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  puVar3[9] = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  puVar3[10] = uVar20;
  fVar21 = pfVar4[1] + DAT_02394254;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[2] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x2c) = uVar20;
  uVar20 = _logf((pfVar4[3] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x30) = uVar20;
  uVar20 = _logf((pfVar4[4] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x34) = uVar20;
  uVar20 = _logf((pfVar4[5] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x38) = uVar20;
  uVar20 = _logf((pfVar4[6] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x3c) = uVar20;
  uVar20 = _logf((pfVar4[7] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x40) = uVar20;
  uVar20 = _logf((pfVar4[8] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x44) = uVar20;
  uVar20 = _logf((pfVar4[9] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x48) = uVar20;
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x4c) = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x50) = uVar20;
  fVar21 = pfVar4[2] + DAT_02394254;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[3] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x54) = uVar20;
  uVar20 = _logf((pfVar4[4] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x58) = uVar20;
  uVar20 = _logf((pfVar4[5] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x5c) = uVar20;
  uVar20 = _logf((pfVar4[6] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x60) = uVar20;
  uVar20 = _logf((pfVar4[7] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 100) = uVar20;
  uVar20 = _logf((pfVar4[8] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x68) = uVar20;
  uVar20 = _logf((pfVar4[9] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x6c) = uVar20;
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x70) = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x74) = uVar20;
  fVar21 = pfVar4[3] + DAT_02394254;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[4] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x78) = uVar20;
  uVar20 = _logf((pfVar4[5] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x7c) = uVar20;
  uVar20 = _logf((pfVar4[6] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x80) = uVar20;
  uVar20 = _logf((pfVar4[7] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x84) = uVar20;
  uVar20 = _logf((pfVar4[8] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x88) = uVar20;
  uVar20 = _logf((pfVar4[9] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x8c) = uVar20;
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x90) = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x94) = uVar20;
  fVar21 = pfVar4[4] + DAT_02394254;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[5] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x98) = uVar20;
  uVar20 = _logf((pfVar4[6] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x9c) = uVar20;
  uVar20 = _logf((pfVar4[7] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xa0) = uVar20;
  uVar20 = _logf((pfVar4[8] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xa4) = uVar20;
  uVar20 = _logf((pfVar4[9] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xa8) = uVar20;
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xac) = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xb0) = uVar20;
  fVar21 = pfVar4[5] + DAT_02394254;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[6] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xb4) = uVar20;
  uVar20 = _logf((pfVar4[7] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xb8) = uVar20;
  uVar20 = _logf((pfVar4[8] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xbc) = uVar20;
  uVar20 = _logf((pfVar4[9] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xc0) = uVar20;
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xc4) = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 200) = uVar20;
  fVar21 = pfVar4[6] + DAT_02394254;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[7] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xcc) = uVar20;
  uVar20 = _logf((pfVar4[8] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xd0) = uVar20;
  uVar20 = _logf((pfVar4[9] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xd4) = uVar20;
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xd8) = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xdc) = uVar20;
  fVar21 = pfVar4[7] + DAT_02394254;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[8] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xe0) = uVar20;
  uVar20 = _logf((pfVar4[9] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xe4) = uVar20;
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xe8) = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xec) = uVar20;
  fVar21 = pfVar4[8] + DAT_02394254;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[9] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xf0) = uVar20;
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xf4) = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xf8) = uVar20;
  fVar21 = pfVar4[9] + DAT_02394254;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((pfVar4[10] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0xfc) = uVar20;
  uVar20 = _logf((pfVar4[0xb] + DAT_02394254) / fVar21);
  *(undefined4 *)(lVar2 + 0x100) = uVar20;
  lVar2 = *(longlong *)(local_148 + 0x10);
  uVar20 = _logf((DAT_02394254 + pfVar4[0xb]) / (pfVar4[10] + DAT_02394254));
  *(undefined4 *)(lVar2 + 0x104) = uVar20;
  _memcpy(puVar17,&section_00000108,sVar19);
  FUN_00c8e2b0();
  if (local_148 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  iVar15 = iVar16 + -7;
  iVar6 = iVar15 >> 0x1f;
  iVar16 = iVar16 + (((uint)(iVar15 / 6 + iVar6) >> 1) - iVar6) * -0xc + -7;
  iVar16 = (iVar16 >> 0x1f & 0xcU) + iVar16;
  lVar2 = *(longlong *)(local_148 + 0x10);
  lVar5 = *(longlong *)(local_148 + 0x10);
  fVar21 = 0.0;
  lVar18 = 2;
  do {
    fVar21 = (float)((uint)(*(float *)(lVar2 + lVar18 * 4) - *(float *)(lVar5 + lVar18 * 4)) &
                    _DAT_02390140) +
             (float)((uint)(*(float *)(lVar2 + -4 + lVar18 * 4) -
                           *(float *)(lVar5 + -4 + lVar18 * 4)) & _DAT_02390140) +
             (float)((uint)(*(float *)(lVar2 + -8 + lVar18 * 4) -
                           *(float *)(lVar5 + -8 + lVar18 * 4)) & _DAT_02390140) + fVar21;
    lVar18 = lVar18 + 3;
  } while (lVar18 != 0x44);
  lVar2 = *(longlong *)(local_148 + 0x10);
  fVar22 = 0.0;
  lVar18 = 2;
  do {
    fVar22 = (float)((uint)(*(float *)(lVar2 + lVar18 * 4) - *(float *)(lVar5 + lVar18 * 4)) &
                    _DAT_02390140) +
             (float)((uint)(*(float *)(lVar2 + -4 + lVar18 * 4) -
                           *(float *)(lVar5 + -4 + lVar18 * 4)) & _DAT_02390140) +
             (float)((uint)(*(float *)(lVar2 + -8 + lVar18 * 4) -
                           *(float *)(lVar5 + -8 + lVar18 * 4)) & _DAT_02390140) + fVar22;
    lVar18 = lVar18 + 3;
  } while (lVar18 != 0x44);
  fVar22 = (fVar22 / DAT_023b16a0 + DAT_02390d00) * DAT_02390118 + DAT_02390124;
  fVar21 = DAT_02390124 - (fVar21 / DAT_023b16a0 + DAT_02390d00) * DAT_0239011c;
  if ((fVar22 <= fVar21) || (fVar22 <= DAT_0241f36c)) {
    *unaff_RSI = local_154;
    fVar22 = fVar21;
  }
  else {
    *unaff_RSI = iVar16;
    local_154 = iVar16;
  }
  if (local_148 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return fVar22;
}


