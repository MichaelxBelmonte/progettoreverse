// Function: FUN_012886e0
// Address: 012886e0
// Size: 3719 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01288de6) */
/* WARNING: Removing unreachable block (ram,0x01288def) */
/* WARNING: Removing unreachable block (ram,0x0128955e) */
/* WARNING: Removing unreachable block (ram,0x01289567) */
/* WARNING: Removing unreachable block (ram,0x01288d78) */
/* WARNING: Removing unreachable block (ram,0x01288e19) */
/* WARNING: Removing unreachable block (ram,0x01288e22) */
/* WARNING: Removing unreachable block (ram,0x01288e4a) */
/* WARNING: Removing unreachable block (ram,0x01288e53) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012886e0(float param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  void *pvVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  pthread_key_t pVar16;
  longlong lVar17;
  longlong *unaff_RDI;
  bool bVar18;
  float fVar19;
  double local_68;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  lVar6 = local_48;
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_02572358;
  (*DAT_02572370)();
  if (*unaff_RDI == 0) {
    lVar10 = 0;
    bVar5 = false;
    local_38 = 0;
    bVar18 = false;
  }
  else {
    FUN_01271d60();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    lVar12 = *unaff_RDI;
    if (*(int *)(lVar12 + 0xc) < 1) {
      bVar18 = false;
      local_38 = 0;
      bVar5 = false;
      lVar10 = 0;
    }
    else {
      lVar17 = 0;
      lVar10 = 0;
      bVar5 = false;
      lVar14 = 0;
      local_38 = 0;
      bVar18 = false;
      do {
        pVar16 = (pthread_key_t)lVar14;
        lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + lVar17 * 8);
        if (lVar10 == lVar12) {
          if ((!bVar5) && (lVar10 != 0)) {
            bVar5 = true;
            FUN_00d50b00();
          }
LAB_01288870:
          lVar12 = lVar10;
          if ((param_1 != DAT_0239424c) || (NAN(param_1) || NAN(DAT_0239424c))) {
LAB_012888ad:
            pvVar11 = _pthread_getspecific(pVar16);
            if ((pvVar11 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
              fVar19 = *(float *)(lVar12 + 0xf8);
            }
            else {
              fVar19 = *(float *)(*(longlong *)
                                   (lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8)
                                 + 0xf8);
            }
            lVar10 = lVar12;
            if (!NAN(fVar19)) {
              pvVar11 = _pthread_getspecific(pVar16);
              lVar14 = lVar12;
              if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                lVar14 = *(longlong *)
                          (lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8);
              }
              pvVar11 = _pthread_getspecific(pVar16);
              lVar15 = lVar12;
              if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                lVar15 = *(longlong *)
                          (lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
              }
              fVar19 = *(float *)(lVar15 + 0xf8);
              uVar8 = FUN_00e7dff0();
              fVar19 = fVar19 + ((float)uVar8 * _DAT_0240d014 + (float)uVar8 * _DAT_0240d014 +
                                DAT_02390124) * param_1;
              if ((*(float *)(lVar14 + 0xf8) != fVar19) ||
                 (NAN(*(float *)(lVar14 + 0xf8)) || NAN(fVar19))) {
                FUN_00d64850();
                *(float *)(lVar14 + 0xf8) = fVar19;
                FUN_00d64910();
              }
              FUN_0125a5f0();
              pvVar11 = _pthread_getspecific(pVar16);
              if ((pvVar11 == (void *)0x0) || (lVar14 = FUN_00e8b990(), lVar14 == 0)) {
                lVar14 = *(longlong *)(lVar12 + 200);
              }
              else {
                lVar14 = *(longlong *)
                          (*(longlong *)
                            (lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8) + 200);
              }
              if (lVar14 != 0) {
                pvVar11 = _pthread_getspecific(pVar16);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0152de20();
              }
              pvVar11 = _pthread_getspecific(pVar16);
              if ((pvVar11 == (void *)0x0) || (lVar14 = FUN_00e8b990(), lVar14 == 0)) {
                lVar14 = *(longlong *)(lVar12 + 200);
              }
              else {
                lVar14 = *(longlong *)
                          (*(longlong *)
                            (lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8) + 200);
              }
              if (lVar14 != 0) {
                FUN_00d50b00();
                FUN_00d50b20();
                pvVar11 = _pthread_getspecific(pVar16);
                if ((pvVar11 == (void *)0x0) || (lVar14 = FUN_00e8b990(), lVar14 == 0)) {
                  lVar12 = *(longlong *)(lVar12 + 200);
                }
                else {
                  lVar12 = *(longlong *)
                            (*(longlong *)
                              (lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8) + 200
                            );
                }
                if (lVar12 != 0) {
                  FUN_00d50b00();
                }
                pvVar11 = _pthread_getspecific(pVar16);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0152dfb0();
                if (lVar12 != 0) {
                  FUN_00d50b20();
                }
              }
            }
          }
        }
        else {
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          if ((bVar5) && (lVar10 != 0)) {
            FUN_00d50b20();
            bVar5 = true;
            lVar10 = lVar12;
            goto LAB_01288870;
          }
          bVar5 = true;
          if ((param_1 != DAT_0239424c) || (lVar10 = lVar12, NAN(param_1) || NAN(DAT_0239424c)))
          goto LAB_012888ad;
        }
        if ((param_2 != DAT_02390448) || (NAN(param_2) || NAN(DAT_02390448))) {
          uVar8 = FUN_00e7dff0();
          local_68 = (double)uVar8 / _DAT_0240d000 + (double)uVar8 / _DAT_0240d000 + DAT_0238fee8;
          pvVar11 = _pthread_getspecific(pVar16);
          if ((pvVar11 == (void *)0x0) || (lVar12 = FUN_00e8b990(), lVar12 == 0)) {
            if (*(longlong *)(lVar10 + 0xa8) != 0) goto LAB_01288caf;
LAB_01288c55:
            local_40 = '\0';
            local_48 = 0;
            if (local_38 != 0) goto LAB_01288cff;
LAB_01288c6d:
            lVar12 = local_38;
            if ((bVar18) || (local_48 == 0)) {
              bVar4 = bVar18;
              if (local_40 == '\0') goto LAB_01288da4;
LAB_01288d80:
              lVar12 = local_38;
              bVar4 = bVar18;
              if (local_48 != 0) {
                FUN_00d50b20();
              }
            }
            else {
              bVar4 = true;
              if (local_40 == '\0') {
                FUN_00d50b00();
                goto LAB_01288d4a;
              }
            }
          }
          else {
            if (*(longlong *)
                 (*(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8) +
                 0xa8) == 0) goto LAB_01288c55;
LAB_01288caf:
            pvVar11 = _pthread_getspecific(pVar16);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff70();
            if (local_48 == local_38) goto LAB_01288c6d;
LAB_01288cff:
            lVar12 = local_48;
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
              bVar4 = true;
              if ((bVar18) && (local_38 != 0)) {
                FUN_00d50b20();
                local_38 = local_48;
LAB_01288d4a:
                bVar18 = true;
                lVar12 = local_38;
                bVar4 = bVar18;
                if (local_40 != '\0') goto LAB_01288d80;
              }
            }
            else {
              bVar4 = true;
              if ((bVar18) && (local_38 != 0)) {
                FUN_00d50b20();
                lVar12 = local_48;
              }
            }
          }
LAB_01288da4:
          local_68 = local_68 * param_2;
          lVar14 = lVar12;
          if (lVar12 != 0) {
            cVar7 = FUN_00d24090();
            if ((cVar7 == '\0') && (cVar7 = FUN_00d24090(), cVar7 == '\0')) {
              FUN_00d21140();
            }
            local_40 = '\0';
            pvVar11 = _pthread_getspecific((pthread_key_t)lVar14);
            lVar15 = lVar12;
            if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              lVar15 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8)
              ;
              lVar14 = lVar12;
            }
            dVar1 = *(double *)(lVar15 + 0xf0);
            pvVar11 = _pthread_getspecific((pthread_key_t)lVar14);
            lVar15 = lVar12;
            if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              lVar15 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8)
              ;
              lVar14 = lVar12;
            }
            dVar2 = *(double *)(lVar15 + 0x140) + DAT_02391030 + DAT_02391030;
            dVar3 = DAT_0241b6a8;
            if (DAT_0241b6a8 <= dVar2) {
              dVar3 = dVar2;
            }
            dVar2 = *(double *)(lVar15 + 0xf0);
            if (dVar3 <= *(double *)(lVar15 + 0xf0)) {
              dVar2 = dVar3;
            }
            local_48 = lVar12;
            if (dVar1 + local_68 < dVar2) {
              pvVar11 = _pthread_getspecific((pthread_key_t)lVar14);
              lVar15 = lVar12;
              if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                lVar15 = *(longlong *)
                          (lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
                lVar14 = lVar12;
              }
              dVar1 = *(double *)(lVar15 + 0x140) + DAT_02391030;
              local_68 = *(double *)(lVar15 + 0xf0);
              pvVar11 = _pthread_getspecific((pthread_key_t)lVar14);
              lVar15 = lVar12;
              if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                lVar15 = *(longlong *)
                          (lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
                lVar14 = lVar12;
              }
              dVar1 = dVar1 + DAT_02391030;
              dVar2 = DAT_0241b6a8;
              if (DAT_0241b6a8 <= dVar1) {
                dVar2 = dVar1;
              }
              if (dVar2 <= local_68) {
                local_68 = dVar2;
              }
              local_68 = local_68 - *(double *)(lVar15 + 0xf0);
            }
          }
          pVar16 = (pthread_key_t)lVar14;
          pvVar11 = _pthread_getspecific(pVar16);
          if ((pvVar11 == (void *)0x0) || (lVar14 = FUN_00e8b990(), lVar14 == 0)) {
            if (*(longlong *)(lVar10 + 0xa0) != 0) goto LAB_01289054;
LAB_012890f0:
            pvVar11 = _pthread_getspecific(pVar16);
            lVar14 = lVar10;
            if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
              lVar14 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8)
              ;
            }
            dVar1 = *(double *)(lVar14 + 0xe8);
            local_68 = local_68 + dVar1;
            if ((dVar1 != local_68) || (NAN(dVar1) || NAN(local_68))) {
              FUN_00d64850();
              *(double *)(lVar14 + 0xe8) = local_68;
              FUN_00d64910();
            }
          }
          else {
            if (*(longlong *)
                 (*(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8) +
                 0xa0) == 0) goto LAB_012890f0;
LAB_01289054:
            pvVar11 = _pthread_getspecific(pVar16);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff00();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (local_48 == 0) goto LAB_012890f0;
            pvVar11 = _pthread_getspecific(pVar16);
            lVar14 = lVar10;
            if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
              lVar14 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8)
              ;
            }
            dVar1 = *(double *)(lVar14 + 0xf0);
            pvVar11 = _pthread_getspecific(pVar16);
            lVar14 = lVar10;
            if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
              lVar14 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8)
              ;
            }
            dVar2 = *(double *)(lVar14 + 0x140) + DAT_02391030 + DAT_02391030;
            dVar3 = DAT_0241b6a8;
            if (DAT_0241b6a8 <= dVar2) {
              dVar3 = dVar2;
            }
            dVar2 = *(double *)(lVar14 + 0xf0);
            if (dVar3 <= *(double *)(lVar14 + 0xf0)) {
              dVar2 = dVar3;
            }
            if (dVar1 - local_68 < dVar2) {
              pvVar11 = _pthread_getspecific(pVar16);
              lVar14 = lVar10;
              if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                lVar14 = *(longlong *)
                          (lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8);
              }
              local_68 = *(double *)(lVar14 + 0xf0);
              pvVar11 = _pthread_getspecific(pVar16);
              lVar14 = lVar10;
              if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                lVar14 = *(longlong *)
                          (lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8);
              }
              dVar1 = *(double *)(lVar14 + 0x140) + DAT_02391030 + DAT_02391030;
              dVar2 = DAT_0241b6a8;
              if (DAT_0241b6a8 <= dVar1) {
                dVar2 = dVar1;
              }
              dVar1 = *(double *)(lVar14 + 0xf0);
              if (dVar2 <= *(double *)(lVar14 + 0xf0)) {
                dVar1 = dVar2;
              }
              local_68 = local_68 - dVar1;
            }
            pvVar11 = _pthread_getspecific(pVar16);
            lVar14 = lVar10;
            if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
              lVar14 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8)
              ;
            }
            FUN_012756a0(local_68._0_4_ ^ _DAT_023945b0);
            dVar1 = *(double *)(lVar14 + 0xe8);
            local_68 = local_68 + dVar1;
            if ((dVar1 != local_68) || (NAN(dVar1) || NAN(local_68))) {
              FUN_00d64850();
              *(double *)(lVar14 + 0xe8) = local_68;
              FUN_00d64910();
            }
          }
          pvVar11 = _pthread_getspecific(pVar16);
          if ((pvVar11 == (void *)0x0) || (lVar14 = FUN_00e8b990(), lVar14 == 0)) {
            lVar14 = *(longlong *)(lVar10 + 200);
          }
          else {
            lVar14 = *(longlong *)
                      (*(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8)
                      + 200);
          }
          if (lVar14 != 0) {
            pvVar11 = _pthread_getspecific(pVar16);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ea90();
          }
          pvVar11 = _pthread_getspecific(pVar16);
          if ((pvVar11 == (void *)0x0) || (lVar14 = FUN_00e8b990(), lVar14 == 0)) {
            lVar14 = *(longlong *)(lVar10 + 200);
          }
          else {
            lVar14 = *(longlong *)
                      (*(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8)
                      + 200);
          }
          local_38 = lVar12;
          bVar18 = bVar4;
          if (lVar14 != 0) {
            FUN_00d50b00();
            FUN_00d50b20();
            pvVar11 = _pthread_getspecific(pVar16);
            if ((pvVar11 == (void *)0x0) || (lVar12 = FUN_00e8b990(), lVar12 == 0)) {
              lVar12 = *(longlong *)(lVar10 + 200);
            }
            else {
              lVar12 = *(longlong *)
                        (*(longlong *)
                          (lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8) + 200);
            }
            if (lVar12 != 0) {
              FUN_00d50b00();
            }
            pvVar11 = _pthread_getspecific(pVar16);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152e820();
            if (lVar12 != 0) {
              FUN_00d50b20();
            }
          }
        }
        lVar17 = lVar17 + 1;
        lVar12 = *unaff_RDI;
        lVar14 = (longlong)*(int *)(lVar12 + 0xc);
      } while (lVar17 < lVar14);
    }
    if ((param_2 != 0.0) || (NAN(param_2))) {
      FUN_00d214d0(0,*(undefined4 *)((longlong)puVar9 + 0xc));
      FUN_0127e4d0(0);
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (puVar9 == (undefined8 *)0x0) goto LAB_012895c3;
  }
  FUN_00d50b20();
LAB_012895c3:
  if ((bVar18) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return;
}


