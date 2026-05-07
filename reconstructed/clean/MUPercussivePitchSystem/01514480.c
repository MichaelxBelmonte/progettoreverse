// Function: FUN_01514480
// Address: 01514480
// Size: 2211 bytes
// Class: MUPercussivePitchSystem

uint64_t FUN_01514480(int64_t param_1,char param_2)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  void* pVar11;
  int64_t lVar12;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar13;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  cVar3 = (char)param_1;
  lVar9 = *arg1;
  pvVar7 = _pthread_getspecific((void*)param_1);
  if (pvVar7 != (void *)0x0) {
    lVar9 = *arg1;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  if (*(int64_t *)(lVar9 + 0x78) == 0) {
    do {
      lVar8 = *(int64_t *)(lVar9 + 0x50);
      if (lVar8 == 0) {
        return 0;
      }
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        lVar8 = *(int64_t *)(lVar9 + 0x50);
        lVar9 = FUN_00e8b990();
        if (lVar9 != 0) {
          lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
      }
      lVar9 = lVar8;
    } while (*(int64_t *)(lVar8 + 0x78) == 0);
    lVar9 = *(int64_t *)(lVar8 + 0x78);
  }
  else {
    lVar9 = *(int64_t *)(lVar9 + 0x78);
  }
  if (lVar9 == 0) {
    return 0;
  }
  FUN_00d50b00();
  plVar1 = (int64_t *)(this_ptr + 0x78);
  lVar8 = this_ptr;
  if (*(int64_t *)(this_ptr + 0x78) == 0) {
    do {
      lVar10 = *(int64_t *)(lVar8 + 0x50);
      if (lVar10 == 0) goto LAB_01514701;
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        lVar10 = *(int64_t *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar10;
    } while (*(int64_t *)(lVar10 + 0x78) == 0);
    lVar8 = *(int64_t *)(lVar10 + 0x78);
  }
  else {
    lVar8 = *plVar1;
  }
  if (lVar8 == 0) {
LAB_01514701:
    bVar4 = false;
    local_48 = 0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    pVar11 = (void*)param_1;
    if (*plVar1 == 0) {
      lVar8 = 0;
      lVar10 = this_ptr;
      do {
        pVar11 = (void*)param_1;
        lVar12 = *(int64_t *)(lVar10 + 0x50);
        if (lVar12 == 0) {
          bVar2 = true;
          goto LAB_01514556;
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          lVar12 = *(int64_t *)(lVar10 + 0x50);
          lVar10 = FUN_00e8b990();
          if (lVar10 != 0) {
            lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
          }
        }
        pVar11 = (void*)param_1;
        lVar10 = lVar12;
      } while (*(int64_t *)(lVar12 + 0x78) == 0);
      lVar8 = *(int64_t *)(lVar12 + 0x78);
    }
    else {
      lVar8 = *plVar1;
    }
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    bVar2 = false;
LAB_01514556:
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    local_48 = local_40;
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
    if (!bVar2 && lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar7 = _pthread_getspecific((void*)param_1);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    param_1 = lVar9;
  }
  FUN_01822e80();
  pvVar7 = _pthread_getspecific((void*)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_00d51e10();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((char)uVar5 == '\0') {
    pvVar7 = _pthread_getspecific((void*)param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = lVar9;
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
    FUN_0150d0b0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      if (*plVar1 == 0) {
        lVar9 = 0;
        lVar8 = this_ptr;
        do {
          lVar10 = *(int64_t *)(lVar8 + 0x50);
          if (lVar10 == 0) {
            bVar2 = true;
            goto LAB_015148de;
          }
          pvVar7 = _pthread_getspecific((void*)param_1);
          if (pvVar7 != (void *)0x0) {
            lVar10 = *(int64_t *)(lVar8 + 0x50);
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = lVar10;
        } while (*(int64_t *)(lVar10 + 0x78) == 0);
        lVar9 = *(int64_t *)(lVar10 + 0x78);
      }
      else {
        lVar9 = *plVar1;
      }
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      bVar2 = false;
LAB_015148de:
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if (!bVar2 && lVar9 != 0) {
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0x80) == 0) {
        lVar9 = 0;
        lVar8 = this_ptr;
        do {
          lVar10 = *(int64_t *)(lVar8 + 0x50);
          if (lVar10 == 0) {
            bVar2 = true;
            goto LAB_01514aab;
          }
          pvVar7 = _pthread_getspecific((void*)param_1);
          if (pvVar7 != (void *)0x0) {
            lVar10 = *(int64_t *)(lVar8 + 0x50);
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = lVar10;
        } while (*(int64_t *)(lVar10 + 0x80) == 0);
        lVar9 = *(int64_t *)(lVar10 + 0x80);
      }
      else {
        lVar9 = *(int64_t *)(this_ptr + 0x80);
      }
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      bVar2 = false;
LAB_01514aab:
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124ae90();
      if (!bVar2 && lVar9 != 0) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
  }
  uVar13 = (uint64_t)uVar5 ^ 1;
  if (param_2 != '\0') {
    if (*plVar1 == 0) {
      lVar9 = 0;
      lVar8 = this_ptr;
      do {
        lVar10 = *(int64_t *)(lVar8 + 0x50);
        if (lVar10 == 0) {
          bVar2 = true;
          goto LAB_01514b87;
        }
        pvVar7 = _pthread_getspecific((void*)param_1);
        if (pvVar7 != (void *)0x0) {
          lVar10 = *(int64_t *)(lVar8 + 0x50);
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
        }
        lVar8 = lVar10;
      } while (*(int64_t *)(lVar10 + 0x78) == 0);
      lVar9 = *(int64_t *)(lVar10 + 0x78);
    }
    else {
      lVar9 = *plVar1;
    }
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    bVar2 = false;
LAB_01514b87:
    pvVar7 = _pthread_getspecific((void*)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar6 = FUN_018232b0();
    if (!bVar2 && lVar9 != 0) {
      FUN_00d50b20();
    }
    pVar11 = (void*)param_1;
    if (iVar6 != 2) {
      if (*plVar1 == 0) {
        lVar9 = 0;
        do {
          pVar11 = (void*)param_1;
          lVar8 = *(int64_t *)(this_ptr + 0x50);
          if (lVar8 == 0) {
            bVar2 = true;
            goto LAB_01514bf9;
          }
          pvVar7 = _pthread_getspecific(pVar11);
          if (pvVar7 != (void *)0x0) {
            lVar8 = *(int64_t *)(this_ptr + 0x50);
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
            }
          }
          this_ptr = lVar8;
          pVar11 = (void*)param_1;
        } while (*(int64_t *)(this_ptr + 0x78) == 0);
        lVar9 = *(int64_t *)(this_ptr + 0x78);
      }
      else {
        lVar9 = *plVar1;
      }
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      bVar2 = false;
LAB_01514bf9:
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018232c0();
      uVar13 = CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
      if (!bVar2 && lVar9 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if ((bVar4) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return uVar13;
}

