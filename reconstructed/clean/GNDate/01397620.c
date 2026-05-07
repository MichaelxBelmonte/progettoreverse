// Function: FUN_01397620
// Address: 01397620
// Size: 1073 bytes
// Class: GNDate

uint64_t FUN_01397620(void* param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t *plVar8;
  int64_t this_ptr;
  int64_t *plVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t local_50;
  char local_48;
  int64_t local_38;
  
  if (*(int64_t *)(this_ptr + 0x200) != 0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cbea0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((*(char *)(this_ptr + 0xc0) != '\0') && (*(char *)(this_ptr + 0x1a8) == '\0')) {
    return 0;
  }
  FUN_01328810();
  local_38 = local_50;
  if (local_50 == 0) {
    bVar2 = true;
    local_38 = 0;
    if (*(char *)(this_ptr + 0x1a8) == '\0') goto LAB_0139774c;
LAB_01397726:
    uVar10 = 2;
  }
  else {
    if (local_48 == '\0') {
      FUN_00d50b00();
    }
    bVar2 = false;
    if (*(char *)(this_ptr + 0x1a8) != '\0') goto LAB_01397726;
LAB_0139774c:
    if (((*(int64_t *)(this_ptr + 0x1f8) != 0) || (*(int64_t *)(this_ptr + 0x200) != 0)) ||
       (*(int64_t *)(this_ptr + 0x148) == 0)) {
LAB_01397764:
      cVar3 = FUN_01334f30();
      if (cVar3 != '\0') goto LAB_01397776;
LAB_013977a7:
      bVar1 = false;
      iVar4 = *(int *)(local_38 + 0xc);
      if (iVar4 < 1) {
        bVar1 = false;
        plVar8 = (int64_t *)0x0;
      }
      else {
        lVar11 = 0;
        plVar8 = (int64_t *)0x0;
        do {
          plVar9 = *(int64_t **)(*(int64_t *)(local_38 + 0x10) + lVar11 * 8);
          lVar6 = local_38;
          if (plVar8 == plVar9) {
            if ((bVar1) || (plVar8 == (int64_t *)0x0)) {
              if (plVar8 == (int64_t *)0x0) goto LAB_013977d0;
              goto LAB_01397822;
            }
            bVar1 = true;
            FUN_00d50b00();
            pVar7 = (void*)lVar6;
LAB_01397848:
            pvVar5 = _pthread_getspecific(pVar7);
            plVar9 = plVar8;
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar9 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            cVar3 = (**(code **)(*plVar9 + 0x498))();
            if (cVar3 == '\0') {
              uVar10 = 1;
              goto LAB_013979d7;
            }
          }
          else {
            if (plVar9 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            plVar8 = plVar9;
            bVar1 = true;
            if (plVar9 != (int64_t *)0x0) {
LAB_01397822:
              pVar7 = (void*)lVar6;
              goto LAB_01397848;
            }
LAB_013977d0:
            plVar8 = (int64_t *)0x0;
          }
          lVar11 = lVar11 + 1;
          iVar4 = *(int *)(local_38 + 0xc);
        } while (lVar11 < iVar4);
        if (0 < iVar4) {
          lVar11 = 0;
          do {
            plVar9 = *(int64_t **)(*(int64_t *)(local_38 + 0x10) + lVar11 * 8);
            lVar6 = local_38;
            if (plVar8 == plVar9) {
              if ((bVar1) || (plVar8 == (int64_t *)0x0)) {
                if (plVar8 == (int64_t *)0x0) goto LAB_013978e0;
                goto LAB_01397932;
              }
              bVar1 = true;
              FUN_00d50b00();
              pVar7 = (void*)lVar6;
LAB_01397958:
              pvVar5 = _pthread_getspecific(pVar7);
              plVar9 = plVar8;
              if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                plVar9 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              (**(code **)(*plVar9 + 0x480))();
            }
            else {
              if (plVar9 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              plVar8 = plVar9;
              bVar1 = true;
              if (plVar9 != (int64_t *)0x0) {
LAB_01397932:
                pVar7 = (void*)lVar6;
                goto LAB_01397958;
              }
LAB_013978e0:
              plVar8 = (int64_t *)0x0;
            }
            lVar11 = lVar11 + 1;
            iVar4 = *(int *)(local_38 + 0xc);
          } while (lVar11 < iVar4);
        }
      }
      if (iVar4 != 0) {
        FUN_01396e30();
      }
      *(void*)(this_ptr + 0xc0) = 1;
      uVar10 = 0;
      goto LAB_013979d7;
    }
    pvVar5 = _pthread_getspecific((void*)local_50);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_0141bab0();
    if (iVar4 != 3) goto LAB_01397764;
LAB_01397776:
    if (*(int64_t *)(this_ptr + 0x48) == 0) goto LAB_013977a7;
    cVar3 = FUN_01396430();
    uVar10 = 1;
    if ((cVar3 != '\0') && (cVar3 = FUN_013965b0(), cVar3 == '\0')) goto LAB_013977a7;
  }
  bVar1 = false;
  plVar8 = (int64_t *)0x0;
LAB_013979d7:
  if (!bVar2 && local_38 != 0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return uVar10;
}

