// Function: FUN_016e4c80
// Address: 016e4c80
// Size: 989 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x016e4d5a) */
/* WARNING: Removing unreachable block (ram,0x016e4d9d) */
/* WARNING: Removing unreachable block (ram,0x016e4da2) */
/* WARNING: Removing unreachable block (ram,0x016e4daa) */
/* WARNING: Removing unreachable block (ram,0x016e4d5e) */

void FUN_016e4c80(pthread_key_t param_1,ulonglong param_2)

{
  char cVar1;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  bool bVar4;
  longlong local_78;
  char local_70;
  ulonglong local_48;
  char local_40;
  
  local_48 = local_48 & 0xffffffff00000000;
  if (((unaff_RSI >> 0x20 != 0) && (cVar1 = FUN_00e7c630(), cVar1 != '\0')) ||
     (param_2 >> 0x20 == 0)) goto LAB_016e4f92;
  FUN_016ebc80();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_016e4d06;
    FUN_00d50b00();
LAB_016e4db5:
    uVar3 = local_48;
    if (local_48 != 0) goto LAB_016e4dbe;
LAB_016e4f72:
    bVar4 = true;
  }
  else {
    if (local_48 != 0) goto LAB_016e4db5;
LAB_016e4d06:
    FUN_016d5810();
    if ((local_48 != 0) && (local_40 == '\0')) {
      FUN_00d50b00();
    }
    if (local_48 != 0) {
      FUN_016ebbb0();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_016e4db5;
    }
    uVar3 = **(ulonglong **)(*(longlong *)(unaff_RDI + 0x60) + 0x10);
    if (uVar3 == 0) goto LAB_016e4f72;
    FUN_00d50b00();
LAB_016e4dbe:
    FUN_00d50b00();
    do {
      while( true ) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_48 = FUN_01909dc0();
        FUN_00e7b820();
        FUN_01909fa0();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01909dc0();
        FUN_016da710();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        FUN_016ebbb0();
        if (local_48 != uVar3) break;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
LAB_016e4df0:
        if (uVar3 == 0) goto LAB_016e4f66;
      }
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        bVar4 = uVar3 != 0;
        uVar3 = local_48;
        if (bVar4) {
          FUN_00d50b20();
        }
        goto LAB_016e4df0;
      }
      if (uVar3 != 0) {
        FUN_00d50b20();
      }
      uVar3 = local_48;
    } while (local_48 != 0);
LAB_016e4f66:
    bVar4 = false;
  }
  FUN_016ec0f0();
  if (!bVar4) {
    FUN_00d50b20();
  }
LAB_016e4f92:
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_019012b0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_019079b0();
  FUN_01909fa0();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}


