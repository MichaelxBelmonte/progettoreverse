// Function: FUN_01a2fbc0
// Address: 01a2fbc0
// Size: 1206 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01a30056) */
/* WARNING: Removing unreachable block (ram,0x01a3005f) */

undefined4 FUN_01a2fbc0(pthread_key_t param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012dff00();
  if (local_b8 == 0) {
    cVar2 = '\x01';
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    if (local_a8 == 0) {
      cVar2 = '\x01';
    }
    else {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_0125a2d0();
      cVar2 = '\x01';
      if (cVar1 != '\0') {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff70();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_0125a2d0();
        cVar2 = '\x01';
        if (cVar1 != '\0') {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff00();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_01263cf0();
          cVar2 = '\x01';
          if (cVar1 == '\0') {
            pvVar4 = _pthread_getspecific(param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff70();
            pvVar4 = _pthread_getspecific(param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_01263cf0();
            cVar2 = '\x01';
            if (cVar1 == '\0') {
              pvVar4 = _pthread_getspecific(param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dff00();
              pvVar4 = _pthread_getspecific(param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar1 = FUN_01263ef0();
              cVar2 = '\x01';
              if (cVar1 == '\0') {
                pvVar4 = _pthread_getspecific(param_1);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012dff70();
                pvVar4 = _pthread_getspecific(param_1);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                cVar2 = FUN_01263ef0();
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    uVar3 = FUN_01a5a210();
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


