// Function: FUN_019cb6b0
// Address: 019cb6b0
// Size: 2629 bytes
// Class: MUEditorElementView

uint64_t FUN_019cb6b0(uint64_t param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  void*puVar8;
  int64_t lVar9;
  void *pvVar10;
  void*puVar11;
  uint64_t uVar12;
  void* pVar13;
  int iVar14;
  int64_t *this_ptr;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t local_a0;
  char local_98;
  int64_t local_80;
  char local_78;
  int local_68;
  int64_t local_58;
  char local_50;
  bool local_40;
  
  lVar5 = local_80;
  (**(code **)(*this_ptr + 0xe20))();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  local_40 = *(int *)(local_80 + 0xc) == 0;
  if ((!local_40) && (param_2 != '\0')) {
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    local_80 = 0;
    local_68 = -1;
    bVar4 = false;
    bVar2 = false;
    lVar15 = 0;
    lVar16 = 0;
LAB_019cb7d9:
    lVar9 = (int64_t)local_68;
    local_68 = local_68 + 1;
    if (local_68 < *(int *)(lVar5 + 0xc)) {
      lVar17 = *(int64_t *)(lVar5 + 0x10);
      local_80 = *(int64_t *)(lVar17 + 8 + lVar9 * 8);
      pvVar10 = _pthread_getspecific((void*)lVar17);
      pVar13 = (void*)lVar17;
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        if (local_58 == lVar15) {
          lVar9 = lVar15;
          bVar3 = bVar2;
          if ((!bVar2) && (local_58 != 0)) {
            if (local_50 != '\0') goto LAB_019cb954;
            FUN_00d50b00();
            bVar3 = true;
          }
LAB_019cb999:
          lVar15 = lVar9;
          bVar2 = bVar3;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            lVar9 = local_58;
            if ((bVar2) && (lVar15 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_019cb999;
          }
          lVar9 = local_58;
          if ((bVar2) && (lVar15 != 0)) {
            FUN_00d50b20();
          }
LAB_019cb954:
          local_50 = '\0';
          lVar15 = lVar9;
          bVar2 = true;
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01507e40();
        if (local_58 == lVar16) {
          lVar9 = lVar16;
          bVar3 = bVar4;
          if ((!bVar4) && (local_58 != 0)) {
            bVar3 = true;
            if (local_50 != '\0') goto LAB_019cbac4;
            FUN_00d50b00();
            bVar3 = true;
          }
LAB_019cbab0:
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar9 = local_58;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            if ((bVar4) && (lVar16 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_019cbab0;
          }
          bVar3 = true;
          if ((bVar4) && (lVar16 != 0)) {
            FUN_00d50b20();
          }
        }
LAB_019cbac4:
        bVar4 = bVar3;
        if (lVar9 == 0) {
          lVar16 = 0;
        }
        else {
          pvVar10 = _pthread_getspecific(pVar13);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar7 = FUN_01507f00();
          iVar1 = *(int *)(puVar8 + 3);
          lVar17 = (int64_t)iVar1;
          iVar14 = iVar1 + 3;
          if (-1 < lVar17) {
            iVar14 = iVar1;
          }
          lVar16 = lVar9;
          if (3 < lVar17) {
            iVar14 = iVar14 >> 2;
            lVar9 = 0;
            do {
              if (*(int *)(puVar8[2] + lVar9 * 4) == iVar7) goto LAB_019cb7d9;
              lVar9 = lVar9 + 1;
            } while (iVar14 != (int)lVar9);
          }
          FUN_00c8e340(iVar14,1);
          *(int *)(puVar8[2] + lVar17) = iVar7;
        }
      }
      goto LAB_019cb7d9;
    }
    FUN_001159b0();
    uVar12 = (uint64_t)(*(int *)(puVar8 + 3) + 3U);
    local_40 = *(int *)(puVar8 + 3) + 3U < 7;
    if (!local_40) {
      puVar11 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &g_02572358;
      (*g_02572370)();
      (**(code **)(*this_ptr + 0x9b0))();
      if (local_80 != 0) {
        FUN_00d50b00();
        local_68 = -1;
LAB_019cbca0:
        lVar9 = (int64_t)local_68;
        local_68 = local_68 + 1;
        if (local_68 < *(int *)(local_80 + 0xc)) {
          uVar12 = *(uint64_t *)(local_80 + 0x10);
          lVar9 = *(int64_t *)(uVar12 + 8 + lVar9 * 8);
          pvVar10 = _pthread_getspecific((void*)uVar12);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (local_58 != 0) {
            pvVar10 = _pthread_getspecific((void*)uVar12);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar10 = _pthread_getspecific((void*)uVar12);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            if (local_58 == lVar15) {
              lVar17 = lVar15;
              bVar3 = bVar2;
              if ((!bVar2) && (local_58 != 0)) {
                if (local_50 != '\0') goto LAB_019cbe24;
                FUN_00d50b00();
                bVar3 = true;
              }
LAB_019cbe65:
              lVar15 = lVar17;
              bVar2 = bVar3;
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
                bVar3 = true;
                lVar17 = local_58;
                if ((bVar2) && (lVar15 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_019cbe65;
              }
              lVar17 = local_58;
              if ((bVar2) && (lVar15 != 0)) {
                FUN_00d50b20();
              }
LAB_019cbe24:
              local_50 = '\0';
              lVar15 = lVar17;
              bVar2 = true;
            }
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            pvVar10 = _pthread_getspecific((void*)uVar12);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01507e40();
            if (local_58 == lVar16) {
              lVar17 = lVar16;
              bVar3 = bVar4;
              if ((!bVar4) && (local_58 != 0)) {
                bVar3 = true;
                if (local_50 != '\0') goto LAB_019cbf79;
                FUN_00d50b00();
                bVar3 = true;
              }
LAB_019cbf65:
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              lVar17 = local_58;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
                bVar3 = true;
                if ((bVar4) && (lVar16 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_019cbf65;
              }
              bVar3 = true;
              if ((bVar4) && (lVar16 != 0)) {
                FUN_00d50b20();
              }
            }
LAB_019cbf79:
            bVar4 = bVar3;
            lVar16 = lVar17;
            if (lVar16 == 0) {
              lVar16 = 0;
            }
            else {
              pvVar10 = _pthread_getspecific((void*)uVar12);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01507f00();
              if (3 < *(int *)(puVar8 + 3)) {
                lVar17 = 0;
                do {
                  pvVar10 = _pthread_getspecific((void*)uVar12);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar6 = FUN_01751560();
                  if (cVar6 != '\0') {
                    local_50 = '\0';
                    FUN_00d21140();
                    local_58 = lVar9;
                    break;
                  }
                  lVar17 = lVar17 + 1;
                  iVar1 = *(int *)(puVar8 + 3);
                  iVar14 = iVar1 + 3;
                  if (-1 < iVar1) {
                    iVar14 = iVar1;
                  }
                  uVar12 = (uint64_t)(uint)(iVar14 >> 2);
                } while (lVar17 < iVar14 >> 2);
              }
            }
          }
          goto LAB_019cbca0;
        }
        FUN_001159b0();
        FUN_00d50b20();
      }
      uVar12 = (**(code **)(*this_ptr + 0xdc8))();
      if (puVar11 != (void*)0x0) {
        uVar12 = FUN_00d50b20();
      }
    }
    if ((bVar4) && (lVar16 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    if ((bVar2) && (lVar15 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    if (puVar8 != (void*)0x0) {
      uVar12 = FUN_00d50b20();
    }
    if (lVar5 == 0) goto LAB_019cc15a;
  }
  uVar12 = FUN_00d50b20();
LAB_019cc15a:
  return CONCAT71((int7)(uVar12 >> 8),local_40) ^ 1;
}

