// Function: FUN_01305350
// Address: 01305350
// Size: 3562 bytes
// Class: Unknown

uint64_t FUN_01305350(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char *pcVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t *arg1;
  char *pcVar10;
  int64_t lVar11;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  if (*arg1 != 0) {
    FUN_012e7210();
    FUN_00d23310();
    local_70 = local_38[0];
    pcVar3 = &local_70;
    if (local_38[0] != '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126ef70();
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
LAB_0130567f:
        uVar9 = 0;
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0124e000();
        if (local_38[0] == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d51d20();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) goto LAB_0130567f;
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7210();
        lVar8 = CONCAT71(uStack_6f,local_70);
        FUN_00d23310();
        pcVar3 = &local_88;
        pcVar10 = local_38;
        if (local_38[0] == '\0') {
          pcVar10 = pcVar3;
        }
        local_88 = local_38[0];
        *pcVar10 = '\0';
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pVar6 = (void*)pcVar3;
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0124c710();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (lVar8 != 0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013941c0();
        if (local_38[0] == '\0') {
          if (local_40 != 0) goto LAB_013057a2;
        }
        else if (local_40 != 0) {
          FUN_00d50b20();
LAB_013057a2:
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01393860();
          local_a8 = 0;
          if (local_38[0] == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38[0] = '\0';
          }
          local_a8 = '\x01';
          local_b0 = local_40;
          FUN_01394160();
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0134a780();
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_e0 = (int64_t *)0x0;
        local_d8 = '\0';
        pVar6 = 0;
        FUN_01397bb0(0,&local_e0);
        if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
          (**(code **)(*local_e0 + 0x10))();
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7210();
        local_98 = 0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_98 = '\x01';
        local_a0 = local_50;
        local_d0 = local_40;
        local_c8 = '\0';
        local_c0 = 0;
        local_b8 = '\0';
        FUN_012f0b60(&local_d0,&local_a0,1,0,&local_c0);
        if ((local_38[0] == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        FUN_012e7210();
        FUN_004f2260(0,FUN_01306840);
        if (local_38[0] == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        uVar7 = 0;
        FUN_004f2260(0,FUN_01306840);
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar8 = local_40;
        if (*(int *)(local_40 + 0xc) < 1) {
          if (local_40 != 0) goto LAB_01306128;
        }
        else {
          lVar11 = 0;
          local_90 = local_40;
          do {
            if (*(int *)(local_90 + 0xc) <= lVar11) break;
            lVar1 = *(int64_t *)(*(int64_t *)(local_90 + 0x10) + lVar11 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            lVar2 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + lVar11 * 8);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            pvVar4 = _pthread_getspecific((void*)uVar7);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            if ((local_38[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            lVar8 = local_40;
            if (local_40 != 0) {
              pvVar4 = _pthread_getspecific((void*)uVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e930();
              if ((local_38[0] != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 != 0) {
                pvVar4 = _pthread_getspecific((void*)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e930();
                pvVar4 = _pthread_getspecific((void*)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0152ebe0();
                pvVar4 = _pthread_getspecific((void*)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar4 = _pthread_getspecific((void*)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e930();
                pvVar4 = _pthread_getspecific((void*)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0152ebe0();
                pvVar4 = _pthread_getspecific((void*)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01507970();
                FUN_015084d0();
                if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
                  FUN_00d50b20();
                }
                if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
                  FUN_00d50b20();
                }
                if ((local_38[0] != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_48 != '\0') && (local_50 != 0)) {
                  FUN_00d50b20();
                }
                pvVar4 = _pthread_getspecific((void*)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e930();
                pvVar4 = _pthread_getspecific((void*)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0152ebe0();
                pvVar4 = _pthread_getspecific((void*)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar4 = _pthread_getspecific((void*)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e930();
                pvVar4 = _pthread_getspecific((void*)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0152ebe0();
                lVar8 = CONCAT71(uStack_6f,local_70);
                pvVar4 = _pthread_getspecific((void*)uVar7);
                if (pvVar4 != (void *)0x0) {
                  lVar8 = CONCAT71(uStack_6f,local_70);
                  lVar5 = FUN_00e8b990();
                  if (lVar5 != 0) {
                    lVar8 = *(int64_t *)
                             (lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
                  }
                }
                FUN_01508610();
                FUN_015085a0();
                if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
                  FUN_00d50b20();
                }
                if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
                  FUN_00d50b20();
                }
                if ((local_38[0] != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_48 != '\0') && (local_50 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < *(int *)(local_40 + 0xc));
LAB_01306128:
          FUN_00d50b20();
          local_40 = lVar8;
        }
        FUN_00d50b20();
        uVar9 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_01306150;
    }
  }
  uVar9 = 0;
LAB_01306150:
  return uVar9 & 0xffffffff;
}

