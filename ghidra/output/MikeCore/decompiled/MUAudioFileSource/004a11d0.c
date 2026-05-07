// Function: FUN_004a11d0
// Address: 004a11d0
// Size: 947 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x004a1430) */
/* WARNING: Removing unreachable block (ram,0x004a143c) */
/* WARNING: Removing unreachable block (ram,0x004a13a0) */
/* WARNING: Removing unreachable block (ram,0x004a13a9) */
/* WARNING: Removing unreachable block (ram,0x004a154d) */
/* WARNING: Removing unreachable block (ram,0x004a1556) */
/* WARNING: Removing unreachable block (ram,0x004a127a) */
/* WARNING: Removing unreachable block (ram,0x004a1283) */
/* WARNING: Removing unreachable block (ram,0x004a12ef) */
/* WARNING: Removing unreachable block (ram,0x004a12f8) */

void FUN_004a11d0(pthread_key_t param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_a0;
  char local_98;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_004a1563;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_004a1563;
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = (pthread_key_t)local_40;
  }
  FUN_012e7fb0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_004a12fd;
    }
  }
  else if (local_40 != 0) {
LAB_004a12fd:
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    local_40 = *unaff_RSI;
    local_38 = '\0';
    FUN_00d23d20();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150f1c0();
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb450();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0044be80();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_004a1563:
  *unaff_RDI = plVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


