// Function: FUN_000f9300
// Address: 000f9300
// Size: 678 bytes
// Class: GNControl
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


uint32_t
FUN_000f9300(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,uint32_t param_10,uint32_t param_11,uint32_t param_12)

{
  char cVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void*arg1;
  int *this_ptr;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_res8;
  int local_res10;
  int local_res18;
  int local_res20;
  uint32_t in_stack_00000088;
  uint32_t in_stack_00000090;
  uint32_t in_stack_00000098;
  uint32_t in_stack_000000a0;
  uint32_t in_stack_000000a8;
  uint32_t in_stack_000000b0;
  uint32_t in_stack_000000b8;
  uint32_t in_stack_000000c0;
  uint32_t in_stack_000000c8;
  uint32_t in_stack_000000d0;
  uint32_t in_stack_000000d8;
  uint32_t in_stack_000000e0;
  uint32_t in_stack_000000e8;
  uint32_t in_stack_000000f0;
  uint32_t in_stack_000000f8;
  uint32_t in_stack_00000100;
  uint32_t in_stack_00000108;
  uint32_t in_stack_00000110;
  uint32_t in_stack_00000118;
  uint32_t in_stack_00000120;
  uint32_t in_stack_00000128;
  uint32_t in_stack_00000130;
  uint32_t in_stack_00000138;
  uint32_t in_stack_00000140;
  uint32_t in_stack_00000148;
  uint32_t in_stack_00000150;
  uint32_t in_stack_00000158;
  
  if (*(char *)*arg1 == '=') {
    param_2 = param_1;
  }
  *this_ptr = param_2;
  param_2 = param_2 + 1;
  if (*(char *)arg1[1] != '=') {
    param_3 = param_2;
  }
  this_ptr[1] = param_3;
  if (*(char *)arg1[2] != '=') {
    param_4 = param_3 + 1;
  }
  this_ptr[2] = param_4;
  iVar7 = param_4 + 1;
  if (*(char *)arg1[3] == '=') {
    iVar7 = local_res8;
  }
  this_ptr[3] = iVar7;
  iVar5 = iVar7 + 1;
  if (*(char *)arg1[4] == '=') {
    iVar5 = local_res10;
  }
  this_ptr[4] = iVar5;
  iVar3 = iVar5 + 1;
  if (*(char *)arg1[5] == '=') {
    iVar3 = local_res18;
  }
  this_ptr[5] = iVar3;
  iVar4 = iVar3 + 1;
  if (*(char *)arg1[6] == '=') {
    iVar4 = local_res20;
  }
  this_ptr[6] = iVar4;
  iVar9 = iVar4 + 1;
  if (*(char *)arg1[7] == '=') {
    iVar9 = param_5;
  }
  this_ptr[7] = iVar9;
  iVar10 = iVar9 + 1;
  if (*(char *)arg1[8] == '=') {
    iVar10 = param_6;
  }
  this_ptr[8] = iVar10;
  iVar8 = iVar10 + 1;
  if (*(char *)arg1[9] == '=') {
    iVar8 = param_7;
  }
  this_ptr[9] = iVar8;
  iVar11 = iVar8 + 1;
  if (*(char *)arg1[10] == '=') {
    iVar11 = param_8;
  }
  this_ptr[10] = iVar11;
  iVar6 = iVar11 + 1;
  if (*(char *)arg1[0xb] == '=') {
    iVar6 = param_9;
  }
  this_ptr[0xb] = iVar6;
  cVar1 = FUN_000f95b0(param_10,iVar6 + 1,param_11,param_12,in_stack_00000088,in_stack_00000090,
                       in_stack_00000098,in_stack_000000a0,in_stack_000000a8,in_stack_000000b0,
                       in_stack_000000b8,in_stack_000000c0,in_stack_000000c8,in_stack_000000d0,
                       in_stack_000000d8,in_stack_000000e0,in_stack_000000e8,in_stack_000000f0,
                       in_stack_000000f8,in_stack_00000100,in_stack_00000108,in_stack_00000110,
                       in_stack_00000118,in_stack_00000120,in_stack_00000128,in_stack_00000130,
                       in_stack_00000138,in_stack_00000140,in_stack_00000148,in_stack_00000150,
                       in_stack_00000158);
  if (((((cVar1 == '\0') || (this_ptr[0xc] != iVar6 + 1)) || (this_ptr[0xb] != iVar11 + 1)) ||
      ((((this_ptr[10] != iVar8 + 1 || (this_ptr[9] != iVar10 + 1)) ||
        ((this_ptr[8] != iVar9 + 1 || ((this_ptr[7] != iVar4 + 1 || (this_ptr[6] != iVar3 + 1))))
        )) || (this_ptr[5] != iVar5 + 1)))) ||
     (((this_ptr[4] != iVar7 + 1 || (this_ptr[3] != param_4 + 1)) || (this_ptr[2] != param_3 + 1)
      ))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)param_2 >> 8),this_ptr[1] == param_2);
  }
  return uVar2;
}

