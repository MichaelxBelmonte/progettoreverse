// Function: FUN_009dedf4
// Address: 009dedf4
// Size: 729 bytes
// Class: Unknown


void FUN_009dedf4(byte *param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong unaff_RSI;
  ulonglong uVar5;
  ulonglong uVar6;
  byte *unaff_RDI;
  undefined5 local_50;
  undefined3 uStackY_4b;
  ulong in_stack_ffffffffffffffb8;
  undefined4 uStack_44;
  ulong in_stack_ffffffffffffffc0;
  undefined4 uStack_3c;
  
  lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0] = 0;
  unaff_RDI[1] = 0;
  unaff_RDI[2] = 0;
  unaff_RDI[3] = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  switch(*(undefined4 *)(unaff_RSI + 0x168)) {
  case 0:
  case 3:
    uVar6 = (longlong)param_1 - (longlong)param_2;
    if ((uVar6 < 0x17) ||
       (std::string::__grow_by
                  (0,(int)uVar6 - 0x16,0,0,in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0),
       (*unaff_RDI & 1) == 0)) {
      pbVar3 = unaff_RDI + 1;
    }
    else {
      pbVar3 = *(byte **)(unaff_RDI + 0x10);
    }
    pbVar4 = unaff_RDI + 1;
    for (; param_2 != param_1; param_2 = param_2 + 1) {
      *pbVar3 = *param_2;
      pbVar3 = pbVar3 + 1;
    }
    *pbVar3 = 0;
    if ((*unaff_RDI & 1) == 0) {
      *unaff_RDI = (char)uVar6 * '\x02';
    }
    else {
      *(ulonglong *)(unaff_RDI + 8) = uVar6;
    }
    (**(code **)(**(longlong **)(unaff_RSI + 8) + 0x30))();
    if ((*unaff_RDI & 1) == 0) {
      uVar6 = (ulonglong)(*unaff_RDI >> 1);
    }
    else {
      pbVar4 = *(byte **)(unaff_RDI + 0x10);
      uVar6 = *(ulonglong *)(unaff_RDI + 8);
    }
    pbVar4 = pbVar4 + uVar6;
    (**(code **)(**(longlong **)(unaff_RSI + 0x18) + 0x20))();
    if ((*unaff_RDI & 1) != 0) {
      operator_delete(pbVar4);
    }
    *(ulonglong *)(unaff_RDI + 0x10) = CONCAT44(uStack_3c,in_stack_ffffffffffffffc0);
    param_1 = (byte *)CONCAT44(uStack_44,in_stack_ffffffffffffffb8);
    *(byte **)(unaff_RDI + 8) = param_1;
    *(ulonglong *)unaff_RDI = CONCAT35(uStackY_4b,local_50);
    break;
  case 1:
    (**(code **)(**(longlong **)(unaff_RSI + 0x18) + 0x20))(param_1,param_2);
    if ((*unaff_RDI & 1) != 0) {
      operator_delete(param_1);
    }
    *(ulonglong *)(unaff_RDI + 0x10) = CONCAT44(uStack_3c,in_stack_ffffffffffffffc0);
    param_1 = (byte *)CONCAT44(uStack_44,in_stack_ffffffffffffffb8);
    *(byte **)(unaff_RDI + 8) = param_1;
    *(ulonglong *)unaff_RDI = CONCAT35(uStackY_4b,local_50);
    std::string::erase(in_stack_ffffffffffffffb8,0xffffffff);
    break;
  case 2:
    (**(code **)(**(longlong **)(unaff_RSI + 0x18) + 0x20))(param_1,param_2);
    if ((*unaff_RDI & 1) != 0) {
      operator_delete(param_1);
    }
    *(ulonglong *)(unaff_RDI + 0x10) = CONCAT44(uStack_3c,in_stack_ffffffffffffffc0);
    param_1 = (byte *)CONCAT44(uStack_44,in_stack_ffffffffffffffb8);
    *(byte **)(unaff_RDI + 8) = param_1;
    *(ulonglong *)unaff_RDI = CONCAT35(uStackY_4b,local_50);
    bVar1 = *unaff_RDI;
    if ((bVar1 & 1) == 0) {
      uVar6 = (ulonglong)(bVar1 >> 1);
    }
    else {
      uVar6 = *(ulonglong *)(unaff_RDI + 8);
    }
    if (uVar6 != 0) {
      param_1 = (byte *)CONCAT71((int7)((ulonglong)param_1 >> 8),*(byte *)(unaff_RSI + 0x16c));
      if ((bVar1 & 1) == 0) {
        pbVar3 = unaff_RDI + 1;
      }
      else {
        pbVar3 = *(byte **)(unaff_RDI + 0x10);
      }
      uVar5 = 0;
      do {
        if (pbVar3[uVar5] == *(byte *)(unaff_RSI + 0x16c)) break;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    std::string::erase((ulong)param_1,0xffffffff);
  }
  while( true ) {
    bVar1 = *unaff_RDI;
    if ((bVar1 & 1) == 0) {
      uVar6 = (ulonglong)(bVar1 >> 1);
    }
    else {
      uVar6 = *(ulonglong *)(unaff_RDI + 8);
    }
    if (uVar6 == 0) break;
    param_1 = unaff_RDI + 1;
    if ((bVar1 & 1) != 0) {
      param_1 = *(byte **)(unaff_RDI + 0x10);
    }
    if (param_1[uVar6 - 1] != 0) goto LAB_009df0a6;
    std::string::erase((ulong)param_1,0xffffffff);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(param_1);
  }
  unaff_RDI[0] = 2;
  unaff_RDI[1] = 0;
  unaff_RDI[2] = 0;
  *(ulonglong *)(unaff_RDI + 3) = CONCAT35(uStackY_4b,local_50);
  *(ulonglong *)(unaff_RDI + 8) =
       CONCAT17((undefined1)uStack_44,CONCAT43(in_stack_ffffffffffffffb8,uStackY_4b));
LAB_009df0a6:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


