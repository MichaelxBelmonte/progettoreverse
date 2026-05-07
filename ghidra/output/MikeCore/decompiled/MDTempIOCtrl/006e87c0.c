// Function: FUN_006e87c0
// Address: 006e87c0
// Size: 515 bytes
// Class: MDTempIOCtrl


/* WARNING: Removing unreachable block (ram,0x006e896a) */
/* WARNING: Removing unreachable block (ram,0x006e8973) */
/* WARNING: Removing unreachable block (ram,0x006e8998) */
/* WARNING: Removing unreachable block (ram,0x006e89a1) */
/* WARNING: Removing unreachable block (ram,0x006e8900) */
/* WARNING: Removing unreachable block (ram,0x006e8909) */

void FUN_006e87c0(pthread_key_t param_1)

{
  void *pvVar1;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  bool bVar2;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  (**(code **)(*(longlong *)*unaff_RSI + 0x5d8))();
  if (local_30 == 0) {
    bVar2 = false;
  }
  else {
    (**(code **)(*(longlong *)*unaff_RSI + 0x5d8))();
    FUN_006f3f00();
    bVar2 = local_50 != 0;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (bVar2) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x5d8))();
    FUN_006f3f00();
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb450();
    if (local_30 == 0) {
      bVar2 = false;
    }
    else if (local_28 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
    }
    else {
      bVar2 = true;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar2 = false;
    local_30 = 0;
  }
  if (*(longlong *)(unaff_RDI + 0x70) != 0) {
    FUN_004501b0();
  }
  if (*(longlong *)(unaff_RDI + 0x78) != 0) {
    FUN_004501b0();
  }
  if ((bVar2) && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}


