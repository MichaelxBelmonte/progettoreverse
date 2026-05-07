// Function: FUN_016cf050
// Address: 016cf050
// Size: 812 bytes
// Class: Unknown

int64_t * FUN_016cf050(void)

{
  int iVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  void* pVar6;
  int64_t lVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  double dVar9;
  double local_60;
  int64_t local_58;
  char local_50;
  double local_40;
  int64_t local_38;
  
  iVar1 = *(int *)(*(int64_t *)(arg1 + 0x60) + 0xc);
  if (iVar1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  if (iVar1 == 1) {
    local_38 = **(int64_t **)(*(int64_t *)(arg1 + 0x60) + 0x10);
    *(void*)(this_ptr + 1) = 0;
    if (local_38 != 0) {
LAB_016cf088:
      FUN_00d50b00();
    }
  }
  else {
    if (iVar1 < 1) {
      *(void*)(this_ptr + 1) = 0;
    }
    else {
      local_60 = 0.0;
      lVar8 = 0;
      local_38 = 0;
      lVar7 = 0;
      bVar3 = false;
      do {
        pVar6 = (void*)lVar7;
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01909dc0();
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_018fcb10();
        lVar7 = (int64_t)*(int *)(*(int64_t *)(arg1 + 0x60) + 0xc) + -1;
        if (lVar8 < lVar7) {
          pvVar5 = _pthread_getspecific((void*)lVar7);
          pVar6 = (void*)lVar7;
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01909dc0();
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_40 = (double)FUN_018fcb10();
        }
        else {
          pvVar5 = _pthread_getspecific((void*)lVar7);
          pVar6 = (void*)lVar7;
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01901340();
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_40 = (double)FUN_01907950();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        local_40 = local_40 - dVar9;
        lVar7 = local_38;
        bVar4 = bVar3;
        if (local_60 < local_40) {
          lVar2 = *(int64_t *)(*(int64_t *)(*(int64_t *)(arg1 + 0x60) + 0x10) + lVar8 * 8);
          local_60 = local_40;
          if (local_38 == lVar2) {
            if ((!bVar3) && (lVar2 != 0)) {
              FUN_00d50b00();
              bVar4 = true;
            }
          }
          else {
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            bVar4 = true;
            lVar7 = lVar2;
            if ((bVar3) && (local_38 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        bVar3 = bVar4;
        local_38 = lVar7;
        lVar8 = lVar8 + 1;
        lVar7 = (int64_t)*(int *)(*(int64_t *)(arg1 + 0x60) + 0xc);
      } while (lVar8 < lVar7);
      *(void*)(this_ptr + 1) = 0;
      if (bVar3) {
        *this_ptr = local_38;
        goto LAB_016cf366;
      }
      if (local_38 != 0) goto LAB_016cf088;
    }
    local_38 = 0;
  }
  *this_ptr = local_38;
LAB_016cf366:
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

