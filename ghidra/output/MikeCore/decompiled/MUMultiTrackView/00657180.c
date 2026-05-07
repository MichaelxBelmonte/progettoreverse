// Function: FUN_00657180
// Address: 00657180
// Size: 831 bytes
// Class: MUMultiTrackView


/* WARNING: Removing unreachable block (ram,0x006571eb) */
/* WARNING: Removing unreachable block (ram,0x006571f4) */
/* WARNING: Removing unreachable block (ram,0x00657475) */
/* WARNING: Removing unreachable block (ram,0x00657482) */
/* WARNING: Removing unreachable block (ram,0x006573fa) */
/* WARNING: Removing unreachable block (ram,0x00657403) */

int FUN_00657180(undefined8 param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  undefined8 in_RCX;
  char unaff_SIL;
  int iVar4;
  undefined8 uVar5;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_40;
  char local_38;
  
  FUN_0063f230();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  FUN_00261fb0();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  if (*(int *)(local_80 + 0xc) == 0) {
    iVar4 = 0;
  }
  else {
    if (*(int *)(local_80 + 0xc) < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      do {
        if (unaff_SIL != '\0') {
          pvVar2 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_0132d610();
          pVar3 = (pthread_key_t)in_RCX;
          if (local_a0 == 0) {
            FUN_0123fbe0(uVar5,4);
          }
          else {
            pvVar2 = _pthread_getspecific(pVar3);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0132d610();
            pvVar2 = _pthread_getspecific(pVar3);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar5 = FUN_00e7bdb0();
            in_RCX = 0;
            FUN_016c47d0(0,uVar5);
          }
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if (((local_a0 != 0) && (local_88 != '\0')) && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          FUN_0123fef0();
          uVar1 = FUN_0123ff00();
          FUN_016c0b50(param_1,uVar1);
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          FUN_00656960();
          if (local_40 != 0) {
            FUN_00d50b20();
            FUN_00d50b20();
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(local_80 + 0xc));
    }
    FUN_00115190();
  }
  FUN_00d50b20();
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  return iVar4;
}


