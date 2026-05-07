// Function: FUN_0142c440
// Address: 0142c440
// Size: 952 bytes
// Class: MUBezierFunctionPoint
// String references:
//   "MUBezierFunctionPoint"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0142c440(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  lVar8 = *unaff_RSI;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  *(undefined8 *)(unaff_RDI + 0x38) = *(undefined8 *)(lVar8 + 0x38);
  lVar8 = *unaff_RSI;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  *(undefined8 *)(unaff_RDI + 0x40) = *(undefined8 *)(lVar8 + 0x40);
  lVar8 = *unaff_RSI;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  *(undefined8 *)(unaff_RDI + 0x48) = *(undefined8 *)(lVar8 + 0x48);
  lVar8 = *unaff_RSI;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  *(undefined1 *)(unaff_RDI + 0x50) = *(undefined1 *)(lVar8 + 0x50);
  lVar8 = *unaff_RSI;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  *(undefined1 *)(unaff_RDI + 0x51) = *(undefined1 *)(lVar8 + 0x51);
  lVar8 = *unaff_RSI;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  *(undefined1 *)(unaff_RDI + 0x52) = *(undefined1 *)(lVar8 + 0x52);
  plVar1 = (longlong *)*unaff_RSI;
  if ((DAT_02794640 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_02794590 = FUN_01112390();
    _DAT_02794578 = "MUBezierFunctionPoint";
    _DAT_02794580 = 0x88;
    param_1 = 0x1112330;
    _DAT_02794588 = FUN_01112330;
    _DAT_02794598 = 0;
    uRam00000000027945a0 = 0;
    _DAT_027945a8 = 0;
    uRam00000000027945b0 = 0;
    _DAT_027945b8 = 0;
    uRam00000000027945c0 = 0;
    _DAT_027945c8 = 0;
    uRam00000000027945d0 = 0;
    _DAT_027945d8 = 0;
    uRam00000000027945e0 = 0;
    _DAT_027945e8 = 0;
    uRam00000000027945f0 = 0;
    _DAT_027945f8 = 0;
    uRam0000000002794600 = 0;
    _DAT_02794608 = 0;
    uRam0000000002794610 = 0;
    _DAT_02794618 = 0;
    uRam0000000002794620 = 0;
    _DAT_02794628 = 0;
    uRam0000000002794630 = 0;
    _DAT_02794638 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_0142c5ea;
  }
  unaff_RSI = &DAT_02802688;
LAB_0142c5ea:
  lVar8 = *unaff_RSI;
  lVar5 = unaff_RSI[1];
  if (((char)lVar5 == '\0') || (lVar8 == 0)) {
    if (lVar8 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  lVar7 = lVar8;
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    lVar7 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
  }
  *(undefined8 *)(unaff_RDI + 0x60) = *(undefined8 *)(lVar7 + 0x60);
  pvVar4 = _pthread_getspecific(param_1);
  lVar7 = lVar8;
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    lVar7 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
  }
  *(undefined8 *)(unaff_RDI + 0x68) = *(undefined8 *)(lVar7 + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  lVar7 = lVar8;
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    lVar7 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
  }
  *(undefined8 *)(unaff_RDI + 0x70) = *(undefined8 *)(lVar7 + 0x70);
  pvVar4 = _pthread_getspecific(param_1);
  lVar7 = lVar8;
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    lVar7 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
  }
  *(undefined8 *)(unaff_RDI + 0x78) = *(undefined8 *)(lVar7 + 0x78);
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    *(undefined1 *)(unaff_RDI + 0x80) = *(undefined1 *)(lVar8 + 0x80);
  }
  else {
    *(undefined1 *)(unaff_RDI + 0x80) =
         *(undefined1 *)
          (*(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8) + 0x80);
  }
  if ((char)lVar5 != '\0') {
    FUN_00d50b20();
  }
  return;
}


