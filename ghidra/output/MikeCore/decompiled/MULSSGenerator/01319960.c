// Function: FUN_01319960
// Address: 01319960
// Size: 2103 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x01319ae7) */
/* WARNING: Removing unreachable block (ram,0x01319af0) */
/* WARNING: Removing unreachable block (ram,0x013199f2) */
/* WARNING: Removing unreachable block (ram,0x013199fe) */
/* WARNING: Removing unreachable block (ram,0x01319e3c) */
/* WARNING: Removing unreachable block (ram,0x01319e45) */
/* WARNING: Removing unreachable block (ram,0x01319f17) */
/* WARNING: Removing unreachable block (ram,0x01319f20) */
/* WARNING: Removing unreachable block (ram,0x0131a105) */
/* WARNING: Removing unreachable block (ram,0x0131a10e) */

undefined4 FUN_01319960(pthread_key_t param_1)

{
  bool bVar1;
  undefined4 uVar2;
  void *pvVar3;
  char unaff_SIL;
  int iVar4;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined4 local_44;
  longlong local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      FUN_00d50b00();
      goto LAB_01319a03;
    }
  }
  else if (local_a0 != 0) {
LAB_01319a03:
    if (*(int *)(local_a0 + 0xc) < 1) {
      local_44 = 1;
    }
    else {
      local_44 = 1;
      iVar4 = 0;
      do {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270ab0();
        if (local_38 == '\0') {
          if (local_40 == 0) goto LAB_01319ba0;
          FUN_00d50b00();
LAB_01319b00:
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 == 0) {
            bVar1 = false;
            uVar2 = 0;
            if (unaff_SIL != '\0') {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dffb0();
LAB_0131a182:
              bVar1 = false;
              uVar2 = local_44;
            }
          }
          else {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff70();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_40 != 0) {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dff00();
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dff70();
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              if ((local_a8 != '\0') && (local_b0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 != local_b0) {
                pvVar3 = _pthread_getspecific(param_1);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012dff70();
                if ((local_38 == '\0') && (local_40 != 0)) {
                  FUN_00d50b00();
                }
                if (unaff_SIL == '\0') {
                  local_44 = 0;
                }
                else {
                  pvVar3 = _pthread_getspecific(param_1);
                  if (pvVar3 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012dffb0();
                }
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
              }
              bVar1 = false;
              goto LAB_01319eae;
            }
            bVar1 = false;
            uVar2 = 0;
            if (unaff_SIL != '\0') {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dffb0();
              goto LAB_0131a182;
            }
          }
        }
        else {
          if (local_40 != 0) goto LAB_01319b00;
LAB_01319ba0:
          bVar1 = true;
LAB_01319eae:
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          uVar2 = local_44;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
              goto LAB_01319f30;
            }
          }
          else if (local_40 != 0) {
LAB_01319f30:
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff00();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff70();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if (local_40 != local_b0) {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dff00();
              if ((local_38 == '\0') && (local_40 != 0)) {
                FUN_00d50b00();
              }
              if (unaff_SIL == '\0') {
                local_44 = 0;
              }
              else {
                pvVar3 = _pthread_getspecific(param_1);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012dffb0();
              }
              if (local_40 != 0) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
            uVar2 = local_44;
          }
        }
        local_44 = uVar2;
        if (!bVar1) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(local_a0 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
    return local_44;
  }
  return 1;
}


