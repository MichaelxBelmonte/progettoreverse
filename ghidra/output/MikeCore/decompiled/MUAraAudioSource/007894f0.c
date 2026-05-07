// Function: FUN_007894f0
// Address: 007894f0
// Size: 730 bytes
// Class: MUAraAudioSource


/* WARNING: Removing unreachable block (ram,0x00789762) */
/* WARNING: Removing unreachable block (ram,0x0078976f) */
/* WARNING: Removing unreachable block (ram,0x007897b4) */
/* WARNING: Removing unreachable block (ram,0x007897c1) */

void FUN_007894f0(pthread_key_t param_1)

{
  void *pvVar1;
  longlong *unaff_RDI;
  int iVar2;
  bool bVar3;
  longlong local_78;
  char local_70;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x628))();
  if (local_78 == 0) {
    bVar3 = true;
  }
  else {
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    bVar3 = local_40 == 0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar3) {
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      if (0 < *(int *)(local_78 + 0xc)) {
        iVar2 = 0;
        do {
          FUN_004f9670();
          pvVar1 = _pthread_getspecific(param_1);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004f7990();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(local_78 + 0xc));
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
  return;
}


