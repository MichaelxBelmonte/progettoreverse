// Function: FUN_0151a240
// Address: 0151a240
// Size: 1242 bytes
// Class: MUPercussivePitchSystem

void FUN_0151a240(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t lVar6;
  void *pvVar7;
  uint64_t arg1;
  int64_t this_ptr;
  int64_t *plVar8;
  bool bVar9;
  uint8_t local_d0 [16];
  uint64_t local_b8;
  uint64_t local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  uint32_t local_80;
  uint32_t local_7c;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  if (*(int64_t *)(this_ptr + 0x68) != 0) {
    local_40 = '\0';
    local_48 = 0;
    local_80 = 0xffffffff;
    plVar5 = (int64_t *)FUN_010eca10();
    (**(code **)(*plVar5 + 0x18))();
    local_a8 = plVar5;
    if (*(int64_t *)(this_ptr + 0x88) == 0) {
      local_38 = 0;
      lVar6 = this_ptr;
      do {
        lVar2 = *(int64_t *)(lVar6 + 0x50);
        lVar1 = local_38;
        if (lVar2 == 0) goto LAB_0151a340;
        pvVar7 = _pthread_getspecific((void*)param_1);
        if (pvVar7 != (void *)0x0) {
          lVar2 = *(int64_t *)(lVar6 + 0x50);
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            lVar2 = *(int64_t *)(lVar2 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          }
        }
        lVar6 = lVar2;
      } while (*(int64_t *)(lVar6 + 0x88) == 0);
      lVar1 = *(int64_t *)(lVar6 + 0x88);
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x88);
    }
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
LAB_0151a340:
    while( true ) {
      local_38 = lVar1;
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      param_1 = param_2;
      cVar3 = FUN_01252960(param_2,arg1,&local_48,&local_b8);
      if (cVar3 == '\0') break;
      lVar1 = local_38;
      if (local_48 != 0) {
        pvVar7 = _pthread_getspecific((void*)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01531ce0();
        pvVar7 = _pthread_getspecific((void*)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01531d40();
        pvVar7 = _pthread_getspecific((void*)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_01531da0();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        if (local_38 != 0) {
          local_50 = '\0';
          local_58 = (int64_t *)0x0;
          local_7c = 0xffffffff;
          cVar3 = '\0';
          plVar5 = (int64_t *)0x0;
LAB_0151a4e4:
          do {
            plVar8 = plVar5;
LAB_0151a500:
            do {
              pvVar7 = _pthread_getspecific((void*)param_1);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              param_1 = local_b0;
              cVar4 = FUN_01252960(local_b0,local_b8,&local_58,local_d0);
              if (cVar4 == '\0') {
                if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0151a666;
              }
            } while (local_58 == (int64_t *)0x0);
            if ((plVar8 != (int64_t *)0x0) && (local_58 != plVar8)) {
              local_a0 = local_58;
              local_98 = '\0';
              cVar4 = (**(code **)(*plVar8 + 0x50))();
              if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 == '\0') goto LAB_0151a500;
            }
            cVar4 = local_50;
            plVar5 = local_58;
            if (local_58 != plVar8) {
              if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              bVar9 = cVar3 != '\0';
              cVar3 = cVar4;
              if ((bVar9) && (plVar8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0151a4e4;
            }
            if ((local_50 == '\0') || (cVar3 != '\0' || plVar8 == (int64_t *)0x0))
            goto LAB_0151a500;
            FUN_00d50b00();
            cVar3 = '\x01';
            plVar5 = plVar8;
          } while( true );
        }
        plVar8 = (int64_t *)0x0;
        cVar3 = '\0';
LAB_0151a666:
        pvVar7 = _pthread_getspecific((void*)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_88 = '\0';
        local_90 = plVar8;
        FUN_01531df0();
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar1 = local_38;
        if ((cVar3 != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
          lVar1 = local_38;
        }
      }
    }
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if (local_a8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

