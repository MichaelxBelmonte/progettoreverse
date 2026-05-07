// Function: FUN_0031cb70
// Address: 0031cb70
// Size: 761 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0031ce12) */
/* WARNING: Removing unreachable block (ram,0x0031ce1b) */
/* WARNING: Removing unreachable block (ram,0x0031ce26) */
/* WARNING: Removing unreachable block (ram,0x0031ce2f) */
/* WARNING: Removing unreachable block (ram,0x0031cc96) */
/* WARNING: Removing unreachable block (ram,0x0031cc9f) */
/* WARNING: Removing unreachable block (ram,0x0031cd8b) */
/* WARNING: Removing unreachable block (ram,0x0031cd94) */

void FUN_0031cb70(pthread_key_t param_1)

{
  longlong lVar1;
  bool bVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264970();
  lVar1 = *(longlong *)(local_40 + 0x28);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  lVar4 = local_40;
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264970();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    if (local_40 == 0) {
      lVar4 = 0;
      bVar2 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
    }
    else {
      local_38 = '\0';
      bVar2 = true;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) goto LAB_0031cdd8;
  }
  (**(code **)(*unaff_RDI + 0x438))();
  FUN_012d25b0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e78c0();
  if (local_40 == 0) {
    lVar4 = 0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar2 = true;
    lVar4 = local_40;
  }
  else {
    local_38 = '\0';
    bVar2 = true;
    lVar4 = local_40;
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
LAB_0031cdd8:
  (**(code **)(*unaff_RDI + 0x438))();
  FUN_012d99f0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return;
}


