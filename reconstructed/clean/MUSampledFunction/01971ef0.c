// Function: FUN_01971ef0
// Address: 01971ef0
// Size: 3145 bytes
// Class: MUSampledFunction

void FUN_01971ef0(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  void*puVar12;
  void* pVar13;
  void*arg1;
  int64_t *plVar14;
  int64_t *plVar15;
  int64_t this_ptr;
  uint64_t uVar16;
  uint64_t uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint32_t uVar21;
  uint64_t uVar22;
  float fVar26;
  double dVar23;
  double dVar24;
  uint8_t auVar25 [16];
  float fVar27;
  int64_t local_80;
  char local_78;
  int local_6c;
  int64_t *local_40;
  char local_38;
  
  plVar2 = local_40;
  fVar26 = (float)((uint64_t)param_2 >> 0x20);
  fVar27 = (float)param_2;
  FUN_01989f80();
  dVar3 = (double)(**(code **)(*local_40 + 0x928))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01989f80();
  local_6c = FUN_019f7a30();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (dVar3 < g_0241b230) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x198) != 0) goto LAB_01972978;
  lVar1 = *(int64_t *)(this_ptr + 0x178);
  if (lVar1 == 0) {
    local_38 = '\0';
    local_40 = (int64_t *)0x0;
LAB_0197295d:
    if (lVar1 != 0) goto LAB_01972962;
  }
  else {
    FUN_00d50b00();
    pvVar8 = _pthread_getspecific((void*)param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a560();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_0197202e;
      }
      goto LAB_0197295d;
    }
    if (local_40 != (int64_t *)0x0) {
LAB_0197202e:
      pvVar8 = _pthread_getspecific((void*)param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_019720a4;
        }
      }
      else if (local_40 != (int64_t *)0x0) {
LAB_019720a4:
        pvVar8 = _pthread_getspecific((void*)param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd6a0();
        if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific((void*)param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc000();
        if (local_38 == '\0') {
          if (local_40 == (int64_t *)0x0) goto LAB_01972195;
          FUN_00d50b00();
        }
        else if (local_40 == (int64_t *)0x0) {
LAB_01972195:
          pvVar8 = _pthread_getspecific((void*)param_1);
          plVar14 = local_40;
          if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            param_1 = local_40;
            plVar14 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar14 + 0x378))();
          pvVar8 = _pthread_getspecific((void*)param_1);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01320d00();
          if (local_40 != (int64_t *)0x0) {
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
        if (local_40 != (int64_t *)0x0) {
          pvVar8 = _pthread_getspecific((void*)param_1);
          plVar14 = local_40;
          if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            param_1 = local_40;
            plVar14 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
          iVar6 = (**(code **)(*plVar14 + 0x3a0))();
          if (iVar6 <= local_6c) {
            pvVar8 = _pthread_getspecific((void*)param_1);
            plVar14 = local_40;
            if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              plVar14 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            uVar7 = (**(code **)(*plVar14 + 0x380))();
            uVar7 = uVar7 >> 8 & 0xff;
            param_1 = (int64_t *)(uint64_t)(uVar7 - 1);
            if (uVar7 == 0) {
              param_1 = (int64_t *)0x0;
            }
            local_6c = (int)param_1;
          }
          FUN_01e3f820();
          iVar6 = FUN_00e7d780(fVar27);
          pvVar8 = _pthread_getspecific((void*)param_1);
          plVar14 = local_40;
          if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            param_1 = local_40;
            plVar14 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
          dVar4 = (double)(**(code **)(*plVar14 + 0x370))();
          fVar18 = (float)iVar6 * g_02390d2c;
          FUN_00c8e690();
          if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          dVar23 = g_023b1e98 * dVar3;
          FUN_00c8e690(SUB84(dVar4 / dVar23 + g_023b2560,0));
          if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          plVar14 = local_40;
          if (0 < (int)fVar18) {
            dVar5 = g_0238fee8 / dVar23;
            uVar16 = 0;
            do {
              pVar13 = (void*)param_1;
              pvVar8 = _pthread_getspecific(pVar13);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar24 = (double)FUN_014bb3e0();
              dVar24 = (double)(int)uVar16 / dVar23 + dVar24;
              lVar9 = FUN_00e7dae0(SUB84(dVar4 * dVar24,0));
              lVar10 = FUN_00e7dae0(SUB84((dVar24 + dVar5) * dVar4,0));
              plVar14 = (int64_t *)local_40[2];
              pvVar8 = _pthread_getspecific(pVar13);
              plVar15 = local_40;
              if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                plVar15 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
              }
              uVar17 = lVar10 - lVar9;
              param_1 = (int64_t *)((int64_t)&MACH_HEADER.magic + 1);
              uVar7 = (uint)uVar17;
              (**(code **)(*plVar15 + 0x390))
                        (SUB84(g_0238fee8,0),local_6c,lVar9,uVar17 & 0xffffffff);
              lVar9 = local_40[2];
              *(void*)(lVar9 + uVar16 * 4) = 0;
              if ((int)uVar7 < 1) {
                fVar19 = 0.0;
              }
              else {
                lVar10 = local_40[2];
                param_1 = (int64_t *)(uint64_t)(uVar7 & 3);
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
                  } while ((uVar17 & 0xffffffff) - (int64_t)param_1 != lVar11);
                }
                if (param_1 != (int64_t *)0x0) {
                  plVar15 = (int64_t *)0x0;
                  do {
                    fVar19 = fVar19 + *(float *)(lVar10 + lVar11 * 4 + (int64_t)plVar15 * 4);
                    *(float *)(lVar9 + uVar16 * 4) = fVar19;
                    plVar15 = (int64_t *)((int64_t)plVar15 + 1);
                  } while (param_1 != plVar15);
                }
              }
              *(float *)(lVar9 + uVar16 * 4) = fVar19 / (float)(int)uVar7;
              uVar16 = uVar16 + 1;
            } while (uVar16 != (uint)(int)fVar18);
          }
          local_40 = plVar14;
          puVar12 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          pVar13 = 0x2680400;
          *puVar12 = &g_02680400;
          *(void*)((int64_t)puVar12 + 0xc) = 0;
          puVar12[6] = 0;
          puVar12[7] = 0;
          *(void*)((int64_t)puVar12 + 0x39) = 0;
          *(void*)((int64_t)puVar12 + 0x41) = 0;
          (*g_02680418)();
          lVar9 = *(int64_t *)(this_ptr + 0x198);
          *(void**)(this_ptr + 0x198) = puVar12;
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
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01989f80();
          fVar19 = (float)FUN_019f7be0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          fVar27 = g_02390d2c * fVar27;
          fVar20 = 0.0;
          if (0.0 < fVar27) {
            fVar18 = fVar18 + g_02390124;
            lVar9 = 0;
            do {
              auVar25 = ZEXT416((uint)(*(float *)(plVar2[2] + lVar9 * 4) * fVar26 * fVar18 * fVar19)
                               );
              auVar25 = roundss(auVar25,auVar25,9);
              auVar25._0_4_ = auVar25._0_4_ + (float)((uint64_t)uVar22 >> 0x20);
              FUN_01d38ba0(fVar20 * g_0239426c + (float)uVar22,auVar25._0_8_);
              lVar9 = lVar9 + 1;
              fVar20 = (float)(int)lVar9;
            } while (fVar20 < fVar27);
          }
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b20();
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
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
  if (*(int64_t *)(this_ptr + 0x198) == 0) {
    return;
  }
LAB_01972978:
  FUN_01d48b40(g_0239011c);
  uVar21 = FUN_01d48a00();
  fVar27 = g_02390124;
  if (dVar3 <= g_0241b238) {
    fVar27 = (float)((dVar3 + g_0241b240) / g_0241b230);
  }
  FUN_01d489d0(fVar27);
  if (local_6c == 0) {
    FUN_01969e40();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01cfbc00();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = (int64_t *)*arg1;
  lVar1 = *(int64_t *)(this_ptr + 0x198);
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

