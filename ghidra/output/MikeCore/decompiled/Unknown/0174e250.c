// Function: FUN_0174e250
// Address: 0174e250
// Size: 6334 bytes
// Class: Unknown
// String references:
//   "-%@"


/* WARNING: Removing unreachable block (ram,0x0174fb86) */
/* WARNING: Removing unreachable block (ram,0x0174fb92) */
/* WARNING: Removing unreachable block (ram,0x0174fb05) */
/* WARNING: Removing unreachable block (ram,0x0174fb0e) */
/* WARNING: Removing unreachable block (ram,0x0174f6fe) */
/* WARNING: Removing unreachable block (ram,0x0174f707) */
/* WARNING: Removing unreachable block (ram,0x0174f1e8) */
/* WARNING: Removing unreachable block (ram,0x0174f1f1) */
/* WARNING: Removing unreachable block (ram,0x0174efb8) */
/* WARNING: Removing unreachable block (ram,0x0174efc1) */
/* WARNING: Removing unreachable block (ram,0x0174e4f5) */
/* WARNING: Removing unreachable block (ram,0x0174e4fe) */
/* WARNING: Removing unreachable block (ram,0x0174e2e7) */
/* WARNING: Removing unreachable block (ram,0x0174e2f0) */
/* WARNING: Removing unreachable block (ram,0x0174f135) */
/* WARNING: Removing unreachable block (ram,0x0174f142) */
/* WARNING: Removing unreachable block (ram,0x0174f075) */
/* WARNING: Removing unreachable block (ram,0x0174f07e) */
/* WARNING: Removing unreachable block (ram,0x0174f0e6) */
/* WARNING: Removing unreachable block (ram,0x0174f0f2) */
/* WARNING: Removing unreachable block (ram,0x0174f245) */
/* WARNING: Removing unreachable block (ram,0x0174f24e) */
/* WARNING: Removing unreachable block (ram,0x0174f99d) */
/* WARNING: Removing unreachable block (ram,0x0174f9a6) */
/* WARNING: Removing unreachable block (ram,0x0174faa1) */
/* WARNING: Removing unreachable block (ram,0x0174faaa) */
/* WARNING: Removing unreachable block (ram,0x0174e667) */
/* WARNING: Removing unreachable block (ram,0x0174e670) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0174e250(pthread_key_t param_1)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  void *pvVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  pthread_key_t pVar18;
  pthread_key_t pVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  uint unaff_ESI;
  ulonglong *unaff_RDI;
  uint uVar28;
  int iVar29;
  int iVar30;
  float fVar31;
  undefined4 extraout_XMM0_Da;
  float fVar32;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_e8;
  char local_e0;
  pthread_key_t local_68;
  undefined8 *local_58;
  char local_50;
  
  puVar16 = local_58;
  uVar1 = unaff_RDI[0xb];
  if (uVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar14 = _pthread_getspecific(param_1);
  if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
    param_1 = (pthread_key_t)uVar1;
  }
  FUN_01736e70();
  if ((local_50 == '\0') && (local_58 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  pvVar14 = _pthread_getspecific(param_1);
  if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
    param_1 = (pthread_key_t)uVar1;
  }
  FUN_017381f0();
  if (unaff_ESI == 1) {
LAB_0174e47e:
    unaff_ESI = 2;
  }
  else if (unaff_ESI == 0) {
    uVar23 = unaff_RDI[0xb];
    if (uVar23 != 0) {
      FUN_00d50b00();
    }
    pvVar14 = _pthread_getspecific(param_1);
    if (pvVar14 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736da0();
    if (local_50 == '\0') {
      if (local_58 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    if (uVar23 != 0) {
      FUN_00d50b20();
    }
    lVar15 = DAT_027cd590;
    if (local_58 == (undefined8 *)0x0) goto LAB_0174e47e;
    if (DAT_027cd590 != 0) {
      FUN_00d50b00();
    }
    uVar9 = FUN_00d90eb0();
    if (lVar15 != 0) {
      FUN_00d50b20();
    }
    lVar15 = DAT_027cd598;
    if (DAT_027cd598 != 0) {
      FUN_00d50b00();
    }
    cVar7 = FUN_00d90eb0();
    if (lVar15 != 0) {
      FUN_00d50b20();
    }
    unaff_ESI = 5;
    if (cVar7 == '\0') {
      unaff_ESI = (uVar9 & 0xff) * 2 + 2;
    }
    FUN_00d50b20();
  }
  cVar7 = FUN_0174e1b0();
  if (cVar7 == '\0') {
    FUN_0177c8c0();
    if ((local_50 == '\0') && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    pvVar14 = _pthread_getspecific(param_1);
    if (pvVar14 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar9 = FUN_01736dd0();
    if ((int)uVar9 < *(int *)((longlong)local_58 + 0xc)) {
      lVar15 = (longlong)(int)uVar9;
      pVar19 = 0;
      do {
        lVar27 = *(longlong *)(local_58[2] + lVar15 * 8);
        puVar22 = local_58;
        if (lVar27 != 0) {
          FUN_00d50b00();
        }
        pVar18 = (pthread_key_t)puVar22;
        pvVar14 = _pthread_getspecific(pVar18);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar7 = FUN_01739620();
        if (cVar7 == '\0') {
LAB_0174ea00:
          pvVar14 = _pthread_getspecific(pVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d8ede0();
          if (local_50 == '\0') {
            if (local_58 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          FUN_01739510();
          if (local_58 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar14 = _pthread_getspecific(pVar18);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar7 = FUN_01739960();
          if ((cVar7 != '\0') ||
             (pVar18 = pVar19, *(int *)((longlong)local_58 + 0xc) <= (int)pVar19))
          goto LAB_0174ea00;
          pvVar14 = _pthread_getspecific(pVar19);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar17 = *(longlong *)(local_58[2] + (longlong)(int)pVar19 * 8);
          if (lVar17 != 0) {
            FUN_00d50b00();
          }
          FUN_01739510();
          pVar19 = pVar19 + 1;
          if (lVar17 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar27 != 0) {
          FUN_00d50b20();
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)((longlong)local_58 + 0xc));
    }
    if (0 < (int)uVar9) {
      lVar15 = (ulonglong)uVar9 + 1;
      local_68 = 1;
      do {
        uVar9 = uVar9 - 1;
        lVar27 = puVar16[2];
        lVar17 = *(longlong *)(lVar27 + (ulonglong)uVar9 * 8);
        if (lVar17 != 0) {
          FUN_00d50b00();
        }
        pVar19 = (pthread_key_t)lVar27;
        pvVar14 = _pthread_getspecific(pVar19);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar7 = FUN_01739620();
        if (cVar7 == '\0') {
LAB_0174ec80:
          pvVar14 = _pthread_getspecific(pVar19);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d8ede0();
          if (local_50 == '\0') {
            if (local_58 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          FUN_01739510();
          if (local_58 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar14 = _pthread_getspecific(pVar19);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar7 = FUN_01739960();
          if ((cVar7 != '\0') ||
             (pVar19 = local_68, *(int *)((longlong)puVar16 + 0xc) <= (int)local_68))
          goto LAB_0174ec80;
          pvVar14 = _pthread_getspecific(local_68);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar27 = *(longlong *)(puVar16[2] + (longlong)(int)local_68 * 8);
          local_50 = '\x01';
          if (lVar27 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8cb40();
          if (local_e0 == '\0') {
            if (local_e8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_e0 = '\0';
          }
          FUN_01739510();
          if (local_e8 != 0) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
          local_58 = &DAT_024c5048;
          if (lVar27 != 0) {
            FUN_00d50b20();
          }
          local_68 = local_68 + 1;
        }
        if (lVar17 != 0) {
          FUN_00d50b20();
        }
        lVar15 = lVar15 + -1;
      } while (1 < lVar15);
    }
    if (puVar16 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar14 = _pthread_getspecific(param_1);
    if (pvVar14 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736c50();
    uVar23 = *unaff_RDI;
    iVar10 = (**(code **)(uVar23 + 0x370))();
    pVar19 = (pthread_key_t)uVar23;
    if (unaff_ESI == 3) {
      FUN_0173ba80();
      pvVar14 = _pthread_getspecific(pVar19);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0174c730();
      if ((local_50 == '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      FUN_0174c730();
      if ((local_50 == '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c8e690();
      if ((local_50 == '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      FUN_00c8e690();
      if ((local_50 == '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      puVar2 = (undefined4 *)local_58[2];
      puVar3 = (undefined4 *)local_58[2];
      puVar4 = (undefined4 *)local_58[2];
      puVar5 = (undefined4 *)local_58[2];
      *puVar3 = *puVar2;
      uVar11 = *puVar4;
      *puVar5 = uVar11;
      puVar5[0xc] = uVar11;
      puVar3[1] = puVar2[2];
      uVar11 = puVar4[2];
      puVar5[1] = uVar11;
      puVar5[0xd] = uVar11;
      puVar3[2] = puVar2[4];
      uVar11 = puVar4[4];
      puVar5[2] = uVar11;
      puVar5[0xe] = uVar11;
      puVar3[3] = puVar2[6];
      uVar11 = puVar4[6];
      puVar5[3] = uVar11;
      puVar5[0xf] = uVar11;
      puVar3[4] = puVar2[8];
      uVar11 = puVar4[8];
      puVar5[4] = uVar11;
      puVar5[0x10] = uVar11;
      puVar3[5] = puVar2[10];
      uVar11 = puVar4[10];
      puVar5[5] = uVar11;
      puVar5[0x11] = uVar11;
      puVar3[6] = puVar2[0xc];
      uVar11 = puVar4[0xc];
      puVar5[6] = uVar11;
      puVar5[0x12] = uVar11;
      puVar3[7] = puVar2[0xe];
      uVar11 = puVar4[0xe];
      puVar5[7] = uVar11;
      puVar5[0x13] = uVar11;
      puVar3[8] = puVar2[0x10];
      uVar11 = puVar4[0x10];
      puVar5[8] = uVar11;
      puVar5[0x14] = uVar11;
      puVar3[9] = puVar2[0x12];
      uVar11 = puVar4[0x12];
      puVar5[9] = uVar11;
      puVar5[0x15] = uVar11;
      puVar3[10] = puVar2[0x14];
      uVar11 = puVar4[0x14];
      puVar5[10] = uVar11;
      puVar5[0x16] = uVar11;
      puVar3[0xb] = puVar2[0x16];
      uVar11 = puVar4[0x16];
      puVar5[0xb] = uVar11;
      puVar5[0x17] = uVar11;
      puVar16 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar16 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      lVar15 = 0xc00000000;
      lVar27 = 0;
      uVar9 = 0;
      do {
        lVar17 = local_58[2];
        uVar21 = *(uint *)(lVar17 + lVar27 * 4);
        uVar28 = 0;
        if (((uVar21 & 0xfffffffe) == 2) && (uVar28 = uVar21, *(int *)local_58[2] != 3)) {
          uVar28 = 0;
        }
        uVar21 = *(uint *)(lVar17 + 4 + lVar27 * 4);
        if ((uVar21 & 0xfffffffe) == 2) {
          if (*(int *)(local_58[2] + 4) != 3) {
            uVar21 = 0;
          }
          uVar28 = uVar28 + uVar21;
        }
        uVar21 = *(uint *)(lVar17 + 8 + lVar27 * 4);
        if ((uVar21 & 0xfffffffe) == 2) {
          if (*(int *)(local_58[2] + 8) != 3) {
            uVar21 = 0;
          }
          uVar28 = uVar28 + uVar21;
        }
        uVar21 = *(uint *)(lVar17 + 0xc + lVar27 * 4);
        if ((uVar21 & 0xfffffffe) == 2) {
          if (*(int *)(local_58[2] + 0xc) != 3) {
            uVar21 = 0;
          }
          uVar28 = uVar28 + uVar21;
        }
        uVar21 = *(uint *)(lVar17 + 0x10 + lVar27 * 4);
        if ((uVar21 & 0xfffffffe) == 2) {
          if (*(int *)(local_58[2] + 0x10) != 3) {
            uVar21 = 0;
          }
          uVar28 = uVar28 + uVar21;
        }
        uVar21 = *(uint *)(lVar17 + 0x14 + lVar27 * 4);
        if ((uVar21 & 0xfffffffe) == 2) {
          if (*(int *)(local_58[2] + 0x14) != 3) {
            uVar21 = 0;
          }
          uVar28 = uVar28 + uVar21;
        }
        uVar21 = *(uint *)(lVar17 + 0x18 + lVar27 * 4);
        if ((uVar21 & 0xfffffffe) == 2) {
          if (*(int *)(local_58[2] + 0x18) != 3) {
            uVar21 = 0;
          }
          uVar28 = uVar28 + uVar21;
        }
        uVar21 = *(uint *)(lVar17 + 0x1c + lVar27 * 4);
        if ((uVar21 & 0xfffffffe) == 2) {
          if (*(int *)(local_58[2] + 0x1c) != 3) {
            uVar21 = 0;
          }
          uVar28 = uVar28 + uVar21;
        }
        uVar21 = *(uint *)(lVar17 + 0x20 + lVar27 * 4);
        if ((uVar21 & 0xfffffffe) == 2) {
          if (*(int *)(local_58[2] + 0x20) != 3) {
            uVar21 = 0;
          }
          uVar28 = uVar28 + uVar21;
        }
        uVar21 = *(uint *)(lVar17 + 0x24 + lVar27 * 4);
        if ((uVar21 & 0xfffffffe) == 2) {
          if (*(int *)(local_58[2] + 0x24) != 3) {
            uVar21 = 0;
          }
          uVar28 = uVar28 + uVar21;
        }
        uVar21 = *(uint *)(lVar17 + 0x28 + lVar27 * 4);
        if ((uVar21 & 0xfffffffe) == 2) {
          if (*(int *)(local_58[2] + 0x28) != 3) {
            uVar21 = 0;
          }
          uVar28 = uVar28 + uVar21;
        }
        uVar21 = *(uint *)(lVar17 + 0x2c + lVar27 * 4);
        if ((uVar21 & 0xfffffffe) == 2) {
          if (*(int *)(local_58[2] + 0x2c) != 3) {
            uVar21 = 0;
          }
          uVar28 = uVar28 + uVar21;
        }
        if ((int)uVar9 <= (int)uVar28) {
          lVar17 = lVar15 >> 0x20;
          if (lVar27 == 0) {
            lVar17 = 0;
          }
          if (*(int *)(local_58[2] + lVar17 * 4) == 3) {
            iVar30 = *(int *)(puVar16 + 3);
            FUN_00c8e340(lVar15,1);
            *(int *)(puVar16[2] + (longlong)iVar30) = (int)lVar27;
            uVar9 = uVar28;
          }
        }
        lVar27 = lVar27 + 1;
        lVar15 = lVar15 + -0x100000000;
      } while (lVar15 != 0);
      uVar9 = *(uint *)(puVar16 + 3);
      uVar21 = uVar9;
      if ((int)uVar9 < 0) {
        uVar21 = uVar9 + 3;
      }
      uVar23 = (ulonglong)uVar21;
      iVar30 = 0;
      if (6 < uVar9 + 3) {
        uVar21 = (int)uVar21 >> 2;
        uVar23 = (ulonglong)uVar21;
        lVar15 = puVar16[2];
        iVar30 = *(int *)(lVar15 + -4 + (longlong)(int)uVar21 * 4);
        if (3 < (int)uVar9) {
          uVar24 = (ulonglong)uVar21;
          do {
            iVar25 = *(int *)(lVar15 + (uVar24 - 1 & 0xffffffff) * 4);
            uVar9 = 0xc - iVar25;
            uVar23 = (ulonglong)uVar9;
            bVar8 = false;
            iVar12 = 0;
            do {
              pvVar14 = _pthread_getspecific((pthread_key_t)uVar23);
              if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                uVar23 = uVar1;
              }
              FUN_01736e70();
              iVar20 = *(int *)((longlong)local_58 + 0xc);
              if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if (iVar20 <= iVar12) break;
              uVar11 = FUN_017482a0();
              FUN_01740240(extraout_XMM0_Da_01,uVar11);
              if ((local_50 == '\0') && (local_58 != (undefined8 *)0x0)) {
                FUN_00d50b00();
              }
              iVar13 = (**(code **)(*unaff_RDI + 0x370))();
              iVar26 = iVar13 - iVar10;
              iVar20 = 0;
              if (0 < iVar26) {
                iVar20 = iVar26;
              }
              iVar20 = (iVar20 + iVar10) - iVar13;
              uVar21 = (uint)(iVar20 != 0);
              uVar23 = (ulonglong)uVar21;
              iVar20 = ((iVar20 - uVar21) / 0xc + uVar21) * 0xc;
              iVar26 = iVar26 + iVar20;
              iVar29 = 0xb;
              if (iVar26 < 0xb) {
                iVar29 = iVar26;
              }
              pvVar14 = _pthread_getspecific(uVar21);
              if (pvVar14 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar7 = FUN_01739620();
              if (cVar7 == '\0') {
                pvVar14 = _pthread_getspecific((pthread_key_t)uVar23);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                cVar7 = FUN_01739960();
                if (cVar7 != '\0') goto LAB_0174f7ec;
LAB_0174f84e:
                bVar6 = true;
              }
              else {
LAB_0174f7ec:
                iVar20 = ((uint)((iVar13 + (0xb - iVar10) + iVar20) - iVar29) / 0xc) * -0xc + iVar26
                         + uVar9;
                uVar23 = local_58[2];
                if (*(int *)(uVar23 + (longlong)
                                      (int)(iVar20 + (((uint)(iVar20 / 6 + (iVar20 >> 0x1f)) >> 1) -
                                                     (iVar20 >> 0x1f)) * -0xc) * 4) == 3)
                goto LAB_0174f84e;
                bVar8 = true;
                bVar6 = false;
              }
              if (local_58 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
              iVar12 = iVar12 + 1;
            } while (bVar6);
            if (!bVar8) {
              iVar30 = iVar25;
            }
            if ((longlong)uVar24 < 2) break;
            lVar15 = puVar16[2];
            uVar24 = uVar24 - 1;
          } while( true );
        }
      }
      iVar25 = 0;
      while( true ) {
        pvVar14 = _pthread_getspecific((pthread_key_t)uVar23);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01736e70();
        iVar12 = *(int *)((longlong)local_58 + 0xc);
        if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar12 <= iVar25) break;
        uVar11 = FUN_017482a0();
        FUN_01740240(extraout_XMM0_Da_02,uVar11);
        if ((local_50 == '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b00();
        }
        iVar20 = (**(code **)(*unaff_RDI + 0x370))();
        iVar13 = iVar20 - iVar10;
        iVar12 = 0;
        if (0 < iVar13) {
          iVar12 = iVar13;
        }
        iVar12 = (iVar12 + iVar10) - iVar20;
        uVar9 = (uint)(iVar12 != 0);
        iVar12 = ((iVar12 - uVar9) / 0xc + uVar9) * 0xc;
        iVar13 = iVar13 + iVar12;
        iVar26 = 0xb;
        if (iVar13 < 0xb) {
          iVar26 = iVar13;
        }
        uVar9 = (iVar20 + (0xb - iVar10) + iVar12) - iVar26;
        iVar13 = (uVar9 % 0xc - uVar9) + iVar13;
        iVar12 = (0xc - iVar30) + iVar13;
        iVar12 = iVar12 + (((uint)(iVar12 / 6 + (iVar12 >> 0x1f)) >> 1) - (iVar12 >> 0x1f)) * -0xc;
        if (*(int *)(local_58[2] + (longlong)iVar12 * 4) == 3) {
          uVar23 = 3;
          FUN_01750710(3,iVar12);
          if (local_58 == (undefined8 *)0x0) {
LAB_0174fb20:
            bVar8 = false;
          }
          else {
            bVar8 = true;
            if (local_50 == '\0') {
              FUN_00d50b00();
            }
          }
        }
        else {
          uVar23 = 2;
          FUN_01750710(2,iVar13);
          if (local_58 == (undefined8 *)0x0) goto LAB_0174fb20;
          bVar8 = true;
          if (local_50 == '\0') {
            FUN_00d50b00();
          }
        }
        pvVar14 = _pthread_getspecific((pthread_key_t)uVar23);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01739510();
        if ((bVar8) && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (local_58 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        iVar25 = iVar25 + 1;
      }
      if (puVar16 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_58 != (undefined8 *)0x0) {
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
      }
    }
    else if (unaff_ESI == 5) {
      iVar10 = 0;
      fVar31 = (float)(**(code **)(*unaff_RDI + 0x3a0))();
      while( true ) {
        pvVar14 = _pthread_getspecific((pthread_key_t)uVar23);
        if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          uVar23 = uVar1;
        }
        FUN_01736e70();
        iVar30 = *(int *)((longlong)local_58 + 0xc);
        if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar30 <= iVar10) break;
        uVar11 = FUN_017482a0();
        FUN_01740240(extraout_XMM0_Da,uVar11);
        if (local_50 == '\0') {
          if (local_58 != (undefined8 *)0x0) {
            FUN_00d50b00();
            goto LAB_0174e680;
          }
        }
        else if (local_58 != (undefined8 *)0x0) {
LAB_0174e680:
          fVar32 = (float)(**(code **)(*unaff_RDI + 0x3a0))();
          FUN_00e7d780(((fVar32 - fVar31) + DAT_02394298) / _DAT_0241c6f4);
          pvVar14 = _pthread_getspecific((pthread_key_t)uVar23);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar7 = FUN_01739620();
          if (cVar7 == '\0') {
            pvVar14 = _pthread_getspecific((pthread_key_t)uVar23);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar7 = FUN_01739960();
            if (cVar7 != '\0') goto LAB_0174e72d;
            pvVar14 = _pthread_getspecific((pthread_key_t)uVar23);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_00d8ede0();
            if (local_50 == '\0') {
              if (local_58 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            FUN_01739510();
            if (local_58 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
LAB_0174e72d:
            pvVar14 = _pthread_getspecific((pthread_key_t)uVar23);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017a0a80();
            if (local_50 == '\0') {
              if (local_58 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            FUN_01739510();
            if (local_58 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        iVar10 = iVar10 + 1;
      }
    }
    else {
      iVar30 = 0;
      while( true ) {
        pvVar14 = _pthread_getspecific((pthread_key_t)uVar23);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01736e70();
        iVar25 = *(int *)((longlong)local_58 + 0xc);
        if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar25 <= iVar30) break;
        uVar11 = FUN_017482a0();
        FUN_01740240(extraout_XMM0_Da_00,uVar11);
        if ((local_50 == '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b00();
        }
        iVar12 = (**(code **)(*unaff_RDI + 0x370))();
        iVar20 = iVar12 - iVar10;
        iVar25 = iVar20;
        if (iVar20 < 1) {
          iVar25 = 0;
        }
        iVar25 = (iVar25 + iVar10) - iVar12;
        uVar9 = (uint)(iVar25 != 0);
        iVar25 = ((iVar25 - uVar9) / 0xc + uVar9) * 0xc;
        iVar20 = iVar20 + iVar25;
        iVar13 = iVar20;
        if (10 < iVar20) {
          iVar13 = 0xb;
        }
        uVar9 = (iVar12 + (0xb - iVar10) + iVar25) - iVar13;
        uVar23 = (ulonglong)unaff_ESI;
        FUN_01750710(uVar23,(uVar9 % 0xc - uVar9) + iVar20);
        if ((local_50 == '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b00();
        }
        pvVar14 = _pthread_getspecific((pthread_key_t)uVar23);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01739510();
        if (local_58 != (undefined8 *)0x0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
        iVar30 = iVar30 + 1;
      }
    }
    if (local_58 == (undefined8 *)0x0) goto LAB_0174fc21;
  }
  FUN_00d50b20();
LAB_0174fc21:
  if (uVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


