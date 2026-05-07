// Function: FUN_00c6c330
// Address: 00c6c330
// Size: 502 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00c6c367) */

void FUN_00c6c330(uint param_1,short *param_2,uint param_3,byte param_4)

{
  int iVar1;
  short sVar2;
  short sVar3;
  ulonglong uVar4;
  short *psVar5;
  longlong unaff_RSI;
  ulonglong uVar6;
  longlong unaff_RDI;
  ulonglong uVar7;
  int local_res8;
  
  uVar7 = (ulonglong)param_1;
  if (local_res8 == 0) {
    if (0 < (int)param_3) {
      if ((ulonglong)param_3 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          psVar5 = param_2;
          *psVar5 = *(short *)(unaff_RDI + uVar4 * 4);
          psVar5[1] = *(short *)(unaff_RSI + uVar4 * 4);
          psVar5[uVar7] = *(short *)(unaff_RDI + 4 + uVar4 * 4);
          psVar5[uVar7 + 1] = *(short *)(unaff_RSI + 4 + uVar4 * 4);
          psVar5[uVar7 * 2] = *(short *)(unaff_RDI + 8 + uVar4 * 4);
          psVar5[uVar7 * 2 + 1] = *(short *)(unaff_RSI + 8 + uVar4 * 4);
          psVar5[uVar7 * 3] = *(short *)(unaff_RDI + 0xc + uVar4 * 4);
          psVar5[uVar7 * 3 + 1] = *(short *)(unaff_RSI + 0xc + uVar4 * 4);
          uVar4 = uVar4 + 4;
          param_2 = psVar5 + uVar7 * 4;
        } while ((param_3 & 0xfffffffc) != uVar4);
        param_2 = psVar5 + uVar7 * 4;
      }
      if ((ulonglong)(param_3 & 3) != 0) {
        param_2 = param_2 + 1;
        uVar6 = 0;
        do {
          param_2[-1] = *(short *)(unaff_RDI + uVar4 * 4 + uVar6 * 4);
          *param_2 = *(short *)(unaff_RSI + uVar4 * 4 + uVar6 * 4);
          uVar6 = uVar6 + 1;
          param_2 = param_2 + uVar7;
        } while ((param_3 & 3) != uVar6);
      }
    }
  }
  else if (0 < (int)param_3) {
    if (param_3 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        psVar5 = param_2;
        iVar1 = *(int *)(unaff_RSI + uVar4 * 4);
        sVar2 = (short)iVar1;
        sVar3 = ((short)*(undefined4 *)(unaff_RDI + uVar4 * 4) + sVar2) -
                (short)(iVar1 * local_res8 >> (param_4 & 0x1f));
        *psVar5 = sVar3;
        psVar5[1] = sVar3 - sVar2;
        iVar1 = *(int *)(unaff_RSI + 4 + uVar4 * 4);
        sVar2 = (short)iVar1;
        sVar3 = ((short)*(undefined4 *)(unaff_RDI + 4 + uVar4 * 4) + sVar2) -
                (short)(iVar1 * local_res8 >> (param_4 & 0x1f));
        psVar5[uVar7] = sVar3;
        psVar5[uVar7 + 1] = sVar3 - sVar2;
        uVar4 = uVar4 + 2;
        param_2 = psVar5 + uVar7 * 2;
      } while ((param_3 & 0xfffffffe) != uVar4);
      param_2 = psVar5 + uVar7 * 2;
      if ((param_3 & 1) == 0) {
        return;
      }
    }
    iVar1 = *(int *)(unaff_RSI + uVar4 * 4);
    sVar2 = (short)iVar1;
    sVar3 = ((short)*(undefined4 *)(unaff_RDI + uVar4 * 4) + sVar2) -
            (short)(local_res8 * iVar1 >> (param_4 & 0x1f));
    *param_2 = sVar3;
    param_2[1] = sVar3 - sVar2;
  }
  return;
}


