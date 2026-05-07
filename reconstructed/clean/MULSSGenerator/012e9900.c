// Function: FUN_012e9900
// Address: 012e9900
// Size: 2622 bytes
// Class: MULSSGenerator

void* FUN_012e9900(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  void *pvVar7;
  int64_t lVar8;
  void* in_ECX;
  void* pVar9;
  int in_EDX;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar10;
  uint uVar11;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  void*local_78;
  char local_70;
  int local_60;
  void*local_50;
  char local_48;
  void*local_40;
  
  if ((char)arg1[0x28] != '\0') {
    (**(code **)(*arg1 + 0x1a0))();
  }
  lVar10 = arg1[0x27];
  if (lVar10 == 0) {
LAB_012e9a22:
    pcVar4 = g_02572370;
    lVar10 = arg1[0x16];
    if (lVar10 != 0) {
      local_70 = '\0';
      local_78 = (void*)0x0;
      local_60 = -1;
      bVar2 = false;
      local_40 = (void*)0x0;
      while( true ) {
        lVar8 = (int64_t)local_60;
        local_60 = local_60 + 1;
        if (*(int *)(lVar10 + 0xc) <= local_60) break;
        local_78 = *(void**)(*(int64_t *)(lVar10 + 0x10) + 8 + lVar8 * 8);
        pvVar7 = _pthread_getspecific((void*)*(int64_t *)(lVar10 + 0x10));
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_012754d0(param_1,param_2);
        if (cVar5 != '\0') {
          if (local_40 == (void*)0x0) {
            local_40 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *local_40 = &g_02572358;
            (*pcVar4)();
            bVar2 = true;
          }
          local_48 = '\0';
          FUN_00d24b60(0,FUN_012e8c90,0);
          local_50 = local_78;
        }
      }
      FUN_001159b0();
LAB_012e9bcc:
      if ((local_40 != (void*)0x0) && (in_EDX != 0)) {
        uVar11 = *(uint *)((int64_t)local_40 + 0xc);
        if (in_EDX == 1) {
          if (0 < (int)uVar11) {
            lVar8 = (uint64_t)uVar11 + 1;
            lVar10 = 0;
            bVar3 = false;
            do {
              uVar11 = uVar11 - 1;
              lVar1 = *(int64_t *)(local_40[2] + (uint64_t)uVar11 * 8);
              pVar9 = uVar11;
              if (lVar10 == lVar1) {
                if ((!bVar3) && (lVar10 != 0)) {
                  bVar3 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar3) && (lVar10 != 0)) {
                  FUN_00d50b20();
                  bVar3 = true;
                  lVar10 = lVar1;
                }
                else {
                  bVar3 = true;
                  lVar10 = lVar1;
                }
              }
              pvVar7 = _pthread_getspecific(pVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a560();
              if (local_78 == (void*)0x0) {
                cVar5 = '\0';
              }
              else {
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a560();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef460();
                if (local_50 == (void*)0x0) {
                  cVar5 = '\0';
                }
                else {
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0125a560();
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_011ef460();
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013dd6a0();
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar5 = FUN_014bc070();
                  if ((local_a8 != '\0') && (local_b0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_98 != '\0') && (local_a0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_88 != '\0') && (local_90 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b8 != '\0') && (local_c0 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
                FUN_00d50b20();
              }
              if (cVar5 != '\0') {
                FUN_00d23620();
              }
              lVar8 = lVar8 + -1;
            } while (1 < lVar8);
LAB_012ea359:
            if ((bVar3) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if (0 < (int)uVar11) {
          lVar8 = (uint64_t)uVar11 + 1;
          lVar10 = 0;
          bVar3 = false;
          do {
            uVar11 = uVar11 - 1;
            lVar1 = *(int64_t *)(local_40[2] + (uint64_t)uVar11 * 8);
            pVar9 = uVar11;
            if (lVar10 == lVar1) {
              if ((!bVar3) && (lVar10 != 0)) {
                bVar3 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              if ((bVar3) && (lVar10 != 0)) {
                FUN_00d50b20();
                bVar3 = true;
                lVar10 = lVar1;
              }
              else {
                bVar3 = true;
                lVar10 = lVar1;
              }
            }
            pvVar7 = _pthread_getspecific(pVar9);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            if (local_78 == (void*)0x0) {
              bVar6 = 1;
            }
            else {
              pvVar7 = _pthread_getspecific(pVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a560();
              pvVar7 = _pthread_getspecific(pVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_011ef460();
              if (local_50 == (void*)0x0) {
                bVar6 = 1;
              }
              else {
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a560();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef460();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013dd6a0();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                bVar6 = FUN_014bc070();
                if ((local_a8 != '\0') && (local_b0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_98 != '\0') && (local_a0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_88 != '\0') && (local_90 != 0)) {
                  FUN_00d50b20();
                }
                bVar6 = bVar6 ^ 1;
              }
              if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if (bVar6 != 0) {
              FUN_00d23620();
            }
            lVar8 = lVar8 + -1;
          } while (1 < lVar8);
          goto LAB_012ea359;
        }
      }
      goto LAB_012ea38b;
    }
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    pvVar7 = _pthread_getspecific(in_ECX);
    if (pvVar7 != (void *)0x0) {
      lVar10 = arg1[0x27];
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar10 + 0x38) == '\0') goto LAB_012e9a22;
    pvVar7 = _pthread_getspecific(in_ECX);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015292f0(param_1,param_2);
    if (local_78 != (void*)0x0) {
      bVar2 = true;
      local_40 = local_78;
      if (local_70 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_012e9bcc;
    }
    local_40 = (void*)0x0;
    bVar2 = false;
LAB_012ea38b:
    *(void*)(this_ptr + 1) = 0;
    if (bVar2) goto LAB_012ea3a6;
    if (local_40 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_012ea3a6;
    }
  }
  local_40 = (void*)0x0;
LAB_012ea3a6:
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

