// Function: FUN_010bcb30
// Address: 010bcb30
// Size: 643 bytes
// Class: Unknown


int FUN_010bcb30(dword *param_1,uint param_2,size_t param_3)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *unaff_RSI;
  int *unaff_RDI;
  int iVar6;
  undefined8 uStack_60;
  byte abStack_49 [17];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (*unaff_RDI == 1) {
    piVar2 = (int *)**(undefined8 **)(unaff_RDI + 2);
    iVar3 = *piVar2;
    iVar4 = -1;
    if ((iVar3 < 0) || ((int)param_2 < iVar3)) goto LAB_010bcd8f;
    if (0 < iVar3) {
      param_1 = &MACH_HEADER.ncmds;
      uStack_60 = (undefined *)0x10bccbe;
      ___memcpy_chk();
      if ((*(ulonglong *)(piVar2 + 4) & 7) != 0) {
        param_1 = (dword *)(longlong)*piVar2;
        *(byte *)((longlong)param_1 + (longlong)abStack_49) =
             *(byte *)((longlong)param_1 + (longlong)abStack_49) &
             ~(byte)(0xff >> (8U - (char)(*(ulonglong *)(piVar2 + 4) & 7) & 0x1f));
      }
    }
    uStack_60 = (undefined *)0x10bccf3;
    ___bzero();
    iVar6 = param_2 * 8;
    iVar3 = *unaff_RSI;
    if (iVar3 == 1) goto LAB_010bcd07;
LAB_010bcbfc:
    iVar5 = 0;
    if (iVar3 == 0) {
      piVar2 = *(int **)(unaff_RSI + 2);
      iVar3 = *piVar2;
      iVar4 = -1;
      if ((iVar3 < 0) || ((int)param_2 < iVar3)) goto LAB_010bcd8f;
      if (0 < iVar3) {
        uStack_60 = (undefined *)0x10bcc3b;
        ___memcpy_chk(0x10);
        if ((*(ulonglong *)(piVar2 + 4) & 7) != 0) {
          pbVar1 = (byte *)((longlong)&uStack_60 + (longlong)*piVar2 + 7);
          *pbVar1 = *pbVar1 & ~(byte)(0xff >> (8U - (char)(*(ulonglong *)(piVar2 + 4) & 7) & 0x1f));
        }
      }
      uStack_60 = (undefined *)0x10bcc70;
      ___bzero();
      iVar3 = **(int **)(unaff_RSI + 2);
      param_1 = (dword *)(ulonglong)(uint)(iVar3 * 8);
      iVar5 = ((*(int **)(unaff_RSI + 2))[4] & 7U) + iVar3 * -8;
    }
  }
  else {
    iVar6 = 0;
    if (*unaff_RDI == 0) {
      piVar2 = *(int **)(unaff_RDI + 2);
      iVar3 = *piVar2;
      iVar4 = -1;
      if ((iVar3 < 0) || ((int)param_2 < iVar3)) goto LAB_010bcd8f;
      if (0 < iVar3) {
        param_1 = &MACH_HEADER.ncmds;
        uStack_60 = (undefined *)0x10bcba5;
        ___memcpy_chk();
        if ((*(ulonglong *)(piVar2 + 4) & 7) != 0) {
          param_1 = (dword *)(longlong)*piVar2;
          *(byte *)((longlong)param_1 + (longlong)abStack_49) =
               *(byte *)((longlong)param_1 + (longlong)abStack_49) &
               ~(byte)(0xff >> (8U - (char)(*(ulonglong *)(piVar2 + 4) & 7) & 0x1f));
        }
      }
      uStack_60 = (undefined *)0x10bcbdc;
      ___bzero();
      iVar6 = **(int **)(unaff_RDI + 2) * 8 - ((*(int **)(unaff_RDI + 2))[4] & 7U);
    }
    iVar3 = *unaff_RSI;
    if (iVar3 != 1) goto LAB_010bcbfc;
LAB_010bcd07:
    piVar2 = (int *)**(undefined8 **)(unaff_RSI + 2);
    iVar3 = *piVar2;
    iVar4 = -1;
    if ((iVar3 < 0) || ((int)param_2 < iVar3)) goto LAB_010bcd8f;
    if (0 < iVar3) {
      param_1 = &MACH_HEADER.ncmds;
      uStack_60 = (undefined *)0x10bcd37;
      ___memcpy_chk();
      if ((*(ulonglong *)(piVar2 + 4) & 7) != 0) {
        param_1 = (dword *)(longlong)*piVar2;
        pbVar1 = (byte *)((longlong)param_1 + (longlong)&uStack_60 + 7);
        *pbVar1 = *pbVar1 & ~(byte)(0xff >> (8U - (char)(*(ulonglong *)(piVar2 + 4) & 7) & 0x1f));
      }
    }
    uStack_60 = (undefined *)0x10bcd6c;
    ___bzero();
    iVar5 = param_2 * -8;
  }
  uStack_60 = (undefined *)0x10bcd86;
  iVar4 = _memcmp(param_1,(void *)(ulonglong)param_2,param_3);
  if (iVar4 == 0) {
    iVar4 = iVar5 + iVar6;
  }
LAB_010bcd8f:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  uStack_60 = &UNK_010bcdb3;
  ___stack_chk_fail();
}


