// Function: FUN_00990aed
// Address: 00990aed
// Size: 517 bytes
// Class: Unknown


undefined8 FUN_00990aed(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  cVar5 = FUN_00990a6c();
  cVar6 = FUN_00990a6c();
  if (cVar5 == '\0') {
    if (cVar6 == '\0') {
      return 0;
    }
    uVar1 = unaff_RSI[2];
    uVar2 = *unaff_RSI;
    uVar3 = unaff_RSI[1];
    unaff_RSI[2] = param_2[2];
    uVar4 = *param_2;
    unaff_RSI[1] = param_2[1];
    *unaff_RSI = uVar4;
    param_2[2] = uVar1;
    param_2[1] = uVar3;
    *param_2 = uVar2;
    cVar5 = FUN_00990a6c();
    if (cVar5 == '\0') {
      return 1;
    }
    uVar1 = unaff_RDI[2];
    uVar2 = *unaff_RDI;
    uVar3 = unaff_RDI[1];
    unaff_RDI[2] = unaff_RSI[2];
    uVar4 = *unaff_RSI;
    unaff_RDI[1] = unaff_RSI[1];
    *unaff_RDI = uVar4;
    unaff_RSI[2] = uVar1;
    unaff_RSI[1] = uVar3;
    *unaff_RSI = uVar2;
  }
  else {
    if (cVar6 != '\0') {
      uVar1 = unaff_RDI[2];
      uVar2 = *unaff_RDI;
      uVar3 = unaff_RDI[1];
      unaff_RDI[2] = param_2[2];
      uVar4 = *param_2;
      unaff_RDI[1] = param_2[1];
      *unaff_RDI = uVar4;
      param_2[2] = uVar1;
      param_2[1] = uVar3;
      *param_2 = uVar2;
      return 1;
    }
    uVar1 = unaff_RDI[2];
    uVar2 = *unaff_RDI;
    uVar3 = unaff_RDI[1];
    unaff_RDI[2] = unaff_RSI[2];
    uVar4 = *unaff_RSI;
    unaff_RDI[1] = unaff_RSI[1];
    *unaff_RDI = uVar4;
    unaff_RSI[2] = uVar1;
    unaff_RSI[1] = uVar3;
    *unaff_RSI = uVar2;
    cVar5 = FUN_00990a6c();
    if (cVar5 == '\0') {
      return 1;
    }
    uVar1 = unaff_RSI[2];
    uVar2 = *unaff_RSI;
    uVar3 = unaff_RSI[1];
    unaff_RSI[2] = param_2[2];
    uVar4 = *param_2;
    unaff_RSI[1] = param_2[1];
    *unaff_RSI = uVar4;
    param_2[2] = uVar1;
    param_2[1] = uVar3;
    *param_2 = uVar2;
  }
  return 2;
}


