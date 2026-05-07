// Function: FUN_016818c0
// Address: 016818c0
// Size: 1275 bytes
// Class: Unknown

void FUN_016818c0(void)

{
  bool bVar1;
  void*puVar2;
  char cVar3;
  int iVar4;
  void*puVar5;
  int64_t lVar6;
  void *pvVar7;
  void*puVar8;
  int iVar9;
  int64_t *arg1;
  int64_t *local_78;
  char local_70;
  void*local_68;
  void*local_60;
  void*local_58;
  char local_50;
  void*local_48;
  uint64_t local_40;
  int local_38;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar8 = (void*)&g_02572358;
  *puVar5 = &g_02572358;
  local_60 = puVar5;
  (*g_02572370)();
  if (*arg1 != 0) {
    iVar4 = FUN_00c8d620();
    local_68 = (void*)CONCAT44(local_68._4_4_,iVar4);
    if (0 < iVar4) {
      iVar4 = 0;
      bVar1 = true;
      do {
        do {
          lVar6 = FUN_00c8df10();
        } while (lVar6 == 0);
        if (!bVar1) break;
        pvVar7 = _pthread_getspecific((void*)puVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016670b0();
        if (local_50 == '\0') {
          if (local_58 != (void*)0x0) {
            FUN_00d50b00();
            if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01681a06;
          }
        }
        else if (local_58 != (void*)0x0) {
LAB_01681a06:
          pvVar7 = _pthread_getspecific((void*)puVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_0124d450();
          if (cVar3 != '\0') {
            pvVar7 = _pthread_getspecific((void*)puVar8);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124c6e0();
            puVar5 = local_58;
            if (local_50 == '\0') {
              if (local_58 != (void*)0x0) {
                FUN_00d50b00();
                if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01681ac0;
              }
            }
            else if (local_58 != (void*)0x0) {
LAB_01681ac0:
              local_50 = '\0';
              local_58 = (void*)0x0;
              local_48 = puVar5;
              local_40 = 0xffffffff;
              local_38 = 0;
              local_40._4_4_ = 0;
              while( true ) {
                if (local_40._4_4_ != 0) {
                  if (local_40._4_4_ < 1) {
                    iVar9 = -local_40._4_4_;
                  }
                  else {
                    iVar9 = (int)local_40 - local_40._4_4_;
                    local_40 = CONCAT44(local_40._4_4_,iVar9);
                    FUN_00d23690();
                    local_38 = local_38 + local_40._4_4_;
                    iVar9 = 0;
                  }
                  local_40 = CONCAT44(iVar9,(int)local_40);
                }
                lVar6 = (int64_t)(int)local_40;
                iVar9 = (int)local_40 + 1;
                local_40 = CONCAT44(local_40._4_4_,iVar9);
                if (*(int *)((int64_t)local_48 + 0xc) <= iVar9) break;
                local_58 = *(void**)(local_48[2] + 8 + lVar6 * 8);
                pvVar7 = _pthread_getspecific((void*)local_48[2]);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                cVar3 = FUN_01397570();
                if (cVar3 != '\0') {
                  FUN_00d235a0();
                }
              }
              puVar8 = local_48;
              FUN_00115190();
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
        bVar1 = iVar4 < (int)local_68;
      } while (iVar4 != (int)local_68);
    }
  }
  puVar5 = local_60;
  if (*(int *)((int64_t)local_60 + 0xc) != 0) {
    FUN_013206a0();
    puVar2 = local_58;
    if ((((local_50 == '\0') && (local_58 != (void*)0x0)) &&
        (FUN_00d50b00(), local_50 != '\0')) && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    local_68 = puVar2;
    local_50 = '\0';
    local_58 = (void*)0x0;
    local_48 = puVar5;
    local_38 = 0;
    local_40 = 0;
    if (0 < *(int *)((int64_t)puVar5 + 0xc)) {
      lVar6 = 0;
      do {
        local_58 = *(void**)(puVar5[2] + lVar6 * 8);
        pvVar7 = _pthread_getspecific((void*)puVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_78 = (int64_t *)0x0;
        local_70 = '\0';
        puVar8 = (void*)0x0;
        FUN_01397bb0(0,&local_78);
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          (**(code **)(*local_78 + 0x10))();
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
        local_40 = CONCAT44(local_40._4_4_,(int)lVar6);
        puVar5 = local_60;
      } while ((int)lVar6 < *(int *)((int64_t)local_60 + 0xc));
    }
    FUN_00115190();
    if (local_68 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}

