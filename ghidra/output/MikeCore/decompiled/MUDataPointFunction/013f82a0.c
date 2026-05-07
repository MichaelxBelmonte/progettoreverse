// Function: FUN_013f82a0
// Address: 013f82a0
// Size: 925 bytes
// Class: MUDataPointFunction


/* WARNING: Removing unreachable block (ram,0x013f8434) */
/* WARNING: Removing unreachable block (ram,0x013f843d) */
/* WARNING: Removing unreachable block (ram,0x013f8600) */
/* WARNING: Removing unreachable block (ram,0x013f8609) */
/* WARNING: Removing unreachable block (ram,0x013f8344) */
/* WARNING: Removing unreachable block (ram,0x013f834d) */

undefined8 * FUN_013f82a0(double param_1,double param_2)

{
  bool bVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  pthread_key_t in_ECX;
  longlong *plVar7;
  undefined8 *unaff_RDI;
  undefined8 unaff_R15;
  undefined7 uVar8;
  longlong local_40;
  char local_38;
  
  plVar2 = (longlong *)FUN_000bea40();
  (**(code **)(*plVar2 + 0x18))();
  pvVar3 = _pthread_getspecific(in_ECX);
  plVar7 = plVar2;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar7 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar7 + 0x408))();
  lVar4 = local_40;
  if (local_40 == 0) {
    bVar6 = 1;
    lVar4 = 0;
    uVar8 = 0;
    bVar1 = false;
  }
  else {
    uVar8 = (undefined7)((ulonglong)unaff_R15 >> 8);
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar6 = 0;
      bVar1 = true;
    }
    else {
      bVar6 = 0;
      bVar1 = true;
    }
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013fae90(0);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faee0(0);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b30();
  pvVar3 = _pthread_getspecific(in_ECX);
  plVar7 = plVar2;
  if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar7 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar7 + 0x408))();
  if (local_40 == lVar4) {
    if ((bool)(bVar6 & lVar4 != 0)) {
      bVar1 = true;
      if (local_38 != '\0') goto LAB_013f8534;
      FUN_00d50b00();
      goto LAB_013f8505;
    }
  }
  else {
    if (local_38 != '\0') {
      bVar6 = bVar1 & lVar4 != 0;
      in_ECX = (pthread_key_t)CONCAT71(uVar8,bVar6);
      bVar1 = true;
      lVar4 = local_40;
      if (bVar6 == 1) {
        FUN_00d50b20();
      }
      goto LAB_013f8534;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    bVar6 = bVar1 & lVar4 != 0;
    in_ECX = (pthread_key_t)CONCAT71(uVar8,bVar6);
    bVar1 = true;
    lVar4 = local_40;
    if (bVar6 != 1) goto LAB_013f8534;
    FUN_00d50b20();
LAB_013f8505:
    bVar1 = true;
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_013f8534:
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013fae90(param_2);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faee0(param_1 * param_2);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b30();
  *unaff_RDI = plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar1) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


