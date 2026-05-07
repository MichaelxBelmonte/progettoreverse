// Function: FUN_01513590
// Address: 01513590
// Size: 2000 bytes
// Class: MUPercussivePitchSystem

uint64_t FUN_01513590(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t lVar10;
  byte bVar11;
  void* pVar12;
  uint64_t uVar13;
  undefined7 uVar14;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar15;
  int64_t local_78;
  uint64_t local_50;
  uint32_t local_48;
  uint64_t local_40;
  char local_38;
  
  lVar8 = *arg1;
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *arg1;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(int64_t *)(lVar8 + 0x80) == 0) {
    do {
      lVar7 = *(int64_t *)(lVar8 + 0x50);
      if (lVar7 == 0) goto LAB_01513689;
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(int64_t *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(int64_t *)(lVar7 + 0x80) == 0);
    uVar13 = *(uint64_t *)(lVar7 + 0x80);
  }
  else {
    uVar13 = *(uint64_t *)(lVar8 + 0x80);
  }
  if (uVar13 == 0) {
LAB_01513689:
    uVar13 = 0;
    goto LAB_01513cec;
  }
  FUN_00d50b00();
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar1 = (int64_t *)(this_ptr + 0x80);
  lVar8 = this_ptr;
  if (*(int64_t *)(this_ptr + 0x80) == 0) {
    do {
      lVar7 = *(int64_t *)(lVar8 + 0x50);
      if (lVar7 == 0) {
        local_78 = 0;
        goto LAB_015136c3;
      }
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(int64_t *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(int64_t *)(lVar7 + 0x80) == 0);
    local_78 = *(int64_t *)(lVar7 + 0x80);
  }
  else {
    local_78 = *plVar1;
  }
  if (local_78 != 0) {
    FUN_00d50b00();
  }
LAB_015136c3:
  cVar5 = FUN_00d51e10();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    pvVar6 = _pthread_getspecific((void*)param_1);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = uVar13;
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0150ceb0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (param_2 == '\0') {
      uVar13 = CONCAT71((int7)(local_40 >> 8),1);
    }
    else {
      lVar8 = *arg1;
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar8 = *arg1;
        lVar7 = FUN_00e8b990();
        if (lVar7 != 0) {
          lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
      }
      if (*(int64_t *)(lVar8 + 0x78) == 0) {
        do {
          lVar7 = *(int64_t *)(lVar8 + 0x50);
          if (lVar7 == 0) goto LAB_0151394e;
          pvVar6 = _pthread_getspecific((void*)param_1);
          if (pvVar6 != (void *)0x0) {
            lVar7 = *(int64_t *)(lVar8 + 0x50);
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = lVar7;
        } while (*(int64_t *)(lVar7 + 0x78) == 0);
        if (*(int64_t *)(lVar7 + 0x78) == 0) goto LAB_0151394e;
LAB_015138f5:
        FUN_00d50b00();
        FUN_00d50b20();
        lVar8 = *arg1;
        pvVar6 = _pthread_getspecific((void*)param_1);
        if (pvVar6 != (void *)0x0) {
          lVar8 = *arg1;
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
        }
        pVar12 = (void*)param_1;
        if (*(int64_t *)(lVar8 + 0x78) == 0) {
          lVar7 = 0;
          do {
            pVar12 = (void*)param_1;
            lVar10 = *(int64_t *)(lVar8 + 0x50);
            if (lVar10 == 0) {
              bVar2 = true;
              goto LAB_015139d1;
            }
            pvVar6 = _pthread_getspecific(pVar12);
            if (pvVar6 != (void *)0x0) {
              lVar10 = *(int64_t *)(lVar8 + 0x50);
              lVar8 = FUN_00e8b990();
              if (lVar8 != 0) {
                lVar10 = *(int64_t *)
                          (lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
            }
            pVar12 = (void*)param_1;
            lVar8 = lVar10;
          } while (*(int64_t *)(lVar10 + 0x78) == 0);
          lVar7 = *(int64_t *)(lVar10 + 0x78);
        }
        else {
          lVar7 = *(int64_t *)(lVar8 + 0x78);
        }
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        bVar2 = false;
LAB_015139d1:
        pvVar6 = _pthread_getspecific(pVar12);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01822e80();
        local_50 = local_40;
        param_1 = local_40;
        if (local_40 == 0) {
          bVar4 = false;
        }
        else if (local_38 == '\0') {
          FUN_00d50b00();
          bVar4 = true;
        }
        else {
          local_38 = '\0';
          bVar4 = true;
        }
        if (!bVar2 && lVar7 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (*(int64_t *)(lVar8 + 0x78) != 0) goto LAB_015138f5;
LAB_0151394e:
        bVar4 = false;
        local_50 = 0;
      }
      plVar15 = (int64_t *)(this_ptr + 0x78);
      lVar8 = this_ptr;
      if (*(int64_t *)(this_ptr + 0x78) == 0) {
        do {
          lVar7 = *(int64_t *)(lVar8 + 0x50);
          if (lVar7 == 0) goto LAB_01513b52;
          pvVar6 = _pthread_getspecific((void*)param_1);
          if (pvVar6 != (void *)0x0) {
            lVar7 = *(int64_t *)(lVar8 + 0x50);
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = lVar7;
        } while (*(int64_t *)(lVar7 + 0x78) == 0);
        lVar8 = *(int64_t *)(lVar7 + 0x78);
        if (lVar8 != 0) goto LAB_01513a8a;
LAB_01513b52:
        local_40 = 0;
        uVar9 = 0;
        bVar2 = false;
      }
      else {
        lVar8 = *plVar15;
        if (lVar8 == 0) goto LAB_01513b52;
LAB_01513a8a:
        FUN_00d50b00();
        uVar9 = FUN_00d50b20();
        pVar12 = (void*)param_1;
        if (*plVar15 == 0) {
          lVar7 = 0;
          lVar8 = this_ptr;
          do {
            pVar12 = (void*)param_1;
            lVar10 = *(int64_t *)(lVar8 + 0x50);
            if (lVar10 == 0) {
              local_48 = (uint32_t)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
              goto LAB_01513b7e;
            }
            pvVar6 = _pthread_getspecific(pVar12);
            if (pvVar6 != (void *)0x0) {
              lVar10 = *(int64_t *)(lVar8 + 0x50);
              lVar8 = FUN_00e8b990();
              if (lVar8 != 0) {
                lVar10 = *(int64_t *)
                          (lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
            }
            lVar8 = lVar10;
            uVar9 = 0;
            pVar12 = (void*)param_1;
          } while (*(int64_t *)(lVar8 + 0x78) == 0);
          plVar15 = (int64_t *)(lVar8 + 0x78);
        }
        lVar7 = *plVar15;
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        local_48 = 0;
LAB_01513b7e:
        pvVar6 = _pthread_getspecific(pVar12);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01822e80();
        if (local_40 == 0) {
          uVar9 = 0;
          bVar2 = false;
        }
        else {
          uVar14 = (undefined7)((uint64_t)lVar8 >> 8);
          if (local_38 == '\0') {
            FUN_00d50b00();
            uVar9 = CONCAT71(uVar14,1);
            bVar2 = true;
          }
          else {
            uVar9 = CONCAT71(uVar14,1);
            bVar2 = true;
          }
        }
        bVar11 = (byte)local_48 | lVar7 == 0;
        param_1 = (uint64_t)CONCAT31((int3)((uint)local_48 >> 8),bVar11);
        if (bVar11 == 0) {
          FUN_00d50b20();
        }
      }
      pVar12 = (void*)param_1;
      if (*plVar1 == 0) {
        lVar8 = 0;
        do {
          pVar12 = (void*)param_1;
          lVar7 = *(int64_t *)(this_ptr + 0x50);
          if (lVar7 == 0) {
            bVar3 = true;
            goto LAB_01513c20;
          }
          pvVar6 = _pthread_getspecific(pVar12);
          if (pvVar6 != (void *)0x0) {
            lVar7 = *(int64_t *)(this_ptr + 0x50);
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
            }
          }
          this_ptr = lVar7;
          pVar12 = (void*)param_1;
        } while (*(int64_t *)(this_ptr + 0x80) == 0);
        lVar8 = *(int64_t *)(this_ptr + 0x80);
      }
      else {
        lVar8 = *plVar1;
      }
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      bVar3 = false;
LAB_01513c20:
      pvVar6 = _pthread_getspecific(pVar12);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124ae90();
      if (!bVar3 && lVar8 != 0) {
        FUN_00d50b20();
      }
      uVar13 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
      if ((bVar2) && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar4) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar13 = 0;
  }
  FUN_00d50b20();
LAB_01513cec:
  return uVar13 & 0xffffffff;
}

