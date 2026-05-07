// Function: FUN_019f4110
// Address: 019f4110
// Size: 1224 bytes
// Class: MUPitchSystemRulerView


/* WARNING: Removing unreachable block (ram,0x019f4419) */
/* WARNING: Removing unreachable block (ram,0x019f4425) */
/* WARNING: Removing unreachable block (ram,0x019f4599) */
/* WARNING: Removing unreachable block (ram,0x019f448b) */
/* WARNING: Removing unreachable block (ram,0x019f4499) */
/* WARNING: Removing unreachable block (ram,0x019f44b6) */
/* WARNING: Removing unreachable block (ram,0x019f44a6) */
/* WARNING: Removing unreachable block (ram,0x019f44b9) */
/* WARNING: Removing unreachable block (ram,0x019f44de) */
/* WARNING: Removing unreachable block (ram,0x019f44d0) */
/* WARNING: Removing unreachable block (ram,0x019f447a) */
/* WARNING: Removing unreachable block (ram,0x019f44e3) */
/* WARNING: Removing unreachable block (ram,0x019f44eb) */
/* WARNING: Removing unreachable block (ram,0x019f44f3) */
/* WARNING: Removing unreachable block (ram,0x019f4551) */
/* WARNING: Removing unreachable block (ram,0x019f4556) */
/* WARNING: Removing unreachable block (ram,0x019f455f) */
/* WARNING: Removing unreachable block (ram,0x019f456b) */
/* WARNING: Removing unreachable block (ram,0x019f4570) */
/* WARNING: Removing unreachable block (ram,0x019f4579) */
/* WARNING: Removing unreachable block (ram,0x019f4585) */
/* WARNING: Removing unreachable block (ram,0x019f458a) */
/* WARNING: Removing unreachable block (ram,0x019f459e) */
/* WARNING: Removing unreachable block (ram,0x019f45a4) */
/* WARNING: Removing unreachable block (ram,0x019f45ad) */

ulonglong FUN_019f4110(undefined8 param_1,char param_2)

{
  int iVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  char *pcVar4;
  longlong *unaff_RDI;
  undefined8 unaff_R15;
  ulonglong uVar5;
  longlong local_c8;
  char local_c0;
  longlong local_98;
  char local_90;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0xe20))();
  iVar1 = *(int *)(local_48 + 0xc);
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 1) {
    (**(code **)(*unaff_RDI + 0xe20))();
    FUN_00d23310();
    pVar3 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_40[0]);
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01270ab0();
    if (local_48 == 0) {
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012708c0();
      uVar5 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),local_98 == 0);
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar5 = 0;
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (param_2 == '\x01' && (char)uVar5 == '\0') {
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012708c0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270ab0();
      }
      else {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012708c0();
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_c8 = 0;
        local_c0 = '\0';
        FUN_00d50b00();
        FUN_01a43090(&stack0xffffffffffffff78,&local_c8);
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    uVar5 = uVar5 ^ 1;
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5 & 0xffffffff;
}


