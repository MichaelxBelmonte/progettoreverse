// Function: FUN_012edae0
// Address: 012edae0
// Size: 1988 bytes
// Class: MULSSGenerator

void FUN_012edae0(void)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  void*puVar5;
  void *pvVar6;
  int64_t lVar7;
  int iVar8;
  void* pVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t *arg1;
  int64_t this_ptr;
  uint uVar12;
  uint64_t uVar13;
  int64_t local_c0;
  char local_b8;
  int64_t *local_78;
  int64_t *local_48;
  char local_40;
  void*local_38;
  
  if (*arg1 == 0) {
    return;
  }
  if (*(int *)(*arg1 + 0xc) == 0) {
    return;
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  iVar8 = *(int *)(this_ptr + 0x108) + 1;
  *(int *)(this_ptr + 0x108) = iVar8;
  lVar7 = *arg1;
  uVar12 = *(uint *)(lVar7 + 0xc);
  uVar13 = (uint64_t)uVar12;
  if (0 < (int)uVar12) {
    plVar10 = (int64_t *)0x0;
    bVar2 = false;
    local_38 = (void*)0x0;
    bVar1 = false;
    do {
      uVar12 = uVar12 - 1;
      plVar11 = *(int64_t **)(*(int64_t *)(lVar7 + 0x10) + (uint64_t)uVar12 * 8);
      pVar9 = uVar12;
      if (plVar10 == plVar11) {
        if ((!bVar2) && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b00();
          plVar11 = plVar10;
          goto LAB_012edc10;
        }
        lVar7 = *(int64_t *)(this_ptr + 0xb0);
      }
      else {
        if (plVar11 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_012edc10:
        bVar2 = true;
        lVar7 = *(int64_t *)(this_ptr + 0xb0);
        plVar10 = plVar11;
      }
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      cVar4 = FUN_00d23d70();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        local_78 = plVar10;
        if (plVar10 != (int64_t *)0x0) {
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_78 = local_48;
          FUN_00d235a0();
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01275420();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if (local_78 != (int64_t *)0x0) {
          if (local_38 == (void*)0x0) {
            local_38 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *local_38 = &g_02572358;
            (*pcVar3)();
            bVar1 = true;
          }
          FUN_00d21140();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01508450();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0150ec20();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d23740();
        }
        FUN_012e6e20();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0128dda0();
      }
      if ((int64_t)uVar13 < 2) goto LAB_012ee0b3;
      uVar13 = uVar13 - 1;
      lVar7 = *arg1;
    } while( true );
  }
  bVar1 = false;
  local_38 = (void*)0x0;
  bVar2 = false;
  plVar10 = (int64_t *)0x0;
LAB_012ee0da:
  uVar13 = (uint64_t)(iVar8 - 1U);
  *(uint *)(this_ptr + 0x108) = iVar8 - 1U;
  FUN_012e57f0();
  if ((*(int64_t *)(this_ptr + 0x58) == 0) && (puVar5 != (void*)0x0)) {
    if (0 < *(int *)((int64_t)puVar5 + 0xc)) {
      iVar8 = 0;
      do {
        pvVar6 = _pthread_getspecific((void*)uVar13);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_48 != (int64_t *)0x0) {
          pvVar6 = _pthread_getspecific((void*)uVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01320d00();
          pvVar6 = _pthread_getspecific((void*)uVar13);
          plVar11 = local_48;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            plVar11 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar11 + 0x3e0))();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)((int64_t)puVar5 + 0xc));
    }
    FUN_00115190();
  }
  if ((bVar1) && (local_38 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
LAB_012ee0b3:
  iVar8 = *(int *)(this_ptr + 0x108);
  goto LAB_012ee0da;
}

