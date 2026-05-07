// Function: FUN_00abd489
// Address: 00abd489
// Size: 900 bytes
// Class: OsSignatureMac


int FUN_00abd489(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  iVar7 = FUN_00abd1ab(param_1,param_2,param_4);
  cVar6 = (*(code *)*param_4)();
  if (cVar6 != '\0') {
    puVar1 = (undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      _CFRetain();
    }
    uVar5 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *puVar1 = uVar5;
    FUN_00abdcf0();
    *(undefined8 *)(param_3 + 0x10) = uVar4;
    *(undefined8 *)(param_3 + 8) = uVar3;
    FUN_00abdcf0();
    FUN_00abb66e();
    cVar6 = (*(code *)*param_4)();
    if (cVar6 == '\0') {
      iVar7 = iVar7 + 1;
    }
    else {
      puVar2 = (undefined8 *)(param_2 + 8);
      uVar3 = *(undefined8 *)(param_2 + 8);
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      if (*(longlong *)(param_2 + 0x20) != 0) {
        _CFRetain();
      }
      uVar5 = *puVar1;
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *puVar2 = uVar5;
      FUN_00abdcf0();
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      *puVar1 = uVar3;
      FUN_00abdcf0();
      FUN_00abb66e();
      cVar6 = (*(code *)*param_4)();
      if (cVar6 == '\0') {
        iVar7 = iVar7 + 2;
      }
      else {
        puVar1 = (undefined8 *)(unaff_RSI + 8);
        uVar3 = *(undefined8 *)(unaff_RSI + 8);
        uVar4 = *(undefined8 *)(unaff_RSI + 0x10);
        if (*(longlong *)(unaff_RSI + 0x20) != 0) {
          _CFRetain();
        }
        uVar5 = *puVar2;
        *(undefined8 *)(unaff_RSI + 0x10) = *(undefined8 *)(param_2 + 0x10);
        *puVar1 = uVar5;
        FUN_00abdcf0();
        *(undefined8 *)(param_2 + 0x10) = uVar4;
        *puVar2 = uVar3;
        FUN_00abdcf0();
        FUN_00abb66e();
        cVar6 = (*(code *)*param_4)();
        if (cVar6 == '\0') {
          iVar7 = iVar7 + 3;
        }
        else {
          uVar3 = *(undefined8 *)(unaff_RDI + 8);
          uVar4 = *(undefined8 *)(unaff_RDI + 0x10);
          if (*(longlong *)(unaff_RDI + 0x20) != 0) {
            _CFRetain();
          }
          uVar5 = *puVar1;
          *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RSI + 0x10);
          *(undefined8 *)(unaff_RDI + 8) = uVar5;
          FUN_00abdcf0();
          *(undefined8 *)(unaff_RSI + 0x10) = uVar4;
          *puVar1 = uVar3;
          FUN_00abdcf0();
          FUN_00abb66e();
          iVar7 = iVar7 + 4;
        }
      }
    }
  }
  return iVar7;
}


