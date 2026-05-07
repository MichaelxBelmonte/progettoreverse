// Function: FUN_01b61dc0
// Address: 01b61dc0
// Size: 545 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01b61f21) */
/* WARNING: Removing unreachable block (ram,0x01b61f2e) */
/* WARNING: Removing unreachable block (ram,0x01b61e3c) */
/* WARNING: Removing unreachable block (ram,0x01b61e45) */
/* WARNING: Removing unreachable block (ram,0x01b61fa4) */
/* WARNING: Removing unreachable block (ram,0x01b61fad) */

ulonglong FUN_01b61dc0(pthread_key_t param_1,ulonglong param_2)

{
  int iVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong local_38;
  char local_30;
  
  param_2 = param_2 & 0xffffffff;
  FUN_01b5e510();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      goto joined_r0x01b61e08;
    }
  }
  else {
joined_r0x01b61e08:
    if ((local_38 != 0) && ((char)param_2 != '\0')) {
      FUN_01ca6970();
      if ((local_30 == '\0') && (local_38 != 0)) {
        FUN_00d50b00();
      }
      FUN_01ca5d90();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar1 = FUN_015b7ba0();
      param_2 = DAT_027e4cc8;
      if (iVar1 == 3) {
        FUN_01b5e420();
        param_2 = DAT_027e4cc0;
        if ((local_30 == '\0') && (local_38 != 0)) {
          FUN_00d50b00();
          param_2 = DAT_027e4cc0;
        }
        DAT_027e4cc0 = param_2;
        if (param_2 != 0) {
          FUN_00d50b00();
        }
        FUN_01ca93d0();
        if (param_2 != 0) {
          FUN_00d50b20();
        }
        if (local_38 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (DAT_027e4cc8 != 0) {
          FUN_00d50b00();
        }
        FUN_01ca93d0();
        if (param_2 != 0) {
          FUN_00d50b20();
        }
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_38 != 0) {
      uVar3 = CONCAT71((int7)(param_2 >> 8),1);
      FUN_00d50b20();
      goto LAB_01b61fd2;
    }
  }
  uVar3 = 0;
LAB_01b61fd2:
  return uVar3 & 0xffffffff;
}


