// Function: FUN_015fb200
// Address: 015fb200
// Size: 2170 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


int64_t * FUN_015fb200(uint32_t param_1,char param_2,int64_t *param_3)

{
  int64_t *plVar1;
  uint uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint uVar7;
  uint uVar8;
  void*puVar9;
  int64_t *plVar10;
  int64_t *in_RCX;
  uint64_t uVar11;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  float fVar15;
  uint32_t uVar16;
  float fVar17;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  uVar2 = *(uint *)(*(int64_t *)(this_ptr + 0x10) + 0xc);
  uVar11 = (uint64_t)uVar2;
  plVar10 = (int64_t *)0x0;
  if (uVar11 != 0) {
    if (*arg1 == 0) {
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &g_025f0d98;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      (*g_025f0db0)();
      lVar4 = *arg1;
      *arg1 = (int64_t)puVar9;
      if (((char)arg1[1] != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      *(void*)(arg1 + 1) = 1;
    }
    FUN_00c8e690();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    FUN_00c8e690();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    plVar1 = (int64_t *)(local_40 + 0x10);
    if (0 < (int)uVar2) {
      lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10);
      lVar5 = *(int64_t *)(local_40 + 0x10);
      lVar13 = *(int64_t *)(local_40 + 0x10);
      if (uVar2 == 1) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        do {
          fVar15 = (float)*(int *)(*(int64_t *)(lVar4 + uVar14 * 8) + 0x10);
          *(float *)(lVar5 + uVar14 * 4) = fVar15;
          *(float *)(lVar13 + uVar14 * 4) = fVar15;
          fVar15 = (float)*(int *)(*(int64_t *)(lVar4 + 8 + uVar14 * 8) + 0x10);
          *(float *)(lVar5 + 4 + uVar14 * 4) = fVar15;
          *(float *)(lVar13 + 4 + uVar14 * 4) = fVar15;
          uVar14 = uVar14 + 2;
        } while ((uVar2 & 0xfffffffe) != uVar14);
      }
      if ((uVar2 & 1) != 0) {
        fVar15 = (float)*(int *)(*(int64_t *)(lVar4 + uVar14 * 8) + 0x10);
        *(float *)(lVar5 + uVar14 * 4) = fVar15;
        *(float *)(lVar13 + uVar14 * 4) = fVar15;
      }
    }
    FUN_015c1230(param_1,uVar11);
    FUN_015c1230(param_1,uVar11);
    if (param_2 != '\0') {
      uVar7 = 3;
      if ((int)uVar2 < 6) {
        uVar7 = (int)uVar2 / 2;
      }
      if (0 < (int)uVar7) {
        lVar13 = (int64_t)(int)((uVar2 - 1) - uVar7);
        uVar14 = (uint64_t)uVar7;
        lVar4 = *(int64_t *)(local_40 + 0x10);
        lVar5 = *plVar1;
        if (uVar7 == 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          uVar8 = uVar2;
          do {
            *(void*)(lVar4 + uVar12 * 4) = *(void*)(lVar4 + uVar14 * 4);
            *(void*)(lVar5 + (int64_t)(int)(uVar8 - 1) * 4) =
                 *(void*)(lVar5 + lVar13 * 4);
            *(void*)(lVar4 + 4 + uVar12 * 4) = *(void*)(lVar4 + uVar14 * 4);
            *(void*)(lVar5 + (int64_t)(int)(uVar8 - 2) * 4) =
                 *(void*)(lVar5 + lVar13 * 4);
            uVar12 = uVar12 + 2;
            uVar8 = uVar8 - 2;
          } while ((uVar7 & 0xfffffffe) != uVar12);
        }
        if ((uVar7 & 1) != 0) {
          *(void*)(lVar4 + uVar12 * 4) = *(void*)(lVar4 + uVar14 * 4);
          *(void*)(lVar5 + (int64_t)(int)((uVar2 - 1) - (int)uVar12) * 4) =
               *(void*)(lVar5 + lVar13 * 4);
        }
      }
    }
    if (0 < (int)uVar2) {
      lVar4 = *plVar1;
      lVar5 = *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10);
      lVar13 = *(int64_t *)(local_40 + 0x10);
      if (uVar11 - 1 < 3) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        do {
          lVar6 = *(int64_t *)(lVar5 + uVar14 * 8);
          *(void*)(lVar6 + 0x58) = *(void*)(lVar4 + uVar14 * 4);
          *(void*)(lVar6 + 0x5c) = *(void*)(lVar13 + uVar14 * 4);
          lVar6 = *(int64_t *)(lVar5 + 8 + uVar14 * 8);
          *(void*)(lVar6 + 0x58) = *(void*)(lVar4 + 4 + uVar14 * 4);
          *(void*)(lVar6 + 0x5c) = *(void*)(lVar13 + 4 + uVar14 * 4);
          lVar6 = *(int64_t *)(lVar5 + 0x10 + uVar14 * 8);
          *(void*)(lVar6 + 0x58) = *(void*)(lVar4 + 8 + uVar14 * 4);
          *(void*)(lVar6 + 0x5c) = *(void*)(lVar13 + 8 + uVar14 * 4);
          lVar6 = *(int64_t *)(lVar5 + 0x18 + uVar14 * 8);
          *(void*)(lVar6 + 0x58) = *(void*)(lVar4 + 0xc + uVar14 * 4);
          *(void*)(lVar6 + 0x5c) = *(void*)(lVar13 + 0xc + uVar14 * 4);
          uVar14 = uVar14 + 4;
        } while ((uVar2 & 0xfffffffc) != uVar14);
      }
      if ((uint64_t)(uVar2 & 3) != 0) {
        uVar12 = 0;
        do {
          lVar6 = *(int64_t *)(lVar5 + uVar14 * 8 + uVar12 * 8);
          *(void*)(lVar6 + 0x58) = *(void*)(lVar4 + uVar14 * 4 + uVar12 * 4);
          *(void*)(lVar6 + 0x5c) = *(void*)(lVar13 + uVar14 * 4 + uVar12 * 4);
          uVar12 = uVar12 + 1;
        } while ((uVar2 & 3) != uVar12);
      }
    }
    plVar10 = in_RCX;
    if (*in_RCX != 0) {
      if (*param_3 == 0) {
        uVar7 = (int)uVar2 / 3;
        uVar8 = ~uVar7 + uVar2;
        plVar10 = (int64_t *)(uint64_t)uVar8;
        fVar15 = g_02390124;
        if (uVar8 - uVar7 != 0 && (int)uVar7 <= (int)uVar8) {
          fVar15 = g_02390124 / (float)(int)(uVar8 - uVar7);
        }
        if (0 < (int)uVar2) {
          uVar14 = 0;
          do {
            lVar4 = *(int64_t *)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10) + uVar14 * 8);
            if (lVar4 != 0) {
              FUN_00d50b00();
            }
            iVar3 = *(int *)(lVar4 + 0xc);
            if ((int64_t)uVar14 < (int64_t)(int)uVar7) {
              FUN_014328b0(SUB84((double)iVar3,0),
                           (double)*(float *)(*(int64_t *)(local_40 + 0x10) + uVar14 * 4));
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00d21140();
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            else if ((int64_t)(int)uVar8 < (int64_t)uVar14) {
              FUN_014328b0(SUB84((double)iVar3,0),(double)*(float *)(*plVar1 + uVar14 * 4));
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00d21140();
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              fVar17 = (float)(int)((int)uVar14 - uVar7) * fVar15;
              FUN_014328b0(SUB84((double)iVar3,0),
                           (double)(fVar17 * *(float *)(*plVar1 + uVar14 * 4) +
                                   (g_02390124 - fVar17) *
                                   *(float *)(*(int64_t *)(local_40 + 0x10) + uVar14 * 4)));
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00d21140();
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            plVar10 = (int64_t *)FUN_00d50b20();
            uVar14 = uVar14 + 1;
          } while (uVar11 != uVar14);
        }
      }
      else {
        plVar10 = param_3;
        if (0 < (int)uVar2) {
          uVar14 = 0;
          do {
            lVar4 = *(int64_t *)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10) + uVar14 * 8);
            if (lVar4 != 0) {
              FUN_00d50b00();
            }
            uVar16 = SUB84((double)*(int *)(lVar4 + 0xc),0);
            FUN_014328b0(uVar16,(double)*(float *)(*(int64_t *)(local_40 + 0x10) + uVar14 * 4));
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_00d21140();
            if (local_50 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            FUN_014328b0(uVar16,(double)*(float *)(*plVar1 + uVar14 * 4));
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_00d21140();
            if (local_50 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            plVar10 = (int64_t *)FUN_00d50b20();
            uVar14 = uVar14 + 1;
          } while (uVar11 != uVar14);
        }
      }
    }
    if (local_40 != 0) {
      FUN_00d50b20();
      plVar10 = (int64_t *)FUN_00d50b20();
    }
  }
  return plVar10;
}

