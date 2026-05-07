// Function: FUN_01971ef0
// Address: 01971ef0
// Size: 3145 bytes
// Class: MUSampledFunction


/* WARNING: Removing unreachable block (ram,0x019723e1) */
/* WARNING: Removing unreachable block (ram,0x019723ea) */
/* WARNING: Removing unreachable block (ram,0x0197224a) */
/* WARNING: Removing unreachable block (ram,0x01972253) */
/* WARNING: Removing unreachable block (ram,0x01972096) */
/* WARNING: Removing unreachable block (ram,0x0197209f) */
/* WARNING: Removing unreachable block (ram,0x01972020) */
/* WARNING: Removing unreachable block (ram,0x01972029) */
/* WARNING: Removing unreachable block (ram,0x01972105) */
/* WARNING: Removing unreachable block (ram,0x0197210e) */
/* WARNING: Removing unreachable block (ram,0x0197217f) */
/* WARNING: Removing unreachable block (ram,0x01972188) */
/* WARNING: Removing unreachable block (ram,0x0197246d) */
/* WARNING: Removing unreachable block (ram,0x01972476) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01971ef0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  pthread_key_t pVar13;
  undefined8 *unaff_RSI;
  longlong *plVar14;
  longlong *plVar15;
  longlong unaff_RDI;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  float fVar26;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  float fVar27;
  longlong local_80;
  char local_78;
  int local_6c;
  longlong *local_40;
  char local_38;
  
  plVar2 = local_40;
  fVar26 = (float)((ulonglong)param_2 >> 0x20);
  fVar27 = (float)param_2;
  FUN_01989f80();
  dVar3 = (double)(**(code **)(*local_40 + 0x928))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01989f80();
  local_6c = FUN_019f7a30();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (dVar3 < DAT_0241b230) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x198) != 0) goto LAB_01972978;
  lVar1 = *(longlong *)(unaff_RDI + 0x178);
  if (lVar1 == 0) {
    local_38 = '\0';
    local_40 = (longlong *)0x0;
LAB_0197295d:
    if (lVar1 != 0) goto LAB_01972962;
  }
  else {
    FUN_00d50b00();
    pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a560();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_0197202e;
      }
      goto LAB_0197295d;
    }
    if (local_40 != (longlong *)0x0) {
LAB_0197202e:
      pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_019720a4;
        }
      }
      else if (local_40 != (longlong *)0x0) {
LAB_019720a4:
        pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd6a0();
        if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc000();
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) goto LAB_01972195;
          FUN_00d50b00();
        }
        else if (local_40 == (longlong *)0x0) {
LAB_01972195:
          pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
          plVar14 = local_40;
          if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            param_1 = local_40;
            plVar14 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar14 + 0x378))();
          pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01320d00();
          if (local_40 != (longlong *)0x0) {
            if (local_38 == '\0') {
              FUN_00d50b00();
            }
            else {
              local_38 = '\0';
            }
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        if (local_40 != (longlong *)0x0) {
          pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
          plVar14 = local_40;
          if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            param_1 = local_40;
            plVar14 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
          iVar6 = (**(code **)(*plVar14 + 0x3a0))();
          if (iVar6 <= local_6c) {
            pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
            plVar14 = local_40;
            if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              plVar14 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            uVar7 = (**(code **)(*plVar14 + 0x380))();
            uVar7 = uVar7 >> 8 & 0xff;
            param_1 = (longlong *)(ulonglong)(uVar7 - 1);
            if (uVar7 == 0) {
              param_1 = (longlong *)0x0;
            }
            local_6c = (int)param_1;
          }
          FUN_01e3f820();
          iVar6 = FUN_00e7d780(fVar27);
          pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
          plVar14 = local_40;
          if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            param_1 = local_40;
            plVar14 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
          dVar4 = (double)(**(code **)(*plVar14 + 0x370))();
          fVar18 = (float)iVar6 * DAT_02390d2c;
          FUN_00c8e690();
          if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          dVar23 = _DAT_023b1e98 * dVar3;
          FUN_00c8e690(SUB84(dVar4 / dVar23 + DAT_023b2560,0));
          if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          plVar14 = local_40;
          if (0 < (int)fVar18) {
            dVar5 = DAT_0238fee8 / dVar23;
            uVar16 = 0;
            do {
              pVar13 = (pthread_key_t)param_1;
              pvVar8 = _pthread_getspecific(pVar13);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar24 = (double)FUN_014bb3e0();
              dVar24 = (double)(int)uVar16 / dVar23 + dVar24;
              lVar9 = FUN_00e7dae0(SUB84(dVar4 * dVar24,0));
              lVar10 = FUN_00e7dae0(SUB84((dVar24 + dVar5) * dVar4,0));
              plVar14 = (longlong *)local_40[2];
              pvVar8 = _pthread_getspecific(pVar13);
              plVar15 = local_40;
              if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                plVar15 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
              }
              uVar17 = lVar10 - lVar9;
              param_1 = (longlong *)((longlong)&MACH_HEADER.magic + 1);
              uVar7 = (uint)uVar17;
              (**(code **)(*plVar15 + 0x390))
                        (SUB84(DAT_0238fee8,0),local_6c,lVar9,uVar17 & 0xffffffff);
              lVar9 = local_40[2];
              *(undefined4 *)(lVar9 + uVar16 * 4) = 0;
              if ((int)uVar7 < 1) {
                fVar19 = 0.0;
              }
              else {
                lVar10 = local_40[2];
                param_1 = (longlong *)(ulonglong)(uVar7 & 3);
                if ((uVar17 & 0xffffffff) - 1 < 3) {
                  fVar19 = 0.0;
                  lVar11 = 0;
                }
                else {
                  fVar19 = 0.0;
                  lVar11 = 0;
                  do {
                    fVar19 = fVar19 + *(float *)(lVar10 + lVar11 * 4);
                    *(float *)(lVar9 + uVar16 * 4) = fVar19;
                    fVar19 = fVar19 + *(float *)(lVar10 + 4 + lVar11 * 4);
                    *(float *)(lVar9 + uVar16 * 4) = fVar19;
                    fVar19 = fVar19 + *(float *)(lVar10 + 8 + lVar11 * 4);
                    *(float *)(lVar9 + uVar16 * 4) = fVar19;
                    fVar19 = fVar19 + *(float *)(lVar10 + 0xc + lVar11 * 4);
                    *(float *)(lVar9 + uVar16 * 4) = fVar19;
                    lVar11 = lVar11 + 4;
                  } while ((uVar17 & 0xffffffff) - (longlong)param_1 != lVar11);
                }
                if (param_1 != (longlong *)0x0) {
                  plVar15 = (longlong *)0x0;
                  do {
                    fVar19 = fVar19 + *(float *)(lVar10 + lVar11 * 4 + (longlong)plVar15 * 4);
                    *(float *)(lVar9 + uVar16 * 4) = fVar19;
                    plVar15 = (longlong *)((longlong)plVar15 + 1);
                  } while (param_1 != plVar15);
                }
              }
              *(float *)(lVar9 + uVar16 * 4) = fVar19 / (float)(int)uVar7;
              uVar16 = uVar16 + 1;
            } while (uVar16 != (uint)(int)fVar18);
          }
          local_40 = plVar14;
          puVar12 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          pVar13 = 0x2680400;
          *puVar12 = &DAT_02680400;
          *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
          puVar12[6] = 0;
          puVar12[7] = 0;
          *(undefined8 *)((longlong)puVar12 + 0x39) = 0;
          *(undefined8 *)((longlong)puVar12 + 0x41) = 0;
          (*DAT_02680418)();
          lVar9 = *(longlong *)(unaff_RDI + 0x198);
          *(undefined8 **)(unaff_RDI + 0x198) = puVar12;
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          uVar22 = FUN_01968ab0();
          FUN_01989f80();
          pvVar8 = _pthread_getspecific(pVar13);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          fVar18 = (float)(**(code **)(
                                      "/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices"
                                      + *local_40 + 0x18))();
          if (local_80 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01989f80();
          fVar19 = (float)FUN_019f7be0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          fVar27 = DAT_02390d2c * fVar27;
          fVar20 = 0.0;
          if (0.0 < fVar27) {
            fVar18 = fVar18 + DAT_02390124;
            lVar9 = 0;
            do {
              auVar25 = ZEXT416((uint)(*(float *)(plVar2[2] + lVar9 * 4) * fVar26 * fVar18 * fVar19)
                               );
              auVar25 = roundss(auVar25,auVar25,9);
              auVar25._0_4_ = auVar25._0_4_ + (float)((ulonglong)uVar22 >> 0x20);
              FUN_01d38ba0(fVar20 * DAT_0239426c + (float)uVar22,auVar25._0_8_);
              lVar9 = lVar9 + 1;
              fVar20 = (float)(int)lVar9;
            } while (fVar20 < fVar27);
          }
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b20();
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_0197295d;
    }
LAB_01972962:
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x198) == 0) {
    return;
  }
LAB_01972978:
  FUN_01d48b40(DAT_0239011c);
  uVar21 = FUN_01d48a00();
  fVar27 = DAT_02390124;
  if (dVar3 <= _DAT_0241b238) {
    fVar27 = (float)((dVar3 + _DAT_0241b240) / DAT_0241b230);
  }
  FUN_01d489d0(fVar27);
  if (local_6c == 0) {
    FUN_01969e40();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01cfbc00();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = (longlong *)*unaff_RSI;
  lVar1 = *(longlong *)(unaff_RDI + 0x198);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar2 + 0x3a8))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01d489d0(uVar21);
  return;
}


