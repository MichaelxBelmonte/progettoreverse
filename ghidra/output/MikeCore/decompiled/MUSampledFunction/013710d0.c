// Function: FUN_013710d0
// Address: 013710d0
// Size: 2920 bytes
// Class: MUSampledFunction


/* WARNING: Removing unreachable block (ram,0x013717f6) */
/* WARNING: Removing unreachable block (ram,0x01371802) */
/* WARNING: Removing unreachable block (ram,0x01371467) */
/* WARNING: Removing unreachable block (ram,0x0137145b) */
/* WARNING: Removing unreachable block (ram,0x013714c7) */
/* WARNING: Removing unreachable block (ram,0x013714d3) */
/* WARNING: Removing unreachable block (ram,0x01371852) */
/* WARNING: Removing unreachable block (ram,0x0137185b) */
/* WARNING: Removing unreachable block (ram,0x01371c4a) */
/* WARNING: Removing unreachable block (ram,0x01371c57) */
/* WARNING: Removing unreachable block (ram,0x013717b7) */
/* WARNING: Removing unreachable block (ram,0x013717c4) */
/* WARNING: Removing unreachable block (ram,0x013711b5) */
/* WARNING: Removing unreachable block (ram,0x013711be) */
/* WARNING: Removing unreachable block (ram,0x01371149) */
/* WARNING: Removing unreachable block (ram,0x01371152) */
/* WARNING: Removing unreachable block (ram,0x0137121d) */
/* WARNING: Removing unreachable block (ram,0x01371226) */
/* WARNING: Removing unreachable block (ram,0x01371668) */
/* WARNING: Removing unreachable block (ram,0x01371671) */
/* WARNING: Removing unreachable block (ram,0x01371ad9) */
/* WARNING: Removing unreachable block (ram,0x01371ae2) */

ulonglong FUN_013710d0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014d1b50();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_014bc070();
  if (cVar1 == '\0') {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_014bc070();
    if (cVar1 == '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc420();
      if (local_40 == 0) {
        bVar9 = false;
      }
      else {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc420();
        bVar9 = local_60 == local_40;
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (bVar9) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc360();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc2e0();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc3d0();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
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
        uVar7 = *(uint *)(local_40 + 0xc);
        lVar6 = local_40;
        if (0 < (int)uVar7) {
          lVar8 = (ulonglong)uVar7 + 1;
          do {
            uVar7 = uVar7 - 1;
            pVar4 = uVar7;
            pvVar2 = _pthread_getspecific(uVar7);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            pvVar2 = _pthread_getspecific(pVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012708c0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            lVar6 = local_40;
            if (local_40 != 0) {
              pvVar2 = _pthread_getspecific(pVar4);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012708c0();
              pvVar2 = _pthread_getspecific(pVar4);
              if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
                lVar6 = *(longlong *)
                         (local_40 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
              }
              FUN_012dffb0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            if (local_40 != 0) {
              FUN_00d50b20();
            }
            lVar8 = lVar8 + -1;
          } while (1 < lVar8);
        }
        uVar5 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
        FUN_00d50b20();
      }
      else {
        uVar5 = 0;
        if (local_40 != 0) {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc360();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc2e0();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc3d0();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfcb0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfcb0();
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013ddf50();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfcb0();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dd790();
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
          uVar7 = *(uint *)(local_40 + 0xc);
          lVar6 = local_40;
          if (0 < (int)uVar7) {
            lVar8 = (ulonglong)uVar7 + 1;
            do {
              uVar7 = uVar7 - 1;
              pVar4 = uVar7;
              pvVar2 = _pthread_getspecific(uVar7);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_011ef8d0();
              if ((local_38 == '\0') && (local_40 != 0)) {
                FUN_00d50b00();
              }
              pvVar2 = _pthread_getspecific(pVar4);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar2 = _pthread_getspecific(pVar4);
              lVar6 = local_60;
              if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
                lVar6 = *(longlong *)
                         (local_60 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
              }
              FUN_012e5ae0();
              if (local_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              FUN_0132a0a0();
              if (local_40 != 0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 != 0) {
                FUN_00d50b20();
              }
              lVar8 = lVar8 + -1;
            } while (1 < lVar8);
          }
          uVar5 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
          FUN_00d50b20();
        }
      }
      goto LAB_013712ab;
    }
  }
  uVar5 = 0;
LAB_013712ab:
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}


