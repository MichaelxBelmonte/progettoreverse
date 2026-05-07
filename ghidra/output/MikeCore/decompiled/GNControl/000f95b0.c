// Function: FUN_000f95b0
// Address: 000f95b0
// Size: 594 bytes
// Class: GNControl


undefined4
FUN_000f95b0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *unaff_RSI;
  int *unaff_RDI;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_res8;
  int local_res10;
  int local_res18;
  int local_res20;
  undefined4 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  
  if (*(char *)*unaff_RSI == '=') {
    param_2 = param_1;
  }
  *unaff_RDI = param_2;
  param_2 = param_2 + 1;
  if (*(char *)unaff_RSI[1] != '=') {
    param_3 = param_2;
  }
  unaff_RDI[1] = param_3;
  if (*(char *)unaff_RSI[2] != '=') {
    param_4 = param_3 + 1;
  }
  unaff_RDI[2] = param_4;
  iVar7 = param_4 + 1;
  if (*(char *)unaff_RSI[3] == '=') {
    iVar7 = local_res8;
  }
  unaff_RDI[3] = iVar7;
  iVar5 = iVar7 + 1;
  if (*(char *)unaff_RSI[4] == '=') {
    iVar5 = local_res10;
  }
  unaff_RDI[4] = iVar5;
  iVar3 = iVar5 + 1;
  if (*(char *)unaff_RSI[5] == '=') {
    iVar3 = local_res18;
  }
  unaff_RDI[5] = iVar3;
  iVar4 = iVar3 + 1;
  if (*(char *)unaff_RSI[6] == '=') {
    iVar4 = local_res20;
  }
  unaff_RDI[6] = iVar4;
  iVar9 = iVar4 + 1;
  if (*(char *)unaff_RSI[7] == '=') {
    iVar9 = param_5;
  }
  unaff_RDI[7] = iVar9;
  iVar10 = iVar9 + 1;
  if (*(char *)unaff_RSI[8] == '=') {
    iVar10 = param_6;
  }
  unaff_RDI[8] = iVar10;
  iVar8 = iVar10 + 1;
  if (*(char *)unaff_RSI[9] == '=') {
    iVar8 = param_7;
  }
  unaff_RDI[9] = iVar8;
  iVar11 = iVar8 + 1;
  if (*(char *)unaff_RSI[10] == '=') {
    iVar11 = param_8;
  }
  unaff_RDI[10] = iVar11;
  iVar6 = iVar11 + 1;
  if (*(char *)unaff_RSI[0xb] == '=') {
    iVar6 = param_9;
  }
  unaff_RDI[0xb] = iVar6;
  cVar1 = FUN_000f9810(param_10,iVar6 + 1,param_11,param_12,in_stack_00000088,in_stack_00000090,
                       in_stack_00000098,in_stack_000000a0,in_stack_000000a8,in_stack_000000b0,
                       in_stack_000000b8,in_stack_000000c0,in_stack_000000c8,in_stack_000000d0,
                       in_stack_000000d8,in_stack_000000e0,in_stack_000000e8,in_stack_000000f0,
                       in_stack_000000f8);
  if (((((cVar1 == '\0') || (unaff_RDI[0xc] != iVar6 + 1)) || (unaff_RDI[0xb] != iVar11 + 1)) ||
      ((((unaff_RDI[10] != iVar8 + 1 || (unaff_RDI[9] != iVar10 + 1)) ||
        ((unaff_RDI[8] != iVar9 + 1 || ((unaff_RDI[7] != iVar4 + 1 || (unaff_RDI[6] != iVar3 + 1))))
        )) || (unaff_RDI[5] != iVar5 + 1)))) ||
     (((unaff_RDI[4] != iVar7 + 1 || (unaff_RDI[3] != param_4 + 1)) || (unaff_RDI[2] != param_3 + 1)
      ))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)param_2 >> 8),unaff_RDI[1] == param_2);
  }
  return uVar2;
}


