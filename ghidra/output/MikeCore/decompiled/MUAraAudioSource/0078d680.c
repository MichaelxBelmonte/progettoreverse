// Function: FUN_0078d680
// Address: 0078d680
// Size: 700 bytes
// Class: MUAraAudioSource


/* WARNING: Removing unreachable block (ram,0x0078d903) */
/* WARNING: Removing unreachable block (ram,0x0078d910) */
/* WARNING: Removing unreachable block (ram,0x0078d7c0) */
/* WARNING: Removing unreachable block (ram,0x0078d7c9) */
/* WARNING: Removing unreachable block (ram,0x0078d74d) */
/* WARNING: Removing unreachable block (ram,0x0078d756) */
/* WARNING: Removing unreachable block (ram,0x0078d836) */
/* WARNING: Removing unreachable block (ram,0x0078d83f) */

ulonglong FUN_0078d680(pthread_key_t param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  ulonglong uVar7;
  longlong *unaff_RSI;
  longlong *local_40;
  char local_38;
  
  FUN_00b160d0();
  iVar2 = (**(code **)(*local_40 + 0x690))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*unaff_RSI == 0) {
    return (ulonglong)(0 < iVar2);
  }
  if (iVar2 < 1) {
    return 0;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8b20();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return 0;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return 0;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0078d7ce;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_0078d7ce:
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb450();
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) goto LAB_0078d92e;
      FUN_00d50b00();
LAB_0078d844:
      iVar1 = 0;
      do {
        iVar3 = iVar1;
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_0124a860();
        if (iVar4 <= iVar3) break;
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar5 = FUN_01240ab0();
        iVar1 = iVar3 + 1;
      } while (iVar5 <= iVar2);
      uVar7 = CONCAT71(0x28025,iVar4 <= iVar3);
      FUN_00d50b20();
    }
    else {
      if (local_40 != (longlong *)0x0) goto LAB_0078d844;
LAB_0078d92e:
      uVar7 = 0;
    }
    FUN_00d50b20();
    goto LAB_0078d938;
  }
  uVar7 = 0;
LAB_0078d938:
  FUN_00d50b20();
  return uVar7;
}


