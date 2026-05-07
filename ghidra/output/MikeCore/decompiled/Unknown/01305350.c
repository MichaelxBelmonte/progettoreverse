// Function: FUN_01305350
// Address: 01305350
// Size: 3562 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01305977) */
/* WARNING: Removing unreachable block (ram,0x013056f3) */
/* WARNING: Removing unreachable block (ram,0x013056ff) */
/* WARNING: Removing unreachable block (ram,0x0130553d) */
/* WARNING: Removing unreachable block (ram,0x01305585) */
/* WARNING: Removing unreachable block (ram,0x0130558a) */
/* WARNING: Removing unreachable block (ram,0x01305592) */
/* WARNING: Removing unreachable block (ram,0x0130559f) */
/* WARNING: Removing unreachable block (ram,0x01305bd7) */
/* WARNING: Removing unreachable block (ram,0x01305be5) */
/* WARNING: Removing unreachable block (ram,0x01305543) */
/* WARNING: Removing unreachable block (ram,0x013055be) */
/* WARNING: Removing unreachable block (ram,0x0130554c) */
/* WARNING: Removing unreachable block (ram,0x0130596b) */
/* WARNING: Removing unreachable block (ram,0x01305b78) */
/* WARNING: Removing unreachable block (ram,0x01305bb3) */
/* WARNING: Removing unreachable block (ram,0x01305bb8) */
/* WARNING: Removing unreachable block (ram,0x01305bc0) */
/* WARNING: Removing unreachable block (ram,0x01305bea) */
/* WARNING: Removing unreachable block (ram,0x01305bc5) */
/* WARNING: Removing unreachable block (ram,0x01305b7e) */
/* WARNING: Removing unreachable block (ram,0x01305bd2) */
/* WARNING: Removing unreachable block (ram,0x01305b83) */

ulonglong FUN_01305350(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *unaff_RSI;
  char *pcVar10;
  longlong lVar11;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  if (*unaff_RSI != 0) {
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
        pVar6 = (pthread_key_t)pcVar3;
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
        local_e0 = (longlong *)0x0;
        local_d8 = '\0';
        pVar6 = 0;
        FUN_01397bb0(0,&local_e0);
        if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
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
            lVar1 = *(longlong *)(*(longlong *)(local_90 + 0x10) + lVar11 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            lVar2 = *(longlong *)(*(longlong *)(local_40 + 0x10) + lVar11 * 8);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            if ((local_38[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            lVar8 = local_40;
            if (local_40 != 0) {
              pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e930();
              if ((local_38[0] != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 != 0) {
                pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e930();
                pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0152ebe0();
                pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e930();
                pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0152ebe0();
                pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
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
                pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e930();
                pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0152ebe0();
                pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e930();
                pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0152ebe0();
                lVar8 = CONCAT71(uStack_6f,local_70);
                pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
                if (pvVar4 != (void *)0x0) {
                  lVar8 = CONCAT71(uStack_6f,local_70);
                  lVar5 = FUN_00e8b990();
                  if (lVar5 != 0) {
                    lVar8 = *(longlong *)
                             (lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
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
        uVar9 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
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


