// Function: FUN_01749eb0
// Address: 01749eb0
// Size: 2540 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0174a522) */
/* WARNING: Removing unreachable block (ram,0x0174a52f) */
/* WARNING: Removing unreachable block (ram,0x0174a262) */
/* WARNING: Removing unreachable block (ram,0x0174a26b) */

ulonglong FUN_01749eb0(float param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  longlong lVar11;
  undefined8 *puVar12;
  pthread_key_t pVar13;
  undefined *in_RCX;
  undefined *puVar14;
  ulonglong uVar15;
  int unaff_ESI;
  int iVar16;
  longlong unaff_RDI;
  int iVar17;
  int iVar18;
  longlong local_60;
  char local_58;
  
  puVar1 = *(undefined **)(unaff_RDI + 0x60);
  if (puVar1 != (undefined *)0x0) {
    FUN_00d50b00();
  }
  puVar2 = *(undefined **)(unaff_RDI + 0x58);
  if (puVar2 != (undefined *)0x0) {
    FUN_00d50b00();
  }
  pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770f00();
  iVar9 = *(int *)(local_60 + 0xc);
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01736e70();
  iVar8 = *(int *)(local_60 + 0xc);
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_01770870();
  pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar16 = (uint)(0.0 < param_1) + unaff_ESI;
  iVar6 = FUN_01737820();
  pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_01736d10();
  iVar17 = iVar6;
  if (iVar6 == 0) {
    iVar17 = iVar8;
  }
  if (cVar4 == '\0') {
    iVar17 = iVar6;
  }
  iVar6 = FUN_0174a9c0();
  if (-1 < iVar6) {
    uVar7 = iVar9 - (uVar5 & 0xff);
    puVar14 = (undefined *)0x0;
    if (((iVar6 < (int)uVar7) && (-1 < iVar17)) && (iVar17 <= iVar8)) {
      pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
      if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        in_RCX = puVar1;
      }
      iVar8 = FUN_01771ef0(param_1);
      if (iVar8 != -1) {
        pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          in_RCX = puVar1;
        }
        FUN_01776110();
        pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          in_RCX = puVar1;
        }
        cVar4 = FUN_01770870();
        if (cVar4 == '\0') {
LAB_0174a1d5:
          puVar12 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          in_RCX = &DAT_025fe670;
          *puVar12 = &DAT_025fe670;
          puVar12[7] = 0;
          puVar12[8] = 0;
          puVar12[9] = 0;
          (*DAT_025fe688)();
          pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            in_RCX = puVar2;
          }
          FUN_01736ea0();
          FUN_00d50b20();
        }
        else {
          pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            in_RCX = puVar2;
          }
          cVar4 = FUN_01736d10();
          pcVar3 = DAT_025fe688;
          if (cVar4 != '\0') goto LAB_0174a1d5;
          iVar18 = -(uVar5 & 0xff);
          iVar6 = iVar17 + iVar9 + iVar18;
          do {
            iVar6 = iVar6 - (iVar18 + iVar9);
          } while ((int)uVar7 <= iVar6);
          while( true ) {
            pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
            if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
              in_RCX = puVar2;
            }
            FUN_01736e70();
            uVar5 = *(uint *)(local_60 + 0xc);
            puVar14 = (undefined *)(ulonglong)uVar5;
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((int)uVar5 <= iVar6) break;
            puVar12 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar12 = &DAT_025fe670;
            puVar12[7] = 0;
            puVar12[8] = 0;
            puVar12[9] = 0;
            (*pcVar3)();
            pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
            if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
              in_RCX = puVar2;
            }
            FUN_01736ea0();
            iVar6 = iVar6 + uVar7 + 1;
            FUN_00d50b20();
          }
        }
        pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          in_RCX = puVar1;
        }
        cVar4 = FUN_01770870();
        pVar13 = (pthread_key_t)in_RCX;
        if (cVar4 == '\0') {
          if (iVar16 < 1) {
            if (iVar16 < 0) {
              pvVar10 = _pthread_getspecific(pVar13);
              if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                in_RCX = puVar2;
              }
              iVar9 = FUN_01736c50();
              if (iVar9 < 0) {
                pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
                if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                  in_RCX = puVar2;
                }
                iVar9 = FUN_01736c50();
                if (iVar9 <= iVar16) {
                  pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
                  puVar14 = puVar2;
                  if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                    in_RCX = puVar2;
                    puVar14 = *(undefined **)
                               (puVar2 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8 + 0x20);
                  }
                  pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01736c50();
                  FUN_01736c60();
                }
              }
            }
          }
          else {
            pvVar10 = _pthread_getspecific(pVar13);
            if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
              in_RCX = puVar2;
            }
            iVar9 = FUN_01736c50();
            if (0 < iVar9) {
              pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
              if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                in_RCX = puVar2;
              }
              iVar9 = FUN_01736c50();
              if (iVar16 <= iVar9) {
                pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
                puVar14 = puVar2;
                if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                  in_RCX = puVar2;
                  puVar14 = *(undefined **)
                             (puVar2 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8 + 0x20);
                }
                pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01736c50();
                FUN_01736c60();
              }
            }
          }
        }
        else {
          pvVar10 = _pthread_getspecific(pVar13);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            in_RCX = puVar2;
          }
          iVar9 = FUN_01736c50();
          pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            in_RCX = puVar2;
          }
          iVar6 = FUN_01736c50();
          uVar5 = (iVar9 % (int)uVar7 >> 0x1f & uVar7) + iVar9 % (int)uVar7;
          puVar14 = (undefined *)(ulonglong)uVar5;
          if ((0 < iVar6) && (iVar8 <= (int)uVar5)) {
            pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
            if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
              in_RCX = puVar2;
            }
            pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
            if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
              in_RCX = puVar2;
            }
            FUN_01736c50();
            FUN_01736c60();
          }
          pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            in_RCX = puVar2;
          }
          iVar9 = FUN_01736c50();
          if ((iVar9 < 0) && ((int)uVar5 < iVar8)) {
            pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
            puVar14 = puVar2;
            if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
              in_RCX = puVar2;
              puVar14 = *(undefined **)
                         (puVar2 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8 + 0x20);
            }
            pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01736c50();
            FUN_01736c60();
          }
        }
      }
      uVar15 = CONCAT71((int7)((ulonglong)puVar14 >> 8),iVar8 != -1);
      goto joined_r0x0174a0e0;
    }
  }
  uVar15 = 0;
joined_r0x0174a0e0:
  if (puVar2 != (undefined *)0x0) {
    FUN_00d50b20();
  }
  if (puVar1 != (undefined *)0x0) {
    FUN_00d50b20();
  }
  return uVar15 & 0xffffffff;
}


