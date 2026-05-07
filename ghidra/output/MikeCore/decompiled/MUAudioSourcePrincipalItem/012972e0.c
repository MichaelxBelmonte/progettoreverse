// Function: FUN_012972e0
// Address: 012972e0
// Size: 740 bytes
// Class: MUAudioSourcePrincipalItem
// String references:
//   "MUAudioSourcePrincipalItem"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012972e0(pthread_key_t param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong **pplVar5;
  longlong unaff_RSI;
  longlong *plVar6;
  undefined8 *unaff_RDI;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RSI + 0xd8) == 0) {
LAB_0129739d:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011ef460();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_0129739d;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) goto LAB_0129739d;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar5 = &local_40;
  FUN_013dd6a0();
  plVar6 = local_40;
  if ((DAT_027c0170 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_02790158 = FUN_007ef2d0();
    _DAT_02790140 = "MUAudioSourcePrincipalItem";
    _DAT_02790148 = 0x138;
    param_1 = 0x10fe5c0;
    _DAT_02790150 = FUN_010fe5c0;
    _DAT_02790160 = 0;
    uRam0000000002790168 = 0;
    _DAT_02790170 = 0;
    uRam0000000002790178 = 0;
    _DAT_02790180 = 0;
    uRam0000000002790188 = 0;
    _DAT_02790190 = 0;
    uRam0000000002790198 = 0;
    _DAT_027901a0 = 0;
    uRam00000000027901a8 = 0;
    _DAT_027901b0 = 0;
    uRam00000000027901b8 = 0;
    _DAT_027901c0 = 0;
    uRam00000000027901c8 = 0;
    _DAT_027901d0 = 0;
    uRam00000000027901d8 = 0;
    _DAT_027901e0 = 0;
    uRam00000000027901e8 = 0;
    _DAT_027901f0 = 0;
    uRam00000000027901f8 = 0;
    _DAT_02790200 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_012973f4:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_012973f4;
  }
  plVar6 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_012974f3:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014d6130();
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) goto LAB_012974eb;
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == (longlong *)0x0) {
LAB_012974eb:
      FUN_00d50b20();
      goto LAB_012974f3;
    }
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar6 + 0x378))();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


