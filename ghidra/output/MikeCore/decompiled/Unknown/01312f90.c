// Function: FUN_01312f90
// Address: 01312f90
// Size: 621 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x013130a9) */
/* WARNING: Removing unreachable block (ram,0x013130b2) */
/* WARNING: Removing unreachable block (ram,0x0131300d) */
/* WARNING: Removing unreachable block (ram,0x01313016) */
/* WARNING: Removing unreachable block (ram,0x0131304a) */
/* WARNING: Removing unreachable block (ram,0x01313053) */

undefined8 * FUN_01312f90(pthread_key_t param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *unaff_RDI;
  longlong local_48;
  char local_40;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_025d7080;
  puVar2[7] = 0;
  puVar2[8] = 0;
  FUN_00d500e0();
  FUN_01505340();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_012c9e50(param_1,param_2);
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = (pthread_key_t)local_48;
  }
  FUN_01505960();
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    lVar4 = puVar2[7];
    puVar1 = puVar2;
  }
  else {
    puVar1 = (undefined8 *)puVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    lVar4 = puVar1[7];
  }
  if (lVar4 != local_48) {
    FUN_00d64850();
    lVar4 = puVar1[7];
    if (lVar4 != local_48) {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      puVar1[7] = local_48;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    lVar4 = puVar2[8];
    puVar1 = puVar2;
  }
  else {
    puVar1 = (undefined8 *)puVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    lVar4 = puVar1[8];
  }
  if (lVar4 != local_48) {
    FUN_00d64850();
    lVar4 = puVar1[8];
    if (lVar4 != local_48) {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      puVar1[8] = local_48;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_48 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return unaff_RDI;
}


