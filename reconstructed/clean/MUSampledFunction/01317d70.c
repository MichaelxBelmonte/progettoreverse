// Function: FUN_01317d70
// Address: 01317d70
// Size: 1287 bytes
// Class: MUSampledFunction

uint64_t FUN_01317d70(void* param_1,byte param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  byte bVar4;
  void *pvVar5;
  int64_t lVar6;
  uint uVar7;
  uint uVar8;
  void* pVar9;
  int64_t lVar10;
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t *plVar11;
  int64_t local_f8;
  char local_f0;
  int64_t local_98;
  char local_90;
  int64_t local_60;
  char local_58;
  int local_48;
  
  if (*this_ptr != 0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb480();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_002aa7d0();
    if ((local_f0 == '\0') && (local_f8 != 0)) {
      FUN_00d50b00();
    }
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_f8 != 0) {
      if (0 < *(int *)(local_f8 + 0xc)) {
        uVar7 = 0;
        do {
          lVar2 = local_60;
          plVar1 = *(int64_t **)(*(int64_t *)(local_f8 + 0x10) + (uint64_t)uVar7 * 8);
          uVar8 = uVar7;
          if (unaff_SIL == '\0') {
            pvVar5 = _pthread_getspecific(uVar7);
            plVar11 = plVar1;
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar11 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            cVar3 = (**(code **)(*plVar11 + 0x3d8))();
            if (cVar3 != '\0') goto LAB_01317f44;
            if (param_2 != 0) {
              pvVar5 = _pthread_getspecific(uVar8);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012cb5e0();
            }
          }
          else {
LAB_01317f44:
            pvVar5 = _pthread_getspecific(uVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124c6e0();
            if (local_90 == '\0') {
              if (local_98 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_90 = '\0';
            }
            FUN_01318520();
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            if (local_98 != 0) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if (local_60 != 0) {
              local_58 = '\0';
              local_60 = 0;
              local_48 = -1;
              while( true ) {
                lVar6 = (int64_t)local_48;
                local_48 = local_48 + 1;
                if (*(int *)(lVar2 + 0xc) <= local_48) break;
                lVar10 = *(int64_t *)(lVar2 + 0x10);
                local_60 = *(int64_t *)(lVar10 + 8 + lVar6 * 8);
                pvVar5 = _pthread_getspecific((void*)lVar10);
                pVar9 = (void*)lVar10;
                plVar11 = plVar1;
                if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                  plVar11 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
                }
                bVar4 = (**(code **)(*plVar11 + 1000))();
                if ((bVar4 & param_2) == 1) {
                  pvVar5 = _pthread_getspecific(pVar9);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0124c8f0();
                }
              }
              FUN_00115190();
              FUN_00d50b20();
            }
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < *(int *)(local_f8 + 0xc));
      }
      FUN_00115e00();
      FUN_00d50b20();
    }
  }
  return 1;
}

