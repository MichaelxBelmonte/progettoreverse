// Function: FUN_01348960
// Address: 01348960
// Size: 2714 bytes
// Class: MUAudioSourceDescription


/* WARNING: Removing unreachable block (ram,0x01348bba) */
/* WARNING: Removing unreachable block (ram,0x01348bc3) */
/* WARNING: Removing unreachable block (ram,0x013489f0) */
/* WARNING: Removing unreachable block (ram,0x013489fc) */
/* WARNING: Removing unreachable block (ram,0x01349387) */
/* WARNING: Removing unreachable block (ram,0x01349397) */
/* WARNING: Removing unreachable block (ram,0x01349351) */
/* WARNING: Removing unreachable block (ram,0x0134935e) */
/* WARNING: Removing unreachable block (ram,0x01349190) */
/* WARNING: Removing unreachable block (ram,0x01349199) */

void FUN_01348960(float param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong in_RCX;
  char unaff_SIL;
  int iVar6;
  bool bVar7;
  float fVar8;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_a8;
  char local_a0;
  longlong local_80;
  char local_78;
  int local_64;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if ((local_a0 == '\0') && (local_a8 != 0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014ed740();
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  if ((local_a0 == '\0') && (local_a8 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pVar5 = (pthread_key_t)in_RCX;
  if (local_a8 != 0) {
    if (*(int *)(local_a8 + 0xc) < 1) {
      local_64 = 0x7fffffff;
    }
    else {
      local_64 = 0x7fffffff;
      iVar6 = 0;
      do {
        pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef8d0();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar8 = (float)FUN_0125a2c0();
        pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012595a0(fVar8 + param_1 + DAT_02394254);
        pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012595a0(fVar8 + param_1);
        if (unaff_SIL != '\0') {
          pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          if (local_40 == 0) {
            bVar7 = false;
          }
          else {
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e7fb0();
            if (local_60 == 0) {
              bVar7 = false;
            }
            else {
              pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e7fb0();
              pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0150eb60();
              if (local_108 == 0) {
                bVar7 = false;
              }
              else {
                pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e930();
                if (local_f8 == 0) {
                  bVar7 = false;
                }
                else {
                  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
                  if (pvVar3 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0125e930();
                  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
                  if (pvVar3 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0152ebe0();
                  bVar7 = local_118 != 0;
                  if ((local_110 != '\0') && (local_118 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_c0 != '\0') && (local_c8 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_f0 != '\0') && (local_f8 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_100 != '\0') && (local_108 != 0)) {
                FUN_00d50b20();
              }
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (bVar7) {
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e7fb0();
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0150eb60();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01822e80();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar1 = FUN_01507f00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              in_RCX = local_40;
            }
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125dfa0();
            iVar2 = FUN_01773f20();
            if (local_64 == 0x7fffffff) {
              local_64 = iVar1 - iVar2;
            }
            if (local_40 != 0) {
              FUN_00d50b20();
              FUN_00d50b20();
            }
          }
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        pVar5 = (pthread_key_t)in_RCX;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(local_a8 + 0xc));
    }
    FUN_0015edf0();
    FUN_00d50b20();
    if (local_64 != 0x7fffffff) {
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ed740();
    }
  }
  if (local_a8 != 0) {
    FUN_00d50b20();
  }
  return;
}


