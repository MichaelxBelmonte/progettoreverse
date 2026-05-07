// Function: FUN_01caaf60
// Address: 01caaf60
// Size: 3053 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_01caaf60(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int64_t *plVar7;
  int64_t lVar8;
  void*this_ptr;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t *plVar12;
  int64_t lVar13;
  int64_t lVar14;
  bool bVar15;
  int64_t local_100;
  char local_f8;
  void*local_78;
  int64_t local_48;
  char local_40;
  byte local_38;
  
  FUN_01ca8220();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  cVar6 = FUN_01caa660();
  lVar14 = g_027eda10;
  if (cVar6 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    local_78 = (void*)0x0;
    bVar15 = false;
    goto LAB_01cabb2f;
  }
  if (*param_1 == 0) {
    local_38 = 0;
  }
  else {
    if (g_027eda10 != 0) {
      FUN_00d50b00();
    }
    local_38 = FUN_00d23d70();
    local_38 = local_38 ^ 1;
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
  }
  local_78 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_78 = &g_02572358;
  (*g_02572370)();
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_0004b090();
  (**(code **)(*plVar7 + 0x18))();
  lVar14 = g_027eda28;
  if (g_027eda28 != 0) {
    FUN_00d50b00();
  }
  cVar6 = FUN_00d23d70();
  lVar13 = g_027eda28;
  if (cVar6 == '\0') {
    bVar15 = false;
    lVar13 = local_100;
  }
  else {
    lVar10 = *param_2;
    if (g_027eda28 != 0) {
      FUN_00d50b00();
    }
    local_f8 = '\0';
    FUN_01ca7f90();
    if (lVar14 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_00d50b00();
      if ((*(uint *)(lVar14 + 0x18) & 0xfffffff8) == 8) {
        lVar9 = **(int64_t **)(lVar14 + 0x10);
      }
      else {
        lVar9 = 0;
      }
      FUN_00d50b20();
    }
    bVar15 = lVar9 == lVar10;
    if (lVar13 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  lVar14 = g_027eda18;
  if (bVar15) {
    if (g_027eda18 != 0) {
      FUN_00d50b00();
    }
    cVar6 = FUN_00d23d70();
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
    lVar10 = g_027eda18;
    if (cVar6 == '\0') goto LAB_01cab266;
    if (g_027eda18 != 0) {
      FUN_00d50b00();
    }
    FUN_01ca7f90();
    if ((local_f8 == '\0') && (lVar13 != 0)) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar7 + 0x5f8))();
    if (lVar14 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_00d50b00();
      lVar9 = lVar14;
    }
    bVar2 = lVar14 != 0;
    if (lVar13 != 0) {
      FUN_00d50b20();
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if (*(int *)(lVar9 + 0xc) < 1) {
      bVar4 = false;
      lVar13 = 0;
    }
    else if (local_38 == 0) {
      lVar10 = 0;
      lVar14 = 0;
      bVar15 = false;
      do {
        lVar11 = FUN_00dd6dc0();
        if (lVar11 == lVar14) {
          lVar13 = lVar14;
          bVar4 = bVar15;
          if ((!bVar15) && (lVar11 != 0)) {
            bVar4 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar11 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          lVar13 = lVar11;
          if ((bVar15) && (lVar14 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d21140();
        lVar10 = lVar10 + 1;
        lVar14 = lVar13;
        bVar15 = bVar4;
      } while (lVar10 < *(int *)(lVar9 + 0xc));
    }
    else {
      lVar11 = 0;
      bVar4 = false;
      lVar10 = 0;
      do {
        lVar8 = FUN_00dd6dc0();
        if (lVar8 == lVar10) {
          lVar13 = lVar10;
          bVar15 = bVar4;
          if ((!bVar4) && (lVar8 != 0)) {
            FUN_00d50b00();
            bVar15 = true;
          }
        }
        else {
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          bVar15 = true;
          lVar13 = lVar8;
          if ((bVar4) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar4 = bVar15;
        FUN_00c7e7b0();
        if (lVar14 != 0) {
          FUN_00d50b00();
        }
        cVar6 = FUN_00d50f90();
        if (lVar14 != 0) {
          FUN_00d50b20();
        }
        if (cVar6 == '\0') {
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          bVar15 = true;
          bVar5 = false;
          plVar12 = (int64_t *)0x0;
          bVar3 = false;
          lVar10 = 0;
          if (!bVar4) goto LAB_01cabae0;
          goto LAB_01cabad3;
        }
        FUN_00d21140();
        lVar11 = lVar11 + 1;
        lVar10 = lVar13;
      } while (lVar11 < *(int *)(lVar9 + 0xc));
    }
    *this_ptr = local_78;
    *(void*)(this_ptr + 1) = 1;
    bVar5 = false;
    plVar12 = (int64_t *)0x0;
    bVar3 = false;
    lVar10 = 0;
    bVar15 = false;
    if (bVar4) {
LAB_01cabad3:
      if (lVar13 != 0) {
        FUN_00d50b20();
      }
    }
LAB_01cabae0:
    if (bVar5) {
LAB_01cabae6:
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
LAB_01cabaf3:
    if ((bVar2) && (lVar9 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar3) && (lVar10 != 0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (int64_t *)0x0) goto LAB_01cabb2f;
  }
  else {
LAB_01cab266:
    lVar14 = g_027eda20;
    if (g_027eda20 != 0) {
      FUN_00d50b00();
    }
    cVar6 = FUN_00d23d70();
    if (cVar6 == '\0') {
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar10 = *param_2;
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      lVar9 = g_027eda20;
      if (lVar10 != 0) {
        if (g_027eda20 != 0) {
          FUN_00d50b00();
        }
        FUN_01ca7f90();
        if ((local_f8 == '\0') && (lVar13 != 0)) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar7 + 0x5f8))();
        if (lVar14 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_00d50b00();
          lVar10 = lVar14;
        }
        bVar3 = lVar14 != 0;
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        if (*(int *)(lVar10 + 0xc) < 1) {
          bVar4 = false;
          lVar13 = 0;
          bVar5 = false;
          plVar12 = (int64_t *)0x0;
        }
        else {
          lVar11 = 0;
          plVar12 = (int64_t *)0x0;
          bVar5 = false;
          bVar4 = false;
          lVar9 = 0;
          do {
            plVar1 = *(int64_t **)(*(int64_t *)(lVar10 + 0x10) + lVar11 * 8);
            if (plVar12 == plVar1) {
              if ((!bVar5) && (plVar12 != (int64_t *)0x0)) {
                bVar5 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (plVar1 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              if ((bVar5) && (plVar12 != (int64_t *)0x0)) {
                FUN_00d50b20();
                bVar5 = true;
                plVar12 = plVar1;
              }
              else {
                bVar5 = true;
                plVar12 = plVar1;
              }
            }
            cVar6 = (**(code **)(*plVar12 + 0x380))();
            lVar13 = lVar9;
            if (cVar6 != '\0') {
LAB_01caba84:
              *(void*)(this_ptr + 1) = 0;
              *this_ptr = 0;
              bVar15 = true;
              bVar2 = false;
              lVar9 = 0;
              if (bVar4) goto LAB_01cabad3;
              goto LAB_01cabae0;
            }
            (**(code **)(*(int64_t *)*param_2 + 0x420))();
            if (lVar14 == lVar9) {
              bVar15 = bVar4;
              if ((!bVar4) && (lVar14 != 0)) {
                FUN_00d50b00();
                bVar15 = true;
              }
            }
            else {
              if (lVar14 != 0) {
                FUN_00d50b00();
              }
              bVar15 = true;
              lVar13 = lVar14;
              if ((bVar4) && (lVar9 != 0)) {
                FUN_00d50b20();
              }
            }
            bVar4 = bVar15;
            if (lVar13 == 0) {
              *(void*)(this_ptr + 1) = 0;
              *this_ptr = 0;
              bVar15 = true;
              lVar9 = 0;
              bVar2 = false;
              if (bVar5) goto LAB_01cabae6;
              goto LAB_01cabaf3;
            }
            if (local_38 != 0) {
              FUN_00c7e7b0();
              if (lVar14 != 0) {
                FUN_00d50b00();
              }
              cVar6 = FUN_00d50f90();
              if (lVar14 != 0) {
                FUN_00d50b20();
              }
              if (cVar6 == '\0') goto LAB_01caba84;
            }
            FUN_00d21140();
            lVar11 = lVar11 + 1;
            lVar9 = lVar13;
          } while (lVar11 < *(int *)(lVar10 + 0xc));
        }
        *this_ptr = local_78;
        *(void*)(this_ptr + 1) = 1;
        bVar2 = false;
        lVar9 = 0;
        bVar15 = false;
        if (bVar4) goto LAB_01cabad3;
        goto LAB_01cabae0;
      }
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    bVar15 = true;
  }
  FUN_00d50b20();
LAB_01cabb2f:
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((bVar15) && (local_78 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

