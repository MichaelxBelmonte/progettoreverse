// Function: FUN_01950bb0
// Address: 01950bb0
// Size: 792 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01950d35) */
/* WARNING: Removing unreachable block (ram,0x01950d3e) */
/* WARNING: Removing unreachable block (ram,0x01950d14) */
/* WARNING: Removing unreachable block (ram,0x01950d1d) */
/* WARNING: Removing unreachable block (ram,0x01950de2) */
/* WARNING: Removing unreachable block (ram,0x01950deb) */

void FUN_01950bb0(pthread_key_t param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  void *pvVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_48;
  char local_40;
  
  lVar1 = *unaff_RSI;
  if (*param_2 == lVar1) {
    return;
  }
  if (unaff_RDI[0xa7] != lVar1) {
    return;
  }
  if (lVar1 != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134c480();
  }
  FUN_01948fc0();
  FUN_01948a20();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      goto LAB_01950c95;
    }
  }
  else if (local_48 != 0) {
LAB_01950c95:
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f4ba0();
    lVar1 = DAT_027e0940;
    if (DAT_027e0940 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    bVar2 = false;
    lVar1 = *param_2;
    goto joined_r0x01950d65;
  }
  bVar2 = true;
  lVar1 = *param_2;
joined_r0x01950d65:
  if (lVar1 != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134c400();
  }
  if (unaff_RDI[0x7f] != 0) {
    FUN_01e26eb0();
    if (unaff_RDI[0x7f] != 0) {
      unaff_RDI[0x7f] = 0;
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01326de0();
    (**(code **)(&DAT_000016e0 + *unaff_RDI))();
  }
  if (unaff_RDI[0x80] != 0) {
    lVar1 = unaff_RDI[0x7f];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01e26eb0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}


