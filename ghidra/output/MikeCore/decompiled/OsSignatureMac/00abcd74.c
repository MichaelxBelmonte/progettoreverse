// Function: FUN_00abcd74
// Address: 00abcd74
// Size: 1013 bytes
// Class: OsSignatureMac


undefined8 FUN_00abcd74(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  cVar5 = (*(code *)*param_1)();
  cVar6 = (*(code *)*param_1)();
  if (cVar5 == '\0') {
    if (cVar6 == '\0') {
      return 0;
    }
    puVar1 = (undefined8 *)(unaff_RSI + 8);
    uVar2 = *(undefined8 *)(unaff_RSI + 8);
    uVar3 = *(undefined8 *)(unaff_RSI + 0x10);
    if (*(longlong *)(unaff_RSI + 0x20) != 0) {
      _CFRetain();
    }
    uVar4 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(unaff_RSI + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *puVar1 = uVar4;
    FUN_00abdcf0();
    *(undefined8 *)(param_2 + 0x10) = uVar3;
    *(undefined8 *)(param_2 + 8) = uVar2;
    FUN_00abdcf0();
    FUN_00abb66e();
    cVar5 = (*(code *)*param_1)();
    if (cVar5 == '\0') {
      return 1;
    }
    uVar2 = *(undefined8 *)(unaff_RDI + 8);
    uVar3 = *(undefined8 *)(unaff_RDI + 0x10);
    if (*(longlong *)(unaff_RDI + 0x20) != 0) {
      _CFRetain();
    }
    uVar4 = *puVar1;
    *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RSI + 0x10);
    *(undefined8 *)(unaff_RDI + 8) = uVar4;
    FUN_00abdcf0();
    *(undefined8 *)(unaff_RSI + 0x10) = uVar3;
    *puVar1 = uVar2;
    FUN_00abdcf0();
  }
  else {
    if (cVar6 != '\0') {
      uVar2 = *(undefined8 *)(unaff_RDI + 8);
      uVar3 = *(undefined8 *)(unaff_RDI + 0x10);
      if (*(longlong *)(unaff_RDI + 0x20) != 0) {
        _CFRetain();
      }
      uVar4 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(unaff_RDI + 8) = uVar4;
      FUN_00abdcf0();
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      *(undefined8 *)(param_2 + 8) = uVar2;
      FUN_00abdcf0();
      FUN_00abb66e();
      return 1;
    }
    uVar2 = *(undefined8 *)(unaff_RDI + 8);
    uVar3 = *(undefined8 *)(unaff_RDI + 0x10);
    if (*(longlong *)(unaff_RDI + 0x20) != 0) {
      _CFRetain();
    }
    uVar4 = *(undefined8 *)(unaff_RSI + 8);
    *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RSI + 0x10);
    *(undefined8 *)(unaff_RDI + 8) = uVar4;
    FUN_00abdcf0();
    puVar1 = (undefined8 *)(unaff_RSI + 8);
    *(undefined8 *)(unaff_RSI + 0x10) = uVar3;
    *puVar1 = uVar2;
    FUN_00abdcf0();
    FUN_00abb66e();
    cVar5 = (*(code *)*param_1)();
    if (cVar5 == '\0') {
      return 1;
    }
    uVar2 = *puVar1;
    uVar3 = *(undefined8 *)(unaff_RSI + 0x10);
    if (*(longlong *)(unaff_RSI + 0x20) != 0) {
      _CFRetain();
    }
    uVar4 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(unaff_RSI + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *puVar1 = uVar4;
    FUN_00abdcf0();
    *(undefined8 *)(param_2 + 0x10) = uVar3;
    *(undefined8 *)(param_2 + 8) = uVar2;
    FUN_00abdcf0();
  }
  FUN_00abb66e();
  return 2;
}


