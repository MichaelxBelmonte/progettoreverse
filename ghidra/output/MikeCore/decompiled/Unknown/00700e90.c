// Function: FUN_00700e90
// Address: 00700e90
// Size: 1082 bytes
// Class: Unknown


void FUN_00700e90(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar5;
  longlong **pplVar6;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar5 = 0;
  if (*(longlong **)(unaff_RDI + 0x98) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x378))();
    FUN_00d50130();
    lVar5 = *(longlong *)(unaff_RDI + 0x98);
  }
  lVar1 = *unaff_RSI;
  lVar3 = lVar5;
  if (lVar5 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x98) = lVar1;
    lVar3 = lVar1;
    if (lVar5 != 0) {
      FUN_00d50b20();
      lVar3 = *(longlong *)(unaff_RDI + 0x98);
    }
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_01e53c20();
  FUN_01e42030();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_003900a0(param_1,1);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_006f3f00();
  (**(code **)(*local_50 + 0x628))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0035c470();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != '\0') {
    FUN_00d50b20();
  }
  FUN_006f3f00();
  plVar2 = local_40;
  FUN_0076f070();
  FUN_003619b0();
  if ((local_38 != '\0') && (plVar2 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_006f3f00();
  FUN_00757c60();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  cVar4 = FUN_0076e4d0();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_003619a0();
  }
  lVar5 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  pplVar6 = &local_40;
  FUN_01be81a0();
  plVar2 = local_40;
  FUN_00083c20();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_00701182;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_00701182:
  plVar2 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_0035c4d0();
    FUN_01a8fc90();
    FUN_0035c4e0();
  }
  cVar4 = FUN_003617e0();
  if (cVar4 != '\0') {
    FUN_006f3f00();
    FUN_00752180();
    cVar4 = FUN_00108e10();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      FUN_006f3f00();
      FUN_00752180();
      FUN_0010a4f0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00390380();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


