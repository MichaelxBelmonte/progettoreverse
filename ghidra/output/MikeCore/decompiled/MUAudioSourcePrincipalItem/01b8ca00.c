// Function: FUN_01b8ca00
// Address: 01b8ca00
// Size: 791 bytes
// Class: MUAudioSourcePrincipalItem
// String references:
//   "MUAudioSourcePrincipalItem"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b8ca00(pthread_key_t param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong **pplVar5;
  longlong *local_40;
  char local_38;
  
  FUN_01b8ced0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01b8ca8c;
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
LAB_01b8ca8c:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01b8cb0d;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) {
LAB_01b8cb0d:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    goto LAB_01b8cc53;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01b8cbef;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01b8cb45:
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pplVar5 = &local_40;
    FUN_013dd6a0();
    plVar4 = local_40;
    if ((DAT_027c0170 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_02790158 = FUN_007ef2d0();
      _DAT_02790140 = "MUAudioSourcePrincipalItem";
      _DAT_02790148 = 0x138;
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
    if (plVar4 == (longlong *)0x0) {
      pplVar5 = &DAT_02802688;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      plVar4 = DAT_02802688;
      if (DAT_02802690 != '\0') goto LAB_01b8cbd9;
LAB_01b8cc18:
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RDI = (longlong)plVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      (**(code **)(*plVar4 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') {
        pplVar5 = &DAT_02802688;
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      plVar4 = *pplVar5;
      if (*(char *)(pplVar5 + 1) == '\0') goto LAB_01b8cc18;
LAB_01b8cbd9:
      *unaff_RDI = (longlong)plVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(pplVar5 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  else {
    if (local_40 != (longlong *)0x0) goto LAB_01b8cb45;
LAB_01b8cbef:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  FUN_00d50b20();
LAB_01b8cc53:
  FUN_00d50b20();
  return;
}


