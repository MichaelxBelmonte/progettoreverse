// Function: FUN_00f2bfc0
// Address: 00f2bfc0
// Size: 750 bytes
// Class: Unknown


void FUN_00f2bfc0(undefined1 *param_1,ulonglong param_2,ulonglong *param_3,ulonglong param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong uVar5;
  undefined1 *unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong uVar6;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  ulonglong in_R10;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong uVar7;
  ulonglong unaff_R13;
  ulonglong uVar8;
  longlong unaff_R14;
  ulonglong unaff_R15;
  ulonglong *unaff_retaddr;
  ulonglong *local_res8;
  ulonglong *local_res10;
  undefined1 *local_res18;
  
  do {
    uVar6 = unaff_RBP << (unaff_R15 & 0x3f);
    *unaff_RSI = (char)(unaff_R15 >> 8);
    uVar1 = *(ushort *)(unaff_R14 + (uVar6 >> 0x35) * 2);
    param_2 = param_2 << (param_4 & 0x3f);
    *unaff_RBX = (char)(param_4 >> 8);
    uVar2 = *(ushort *)(unaff_R14 + (param_2 >> 0x35) * 2);
    uVar7 = unaff_R12 << (in_R10 & 0x3f);
    *param_1 = (char)(in_R10 >> 8);
    uVar3 = *(ushort *)(unaff_R14 + (uVar7 >> 0x35) * 2);
    uVar8 = unaff_R13 << (in_R11 & 0x3f);
    *unaff_RDI = (char)(in_R11 >> 8);
    uVar4 = *(ushort *)(unaff_R14 + (uVar8 >> 0x35) * 2);
    uVar6 = uVar6 << ((ulonglong)uVar1 & 0x3f);
    unaff_RSI[1] = (char)(uVar1 >> 8);
    uVar1 = *(ushort *)(unaff_R14 + (uVar6 >> 0x35) * 2);
    param_2 = param_2 << ((ulonglong)uVar2 & 0x3f);
    unaff_RBX[1] = (char)(uVar2 >> 8);
    uVar2 = *(ushort *)(unaff_R14 + (param_2 >> 0x35) * 2);
    uVar7 = uVar7 << ((ulonglong)uVar3 & 0x3f);
    param_1[1] = (char)(uVar3 >> 8);
    uVar3 = *(ushort *)(unaff_R14 + (uVar7 >> 0x35) * 2);
    uVar8 = uVar8 << ((ulonglong)uVar4 & 0x3f);
    unaff_RDI[1] = (char)(uVar4 >> 8);
    uVar4 = *(ushort *)(unaff_R14 + (uVar8 >> 0x35) * 2);
    uVar6 = uVar6 << ((ulonglong)uVar1 & 0x3f);
    unaff_RSI[2] = (char)(uVar1 >> 8);
    uVar1 = *(ushort *)(unaff_R14 + (uVar6 >> 0x35) * 2);
    param_2 = param_2 << ((ulonglong)uVar2 & 0x3f);
    unaff_RBX[2] = (char)(uVar2 >> 8);
    uVar2 = *(ushort *)(unaff_R14 + (param_2 >> 0x35) * 2);
    uVar7 = uVar7 << ((ulonglong)uVar3 & 0x3f);
    param_1[2] = (char)(uVar3 >> 8);
    uVar3 = *(ushort *)(unaff_R14 + (uVar7 >> 0x35) * 2);
    uVar8 = uVar8 << ((ulonglong)uVar4 & 0x3f);
    unaff_RDI[2] = (char)(uVar4 >> 8);
    uVar4 = *(ushort *)(unaff_R14 + (uVar8 >> 0x35) * 2);
    uVar6 = uVar6 << ((ulonglong)uVar1 & 0x3f);
    unaff_RSI[3] = (char)(uVar1 >> 8);
    uVar1 = *(ushort *)(unaff_R14 + (uVar6 >> 0x35) * 2);
    param_2 = param_2 << ((ulonglong)uVar2 & 0x3f);
    unaff_RBX[3] = (char)(uVar2 >> 8);
    uVar2 = *(ushort *)(unaff_R14 + (param_2 >> 0x35) * 2);
    uVar7 = uVar7 << ((ulonglong)uVar3 & 0x3f);
    param_1[3] = (char)(uVar3 >> 8);
    uVar3 = *(ushort *)(unaff_R14 + (uVar7 >> 0x35) * 2);
    uVar8 = uVar8 << ((ulonglong)uVar4 & 0x3f);
    unaff_RDI[3] = (char)(uVar4 >> 8);
    uVar4 = *(ushort *)(unaff_R14 + (uVar8 >> 0x35) * 2);
    uVar6 = uVar6 << ((ulonglong)uVar1 & 0x3f);
    unaff_RSI[4] = (char)(uVar1 >> 8);
    param_2 = param_2 << ((ulonglong)uVar2 & 0x3f);
    unaff_RBX[4] = (char)(uVar2 >> 8);
    uVar7 = uVar7 << ((ulonglong)uVar3 & 0x3f);
    param_1[4] = (char)(uVar3 >> 8);
    uVar8 = uVar8 << ((ulonglong)uVar4 & 0x3f);
    unaff_RDI[4] = (char)(uVar4 >> 8);
    uVar5 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    unaff_RSI = unaff_RSI + 5;
    param_3 = (ulonglong *)((longlong)param_3 - (uVar5 >> 3));
    unaff_RBP = (*param_3 | 1) << (uVar5 & 7);
    unaff_R15 = (ulonglong)*(ushort *)(unaff_R14 + (unaff_RBP >> 0x35) * 2);
    uVar5 = 0;
    if (param_2 != 0) {
      for (; (param_2 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    unaff_RBX = unaff_RBX + 5;
    unaff_retaddr = (ulonglong *)((longlong)unaff_retaddr - (uVar5 >> 3));
    param_2 = (*unaff_retaddr | 1) << (uVar5 & 7);
    param_4 = (ulonglong)*(ushort *)(unaff_R14 + (param_2 >> 0x35) * 2);
    uVar5 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    param_1 = param_1 + 5;
    local_res8 = (ulonglong *)((longlong)local_res8 - (uVar5 >> 3));
    unaff_R12 = (*local_res8 | 1) << (uVar5 & 7);
    in_R10 = (ulonglong)*(ushort *)(unaff_R14 + (unaff_R12 >> 0x35) * 2);
    uVar5 = 0;
    if (uVar8 != 0) {
      for (; (uVar8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    unaff_RDI = unaff_RDI + 5;
    local_res10 = (ulonglong *)((longlong)local_res10 - (uVar5 >> 3));
    unaff_R13 = (*local_res10 | 1) << (uVar5 & 7);
    in_R11 = (ulonglong)*(ushort *)(unaff_R14 + (unaff_R13 >> 0x35) * 2);
  } while (unaff_RDI < local_res18);
  FUN_00f2beda();
  return;
}


