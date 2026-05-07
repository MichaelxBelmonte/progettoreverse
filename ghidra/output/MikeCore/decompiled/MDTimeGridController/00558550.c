// Function: FUN_00558550
// Address: 00558550
// Size: 1385 bytes
// Class: MDTimeGridController


void FUN_00558550(void)

{
  longlong *plVar1;
  char cVar2;
  char *pcVar3;
  longlong unaff_RDI;
  longlong local_58;
  char local_50 [9];
  undefined7 uStack_47;
  char local_40;
  char local_38 [8];
  
  FUN_00d23310();
  local_50[8] = local_50[0];
  pcVar3 = local_50 + 8;
  if (local_50[0] != '\0') {
    pcVar3 = local_50;
  }
  *pcVar3 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50[8] == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x78);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d23310();
    pcVar3 = local_50;
    if (local_50[0] == '\0') {
      pcVar3 = local_38;
    }
    local_38[0] = local_50[0];
    *pcVar3 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_001060a0();
    (**(code **)(*(longlong *)CONCAT71(uStack_47,local_50[8]) + 0x3c8))();
    (**(code **)(*plVar1 + 0x918))();
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_50[8]) != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x918))();
  (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x998))();
  cVar2 = FUN_00108e10();
  plVar1 = *(longlong **)(unaff_RDI + 0x80);
  if (cVar2 == '\0') {
    (**(code **)(*plVar1 + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x998))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x108) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xe8) + 0x918))();
  }
  else {
    FUN_001080a0();
    (**(code **)(*plVar1 + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x998))();
    FUN_00108090();
    cVar2 = FUN_001080b0();
    if (cVar2 == '\0') {
      (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xe8) + 0x918))();
    }
    else {
      (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xe8) + 0x918))();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x108) + 0x918))();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return;
}


