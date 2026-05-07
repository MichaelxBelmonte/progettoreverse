// Function: FUN_01c13e80
// Address: 01c13e80
// Size: 3595 bytes
// Class: MUElementFadeInspector


/* WARNING: Removing unreachable block (ram,0x01c141ab) */
/* WARNING: Removing unreachable block (ram,0x01c140d2) */
/* WARNING: Removing unreachable block (ram,0x01c140db) */
/* WARNING: Removing unreachable block (ram,0x01c14103) */
/* WARNING: Removing unreachable block (ram,0x01c1410c) */
/* WARNING: Removing unreachable block (ram,0x01c14162) */
/* WARNING: Removing unreachable block (ram,0x01c14170) */
/* WARNING: Removing unreachable block (ram,0x01c14179) */
/* WARNING: Removing unreachable block (ram,0x01c13f41) */
/* WARNING: Removing unreachable block (ram,0x01c13f4d) */
/* WARNING: Removing unreachable block (ram,0x01c14089) */
/* WARNING: Removing unreachable block (ram,0x01c14092) */
/* WARNING: Removing unreachable block (ram,0x01c141f8) */
/* WARNING: Removing unreachable block (ram,0x01c14201) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c13e80(double param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 in_ECX;
  undefined *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *unaff_RSI;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  uint *local_b0;
  char local_a8;
  longlong local_68;
  char local_60;
  double local_40;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar10 = &DAT_02572358;
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  pvVar7 = _pthread_getspecific((pthread_key_t)puVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_01274b60();
  if (local_a8 == '\0') {
    if (local_b0 == (uint *)0x0) goto LAB_01c13f54;
    FUN_00d50b00();
  }
  else if (local_b0 == (uint *)0x0) {
LAB_01c13f54:
    puVar1 = (uint *)*param_2;
    if (puVar1 != (uint *)0x0) {
      puVar11 = (uint *)(CONCAT71((int7)((ulonglong)uVar8 >> 8),(char)param_2[1]) & 0xffffffff);
      if ((char)param_2[1] != '\0') {
        FUN_00d50b00();
      }
      lVar2 = *unaff_RSI;
      goto joined_r0x01c13f9b;
    }
  }
  puVar11 = (uint *)CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
  lVar2 = *unaff_RSI;
  puVar1 = local_b0;
joined_r0x01c13f9b:
  if (lVar2 == 0) {
    bVar3 = false;
    lVar15 = 0;
  }
  else {
    if (*(int *)(lVar2 + 0xc) < 1) {
      bVar3 = false;
      lVar15 = 0;
    }
    else {
      lVar16 = 0;
      lVar15 = 0;
      bVar3 = false;
      puVar12 = puVar11;
      do {
        lVar9 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar16 * 8);
        pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if ((local_60 == '\0') && (local_68 != 0)) {
          FUN_00d50b00();
        }
        else if ((local_68 == 0) && (lVar9 != 0)) {
          FUN_00d50b00();
          local_68 = lVar9;
        }
        cVar5 = FUN_00d23d70();
        if (cVar5 == '\0') {
          FUN_00d21140();
          dVar17 = param_1;
          if (lVar9 != local_68) {
            pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            if (local_68 == lVar15) {
              lVar14 = lVar15;
              bVar4 = bVar3;
              if ((!bVar3) && (local_68 != 0)) {
                FUN_00d50b00();
                bVar4 = true;
              }
            }
            else {
              if (local_68 != 0) {
                FUN_00d50b00();
              }
              bVar4 = true;
              lVar14 = local_68;
              if ((bVar3) && (lVar15 != 0)) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar4;
            if (lVar14 == 0) {
              lVar15 = 0;
              goto switchD_01c14275_default;
            }
            pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar17 = (double)FUN_012f8e60(param_1);
            lVar15 = lVar14;
          }
          local_40 = param_1;
          if (puVar1 == (uint *)0x0) {
            puVar13 = &switchD_01c142ea::switchdataD_01c14ef4;
            dVar18 = DAT_023908c8;
            switch(in_ECX) {
            case 1:
              goto switchD_01c142ea_caseD_1;
            case 2:
              goto switchD_01c142ea_caseD_2;
            case 3:
              goto switchD_01c14275_caseD_3;
            case 4:
              goto switchD_01c14275_caseD_4;
            case 5:
              goto switchD_01c14275_caseD_5;
            case 6:
              goto switchD_01c14275_caseD_6;
            case 7:
              goto switchD_01c14275_caseD_7;
            case 8:
              goto switchD_01c14275_caseD_8;
            }
          }
          else {
            puVar13 = &switchD_01c14275::switchdataD_01c14ed4;
            switch(in_ECX) {
            case 1:
              pvVar7 = _pthread_getspecific(0x1c14ed4);
              if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                puVar13 = puVar1;
              }
              dVar19 = (double)FUN_0125a280();
              dVar18 = DAT_023908c8;
              if (dVar19 < dVar17) {
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar13);
                if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  puVar13 = puVar1;
                }
                dVar18 = (double)FUN_0125a280();
                dVar18 = dVar17 - dVar18;
              }
switchD_01c142ea_caseD_1:
              pvVar7 = _pthread_getspecific((pthread_key_t)puVar13);
              puVar12 = puVar13;
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
                puVar12 = puVar13;
              }
              FUN_01267350(dVar18);
              break;
            case 2:
              pvVar7 = _pthread_getspecific(0x1c14ed4);
              if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                puVar13 = puVar1;
              }
              dVar19 = (double)FUN_01259520();
              dVar18 = DAT_023908c8;
              if (dVar17 < dVar19) {
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar13);
                if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  puVar13 = puVar1;
                }
                dVar18 = (double)FUN_01259520();
                dVar18 = dVar18 - dVar17;
              }
switchD_01c142ea_caseD_2:
              pvVar7 = _pthread_getspecific((pthread_key_t)puVar13);
              puVar12 = puVar13;
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
                puVar12 = puVar13;
              }
              FUN_01267b80(dVar18);
              break;
            case 3:
switchD_01c14275_caseD_3:
              puVar12 = puVar13;
              pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01267400(DAT_023908c8);
              break;
            case 4:
switchD_01c14275_caseD_4:
              puVar12 = puVar13;
              pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01267c40(DAT_023908c8);
              break;
            case 5:
switchD_01c14275_caseD_5:
              puVar12 = puVar13;
              pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar5 = FUN_012686a0();
              if (cVar5 != '\0') {
                if (lVar9 != local_68) {
                  pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar17 = (double)FUN_0125a280();
                  pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar18 = (double)FUN_01268240();
                  pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar19 = (double)FUN_012f8e60();
                  pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_40 = (double)FUN_012f8e60(dVar17 + dVar18 + param_1);
                  local_40 = local_40 - dVar19;
                }
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar17 = (double)FUN_01268240();
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar18 = (double)FUN_0125a280();
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01267400((dVar17 + dVar18) - local_40);
              }
              break;
            case 6:
switchD_01c14275_caseD_6:
              puVar12 = puVar13;
              pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar5 = FUN_012686d0();
              if (cVar5 != '\0') {
                if (lVar9 != local_68) {
                  pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar17 = (double)FUN_01259520();
                  pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar18 = (double)FUN_01268260();
                  pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar19 = (double)FUN_012f8e60();
                  pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_40 = (double)FUN_012f8e60((dVar17 - dVar18) + param_1);
                  local_40 = local_40 - dVar19;
                }
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar17 = (double)FUN_01268260();
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar18 = (double)FUN_01259520();
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01267c40(local_40 + (dVar18 - dVar17));
              }
              break;
            case 7:
switchD_01c14275_caseD_7:
              puVar12 = puVar13;
              pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar5 = FUN_012686a0();
              if (cVar5 != '\0') {
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266180();
                dVar17 = (double)_log();
                dVar18 = dVar17 / _DAT_0241e5a8 - param_1;
                dVar17 = DAT_023b3bc0;
                if (dVar18 <= DAT_023b3bc0) {
                  dVar17 = dVar18;
                }
                dVar18 = DAT_0241e5b0;
                if (DAT_0241e5b0 <= dVar17) {
                  dVar18 = dVar17;
                }
                uVar8 = _exp2(dVar18);
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266120(uVar8);
              }
              break;
            case 8:
switchD_01c14275_caseD_8:
              puVar12 = puVar13;
              pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar5 = FUN_012686d0();
              if (cVar5 != '\0') {
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012661f0();
                dVar17 = (double)_log();
                dVar18 = dVar17 / _DAT_0241e5a8 - param_1;
                dVar17 = DAT_023b3bc0;
                if (dVar18 <= DAT_023b3bc0) {
                  dVar17 = dVar18;
                }
                dVar18 = DAT_0241e5b0;
                if (DAT_0241e5b0 <= dVar17) {
                  dVar18 = dVar17;
                }
                uVar8 = _exp2(dVar18);
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266190(uVar8);
              }
            }
          }
        }
switchD_01c14275_default:
        local_60 = '\0';
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        lVar16 = lVar16 + 1;
      } while ((int)lVar16 < *(int *)(lVar2 + 0xc));
    }
    FUN_001159b0();
  }
  if (((char)puVar11 != '\0') && (puVar1 != (uint *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (lVar15 != 0)) {
    FUN_00d50b20();
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


