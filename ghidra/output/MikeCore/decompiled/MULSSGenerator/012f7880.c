// Function: FUN_012f7880
// Address: 012f7880
// Size: 725 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012f7a51) */
/* WARNING: Removing unreachable block (ram,0x012f7a5e) */
/* WARNING: Removing unreachable block (ram,0x012f79e7) */
/* WARNING: Removing unreachable block (ram,0x012f79f0) */
/* WARNING: Removing unreachable block (ram,0x012f792f) */
/* WARNING: Removing unreachable block (ram,0x012f7950) */
/* WARNING: Removing unreachable block (ram,0x012f7931) */
/* WARNING: Removing unreachable block (ram,0x012f7952) */

void FUN_012f7880(pthread_key_t param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong lVar6;
  longlong unaff_RDI;
  longlong local_78;
  char local_70;
  longlong local_58;
  char local_50;
  int local_40;
  
  *(int *)(unaff_RDI + 0x6c) = *(int *)(unaff_RDI + 0x6c) + 1;
  lVar2 = FUN_00e8b990();
  if (lVar2 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = *(longlong *)(unaff_RDI + 0xb0);
  if (lVar2 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
LAB_012f792b:
    while( true ) {
      lVar3 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_40) break;
      lVar6 = *(longlong *)(lVar2 + 0x10);
      local_58 = *(longlong *)(lVar6 + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
      pVar5 = (pthread_key_t)lVar6;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      if (local_70 == '\0') goto LAB_012f79d0;
      if (local_78 != 0) goto LAB_012f7a00;
    }
    FUN_001159b0();
    param_1 = (pthread_key_t)lVar2;
    if (*(longlong *)(unaff_RDI + 0xb0) != 0) {
      FUN_00d50b00();
      bVar1 = false;
      goto LAB_012f7a97;
    }
  }
  bVar1 = true;
LAB_012f7a97:
  FUN_012edae0();
  if (!bVar1) {
    FUN_00d50b20();
  }
  lVar2 = FUN_00e8b990();
  if (lVar2 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  *(int *)(unaff_RDI + 0x6c) = *(int *)(unaff_RDI + 0x6c) + -1;
  if (*(longlong *)(unaff_RDI + 0x58) != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50b00();
    FUN_012f5460();
    FUN_00d50b20();
  }
  return;
LAB_012f79d0:
  if (local_78 != 0) {
    FUN_00d50b00();
LAB_012f7a00:
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0129a1f0();
    FUN_00d50b20();
  }
  goto LAB_012f792b;
}


