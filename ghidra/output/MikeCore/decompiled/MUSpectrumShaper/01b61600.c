// Function: FUN_01b61600
// Address: 01b61600
// Size: 696 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01b6185d) */
/* WARNING: Removing unreachable block (ram,0x01b6186a) */

ulonglong FUN_01b61600(pthread_key_t param_1,ulonglong param_2)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  uVar2 = local_68;
  FUN_01b5e510();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto joined_r0x01b6164a;
    }
LAB_01b618be:
    uVar2 = 0;
  }
  else {
joined_r0x01b6164a:
    if ((local_68 == 0) || ((char)(param_2 & 0xffffffff) == '\0')) {
LAB_01b618ad:
      bVar4 = local_68 == 0;
      local_68 = param_2 & 0xffffffff;
      if (bVar4) goto LAB_01b618be;
    }
    else {
      FUN_01b5e390();
      if ((local_60 == '\0') || (local_68 == 0)) {
        if (local_68 == 0) {
          pvVar1 = _pthread_getspecific(param_1);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_015b9980();
          goto LAB_01b618ad;
        }
      }
      else {
        FUN_00d50b20();
      }
      FUN_01b5e390();
      FUN_01bd2e70();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        local_60 = '\0';
        local_68 = 0;
        if (0 < *(int *)(uVar2 + 0xc)) {
          lVar3 = 0;
          do {
            local_68 = *(ulonglong *)(*(longlong *)(uVar2 + 0x10) + lVar3 * 8);
            pvVar1 = _pthread_getspecific(param_1);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar1 = _pthread_getspecific(param_1);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015b7ba0();
            FUN_017eca70();
            pvVar1 = _pthread_getspecific(param_1);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015b9980();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            lVar3 = lVar3 + 1;
          } while ((int)lVar3 < *(int *)(uVar2 + 0xc));
        }
        FUN_01be3b70();
        FUN_00d50b20();
      }
      FUN_01b5e1b0();
      FUN_01bd5d40();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar2 = CONCAT71((int7)(local_68 >> 8),1);
    FUN_00d50b20();
  }
  return uVar2 & 0xffffffff;
}


