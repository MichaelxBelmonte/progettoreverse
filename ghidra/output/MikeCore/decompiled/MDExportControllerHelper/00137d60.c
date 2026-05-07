// Function: FUN_00137d60
// Address: 00137d60
// Size: 522 bytes
// Class: MDExportControllerHelper


/* WARNING: Removing unreachable block (ram,0x00137e71) */
/* WARNING: Removing unreachable block (ram,0x00137e7a) */
/* WARNING: Removing unreachable block (ram,0x00137df2) */
/* WARNING: Removing unreachable block (ram,0x00137dfb) */
/* WARNING: Removing unreachable block (ram,0x00137e15) */
/* WARNING: Removing unreachable block (ram,0x00137e1e) */

undefined8 FUN_00137d60(pthread_key_t param_1,int param_2)

{
  bool bVar1;
  void *pvVar2;
  longlong local_78;
  char local_70;
  longlong *local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_01caeb00();
  (**(code **)(*local_60 + 0x960))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_003ba620();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_00137e23;
    }
  }
  else if (local_40 != 0) {
LAB_00137e23:
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5f80();
    bVar1 = false;
    goto LAB_00137e87;
  }
  bVar1 = true;
LAB_00137e87:
  FUN_01e53c20();
  FUN_01e42030();
  FUN_01bbfb40();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_01d8c820();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return 1;
}


