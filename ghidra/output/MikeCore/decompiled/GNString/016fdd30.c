// Function: FUN_016fdd30
// Address: 016fdd30
// Size: 1376 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x016fe124) */
/* WARNING: Removing unreachable block (ram,0x016fe093) */
/* WARNING: Removing unreachable block (ram,0x016fe09c) */
/* WARNING: Removing unreachable block (ram,0x016fe175) */
/* WARNING: Removing unreachable block (ram,0x016fe17e) */

undefined1 FUN_016fdd30(undefined8 param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int extraout_var;
  int extraout_var_00;
  int extraout_var_01;
  int extraout_var_02;
  int extraout_var_03;
  ulonglong uVar6;
  pthread_key_t pVar7;
  undefined1 uVar8;
  longlong unaff_RDI;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_40;
  char local_38;
  
  FUN_016cb850(param_1,0);
  FUN_00e7d850();
  FUN_00e7bcc0();
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165d690();
  FUN_016ebc80();
  pVar7 = (pthread_key_t)param_1;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_016fdddc;
    }
LAB_016fde02:
    bVar2 = true;
    lVar1 = *(longlong *)(unaff_RDI + 0x78);
  }
  else {
    if (local_40 == 0) goto LAB_016fde02;
LAB_016fdddc:
    pVar7 = (pthread_key_t)param_1;
    uVar8 = 0;
    if (local_40 != **(longlong **)(*(longlong *)(unaff_RDI + 0x60) + 0x10)) goto LAB_016fe274;
    bVar2 = false;
    lVar1 = *(longlong *)(unaff_RDI + 0x78);
  }
  if (lVar1 != 0) {
    FUN_016d8ab0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if (*(int *)(local_40 + 0x10) == 0) {
      FUN_00e7bdb0();
      iVar4 = extraout_var_00;
    }
    else {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (*(ulonglong *)(local_40 + 0xc) >> 0x20 == 0) {
        FUN_00e7bdb0();
      }
      FUN_0165d690();
      iVar4 = extraout_var_01;
    }
    FUN_016cabc0();
    pVar7 = (pthread_key_t)param_1;
    if ((extraout_var != 0) && (iVar4 != 0)) {
      cVar3 = FUN_00e7c020();
      pVar7 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),extraout_var == 0);
      if ((cVar3 == '\0' && extraout_var != 0) &&
         ((extraout_var_02 != 0 && (cVar3 = FUN_00e7c020(), cVar3 == '\0')))) {
        FUN_016efaf0();
      }
    }
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar7 = 0;
  FUN_0165cf20(0,0);
  FUN_00e7c280();
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165d690();
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar6 = FUN_01909dc0();
  if ((((uVar6 >> 0x20 != 0) && (extraout_var_03 != 0)) && (cVar3 = FUN_00e7c020(), cVar3 != '\0'))
     && ((FUN_016da710(), local_b0 != '\0' && (local_b8 != 0)))) {
    FUN_00d50b20();
  }
  FUN_016d5810();
  if ((local_38 == '\0') && (uVar6 != 0)) {
    FUN_00d50b00();
  }
  iVar4 = FUN_00d237a0();
  FUN_016da710();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0190a000();
  FUN_01909ea0();
  if (uVar6 != 0) {
    FUN_00d50b00();
  }
  FUN_016efe10();
  if (uVar6 != 0) {
    FUN_00d50b20();
  }
  FUN_00e7b970();
  FUN_016da710();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (iVar4 + 1 < *(int *)(*(longlong *)(unaff_RDI + 0x60) + 0xc) + -1) {
    FUN_00e7b820();
    FUN_016da710();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018f9310();
  if (uVar6 != 0) {
    FUN_00d50b20();
  }
  uVar8 = 1;
  if (bVar2) {
    return 1;
  }
LAB_016fe274:
  FUN_00d50b20();
  return uVar8;
}


