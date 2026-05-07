// Function: FUN_01398e20
// Address: 01398e20
// Size: 1136 bytes
// Class: GNDate

void FUN_01398e20(void)

{
  int64_t lVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  void*puVar8;
  int iVar9;
  int64_t this_ptr;
  int64_t local_80;
  char local_78 [8];
  int64_t local_70;
  uint64_t local_68;
  int local_60;
  int64_t local_58;
  char local_50 [32];
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar8 = &g_02572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
    if (0 < *(int *)(lVar1 + 0xc)) {
      puVar8 = (void*)0x0;
      do {
        lVar4 = local_80;
        pvVar3 = _pthread_getspecific((void*)puVar8);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        local_50[8] = local_78[0];
        pcVar6 = local_50 + 8;
        pcVar5 = local_78;
        if (local_78[0] == '\0') {
          pcVar5 = pcVar6;
        }
        *pcVar5 = '\0';
        if ((local_78[0] != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (local_80 != 0) {
          pvVar3 = _pthread_getspecific((void*)pcVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dd790();
          if (local_78[0] == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
              if ((local_78[0] != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01398ff8;
            }
          }
          else if (local_80 != 0) {
LAB_01398ff8:
            local_78[0] = '\0';
            local_80 = 0;
            local_70 = lVar4;
            local_68 = 0xffffffff;
            local_60 = 0;
            local_68._4_4_ = 0;
            while( true ) {
              if (local_68._4_4_ != 0) {
                if (local_68._4_4_ < 1) {
                  iVar9 = -local_68._4_4_;
                }
                else {
                  iVar9 = (int)local_68 - local_68._4_4_;
                  local_68 = CONCAT44(local_68._4_4_,iVar9);
                  FUN_00d23690();
                  local_60 = local_60 + local_68._4_4_;
                  iVar9 = 0;
                }
                local_68 = CONCAT44(iVar9,(int)local_68);
              }
              lVar4 = (int64_t)(int)local_68;
              iVar9 = (int)local_68 + 1;
              local_68 = CONCAT44(local_68._4_4_,iVar9);
              if (*(int *)(local_70 + 0xc) <= iVar9) break;
              local_80 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + 8 + lVar4 * 8);
              pvVar3 = _pthread_getspecific((void*)*(int64_t *)(local_70 + 0x10));
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_011ef8d0();
              lVar4 = local_58;
              local_50[0x10] = local_50[0];
              pcVar6 = local_50 + 0x10;
              pcVar5 = local_50;
              if (local_50[0] == '\0') {
                pcVar5 = pcVar6;
              }
              *pcVar5 = '\0';
              if ((local_50[0] != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              if (lVar4 != 0) {
                pvVar3 = _pthread_getspecific((void*)pcVar6);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266fe0();
                lVar4 = local_58;
                local_50[0x18] = local_50[0];
                pcVar6 = local_50;
                if (local_50[0] == '\0') {
                  pcVar6 = local_50 + 0x18;
                }
                *pcVar6 = '\0';
                if ((local_50[0] != '\0') && (local_58 != 0)) {
                  FUN_00d50b20();
                }
                if (lVar4 != 0) {
                  local_50[0] = '\0';
                  local_58 = lVar4;
                  FUN_00d235a0();
                  if ((local_50[0] != '\0') && (local_58 != 0)) {
                    FUN_00d50b20();
                  }
                  if (local_50[0x18] != '\0') {
                    FUN_00d50b20();
                  }
                }
                if (local_50[0x10] != '\0') {
                  FUN_00d50b20();
                }
              }
            }
            FUN_0015edf0();
            FUN_00d50b20();
          }
          if (local_50[8] != '\0') {
            FUN_00d50b20();
          }
        }
        uVar7 = (void*)puVar8 + 1;
        puVar8 = (void*)(uint64_t)uVar7;
      } while ((int)uVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_001150f0();
    FUN_00d50b20();
    if (puVar2 == (void*)0x0) {
      return;
    }
  }
  for (iVar9 = 0; iVar9 < *(int *)((int64_t)puVar2 + 0xc); iVar9 = iVar9 + 1) {
    pvVar3 = _pthread_getspecific((void*)puVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e57f0();
  }
  FUN_000be170();
  FUN_00d50b20();
  return;
}

