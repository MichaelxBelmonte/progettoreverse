// Function: FUN_007e59d0
// Address: 007e59d0
// Size: 2258 bytes
// Class: Unknown

void FUN_007e59d0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  void*puVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  void* pVar8;
  void*puVar9;
  int64_t lVar10;
  int64_t this_ptr;
  void* pVar11;
  uint64_t uVar12;
  bool bVar13;
  uint uVar14;
  int64_t local_90;
  char local_88;
  int local_78;
  int64_t local_60;
  char local_58;
  int local_48;
  uint uStack_44;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar1 = *(int64_t *)(this_ptr + 0x28);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      pVar11 = 0;
      do {
        lVar2 = local_60;
        pVar8 = pVar11;
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a1110();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313ad0();
        if ((local_58 == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb480();
        if (local_88 == '\0') {
          if (local_90 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        FUN_00d243f0();
        if (local_90 != 0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        local_60 = 0;
        local_48 = -1;
        uStack_44 = 0;
LAB_007e5c8f:
        while( true ) {
          if (uStack_44 != 0) {
            if ((int)uStack_44 < 1) {
              uStack_44 = -uStack_44;
            }
            else {
              local_48 = local_48 - uStack_44;
              FUN_00d23690();
              uStack_44 = 0;
            }
          }
          lVar6 = (int64_t)local_48;
          local_48 = local_48 + 1;
          if (*(int *)((int64_t)puVar4 + 0xc) <= local_48) break;
          lVar7 = puVar4[2];
          local_60 = *(int64_t *)(lVar7 + 8 + lVar6 * 8);
          pvVar5 = _pthread_getspecific((void*)lVar7);
          pVar8 = (void*)lVar7;
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0124df10();
          if (local_88 == '\0') goto LAB_007e5d40;
          if (local_90 != 0) goto LAB_007e5d70;
        }
        puVar9 = puVar4;
        FUN_00115e00();
        pVar8 = (void*)puVar9;
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e61a0();
        if (local_60 != 0) {
          FUN_00d50b00();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if (local_60 != 0) {
          local_48 = -1;
LAB_007e5f29:
          while ((lVar6 = local_90, local_48 = local_48 + 1, local_48 < *(int *)(local_60 + 0xc) &&
                 (*(int *)((int64_t)puVar4 + 0xc) != 0))) {
            pvVar5 = _pthread_getspecific((void*)*(void*)(local_60 + 0x10));
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            if (local_88 == '\0') goto LAB_007e5fe0;
            if (local_90 != 0) goto LAB_007e600b;
          }
          FUN_000be170();
          FUN_00d50b20();
        }
        local_58 = '\0';
        local_60 = 0;
        local_48 = -1;
        while( true ) {
          lVar6 = (int64_t)local_48;
          local_48 = local_48 + 1;
          if (*(int *)((int64_t)puVar4 + 0xc) <= local_48) break;
          local_60 = *(int64_t *)(puVar4[2] + 8 + lVar6 * 8);
          pvVar5 = _pthread_getspecific((void*)puVar4[2]);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012cb5e0();
        }
        FUN_00115e00();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        pVar11 = pVar11 + 1;
      } while ((int)pVar11 < *(int *)(lVar1 + 0xc));
    }
    FUN_007ead60();
    if (puVar4 == (void*)0x0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
LAB_007e5fe0:
  if (local_90 != 0) {
    FUN_00d50b00();
LAB_007e600b:
    local_88 = '\0';
    local_90 = 0;
    local_78 = -1;
    do {
      do {
        lVar7 = (int64_t)local_78;
        local_78 = local_78 + 1;
        if (*(int *)(lVar6 + 0xc) <= local_78) goto LAB_007e5f00;
        lVar10 = *(int64_t *)(lVar6 + 0x10);
        local_90 = *(int64_t *)(lVar10 + 8 + lVar7 * 8);
        uVar14 = *(uint *)((int64_t)puVar4 + 0xc);
        uVar12 = (uint64_t)uVar14;
      } while ((int)uVar14 < 1);
      bVar13 = false;
      while( true ) {
        uVar14 = uVar14 - 1;
        pvVar5 = _pthread_getspecific((void*)lVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar10 = puVar4[2];
        lVar7 = *(int64_t *)(lVar10 + (uint64_t)uVar14 * 8);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        cVar3 = FUN_0126eff0();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          bVar13 = true;
          FUN_00d23620();
        }
        if ((int64_t)uVar12 < 2) break;
        uVar12 = uVar12 - 1;
      }
    } while ((!bVar13) || (*(int *)((int64_t)puVar4 + 0xc) != 0));
LAB_007e5f00:
    FUN_001159b0();
    FUN_00d50b20();
  }
  goto LAB_007e5f29;
LAB_007e5d40:
  if (local_90 != 0) {
    FUN_00d50b00();
LAB_007e5d70:
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013d9040();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (local_90 != 0) {
      uStack_44 = ~uStack_44;
    }
    FUN_00d50b20();
  }
  goto LAB_007e5c8f;
}

