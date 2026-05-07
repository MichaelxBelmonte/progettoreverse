// Function: FUN_00ea89d0
// Address: 00ea89d0
// Size: 1927 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00ea919f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ea89d0(int param_1,uint param_2,undefined1 *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  uint uVar23;
  uint uVar24;
  undefined1 *puVar25;
  int iVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong unaff_RSI;
  uint uVar32;
  uint uVar33;
  int iVar34;
  longlong unaff_RDI;
  longlong lVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  uint local_1468 [516];
  uint local_c58;
  uint local_c54 [3];
  int iStack_c48;
  int aiStack_c44 [4];
  undefined1 auStack_c34 [16];
  undefined1 auStack_c24 [2012];
  uint local_448 [260];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar29 = (ulonglong)param_2;
  if ((int)param_2 < 1) goto LAB_00ea8b6d;
  if (param_2 < 8) {
    uVar15 = 0;
  }
  else {
    uVar15 = (ulonglong)(param_2 & 0xfffffff8);
    uVar27 = (uVar15 - 8 >> 3) + 1;
    if (uVar15 - 8 == 0) {
      lVar18 = 0;
LAB_00ea8aea:
      piVar1 = (int *)(unaff_RSI + lVar18 * 4);
      piVar3 = (int *)(unaff_RSI + 0x10 + lVar18 * 4);
      auVar36._0_4_ = -(uint)(*piVar1 == 0);
      auVar36._4_4_ = -(uint)(piVar1[1] == 0);
      auVar36._8_4_ = -(uint)(piVar1[2] == 0);
      auVar36._12_4_ = -(uint)(piVar1[3] == 0);
      auVar39._0_4_ = -(uint)(*piVar3 == 0);
      auVar39._4_4_ = -(uint)(piVar3[1] == 0);
      auVar39._8_4_ = -(uint)(piVar3[2] == 0);
      auVar39._12_4_ = -(uint)(piVar3[3] == 0);
      auVar40._0_4_ = *piVar1 << 8;
      auVar40._4_4_ = piVar1[1] << 8;
      auVar40._8_4_ = piVar1[2] << 8;
      auVar40._12_4_ = piVar1[3] << 8;
      auVar42._0_4_ = *piVar3 << 8;
      auVar42._4_4_ = piVar3[1] << 8;
      auVar42._8_4_ = piVar3[2] << 8;
      auVar42._12_4_ = piVar3[3] << 8;
      auVar10._4_4_ = _UNK_0240e114;
      auVar10._0_4_ = _DAT_0240e110;
      auVar10._8_4_ = _UNK_0240e118;
      auVar10._12_4_ = _UNK_0240e11c;
      auVar41 = blendvps(auVar40,auVar10,auVar36);
      auVar44 = blendvps(auVar42,auVar10,auVar39);
      uVar27 = lVar18 * 4 | 4;
      *(undefined1 (*) [16])((longlong)&local_c58 + uVar27) = auVar41;
      *(undefined1 (*) [16])((longlong)&iStack_c48 + uVar27) = auVar44;
    }
    else {
      lVar35 = -(uVar27 & 0xfffffffffffffffe);
      lVar18 = 0;
      auVar41._4_4_ = _UNK_0240e114;
      auVar41._0_4_ = _DAT_0240e110;
      auVar41._8_4_ = _UNK_0240e118;
      auVar41._12_4_ = _UNK_0240e11c;
      do {
        piVar1 = (int *)(unaff_RSI + lVar18 * 4);
        piVar3 = (int *)(unaff_RSI + 0x10 + lVar18 * 4);
        auVar44._0_4_ = -(uint)(*piVar1 == 0);
        auVar44._4_4_ = -(uint)(piVar1[1] == 0);
        auVar44._8_4_ = -(uint)(piVar1[2] == 0);
        auVar44._12_4_ = -(uint)(piVar1[3] == 0);
        auVar37._0_4_ = -(uint)(*piVar3 == 0);
        auVar37._4_4_ = -(uint)(piVar3[1] == 0);
        auVar37._8_4_ = -(uint)(piVar3[2] == 0);
        auVar37._12_4_ = -(uint)(piVar3[3] == 0);
        auVar43._0_4_ = *piVar1 << 8;
        auVar43._4_4_ = piVar1[1] << 8;
        auVar43._8_4_ = piVar1[2] << 8;
        auVar43._12_4_ = piVar1[3] << 8;
        auVar46._0_4_ = *piVar3 << 8;
        auVar46._4_4_ = piVar3[1] << 8;
        auVar46._8_4_ = piVar3[2] << 8;
        auVar46._12_4_ = piVar3[3] << 8;
        auVar44 = blendvps(auVar43,auVar41,auVar44);
        auVar47 = blendvps(auVar46,auVar41,auVar37);
        *(undefined1 (*) [16])(local_c54 + lVar18) = auVar44;
        *(undefined1 (*) [16])(aiStack_c44 + lVar18) = auVar47;
        piVar1 = (int *)(unaff_RSI + 0x20 + lVar18 * 4);
        piVar3 = (int *)(unaff_RSI + 0x30 + lVar18 * 4);
        auVar47._0_4_ = -(uint)(*piVar1 == 0);
        auVar47._4_4_ = -(uint)(piVar1[1] == 0);
        auVar47._8_4_ = -(uint)(piVar1[2] == 0);
        auVar47._12_4_ = -(uint)(piVar1[3] == 0);
        auVar38._0_4_ = -(uint)(*piVar3 == 0);
        auVar38._4_4_ = -(uint)(piVar3[1] == 0);
        auVar38._8_4_ = -(uint)(piVar3[2] == 0);
        auVar38._12_4_ = -(uint)(piVar3[3] == 0);
        auVar45._0_4_ = *piVar1 << 8;
        auVar45._4_4_ = piVar1[1] << 8;
        auVar45._8_4_ = piVar1[2] << 8;
        auVar45._12_4_ = piVar1[3] << 8;
        auVar48._0_4_ = *piVar3 << 8;
        auVar48._4_4_ = piVar3[1] << 8;
        auVar48._8_4_ = piVar3[2] << 8;
        auVar48._12_4_ = piVar3[3] << 8;
        auVar44 = blendvps(auVar45,auVar41,auVar47);
        auVar47 = blendvps(auVar48,auVar41,auVar38);
        *(undefined1 (*) [16])(auStack_c34 + lVar18 * 4) = auVar44;
        *(undefined1 (*) [16])(auStack_c24 + lVar18 * 4) = auVar47;
        lVar18 = lVar18 + 0x10;
        lVar35 = lVar35 + 2;
      } while (lVar35 != 0);
      if ((uVar27 & 1) != 0) goto LAB_00ea8aea;
    }
    if (uVar15 == uVar29) goto LAB_00ea8b6d;
  }
  do {
    iVar4 = *(int *)(unaff_RSI + uVar15 * 4);
    uVar32 = iVar4 << 8;
    if (iVar4 == 0) {
      uVar32 = 0x100;
    }
    local_c54[uVar15] = uVar32;
    uVar15 = uVar15 + 1;
  } while (uVar29 != uVar15);
LAB_00ea8b6d:
  local_448[0] = 0;
  local_c58 = 0;
  local_1468[0] = 0xfffffffe;
  if (0 < (int)param_2) {
    puVar16 = (undefined1 *)(ulonglong)(param_2 + 1);
    puVar17 = puVar16 + -1;
    puVar25 = (undefined1 *)((ulonglong)puVar17 & 0xfffffffffffffff8);
    puVar21 = puVar25 + 1;
LAB_00ea8c2e:
    local_448[0] = 0;
    local_c58 = 0;
    local_1468[0] = 0xfffffffe;
    _memset(puVar21,param_2 * 4,(size_t)param_3);
    lVar18 = 1;
    uVar15 = 0;
    do {
      local_448[uVar15 + 1] = (uint)lVar18;
      uVar15 = uVar15 + 1;
      uVar32 = (&local_c58)[lVar18];
      uVar24 = (uint)uVar15;
      uVar27 = uVar15 >> 1 & 0x7fffffff;
      lVar35 = (longlong)(int)local_448[uVar27];
      if ((int)uVar32 < (int)(&local_c58)[lVar35]) {
        uVar30 = uVar15 & 0xffffffff;
        do {
          local_448[uVar30] = (uint)lVar35;
          uVar24 = (uint)uVar27;
          lVar35 = (longlong)(int)local_448[uVar27 >> 1];
          uVar30 = uVar27;
          uVar27 = uVar27 >> 1;
        } while ((int)uVar32 < (int)(&local_c58)[lVar35]);
      }
      local_448[uVar24] = (uint)lVar18;
      lVar18 = lVar18 + 1;
    } while (uVar15 != uVar29);
    if (0x103 < param_2) {
      FUN_00e9e160();
    }
    uVar15 = (ulonglong)param_2;
    uVar27 = (longlong)(int)param_2;
    uVar30 = uVar29;
    if (1 < (int)param_2) {
      do {
        lVar18 = (longlong)(int)local_448[1];
        uVar32 = local_448[uVar30];
        local_448[1] = uVar32;
        uVar2 = uVar30 - 1;
        uVar24 = 1;
        if (2 < (longlong)uVar30) {
          uVar33 = (&local_c58)[(int)uVar32];
          uVar23 = 2;
          uVar24 = 1;
          do {
            lVar35 = (longlong)(int)uVar23;
            if (lVar35 < (longlong)uVar2) {
              uVar14 = uVar23 | 1;
              if ((int)(&local_c58)[(int)local_448[lVar35]] <=
                  (int)(&local_c58)[(int)local_448[(int)(uVar23 | 1)]]) {
                uVar14 = uVar23;
              }
              uVar5 = local_448[(int)uVar14];
              uVar28 = (&local_c58)[(int)uVar5];
            }
            else {
              uVar5 = local_448[lVar35];
              uVar28 = (&local_c58)[(int)uVar5];
              uVar14 = uVar23;
            }
            if ((int)uVar33 < (int)uVar28) break;
            local_448[(int)uVar24] = uVar5;
            uVar23 = uVar14 * 2;
            uVar24 = uVar14;
          } while ((longlong)(int)uVar23 < (longlong)uVar30);
        }
        local_448[(int)uVar24] = uVar32;
        lVar35 = (longlong)(int)local_448[1];
        uVar32 = local_448[uVar2];
        local_448[1] = uVar32;
        uVar24 = 1;
        if (3 < (longlong)uVar30) {
          uVar33 = (&local_c58)[(int)uVar32];
          uVar23 = 2;
          uVar24 = 1;
          do {
            lVar19 = (longlong)(int)uVar23;
            if (lVar19 < (longlong)(uVar30 - 2)) {
              uVar14 = uVar23 | 1;
              if ((int)(&local_c58)[(int)local_448[lVar19]] <=
                  (int)(&local_c58)[(int)local_448[(int)(uVar23 | 1)]]) {
                uVar14 = uVar23;
              }
              uVar5 = local_448[(int)uVar14];
              uVar28 = (&local_c58)[(int)uVar5];
            }
            else {
              uVar5 = local_448[lVar19];
              uVar28 = (&local_c58)[(int)uVar5];
              uVar14 = uVar23;
            }
            if ((int)uVar33 < (int)uVar28) break;
            local_448[(int)uVar24] = uVar5;
            uVar23 = uVar14 * 2;
            uVar24 = uVar14;
          } while ((longlong)(int)uVar23 <= (longlong)(uVar30 - 2));
        }
        local_448[(int)uVar24] = uVar32;
        uVar15 = uVar27 + 1;
        uVar33 = (uint)uVar15;
        local_1468[lVar35] = uVar33;
        local_1468[lVar18] = uVar33;
        uVar24 = (&local_c58)[lVar18] & 0xff;
        uVar32 = (&local_c58)[lVar35] & 0xff;
        if (uVar32 < uVar24) {
          uVar32 = uVar24;
        }
        uVar32 = uVar32 + 1 |
                 ((&local_c58)[lVar35] & 0xffffff00) + ((&local_c58)[lVar18] & 0xffffff00);
        local_c54[uVar27] = uVar32;
        local_1468[uVar27 + 1] = 0xffffffff;
        local_448[uVar2] = uVar33;
        uVar27 = (ulonglong)(uint)((int)uVar2 >> 1);
        lVar18 = (longlong)(int)local_448[uVar27];
        if ((int)uVar32 < (int)(&local_c58)[lVar18]) {
          uVar20 = uVar2 & 0xffffffff;
          do {
            uVar31 = uVar27;
            local_448[uVar20] = (uint)lVar18;
            uVar27 = (ulonglong)(uint)((int)uVar31 >> 1);
            lVar18 = (longlong)(int)local_448[uVar27];
            uVar20 = uVar31;
          } while ((int)uVar32 < (int)(&local_c58)[lVar18]);
        }
        else {
          uVar31 = uVar2 & 0xffffffff;
        }
        local_448[uVar31] = uVar33;
        bVar6 = 2 < (longlong)uVar30;
        uVar27 = uVar15;
        uVar30 = uVar2;
      } while (bVar6);
    }
    if (0x203 < (int)uVar15) {
      FUN_00e9e160();
    }
    iVar13 = _UNK_0240e11c;
    iVar12 = _UNK_0240e118;
    iVar11 = _UNK_0240e114;
    iVar4 = _DAT_0240e110;
    uVar23 = _UNK_023e21ec;
    uVar33 = _UNK_023e21e8;
    uVar24 = _UNK_023e21e4;
    uVar32 = _DAT_023e21e0;
    uVar15 = 1;
    if (param_2 + 1 == 2) {
      bVar6 = false;
    }
    else {
      bVar6 = false;
      uVar27 = (ulonglong)puVar17 & 0xfffffffffffffffe;
      do {
        iVar26 = -1;
        uVar30 = uVar15 & 0xffffffff;
        do {
          iVar34 = (int)uVar30;
          uVar30 = (ulonglong)local_1468[iVar34];
          iVar26 = iVar26 + 1;
        } while (-1 < (int)local_1468[iVar34]);
        *(char *)((uVar15 - 1) + unaff_RDI) = (char)iVar26;
        uVar28 = (int)uVar15 + 1;
        iVar34 = -1;
        do {
          uVar28 = local_1468[(int)uVar28];
          iVar34 = iVar34 + 1;
        } while (-1 < (int)uVar28);
        *(char *)(unaff_RDI + uVar15) = (char)iVar34;
        if (param_1 < iVar26) {
          bVar6 = true;
        }
        if (param_1 < iVar34) {
          bVar6 = true;
        }
        uVar15 = uVar15 + 2;
        uVar27 = uVar27 - 2;
      } while (uVar27 != 0);
    }
    if (((ulonglong)puVar17 & 1) != 0) {
      iVar26 = -1;
      uVar27 = uVar15 & 0xffffffff;
      do {
        iVar34 = (int)uVar27;
        uVar27 = (ulonglong)local_1468[iVar34];
        iVar26 = iVar26 + 1;
      } while (-1 < (int)local_1468[iVar34]);
      *(char *)((uVar15 - 1) + unaff_RDI) = (char)iVar26;
      if (param_1 < iVar26) {
        bVar6 = true;
      }
    }
    if (bVar6) {
      puVar22 = (undefined1 *)((longlong)&MACH_HEADER.magic + 1);
      param_3 = puVar16;
      if (&MACH_HEADER.cpusubtype <= puVar17) goto code_r0x00ea90b7;
      goto LAB_00ea9140;
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
code_r0x00ea90b7:
  puVar21 = (undefined1 *)0x0;
  do {
    iVar26 = (&iStack_c48)[(longlong)puVar21];
    iVar34 = aiStack_c44[(longlong)puVar21];
    iVar7 = aiStack_c44[(longlong)(puVar21 + 1)];
    iVar8 = aiStack_c44[(longlong)(puVar21 + 2)];
    iVar9 = *(int *)(auStack_c34 + (longlong)puVar21 * 4 + -4);
    local_c54[(longlong)puVar21] =
         ((((int)local_c54[(longlong)puVar21] >> 8) - ((int)local_c54[(longlong)puVar21] >> 0x1f)) *
          0x80 & uVar32) + iVar4;
    local_c54[(longlong)(puVar21 + 1)] =
         ((((int)local_c54[(longlong)(puVar21 + 1)] >> 8) -
          ((int)local_c54[(longlong)(puVar21 + 1)] >> 0x1f)) * 0x80 & uVar24) + iVar11;
    local_c54[(longlong)(puVar21 + 2)] =
         ((((int)local_c54[(longlong)(puVar21 + 2)] >> 8) -
          ((int)local_c54[(longlong)(puVar21 + 2)] >> 0x1f)) * 0x80 & uVar33) + iVar12;
    (&iStack_c48)[(longlong)puVar21] = (((iVar26 >> 8) - (iVar26 >> 0x1f)) * 0x80 & uVar23) + iVar13
    ;
    aiStack_c44[(longlong)puVar21] = (((iVar34 >> 8) - (iVar34 >> 0x1f)) * 0x80 & uVar32) + iVar4;
    aiStack_c44[(longlong)(puVar21 + 1)] =
         (((iVar7 >> 8) - (iVar7 >> 0x1f)) * 0x80 & uVar24) + iVar11;
    aiStack_c44[(longlong)(puVar21 + 2)] =
         (((iVar8 >> 8) - (iVar8 >> 0x1f)) * 0x80 & uVar33) + iVar12;
    *(uint *)(auStack_c34 + (longlong)puVar21 * 4 + -4) =
         (((iVar9 >> 8) - (iVar9 >> 0x1f)) * 0x80 & uVar23) + iVar13;
    puVar21 = puVar21 + 8;
  } while (puVar25 != puVar21);
  puVar22 = puVar25 + 1;
  puVar21 = puVar25;
  if (puVar17 != puVar25) {
LAB_00ea9140:
    do {
      uVar32 = (((int)(&local_c58)[(longlong)puVar22] >> 8) -
                ((int)(&local_c58)[(longlong)puVar22] >> 0x1f) & 0xfffffffeU) * 0x80 + 0x100;
      puVar21 = (undefined1 *)(ulonglong)uVar32;
      (&local_c58)[(longlong)puVar22] = uVar32;
      puVar22 = puVar22 + 1;
    } while (puVar16 != puVar22);
  }
  goto LAB_00ea8c2e;
}


