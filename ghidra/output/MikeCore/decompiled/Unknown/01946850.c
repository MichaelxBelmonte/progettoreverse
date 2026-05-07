// Function: FUN_01946850
// Address: 01946850
// Size: 502 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x019469ea) */
/* WARNING: Removing unreachable block (ram,0x019469f3) */

ulonglong FUN_01946850(undefined4 param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong *unaff_RDI;
  longlong local_78;
  char local_70;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int *)(unaff_RDI[0x41] + 0xc) < 2) {
    uVar6 = 0;
  }
  else {
    FUN_00d23310();
    pVar4 = CONCAT31((int3)((uint)param_1 >> 8),local_40[0]);
    pcVar5 = local_38;
    if (local_40[0] != '\0') {
      pcVar5 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_01326de0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    uVar6 = (ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == 3);
    if ((iVar2 == 3) && (param_2 != '\0')) {
      lVar1 = unaff_RDI[0x41];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01959300();
      if (local_40[0] == '\0') {
        if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0xda0))();
      (**(code **)(*unaff_RDI + 0xdb8))();
      uVar6 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return uVar6 & 0xffffffff;
}


