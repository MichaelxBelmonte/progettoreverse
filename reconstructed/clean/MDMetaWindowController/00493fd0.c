// Function: FUN_00493fd0
// Address: 00493fd0
// Size: 1236 bytes
// Class: MDMetaWindowController

uint64_t FUN_00493fd0(uint64_t param_1,int param_2)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  void *pvVar7;
  uint64_t uVar8;
  int64_t **pplVar9;
  void* pVar10;
  int64_t *plVar11;
  int64_t lVar12;
  int64_t *this_ptr;
  int64_t *plVar13;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 == 0) {
LAB_0049430d:
    uVar8 = 1;
  }
  else {
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar13 = this_ptr;
    do {
      (**(code **)(*plVar13 + 0x370))();
      plVar11 = local_48;
      if (local_48 == plVar13) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
           (plVar11 = plVar13, local_40[0] != '\0')) goto LAB_00494077;
      }
      else {
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar6 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar6 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
LAB_00494077:
          local_38[0] = '\x01';
          pcVar6 = local_40;
        }
        *pcVar6 = '\0';
        plVar13 = plVar11;
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00082eb0();
      plVar11 = &g_02802688;
      if (plVar13 != (int64_t *)0x0) {
        (**(code **)(*plVar13 + 0x360))();
        cVar3 = FUN_00e85ea0();
        plVar11 = (int64_t *)&stack0xffffffffffffff80;
        if (cVar3 == '\0') {
          plVar11 = &g_02802688;
        }
      }
      if (*plVar11 != 0) {
        if ((local_38[0] == '\0') && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        break;
      }
    } while (plVar13 != (int64_t *)0x0);
    pVar10 = (void*)plVar11;
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar13 != (int64_t *)0x0) {
      if (this_ptr[0x23] == 0) {
        bVar1 = true;
      }
      else {
        FUN_00d50b00();
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        plVar13 = local_48;
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar1 = true;
        if (plVar13 != (int64_t *)0x0) {
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01320d00();
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_0124d450();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar12 = g_026f6fb0;
          if (cVar3 != '\0') {
            if (g_026f6fb0 != 0) {
              FUN_00d50b00();
            }
            lVar2 = g_027087a0;
            if (g_027087a0 != 0) {
              FUN_00d50b00();
            }
            FUN_01f6ca30();
            plVar13 = local_48;
            if (local_40[0] == '\0') {
              if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
                 (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40[0] = '\0';
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if (lVar12 != 0) {
              FUN_00d50b20();
            }
            iVar4 = (**(code **)(*plVar13 + 0x5e0))();
            bVar1 = true;
            if (((iVar4 == 0) && (uVar5 = FUN_01caea40(), -1 < (int)uVar5)) &&
               ((int)uVar5 < *(int *)(this_ptr[0x50] + 0xc))) {
              lVar12 = *(int64_t *)(this_ptr[0x50] + 0x10);
              plVar13 = *(int64_t **)(lVar12 + (uint64_t)uVar5 * 8);
              if (plVar13 != (int64_t *)0x0) {
                FUN_00d50b00();
                pvVar7 = _pthread_getspecific((void*)lVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_00d51d20();
                plVar11 = local_48;
                FUN_002771e0();
                if (plVar11 == (int64_t *)0x0) {
LAB_004943fb:
                  pplVar9 = (int64_t **)&g_02802688;
                }
                else {
                  (**(code **)(*plVar11 + 0x360))();
                  cVar3 = FUN_00e85ea0();
                  pplVar9 = &local_48;
                  if (cVar3 == '\0') goto LAB_004943fb;
                }
                plVar11 = *pplVar9;
                if (plVar11 != plVar13) {
                  plVar13 = plVar11;
                  if (*(char *)(pplVar9 + 1) == '\0') {
                    if (plVar11 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    FUN_00d50b20();
                  }
                  else {
                    FUN_00d50b20();
                    *(void*)(pplVar9 + 1) = 0;
                  }
                }
                if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00493490();
                bVar1 = false;
                if (plVar13 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
              }
            }
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (!bVar1) goto LAB_0049430d;
    }
    uVar8 = 0;
  }
  return uVar8;
}

